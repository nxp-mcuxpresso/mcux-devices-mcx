/*
 * Copyright 2024 NXP
 *
 * All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "fsl_power.h"
#include "fsl_cmc.h"
#include "fsl_wuu.h"
#include "fsl_mu.h"
#include "fsl_ipmq.h"
#include "fsl_aon_common.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.power"
#endif

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

typedef struct _power_deep_power_down_info
{
    uint32_t wakeupSourceMask : 16U;
    uint32_t ramBlocksMask : 16U;
    uint8_t powerMode : 2U;
    uint8_t offVdd : 1U;
    uint8_t policy : 1U;
    uint8_t clockSource : 2U;
    uint8_t reserved : 2U;
    int8_t logicPatch;
    uint8_t vddConfig;
    uint8_t reserved2;
} power_deep_power_down_info_t;

volatile power_wakeup_source_info_t g_powerWakeupSourceInfo = {
    .aonWakeupSourceMask    = 0UL,
    .wuuPinIntEnable[0]     = 0UL,
    .wuuPinIntEnable[1]     = 0UL,
    .wuuModuleIntEnable     = 0UL,
    .wuuModuleDmaTrigEnable = 0UL,
    .wuuPinDmaTrigConfig[0] = 0UL,
    .wuuPinDmaTrigConfig[1] = 0UL,
};

static status_t Power_MailToAonEnterDPD(power_deep_power_down_info_t *ptrInfo, uint8_t userData);
static void Power_RecordWUURegisterValue(void);

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/

static status_t Power_MailToAonEnterDPD(power_deep_power_down_info_t *ptrInfo, uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    /* Send message to AON. */
    IPMQ_SendMessage(kIPMQ_MsgOpcode_DeepPowerDown, userData, 2U, (uint32_t *)ptrInfo);

    /* Listening responce from AON. */
    uint8_t payloadSize;
    uint32_t payloadValue;

    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_DeepPowerDown, userData, &payloadValue, &payloadSize);

    if (ret != kIPMQ_Ret_ReceiveAck)
    {
        if ((ret == kIPMQ_Ret_ReceiveNACK) && (payloadSize == 1U) && (payloadValue == 1UL))
        {
            return kStatus_Power_WrongWakeupSource;
        }
        else
        {
            return kStatus_Power_InvalidResponse;
        }
    }

    /* Invoke CMC API to set Main domain as Deep power down mode and then
       execute WFI instruction. */
    CMC_SetPowerModeProtection(CMC, kCMC_AllowAllLowPowerModes);
    CMC_SetClockMode(CMC, kCMC_GateAllSystemClocksEnterLowPowerMode);
    CMC_SetGlobalPowerMode(CMC, kCMC_DeepPowerDown);

    SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;
    __DSB();
    __WFI();
    __ISB();

    return kStatus_Success;
}

static void Power_RecordWUURegisterValue(void)
{
    g_powerWakeupSourceInfo.wuuPinIntEnable[0]     = WUU0->PE1;
    g_powerWakeupSourceInfo.wuuPinIntEnable[1]     = WUU0->PE2;
    g_powerWakeupSourceInfo.wuuModuleIntEnable     = WUU0->ME;
    g_powerWakeupSourceInfo.wuuModuleDmaTrigEnable = WUU0->DE;
    g_powerWakeupSourceInfo.wuuPinDmaTrigConfig[0] = WUU0->PDC1;
    g_powerWakeupSourceInfo.wuuPinDmaTrigConfig[1] = WUU0->PDC2;
}

/*!
 * @brief Enable input wakeup source, once enabled it will be effective until disabled
 *
 * @param[in] ws Specify the coded wakeup source, please refer to @ref power_wakeup_source_t for details.
 */
