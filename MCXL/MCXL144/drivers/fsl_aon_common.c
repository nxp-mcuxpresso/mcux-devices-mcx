/*
 * Copyright 2024 NXP
 *
 * All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_aon_common.h"
#include "fsl_mu.h"
#include "fsl_ipmq.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.aon_common"
#endif

/*!
 * @brief Structure for enable the ADVC.
 */
typedef struct _aon_advc_en_msg
{
    uint32_t enableOptions : 2U;
    uint32_t operationalMode : 2U;
    uint32_t reserved1 : 4U;
    uint32_t temperature : 8U;
    uint32_t mainCpuClockFrequency : 5U;
} aon_advc_en_msg_t;

/*!
 * @brief Structure for ADVC pre change frequency and voltage request.
 */
typedef struct _aon_advc_pre_change_frequency_voltage_request_msg
{
    main_cpu_frequency_t cpuNewFrequency;
    uint8_t reserved[3];
} aon_advc_pre_change_frequency_voltage_request_msg_t;

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
static volatile bool g_isAdvcEnabled;

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief  Gets the default configuration structure.
 *
 * @param[out] aonConfig Pointer to a configuration structure.
 */
void Aon_GetDefaultConfig(aon_config_t *aonConfig)
{
    assert(NULL != aonConfig);

    /* Initializes the configure structure to zero. */
    (void)memset(aonConfig, 0, sizeof(*aonConfig));

    aonConfig->ipmqReceiveByPolling     = false;
    aonConfig->ipmqEnableErrorInterrupt = true;
    /* Do not recover the message queue before initialization to save boot time during POR.
     * Please set the recoveryQueueBeforeInit to true while debugging the program. */
    aonConfig->ipmqRecoveryQueueBeforeInit = false;
    aonConfig->aonAdvcEnableOptions        = kAON_AdvcEnableOptions_Enable;
    aonConfig->aonAdvcOperationalMode      = kAON_AdvcOperationalMode_Enabled;
}

/*!
 * @brief Initializes the AON with the user configuration structure.
 *
 * @param[out] aonConfig configures the AON with user-defined settings.
 *
 * @retval kStatus_Timeout AON initialization timeout.
 * @retval kStatus_Fail   AON initialization fail.
 * @retval kStatus_Success AON initialization successfully.
 */
status_t Aon_Init(aon_config_t *aonConfig)
{
    assert(NULL != aonConfig);

#if AON_PING_RETRY_TIMES
    uint32_t waitTimes;
#endif
    uint8_t data = 0;
    ipmq_config_t config;
    aon_core_state_t aonState;
#if AON_PING_RETRY_TIMES
    waitTimes = AON_PING_RETRY_TIMES;
#endif
    status_t advcEnableStatus = kStatus_AonCommon_AdvcEnableFail;
    rtc_lock_status_t rtcLockStatus;

    do
    {
        aonState = Aon_GetAonState();
#if AON_PING_RETRY_TIMES
    } while (aonState != kAON_CoreState_Idle && (0U != --waitTimes));
#else
    } while (aonState != kAON_CoreState_Idle);
#endif

#if AON_PING_RETRY_TIMES
    if (0U == waitTimes)
    {
        return kStatus_Timeout;
    }
#endif

    config.receiveByPolling     = aonConfig->ipmqReceiveByPolling;
    config.enableErrorInterrupt = aonConfig->ipmqEnableErrorInterrupt;
    /* Do not recover the message queue before initialization to save boot time during POR.
     * Please set the recoveryQueueBeforeInit to true while debugging the program. */
    config.recoveryQueueBeforeInit = aonConfig->ipmqRecoveryQueueBeforeInit;
    config.coreClock_Hz            = CLOCK_GetFreq(kCLOCK_CoreSysClk);
    config.ptrCb                   = &g_ipmCabllbacks;

    IPMQ_Init(&config);

    if (!(kStatus_AonCommon_PingSuccess == Aon_Ping(data)))
    {
        return kStatus_Fail;
    }

    /* 3.3 is the voltage of VDD_BAT_MCU on the board */
    rtcLockStatus = CLOCK_XtalInit(3.3f);

    if (rtcLockStatus != kRTCLock_OK)
    {
        return kStatus_Fail;
    }

    /* ADVC read temperature from ringo, so pass the currentTemperature with 0 */
    advcEnableStatus = Aon_AdvcEnable(aonConfig->aonAdvcEnableOptions, aonConfig->aonAdvcOperationalMode, 0U,
                                      CLOCK_GetMainCpuFreqEnum(), 0U);

    if (advcEnableStatus == kStatus_AonCommon_AdvcEnableFail)
    {
        return kStatus_Fail;
    }

    return kStatus_Success;
}

