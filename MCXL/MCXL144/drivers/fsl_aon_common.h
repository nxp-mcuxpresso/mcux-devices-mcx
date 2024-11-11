/*
 * Copyright 2024 NXP
 *
 * All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef _FSL_AON_COMMON_H
#define _FSL_AON_COMMON_H

#include "fsl_common.h"

/*!
 * @addtogroup aon_common
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/*! @name Driver version */
/*@{*/
/*! @brief AON_COMMON driver version 2.0.0 */
#define FSL_AON_COMMON_DRIVER_VERSION (MAKE_VERSION(2, 0, 0))
/*@}*/

/*!
 * @brief Definitions for the return status of functions in the AON module.
 */
enum
{
    kStatus_AonCommon_RegWriteSuccess = MAKE_STATUS(kStatusGroup_AON_COMMON, 0U), /*!< Register write success. */
    kStatus_AonCommon_RegReadSuccess  = MAKE_STATUS(kStatusGroup_AON_COMMON, 1U), /*!< Register read success. */
    kStatus_AonCommon_RegReadModifyWriteSuccess = MAKE_STATUS(kStatusGroup_AON_COMMON, 2U), /*!< Register
                                                                                    read-modify-write success. */

    kStatus_AonCommon_AddressRange = MAKE_STATUS(kStatusGroup_AON_COMMON, 3U),              /*!< Address range error. */
    KStatus_AonCommon_IllegalValue = MAKE_STATUS(kStatusGroup_AON_COMMON, 4U),              /*!< Illegal value error. */
    kStatus_AonCommon_IllegalAddr  = MAKE_STATUS(kStatusGroup_AON_COMMON, 5U), /*!< Illegal address error. */

    kStatus_AonCommon_MsgHeaderMismatch =
        MAKE_STATUS(kStatusGroup_AON_COMMON, 6U), /*!< Message header mismatch error. */
    kStatus_AonCommon_MemoryAlreadyLocked =
        MAKE_STATUS(kStatusGroup_AON_COMMON, 7U), /*!< Memory already locked error. */
    kStatus_AonCommon_MemoryLockSuccess = MAKE_STATUS(kStatusGroup_AON_COMMON, 8U),    /*!< Memory lock success. */

    kStatus_AonCommon_PingFail    = MAKE_STATUS(kStatusGroup_AON_COMMON, 9U),          /*!< Ping fail error. */
    kStatus_AonCommon_PingSuccess = MAKE_STATUS(kStatusGroup_AON_COMMON, 10U),         /*!< Ping success. */

    kStatus_AonCommon_LoadDataSuccess     = MAKE_STATUS(kStatusGroup_AON_COMMON, 11U), /*!< Load data success. */
    kStatus_AonCommon_DebugControlSuccess = MAKE_STATUS(kStatusGroup_AON_COMMON, 12U), /*!< Debug control success. */

    kStatus_AonCommon_AdvcEnableFail    = MAKE_STATUS(kStatusGroup_AON_COMMON, 13U),   /*!< ADVC enable fail error. */
    kStatus_AonCommon_AdvcEnableSuccess = MAKE_STATUS(kStatusGroup_AON_COMMON, 14U),   /*!< ADVC enable success. */

    kStatus_AonCommon_AdvcPreVoltageRequestFail =
        MAKE_STATUS(kStatusGroup_AON_COMMON, 15U), /*!< ADVC pre voltage request fail. */
    kStatus_AonCommon_AdvcPreVoltageRequestSuccess =
        MAKE_STATUS(kStatusGroup_AON_COMMON, 16U), /*!< ADVC pre voltage request success. */

    kStatus_AonCommon_AdvcPostChangeFrequencyVoltageRequestFail =
        MAKE_STATUS(kStatusGroup_AON_COMMON, 17U), /*!< ADVC post change frequency voltage request fail. */
    kStatus_AonCommon_AdvcPostChangeFrequencyVoltageRequestSuccess =
        MAKE_STATUS(kStatusGroup_AON_COMMON, 18U), /*!< ADVC post change frequency voltage request success. */

    kStatus_AonCommon_CheckRtcAliveFail =
        MAKE_STATUS(kStatusGroup_AON_COMMON, 19U), /*!< Check RTC alive status fail. */
    kStatus_AonCommon_CheckRtcAliveSuccess =
        MAKE_STATUS(kStatusGroup_AON_COMMON, 20U), /*!< Check RTC alive status success. */