void Power_EnableWakeupSource(power_wakeup_source_t ws)
{
    uint32_t aonIndex;
    uint32_t wuuIndex;
    uint32_t wuuEvent;
    uint32_t pinEdge;
    bool isWuuExtPin;
    bool isCm33Ws;
    wuu_external_wakeup_pin_config_t tmpPinConfig;

    POWER_DECODE_WS((uint32_t)ws);

    if (isCm33Ws == true)
    {
        if (isWuuExtPin == true)
        {
            tmpPinConfig.edge  = (wuu_external_pin_edge_detection_t)pinEdge;
            tmpPinConfig.event = (wuu_external_wakeup_pin_event_t)wuuEvent;
            tmpPinConfig.mode  = kWUU_ExternalPinActiveAlways;
            WUU_SetExternalWakeUpPinsConfig(WUU0, wuuIndex, &tmpPinConfig);
        }
        else
        {
            WUU_SetInternalWakeUpModulesConfig(WUU0, wuuIndex, (wuu_internal_wakeup_module_event_t)wuuEvent);
        }
    }
    else
    {
        g_powerWakeupSourceInfo.aonWakeupSourceMask |= 1UL << aonIndex;

        if (aonIndex == 5U)
        {
            /* In case of external interrupt. */

            if (pinEdge == 0UL)
            {
                (void)Aon_RegClearBits((uint32_t)(&(AON_SMM->CNFG)), SMM_CNFG_EXT_INTP_POL_MASK, 0U);
            }
            else
            {
                (void)Aon_RegSetBits((uint32_t)(&(AON_SMM->CNFG)), SMM_CNFG_EXT_INTP_POL_MASK, 0U);
            }
        }
        IPMQ_EnableMsgGeneralPurposeInterrupts(kMU_GeneralPurposeInterrupt14);
    }

    Power_RecordWUURegisterValue();

    if ((g_powerWakeupSourceInfo.wuuPinIntEnable[0] != 0UL) || (g_powerWakeupSourceInfo.wuuPinIntEnable[1] != 0UL))
    {
        EnableIRQ(WUU0_IRQn);
    }
}

/*!
 * @brief Disable input wakeup source.
 *
 * @param[in] ws Specify the coded wakeup source, please refer to @ref power_wakeup_source_t for details.
 */
void Power_DisableWakeupSource(power_wakeup_source_t ws)
{
    uint32_t aonIndex;
    uint32_t wuuIndex;
    uint32_t wuuEvent;
    uint32_t pinEdge;
    bool isWuuExtPin;
    bool isCm33Ws;

    POWER_DECODE_WS((uint32_t)ws);

    (void)pinEdge;
    if (isCm33Ws == true)
    {
        if (isWuuExtPin == true)
        {
            WUU_ClearExternalWakeupPinsConfig(WUU0, wuuIndex);
        }
        else
        {
            WUU_ClearInternalWakeUpModulesConfig(WUU0, wuuIndex, (wuu_internal_wakeup_module_event_t)wuuEvent);
        }
    }
    else
    {
        g_powerWakeupSourceInfo.aonWakeupSourceMask &= ~(1UL << aonIndex);
    }

    Power_RecordWUURegisterValue();

    if ((g_powerWakeupSourceInfo.wuuPinIntEnable[0] == 0UL) && (g_powerWakeupSourceInfo.wuuPinIntEnable[1] == 0UL))
    {
        DisableIRQ(WUU0_IRQn);
    }
}

/*!
 * @brief Dump information of all configured wakeup sources, in type of @ref power_wakeup_source_info_t.
 *
 * @param[out] ptrWsInfo Pointer to the variable to store dumped wakeup source information.
 */
void Power_DumpEnabledWakeSource(power_wakeup_source_info_t *ptrWsInfo)
{
    assert(ptrWsInfo);

    (void)memcpy((void *)ptrWsInfo, (void *)(&g_powerWakeupSourceInfo), sizeof(g_powerWakeupSourceInfo));
}

/*!
 * @brief Get latest mask of wakeup sources which cause AON domain exit DPD modes.
 *
 * @param[out] ptrWakeupSourceMask Pointer to the variable to store mask of wakeup sources.
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 *
 * @retval kStatus_Success Succeed to get last boot information.
 * @retval kStatus_Power_InvalidResponse Invalid response from AON.
 */