/*!
 * @brief Send a ping message to the AON core.
 *
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 * application to match feedback to the message.
 *
 * @retval kStatus_AonCommon_PingSuccess Successfully ping to the AON domain.
 * @retval kStatus_AonCommon_PingFail   Fail ping to the AON domain.
 */
status_t Aon_Ping(uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    IPMQ_SendMessage(kIPMQ_MsgOpcode_Ping, userData, 0U, NULL);

    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_Ping, userData, NULL, NULL);

    if (ret != kIPMQ_Ret_ReceiveAck)
    {
        return kStatus_AonCommon_PingFail;
    }
    else
    {
        return kStatus_AonCommon_PingSuccess;
    }
}

/*!
 * @brief Load data into the AON core.
 *
 * @param dataId The ID of the data to load.
 * @param ptrDataBuffer Pointer to the buffer to store the loaded data.
 * @param dataSize The size of the data to load.
 * @param userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the application
 *                      to match feedback to the message.
 *
 * @retval kStatus_AonCommon_LoadDataSuccess Successfully load data to AON core.
 * @todo Return value in case of NACK response.
 */
status_t Aon_LoadData(uint16_t dataId, uint32_t *ptrDataBuffer, uint16_t dataSize, uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    uint32_t dataLoad = ((uint32_t)dataId & 0xFFFFUL) | (((uint32_t)dataSize << 16UL) & 0xFFFF0000UL);

    IPMQ_SendMessage2Payload(kIPMQ_MsgOpcode_DataLoad, userData, 1U, &dataLoad, dataSize, ptrDataBuffer);

    /* @todo */
    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_DataLoad, userData, NULL, 0U);

    if (ret != kIPMQ_Ret_ReceiveAck)
    {
        /* @todo */
        return kStatus_Fail;
    }
    else
    {
        return kStatus_AonCommon_LoadDataSuccess;
    }
}

/*!
 * @brief Enable/disable/permanently disable AON debug mode.
 *
 * @param[in] enableOption Used to specify the debug option, please refer to @ref aon_debug_option_t.
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application
 *                       to match feedback to the message.
 *
 * @retval kStatus_Success Successfully set debug option.
 * @todo Return value in case of NACK response.
 */
status_t Aon_EnableDebug(aon_debug_option_t enableOption, uint8_t userData)
{
    uint32_t enableOptU32 = enableOption;
    ipmq_ret_value_t ret  = kIPMQ_Ret_Error;

    IPMQ_SendMessage(kIPMQ_MsgOpcode_DebugEn, userData, 1U, (uint32_t *)&enableOptU32);

    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_DebugEn, userData, NULL, NULL);

    if (ret == kIPMQ_Ret_ReceiveAck)
    {
        return kStatus_AonCommon_DebugControlSuccess;
    }
    else
    {
        return kStatus_AonCommon_MsgHeaderMismatch;
    }
}

/*!
 * @brief Write value to an array of registers.
 *
 * @param[in] ptrRegInfoArray Pointer to the array of register information.
 * @param[in] size The size of the array.
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 * application to match feedback to the message.
 *
 * @retval kStatus_AonCommon_RegWriteSuccess Successfully write an array of registers.
 * @retval kStatus_AonCommon_AddressRange Fail due to input register's address out of range.
 * @retval KStatus_AonCommon_IllegalValue Fail due to input value is not allowed.
 * @retval kStatus_AonCommon_IllegalAddr Fail due to input register's address is illegal.
 * @retval kStatus_AonCommon_MsgHeaderMismatch Fail due to some unknown issues which cause HEADER mismatch.
 */