    kStatus_AonCommon_RtcAnalogDoneFail =
        MAKE_STATUS(kStatusGroup_AON_COMMON, 21U), /*!< Signals the AON CPU that RTC was locked success. */
    kStatus_AonCommon_RtcAnalogDoneSuccess =
        MAKE_STATUS(kStatusGroup_AON_COMMON, 22U), /*!< Signals the AON CPU that RTC was locked fail. */
};

/*!
 * @brief Structure for storing register information.
 */
typedef struct _aon_reg_info
{
    uint32_t regAddr; /*!< The address of the register to write. */
    uint32_t regData; /*!< The data of the register to write. */
} aon_reg_info_t;

/*!
 * @brief Enumeration for the execution state of the AON core.
 */
typedef enum _aon_core_state
{
    kAON_CoreState_Idle = 0U, /*!< Idle state. */
    kAON_CoreState_Booting,   /*!< Booting state. */
    kAON_CoreState_Busy,      /*!< Busy state. */
    kAON_CoreState_DS2,       /*!< DS2 state. */
    kAON_CoreState_Reserved1, /*!< Reserved state 1. */
    kAON_CoreState_Reserved2, /*!< Reserved state 2. */
    kAON_CoreState_Reserved3, /*!< Reserved state 3. */
} aon_core_state_t;

/*!
 * @brief Enumeration for the reasons of NACK (Negative Acknowledgment) in register access.
 */
typedef enum _aon_reg_access_nack_reason
{
    kAON_AddresRange    = 1U, /*!< Address range error. */
    kAON_IllegalValue   = 2U, /*!< Illegal value error. */
    kAON_IllegalAddress = 3U, /*!< Illegal address error. */
} aon_reg_access_nack_reason_t;

/*!
 * @brief Structure for storing log dump message information.
 */
typedef struct _aon_log_dump_msg
{
    uint16_t head;     /*!< The head of the log dump message. */
    uint16_t fullness; /*!< The fullness of the log dump message. */
} aon_log_dump_msg_t;

/*!
 * @brief Enumeration for the AON debug options.
 */
typedef enum _aon_debug_option
{
    kAON_DebugDisable = 0U,       /*!< Disables the AON debug mode (can be enabled). */
    kAON_DebugDisablePermanently, /*!< Permanently disables the AON debug mode (until the next reset). */
    kAON_DebugEnable,             /*!< Enables the AON debug mode. */
} aon_debug_option_t;

/**
 * @brief ADVC enable options
 */
typedef enum _aon_advc_enable_options
{
    kAON_AdvcEnableOptions_Disable,            /**< ADVC disable (Can be enabled) */
    kAON_AdvcEnableOptions_DisablePermanently, /**< ADVC permanently disabled (until next reset) */
    kAON_AdvcEnableOptions_Enable              /**< ADVC enable */
} aon_advc_enable_options_t;

/**
 * @brief ADVC operational mode options
 */
typedef enum _aon_advc_operational_mode
{
    kAON_AdvcOperationalMode_Disabled,
    kAON_AdvcOperationalMode_Enabled,
    kAON_AdvcOperationalMode_SafeOnly,
} aon_advc_operational_mode_t;

/**
 * @brief AON initialization information
 */