status_t Power_GetWakeupSource(uint32_t *ptrWakeupSourceMask, uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    IPMQ_SendMessage(kIPMQ_MsgOpcode_WakeupSource, userData, 0U, NULL);

    uint8_t responsePayloadSize;
    uint32_t responsePayload;
    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_WakeupSource, userData, &responsePayload, &responsePayloadSize);

    if (ret != kIPMQ_Ret_ReceiveAck)
    {
        *ptrWakeupSourceMask = IPMQ_USELESS_VALUE;
        if (ret == kIPMQ_Ret_ReceiveNACK)
        {
            /* @todo Analysis nack reason, depends on AON specificion. */
            return 1;
        }
        else
        {
            return kStatus_Power_InvalidResponse;
        }
    }
    else
    {
        *ptrWakeupSourceMask = responsePayload;
        return kStatus_Success;
    }
}

/*!
 * @brief Set CM33 into sleep mode.
 */
void Power_EnterSleep(void)
{
    SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;
    __DSB();
    __WFI();
    __ISB();
}

/*!
 * @brief Set the whole device into deep sleep mode.
 *
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 */
status_t Power_EnterDeepSleep(uint8_t userData)
{
    /* Invoke CMC API to set Main domain as Deep power down mode and then
       execute WFI instruction. */
    CMC_SetPowerModeProtection(CMC, kCMC_AllowDeepSleepMode);
    CMC_SetClockMode(CMC, kCMC_GateAllSystemClocksEnterLowPowerMode);
    CMC_SetGlobalPowerMode(CMC, kCMC_DeepSleepMode);

    SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;
    __DSB();
    __WFI();
    __ISB();
    return kStatus_Success;
}

/*!
 * @brief Set the whole device into deep power down 1 mode.
 *
 * @note In deep power down 1 mode, the main CPU(Cortex-M33) core complete sub cluster is power off including VDD DC2DC
 * are powered off, and the main CPU core SRAM can be either maintained at retention or also power down.
 *
 * @note All Main domain FROs are power down.
 *
 * @note The AON ADVC domain and the AON CPU core(Cortex-M0+) are still alive at this mode.
 *
 * @param[in] ramBlocksToRetain Should be the OR'ed value of @ref power_sram_array_t.
 * @param[in] advcClockSource The clock source of AON_CLK in deep power down 1 mode,
 *                      please refer to @ref power_aon_clock_source_t.
 * @param[in] wakeupPolicy Specify the wakeup policy, please refer to @ref power_wakeup_policy_t.
 * @param[in] logicPatch The logic patch to use, please note that it is in signed type.
 * @param[in] offVdd Keep/shutdown VDD power supply, true in case of keep VDD power supply.
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 *
 * @retval kStatus_Power_WrongWakeupSource Fail to enter DPD1, due to the enabled wakeup source is not allowed..
 * @retval kStatus_Power_InvalidResponse Fail to enter DPD1, due to an invalid response is detected.
 * @retval kStatus_Success Success to enter and wakeup from DPD1. @todo Warm boot is not supported.
 */
status_t Power_EnterDeepPowerDown1(uint16_t ramBlocksToRetain,
                                   power_aon_clock_source_t advcClockSource,
                                   power_wakeup_policy_t wakeupPolicy,
                                   int8_t logicPatch,
                                   bool offVdd,
                                   uint8_t userData)
{
    /* Enable any wakeup source is enabled before enter into deep power down1 mode. */
    assert(g_powerWakeupSourceInfo.aonWakeupSourceMask != 0UL);

    power_deep_power_down_info_t deepPowerDown1Info;

    deepPowerDown1Info.wakeupSourceMask = (uint16_t)(g_powerWakeupSourceInfo.aonWakeupSourceMask);
    deepPowerDown1Info.ramBlocksMask    = ramBlocksToRetain;
    deepPowerDown1Info.powerMode        = (uint8_t)kPower_DeepPowerDown1;
    deepPowerDown1Info.offVdd           = offVdd;
    deepPowerDown1Info.policy           = wakeupPolicy;
    deepPowerDown1Info.clockSource      = advcClockSource;
    deepPowerDown1Info.logicPatch       = logicPatch;
    deepPowerDown1Info.vddConfig        = 0U;

    return Power_MailToAonEnterDPD(&deepPowerDown1Info, userData);
}