status_t Aon_RegArrayWrite(aon_reg_info_t *ptrRegInfoArray, uint8_t size, uint8_t userData)
{
    assert((size >= 1U) && (size < 128U));

    status_t status      = kStatus_Fail;
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    IPMQ_SendMessage(kIPMQ_MsgOpcode_RegisterWrite, userData, (2U * size), (uint32_t *)ptrRegInfoArray);

    /* Listen response. */
    uint32_t responsePayload;
    uint8_t responsePayloadSize;
    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_RegisterWrite, userData, &responsePayload, &responsePayloadSize);

    if ((ret == kIPMQ_Ret_ReceiveAck) && (responsePayloadSize == 0UL) && (responsePayload == IPMQ_USELESS_VALUE))
    {
        /* Write regiter successfully. */
        status = kStatus_AonCommon_RegWriteSuccess;
    }
    else if (ret == kIPMQ_Ret_ReceiveNACK)
    {
        switch ((aon_reg_access_nack_reason_t)responsePayload)
        {
            case kAON_AddresRange:
            {
                status = kStatus_AonCommon_AddressRange;
                break;
            }
            case kAON_IllegalValue:
            {
                status = KStatus_AonCommon_IllegalValue;
                break;
            }
            case kAON_IllegalAddress:
            {
                status = kStatus_AonCommon_IllegalAddr;
                break;
            }
            default:
            {
                assert(false);
                break;
            }
        }
    }
    else
    {
        status = kStatus_AonCommon_MsgHeaderMismatch;
    }

    return status;
}

/*!
 * @brief Write a value to a specific register in the AON domain.
 *
 * @param[in] regAddr The address of the register to write.
 * @param[in] value The value to write to the register.
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 * application to match feedback to the message.
 *
 * @retval kStatus_AonCommon_RegWriteSuccess Successfully write an array of registers.
 * @retval kStatus_AonCommon_AddressRange Fail due to input register's address out of range.
 * @retval KStatus_AonCommon_IllegalValue Fail due to input value is not allowed.
 * @retval kStatus_AonCommon_IllegalAddr Fail due to input register's address is illegal.
 * @retval kStatus_AonCommon_MsgHeaderMismatch Fail due to some unknown issues which cause HEADER mismatch.
 */
status_t Aon_RegWrite(uint32_t regAddr, uint32_t value, uint8_t userData)
{
    aon_reg_info_t tmpRegInfo = {
        .regAddr = regAddr,
        .regData = value,
    };

    return Aon_RegArrayWrite(&tmpRegInfo, 1U, userData);
}

/*!
 * @brief Read data from specificed register which in AON domain.
 *
 * @param[in] regAddr The address of regiter to read.
 * @param[out] ptrRegData Output the value of specified register.
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 * application to match feedback to the message.
 *
 * @retval kStatus_AonCommon_RegReadSuccess Successfully read value from register's address.
 * @retval kStatus_AonCommon_MsgHeaderMismatch Fail due to some unknown issues which cause HEADER mismatch.
 * @retval kStatus_AonCommon_AddressRange Fail due to input register's address out of range.
 * @retval KStatus_AonCommon_IllegalValue Fail due to input value is not allowed.
 * @retval kStatus_AonCommon_IllegalAddr Fail due to input register's address is illegal.
 */
status_t Aon_RegRead(uint32_t regAddr, uint32_t *ptrRegData, uint8_t userData)
{
    status_t status      = kStatus_Fail;
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;
    uint32_t tmp32       = regAddr;

    /* Set address of register to read */
    IPMQ_SendMessage(kIPMQ_MsgOpcode_RegisterRead, userData, 1U, &tmp32);

    uint32_t regValue;
    uint8_t messagePayloadSize;
    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_RegisterRead, userData, &regValue, &messagePayloadSize);

    if (messagePayloadSize != 1U)
    {
        status = kStatus_AonCommon_MsgHeaderMismatch;
    }
    else
    {
        if (ret == kIPMQ_Ret_ReceiveAck)
        {
            *ptrRegData = regValue;
            status      = kStatus_AonCommon_RegReadSuccess;
        }
        else if (ret == kIPMQ_Ret_ReceiveNACK)
        {
            *ptrRegData = IPMQ_USELESS_VALUE;
            switch ((aon_reg_access_nack_reason_t)regValue)
            {
                case kAON_AddresRange:
                {
                    status = kStatus_AonCommon_AddressRange;
                    break;
                }
                case kAON_IllegalValue:
                {
                    status = KStatus_AonCommon_IllegalValue;
                    break;
                }
                case kAON_IllegalAddress:
                {
                    status = kStatus_AonCommon_IllegalAddr;
                    break;
                }
                default:
                {
                    assert(false);
                    break;
                }
            }
        }
        else
        {
            status = kStatus_AonCommon_MsgHeaderMismatch;
        }
    }

    return status;
}