typedef struct _aon_config
{
    bool ipmqReceiveByPolling;        /*!< Whether to receive messages through polling,
                                           if set as \b false the #kIPMQ_MsgGpi_NewMsg will be enabled,
                                           if set as \b true the code will polling the MU general purpose status. */
    bool ipmqEnableErrorInterrupt;    /*!< Whether to enable/disable error interrupts, if enabled please note as
                                        set error callback function in #ptrCb. */
    bool ipmqRecoveryQueueBeforeInit; /*!< Whether to recover the message queue before initialization.
                                      This option is used when an executable file is loaded directly into RAM,
                                      in which case the RAM executable resets local pointers while the AON ROM
                                      remains unaware. Set this to \b true to enable recovery. */
    aon_advc_enable_options_t aonAdvcEnableOptions;     /*!< ADVC disable options. */
    aon_advc_operational_mode_t aonAdvcOperationalMode; /*!< which mode advc will be configured, please refer to @ref
                                                         aon_advc_operational_mode_t for details, ignored unless
                                                         enableOptions is kAON_AdvcEnableOptions_Enable. */
} aon_config_t;

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * API
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @name AON Miscellaneous Interfaces
 * @{
 */

/*!
 * @brief Initializes the AON with the user configuration structure.
 *
 * @param[out] aonConfig configures the AON with user-defined settings.
 *
 * @retval kStatus_Timeout AON initialization timeout.
 * @retval kStatus_Fail   AON initialization fail.
 * @retval kStatus_Success AON initialization successfully.
 */
status_t Aon_Init(aon_config_t *aonConfig);

/*!
 * @brief  Gets the default configuration structure.
 *
 * @param[out] aonConfig Pointer to a configuration structure.
 */
void Aon_GetDefaultConfig(aon_config_t *aonConfig);

/*!
 * @brief Send a ping message to the AON core.
 *
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 * application to match feedback to the message.
 *
 * @retval kStatus_AonCommon_PingSuccess Successfully ping to the AON domain.
 * @retval kStatus_AonCommon_PingFail   Fail ping to the AON domain.
 */
status_t Aon_Ping(uint8_t userData);

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
status_t Aon_LoadData(uint16_t dataId, uint32_t *ptrDataBuffer, uint16_t dataSize, uint8_t userData);

/*! @} */

/*!
 * @name AON Debug Option Control Interfaces
 * @{
 */

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
status_t Aon_EnableDebug(aon_debug_option_t enableOption, uint8_t userData);

/*! @} */

/*!
 * @name AON Register Access Interfaces
 * @{
 */

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
status_t Aon_RegArrayWrite(aon_reg_info_t *ptrRegInfoArray, uint8_t size, uint8_t userData);

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
status_t Aon_RegWrite(uint32_t regAddr, uint32_t value, uint8_t userData);

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
status_t Aon_RegRead(uint32_t regAddr, uint32_t *ptrRegData, uint8_t userData);

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
status_t Aon_RegReadModifyWrite(uint32_t regAddr, uint32_t start, uint32_t mask, uint32_t value, uint8_t userData);

/*!
 * @brief Set masked bits to input register.
 *
 * @param regAddr The address of register.
 * @param mask Mask of bit fields to set.
 * @param userData User data send with the message, return with the ACK/NACK feedback, can be used by application
 *                       to match feedback to the message.
 *
 * @retval kStatus_AonCommon_RegReadModifyWriteSuccess Successfully set masked bit fields.
 * @retval kStatus_AonCommon_IllegalAddr Fail due to input register's address is illegal.
 */
static inline status_t Aon_RegSetBits(uint32_t regAddr, uint32_t mask, uint8_t userData)
{
    return Aon_RegReadModifyWrite(regAddr, 0UL, mask, mask, userData);
}

/*!
 * @brief clear masked bits to input register.
 *
 * @param regAddr The address of register.
 * @param mask Mask of bit fields to clear.
 * @param userData User data send with the message, return with the ACK/NACK feedback, can be used by application
 *                       to match feedback to the message.
 *
 * @retval kStatus_AonCommon_RegReadModifyWriteSuccess Successfully clear masked bit fields.
 * @retval kStatus_AonCommon_IllegalAddr Fail due to input register's address is illegal.
 */
static inline status_t Aon_RegClearBits(uint32_t regAddr, uint32_t mask, uint8_t userData)
{
    return Aon_RegReadModifyWrite(regAddr, 0UL, mask, (uint32_t)(~mask), userData);
}

/*! @} */

/*!
 * @name System Execution State Interfaces
 * @{
 */

/*!
 * @brief Blocks transfering execution state from Main to slave
 *
 * @param mainState The execution state to transfer, please refer to @ref aon_core_state_t.
 */
void Aon_TransferMainStateToAon(aon_core_state_t mainState);

/*!
 * @brief Get AON's execution state.
 *
 * @return The execution state return from AON, must be in type of @ref aon_core_state_t.
 */
aon_core_state_t Aon_GetAonState(void);

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
                        uint8_t userData);

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
status_t Aon_AdvcPreVoltageRequest(main_cpu_frequency_t cpuNewFrequency, uint8_t userData);

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
status_t Aon_AdvcPostChangeFrequencyVoltageRequest(uint8_t userData);

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
status_t Aon_RtcIsAlive(uint32_t *alive, uint8_t userData);

/**
 * @brief Signals the AON CPU that RTC was locked and it can initialize its digital part and calibrate its CPU clock
 *
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 *                        application to match feedback to the message.
 *
 * @retval kStatus_AonCommon_RtcAnalogDoneFail Fail to signals the AON CPU that RTC was locked.
 * @retval kStatus_AonCommon_RtcAnalogDoneSuccess Successfully to signals the AON CPU that RTC was locked.
 */
status_t Aon_RtcAnalogDone(uint8_t userData);

/*! @} */

#if defined(__cplusplus)
}
#endif

/*! @} */

#endif /* _FSL_AON_COMMON_H */