/*!
 * @brief Set the whole device into deep power down 2 mode.
 *
 * @note In deep power down 2 mode, all the main CPU domain including a VDD DC2DC are powered off(it is possible to
 * keep the VDD DC2DC on to have fast wakeup).
 *
 * @note All Main domain FROs are power down.
 *
 * @note The AON CPU subsystem is power off and the AON ADVC block is active.
 * @note VDD_CORE_1P0 is active in this mode.
 *
 * @param[in] ramBlocksToRetain Should be the OR'ed value of @ref power_sram_array_t.
 * @param[in] advcClockSource The clock source of AON_CLK in deep power down 1 mode,
 *                      please refer to @ref power_aon_clock_source_t.
 * @param[in] wakeupPolicy Specify the wakeup policy, please refer to @ref power_wakeup_policy_t.
 * @param[in] logicPatch The logic patch to use, please note that it is in signed type.
 * @param[in] offVdd Keep/shutdown VDD power supply, true in case of keep VDD power supply.
 * @param[in] vddConfig Specify the output voltage of VDD at DPD2 mode, LSB = 9.5mV.
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 *
 * @retval kStatus_Power_WrongWakeupSource Fail to enter DPD2, due to the enabled wakeup source is not allowed..
 * @retval kStatus_Power_InvalidResponse Fail to enter DPD2, due to an invalid response is detected.
 * @retval kStatus_Success Success to enter and wakeup from DPD2. @todo Warm boot is not supported.
 */
status_t Power_EnterDeepPowerDown2(uint16_t ramBlocksToRetain,
                                   power_aon_clock_source_t advcClockSource,
                                   power_wakeup_policy_t wakeupPolicy,
                                   int8_t logicPatch,
                                   bool offVdd,
                                   uint8_t vddConfig,
                                   uint8_t userData)
{
    /* Enable any of wakeup source for DPD2 is enabled. */
    assert((g_powerWakeupSourceInfo.aonWakeupSourceMask & POWER_DPD2_WS_BIT_MASK) != 0UL);

    power_deep_power_down_info_t deepPowerDown2Info;

    deepPowerDown2Info.powerMode        = kPower_DeepPowerDown2;
    deepPowerDown2Info.wakeupSourceMask = g_powerWakeupSourceInfo.aonWakeupSourceMask;
    deepPowerDown2Info.ramBlocksMask    = ramBlocksToRetain;
    deepPowerDown2Info.offVdd           = offVdd;
    deepPowerDown2Info.policy           = (uint8_t)wakeupPolicy;
    deepPowerDown2Info.clockSource      = (uint8_t)advcClockSource;
    deepPowerDown2Info.logicPatch       = (int8_t)logicPatch;
    deepPowerDown2Info.vddConfig        = vddConfig;

    return Power_MailToAonEnterDPD(&deepPowerDown2Info, userData);
}

/*!
 * @brief Set the whole device into deep power down 3 mode.
 *
 * @note Both the AON and main CPU domain are power off.
 * @note Only RTC and PMU analog control blocks are active.
 *
 * @param[in] logicPatch The logic patch to use, please note that it is in signed type.
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.

 * @retval kStatus_Power_WrongWakeupSource Fail to enter DPD2, due to the enabled wakeup source is not allowed.
 * @retval kStatus_Power_InvalidResponse Fail to enter DPD2, due to an invalid response is detected.
 * @retval kStatus_Success Success to enter and wakeup from DPD2. @todo Warm boot is not supported.
 */
status_t Power_EnterDeepPowerDown3(int8_t logicPatch, uint8_t userData)
{
    /* Enable any of wakeup source for DPD3 is enabled. */
    assert((g_powerWakeupSourceInfo.aonWakeupSourceMask & POWER_DPD3_WS_BIT_MASK) != 0UL);

    power_deep_power_down_info_t deepPowerDown3Info;

    deepPowerDown3Info.powerMode        = kPower_DeepPowerDown3;
    deepPowerDown3Info.wakeupSourceMask = g_powerWakeupSourceInfo.aonWakeupSourceMask;
    deepPowerDown3Info.ramBlocksMask    = 0U;   /* None of RAM blocks retainted in DPD3. */
    deepPowerDown3Info.offVdd           = true; /* VDD power supply auto shutdown in DPD3. */
    deepPowerDown3Info.policy           = 0U;   /* Useless in DPD3. */
    deepPowerDown3Info.clockSource      = 0U;   /* Useless in DPD3. */
    deepPowerDown3Info.logicPatch       = logicPatch;
    deepPowerDown3Info.vddConfig        = 0U;   /* Useless in DPD3. */

    return Power_MailToAonEnterDPD(&deepPowerDown3Info, userData);
}