/*!
 * @brief Read-modify-write data to a specific register in the AON domain.
 *
 * @param[in] regAddr The address of the register to read, modify, and write.
 * @param[in] start The starting bit position to modify.
 * @param[in] mask The mask of bit fields to modify.
 * @param[in] value The value to write to the modified bit fields.
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 * application to match feedback to the message.
 *
 * @retval kStatus_AonCommon_RegReadModifyWriteSuccess Successfully to do RMW operation.
 * @retval kStatus_AonCommon_IllegalAddr Fail due to input register's address is illegal.
 */
status_t Aon_RegReadModifyWrite(uint32_t regAddr, uint32_t start, uint32_t mask, uint32_t value, uint8_t userData)
{
    uint32_t sendPayload[4] = {regAddr, start, mask, value};
    ipmq_ret_value_t ret    = kIPMQ_Ret_Error;

    IPMQ_SendMessage(kIPMQ_MsgOpcode_RegisterReadModifyWrite, userData, 4U, sendPayload);

    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_RegisterReadModifyWrite, userData, NULL, NULL);

    if (ret != kIPMQ_Ret_ReceiveAck)
    {
        return kStatus_AonCommon_IllegalAddr;
    }
    else
    {
        return kStatus_AonCommon_RegReadModifyWriteSuccess;
    }
}

/*!
 * @brief Blocks transfering execution state from Main to slave
 *
 * @param mainState The execution state to transfer, please refer to @ref aon_core_state_t.
 */
void Aon_TransferMainStateToAon(aon_core_state_t mainState)
{
    MU_SetFlags(MUA, (uint32_t)mainState);
}

/*!
 * @brief Get AON's execution state.
 *
 * @return The execution state return from AON, must be in type of @ref aon_core_state_t.
 */
aon_core_state_t Aon_GetAonState(void)
{
    return (aon_core_state_t)MU_GetFlags(MUA);
}

/*!
 * @brief Disable/Enable ADVC
 *
 * Once kAON_AdvcEnableOptions_DisablePermanently is sent, it is impossible
 * to enable ADVC until next reset
 *
 * @param[in] enableOptions ADVC disable options.
 * @param[in] advcOperationalMode which mode advc will be configured, please refer to @ref aon_advc_operational_mode_t
 * for details, ignored unless enableOptions is kAON_AdvcEnableOptions_Enable.
 * @param[in] currentTemperature current temperature in celsius degrees , don't care if advcOperationalMode is not
 *                        kAON_AdvcOperationalMode_Enabled.
 * @param[in] m33CpuClockFrequency current m33 cpu frequency, please refer to @ref main_cpu_frequency_t for details,
 *                        ignored unless advcOperationalMode is kAON_AdvcOperationalMode_Enabled or
 * kAON_AdvcOperationalMode_SafeOnly.
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 *                        application to match feedback to the message.
 *
 * @retval kStatus_AonCommon_AdvcEnableSuccess Successfully enable the ADVC.
 * @retval kStatus_AonCommon_AdvcEnableFail Fail to enable the ADVC.
 */
status_t Aon_AdvcEnable(aon_advc_enable_options_t enableOptions,
                        aon_advc_operational_mode_t advcOperationalMode,
                        int8_t currentTemperature,
                        main_cpu_frequency_t m33CpuClockFrequency,
                        uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    aon_advc_en_msg_t msg = {
        .enableOptions         = enableOptions,
        .operationalMode       = advcOperationalMode,
        .temperature           = currentTemperature,
        .mainCpuClockFrequency = m33CpuClockFrequency,
    };

    IPMQ_SendMessage(kIPMQ_MsgOpcode_AdvcEn, userData, 1U, (uint32_t *)&msg);

    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_AdvcEn, userData, NULL, NULL);

    if (ret != kIPMQ_Ret_ReceiveAck)
    {
        return kStatus_AonCommon_AdvcEnableFail;
    }
    else
    {
        if (enableOptions == kAON_AdvcEnableOptions_Enable)
        {
            g_isAdvcEnabled = true;
        }
        else
        {
            g_isAdvcEnabled = false;
        }

        return kStatus_AonCommon_AdvcEnableSuccess;
    }
}

/**
 * @brief move to safe voltage before changing frequency/enabling/disabling clocks.
 *
 * @param[in] cpuNewFrequency - the most updated main CPU frequency, please refer to @ref main_cpu_frequency_t for
 * options.
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 *                        application to match feedback to the message.
 *
 * @retval kStatus_AonCommonAdvcPreVoltageRequestSuccess Successfully to do pre voltage request.
 * @retval kStatus_AonCommon_AdvcPreVoltageRequestFail Fail to do pre voltage request.
 */
status_t Aon_AdvcPreVoltageRequest(main_cpu_frequency_t cpuNewFrequency, uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    aon_advc_pre_change_frequency_voltage_request_msg_t msg = {
        .cpuNewFrequency = cpuNewFrequency,
    };

    if (!g_isAdvcEnabled)
    {
        return kStatus_AonCommon_AdvcPreVoltageRequestFail;
    }

    IPMQ_SendMessage(kIPMQ_MsgOpcode_AdvcPreVoltageReqest, userData, 1U, (uint32_t *)&msg);

    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_AdvcPreVoltageReqest, userData, NULL, NULL);

    if (ret != kIPMQ_Ret_ReceiveAck)
    {
        return kStatus_AonCommon_AdvcPreVoltageRequestFail;
    }
    else
    {
        return kStatus_AonCommon_AdvcPreVoltageRequestSuccess;
    }
}

/**
 * @brief Initiatie request to set voltage to optimal after clock frequency was changed.
 * @note: Clock Enable/Disable is considers as equal to changing clock frequency
 *
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 *                        application to match feedback to the message.
 *
 * @retval kStatus_AonCommon_AdvcPostChangeFrequencyVoltageRequestSuccess Successfully to do post change frequency
 * voltage request.
 * @retval kStatus_AonCommon_AdvcPostChangeFrequencyVoltageRequestFail Fail to do post change frequency voltage request.
 */
status_t Aon_AdvcPostChangeFrequencyVoltageRequest(uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    if (!g_isAdvcEnabled)
    {
        return kStatus_AonCommon_AdvcPostChangeFrequencyVoltageRequestFail;
    }

    IPMQ_SendMessage(kIPMQ_MsgOpcode_AdvcPostChangeFrequencyVoltageRequest, userData, 0U, NULL);

    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_AdvcPostChangeFrequencyVoltageRequest, userData, NULL, NULL);

    if (ret != kIPMQ_Ret_ReceiveAck)
    {
        return kStatus_AonCommon_AdvcPostChangeFrequencyVoltageRequestFail;
    }
    else
    {
        return kStatus_AonCommon_AdvcPostChangeFrequencyVoltageRequestSuccess;
    }
}

/**
 * @brief Check if RTC is alive
 *
 * @param[out] alive return 1 if RTC is alive and 0 otherwise
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 *                        application to match feedback to the message.
 *
 * @retval kStatus_AonCommon_MsgHeaderMismatch Fail due to some unknown issues which cause HEADER mismatch.
 * @retval kStatus_AonCommon_CheckRtcAliveSuccess Successfully to check the RTC status.
 * @retval kStatus_AonCommon_CheckRtcAliveFail Fail to check the RTC status.
 */
status_t Aon_RtcIsAlive(uint32_t *alive, uint8_t userData)
{
    status_t status      = kStatus_Fail;
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    IPMQ_SendMessage(kIPMQ_MsgOpcode_RtcIsAlive, userData, 0U, NULL);

    uint8_t messagePayloadSize;
    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_RtcIsAlive, userData, alive, &messagePayloadSize);

    if (messagePayloadSize != 1U)
    {
        status = kStatus_AonCommon_MsgHeaderMismatch;
    }
    else
    {
        if (ret == kIPMQ_Ret_ReceiveAck)
        {
            status = kStatus_AonCommon_CheckRtcAliveSuccess;
        }
        else if (ret == kIPMQ_Ret_ReceiveNACK)
        {
            status = kStatus_AonCommon_CheckRtcAliveFail;
        }
    }

    return status;
}

/**
 * @brief Signals the AON CPU that RTC was locked and it can initialize its digital part and calibrate its CPU clock
 *
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 *                        application to match feedback to the message.
 *
 * @retval kStatus_AonCommon_RtcAnalogDoneFail Fail to signals the AON CPU that RTC was locked.
 * @retval kStatus_AonCommon_RtcAnalogDoneSuccess Successfully to signals the AON CPU that RTC was locked.
 */
status_t Aon_RtcAnalogDone(uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    IPMQ_SendMessage(kIPMQ_MsgOpcode_RtcAnalogDone, userData, 0U, NULL);

    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_RtcAnalogDone, userData, NULL, NULL);

    if (ret != kIPMQ_Ret_ReceiveAck)
    {
        return kStatus_AonCommon_RtcAnalogDoneFail;
    }
    else
    {
        return kStatus_AonCommon_RtcAnalogDoneSuccess;
    }
}