/*!
 * @brief Set the whole device into shut down mode.
 *
 * @note All blocks including CPU subsystem, AON, and RTC are off and only the PMU analog control is active.
 *
 * @note Only EXT_INT can wakeup device from shutdown mode.
 *
 * @param[in] logicPatch The logic patch to use, please note that it is in signed type.
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 *
 * @retval kStatus_Power_InvalidResponse Fail to enter DPD2, due to an invalid response is detected.
 * @retval kStatus_Success Success to enter and wakeup from DPD2. @todo Warm boot is not supported.
 */
status_t Power_EnterShutDown(int8_t logicPatch, uint8_t userData)
{
    /* Enable any of wakeup source for shutdown is enabled. */
    assert((g_powerWakeupSourceInfo.aonWakeupSourceMask & POWER_SHUTDOWN_WS_BIT_MASK) != 0UL);

    power_deep_power_down_info_t shutDownInfo;

    shutDownInfo.powerMode        = kPower_ShutDown;
    shutDownInfo.wakeupSourceMask = g_powerWakeupSourceInfo.aonWakeupSourceMask;
    shutDownInfo.ramBlocksMask    = 0U;   /* None of RAM blocks retained in shutdown mode. */
    shutDownInfo.offVdd           = true; /* VDD power supply auto shutdown in shutdown mode. */
    shutDownInfo.policy           = 0U;   /* Useless in Shutdown mode. */
    shutDownInfo.clockSource      = 0U;   /* Useless in shutdown mode. */
    shutDownInfo.logicPatch       = -1;
    shutDownInfo.vddConfig        = 0U;

    return Power_MailToAonEnterDPD(&shutDownInfo, userData);
}

/*!
 * @brief Abort flow of entering deep power down modes(including DPD1, DPD2, DPD3 and shutdown).
 *
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 */
void Power_AbortAonDeepPowerDownFlow(uint8_t userData)
{
    IPMQ_SendMessage(kIPMQ_MsgOpcode_DeepPowerDownAbort, userData, 0U, NULL);
    (void)IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_DeepPowerDownAbort, userData, NULL, NULL);
}

/*!
 * @brief Return last boot information, including wakeup reason, backup register value, retention cuts of RAM, and so
 * on.
 *
 * @param[out] ptrWakeupBootInfo Pointer to a variable in type of @ref power_boot_info_t to store last boot information.
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 *
 * @retval kStatus_Success Succeed to get last boot information.
 * @retval kStatus_Power_InvalidResponse Invalid response from AON.
 */
status_t Power_GetBootInfo(power_boot_info_t *ptrWakeupBootInfo, uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    IPMQ_SendMessage(kIPMQ_MsgOpcode_BootReason, userData, 0U, NULL);

    uint32_t responsePayload[4];
    uint8_t responsePayloadSize;
    ret = IPMQ_ReceiveMessage(kIPMQ_MsgOpcode_BootReason, userData, responsePayload, &responsePayloadSize);

    if (ret != kIPMQ_Ret_ReceiveAck)
    {
        (void)ptrWakeupBootInfo;

        if (ret == kIPMQ_Ret_ReceiveNACK)
        {
            /* @todo Lack of info of NACk reason. */
            return 1;
        }
        else
        {
            return kStatus_Power_InvalidResponse;
        }
    }
    else
    {
        ptrWakeupBootInfo->wakeupReason    = (power_wakeup_reason_t)responsePayload[0U];
        ptrWakeupBootInfo->backupReg       = responsePayload[1U];
        ptrWakeupBootInfo->retentionBlocks = responsePayload[2U];
        ptrWakeupBootInfo->rtcAlive        = (responsePayload[3U] != 0UL) ? true : false;

        return kStatus_Success;
    }
}
