/*
 * Copyright 2024 NXP
 *
 * All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef _FSL_POWER_H
#define _FSL_POWER_H

#include "fsl_common.h"

/*!
 * @addtogroup power
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @name Driver version */
/*@{*/
/*! @brief power driver version 2.0.0. */
#define FSL_POWER_DRIVER_VERSION (MAKE_VERSION(2, 0, 0))
/*@}*/

/*!
 * @brief Return status of power interfaces.
 * @anchor power_status_t
 */
enum
{
    kStatus_Power_WrongWakeupSource = MAKE_STATUS(kStatusGroup_AON_POWER, 1U), /*!< The selected wakeup source is not
                                                                               approved. */

    kStatus_Power_InvalidResponse = MAKE_STATUS(kStatusGroup_AON_POWER, 2U),   /*!< Power commands get an
                                                                              invalid response */
};

/**
 * @brief Defines an enumeration type for power wakeup policies.
 *
 * This enumeration type defines different strategies employed by the system when waking up from a low-power state.
 * The specific policies include:
 * - Dual-core simultaneous wake-up and parallel processing
 * - Wake CM0+ core first
 */
typedef enum _power_wakeup_policy
{
    kPower_wakeupPolicy_DualCoreWakeupParallel = 0U, /**< Dual-core simultaneous wake-up and parallel processing */
    kPower_wakeupPolicy_CM0PFirst              = 1U, /**< Wake CM0+ core first */
} power_wakeup_policy_t;

/*!
 * @brief The enumeration of clock source to the AON_CLK
 */
typedef enum _power_aon_clock_source
{
    kPower_AonClkFreq3MHz = 0U, /*!< AON clock frequency set to 3 MHz */
    kPower_AonClkFreq1P5MHz,    /*!< AON clock frequency set to 1.5 MHz */
    kPower_AonClkFreq0P75MHz,   /*!< AON clock frequency set to 0.75 MHz */
    kPower_AonClkFreq32kHz,     /*!< AON clock frequency set to 32 kHz */
} power_aon_clock_source_t;

/*!
 * @brief The enumeration of sram array.
 *
 * @anchor power_sram_array_t
 */
enum _power_sram_array
{
    kPower_SramArrayX0 = 1U << 0U, /*!< RAM X0(8KB): 0x400_0000 - 0x400_1FFF. */
    kPower_SramArrayX1 = 1U << 1U, /*!< RAM X1(4KB): 0x400_2000 - 0x400_2FFF. */
    kPower_SramArrayA0 = 1U << 2U, /*!< RAM A0(8KB): 0x2000_0000 - 0x2000_1FFF. */
    kPower_SramArrayA1 = 1U << 3U, /*!< RAM A1(16KB): 0x2000_2000 - 0x2000_5FFF. */
};

/*!
 * @brief The enumeration of different power down type.
 */
typedef enum _power_deep_power_down_type
{
    kPower_DeepPowerDown1 = 0U, /*!< Deep power down 1, main CPU core complete sub cluster is power off. */
    kPower_DeepPowerDown2 = 1U, /*!< Deep power down 2, main CPU core domain powered off, AON CPU is power off,
                                    and the AON ADVC block is active. */
    kPower_DeepPowerDown3 = 2U, /*!< Deep power down 3, both the AON and CPU complete subsystem cluster
                                    are power off. */
    kPower_ShutDown = 3U,       /*!< Only PAC block is active. */
} power_deep_power_down_type_t;

/*!
 * @brief The list of wakeup boot reason.
 */
typedef enum _power_wakeup_reason
{
    kPower_WakeupReason_DeepPowerDown1 = 0U, /*!< Wakeup from Deep power down 1 mode. */
    kPower_WakeupReason_DeepPowerDown2 = 1U, /*!< Wakeup from Deep power down 2 mode. */
    kPower_WakeupReason_DeepPowerDown3 = 2U, /*!< Wakeup from Deep power down 3 mode. */
    kPower_WakeupReason_ShutdownOrPOR  = 3U, /*!< Wakeup from shutdown OR POR. */
} power_wakeup_reason_t;

/*!
 * @brief The structure of last boot info, including wakeup reason, backup register value,
 * retention ram blocks and so on.
 */
typedef struct _power_boot_info
{
    power_wakeup_reason_t wakeupReason; /*!< Wakeup reason, refer to @ref power_wakeup_reason_t. */
    uint32_t backupReg;                 /*!< Contain the stack pointer in order to restore from deep power down mode. */
    uint32_t retentionBlocks;           /*!< Bit mask represent all avail RAM cuts, each bit represent one cut,
                                            '1': cut in retain mode;
                                            '0': cut was powered down */
    bool rtcAlive;                      /*!< true if RTC is alive, false otherwis. */
} power_boot_info_t;

/*!
 * @brief Encode wakeup source code.
 *
 * @note
 *    bit 7 - 0: aon control bit index;
 *    bit 15 - 8: wuu control bit index;
 *    bit 19 - 16: wuu event(0: interrupt, 1: DMA request, 2: trigger event);
 *    bit 23 - 20: external pin edge(1: rising edge, 2: falling edge, 3: any edge);
 *    bit 30: external pin or internal module(0: internal module, 1: external pin);
 *    bit 31: wakeup source in aon domain or cm33 domain(0: In AON domain, 1: In CM33 domain).
 *
 */
#define POWER_ENCODE_WS(cm33Ws, wuuExtPin, pinEdge, wuuEvent, wuuIndex, aonIndex)                           \
    ((((uint32_t)(cm33Ws) << 31UL) & (0x80000000UL)) | (((uint32_t)(wuuExtPin) << 30UL) & (0x40000000UL)) | \
     (((uint32_t)(pinEdge) << 20UL) & 0xF00000UL) | (((uint32_t)(wuuEvent) << 16UL) & 0xF0000UL) |          \
     (((uint32_t)(wuuIndex) << 8UL) & 0xFF00UL) | ((uint32_t)(aonIndex)&0xFFUL))

#define POWER_DECODE_WS(wsCode)                           \
    aonIndex    = (wsCode)&0xFFUL;                        \
    wuuIndex    = ((wsCode)&0xFF00UL) >> 8UL;             \
    wuuEvent    = ((wsCode)&0xF0000UL) >> 16UL;           \
    pinEdge     = ((wsCode)&0xF00000UL) >> 20UL;          \
    isWuuExtPin = (bool)(((wsCode)&0x40000000UL) != 0UL); \
    isCm33Ws    = (bool)(((wsCode)&0x80000000UL) != 0UL)

#define POWER_DPD2_WS_BIT_MASK     (0xFFUL)
#define POWER_DPD3_WS_BIT_MASK     (0x37UL)
#define POWER_SHUTDOWN_WS_BIT_MASK (0x20UL)

/*!
 * @brief The enumeration of wakeup sources for different low power modes.
 *
 */
typedef enum _power_wakeup_source
{
    kPower_WS_RtcAlarm0 = POWER_ENCODE_WS(0U, 0U, 0U, 0U, 0U, 0U),   /*!< RTC Alarm0 as wakeup source, can be used to
                                                                     wakeup from DPD1, DPD1, DPD3. */
    kPower_WS_RtcAlarm1 = POWER_ENCODE_WS(0U, 0U, 0U, 0U, 0U, 1U),   /*!< RTC Alarm1 as wakeup source, can be used to
                                                                     wakeup from DPD1, DPD2, DPD3. */
    kPower_WS_RtcAlarm2 = POWER_ENCODE_WS(0U, 0U, 0U, 0U, 0U, 2U),   /*!< RTC Alarm2 as wakeup source, can be used to
                                                                     wakeup from DPD1, DPD2, DPD3. */
    kPower_WS_RtcWDT = POWER_ENCODE_WS(0U, 0U, 0U, 0U, 0U, 3U),      /*!< RTC watch dog as wakeup source, can be
                                                                     used to wakeup from DPD1, DPD2. */
    kPower_WS_RtcXtalFail = POWER_ENCODE_WS(0U, 0U, 0U, 0U, 0U, 4U), /*!< RTC XTAL fail as wakeup source, can be
                                                                     used to wakeup from DPD1, DPD2, DPD3. */
    kPower_WS_ExternalINTFallEdge = POWER_ENCODE_WS(0U, 0U, 0U, 0U, 0U, 5U), /*!< External INT falling edge as wakeup
                                                                     source, can be used to wakeup from DPD1, DPD2,
                                                                     DPD3 and shutdown mode. */
    kPower_WS_ExternalINTRiseEdge = POWER_ENCODE_WS(0U, 0U, 1U, 0U, 0U, 5U), /*!< External INT rising edge as wakeup
                                                                     source, can be used to wakeup from DPD1, DPD2,
                                                                     DPD3 and shutdown mode. */
    kPower_WS_SMMTimer = POWER_ENCODE_WS(0U, 0U, 0U, 0U, 0U, 6U),            /*!< Deep sleep counter, as wakeup source,
                                                                             can be used to wakeup from DPD1, and DPD2. */
    kPower_WS_Comparator = POWER_ENCODE_WS(0U, 0U, 0U, 0U, 0U, 7U),          /*!< Voltage comparator, as wakeup source,
                                                                             can be used to wakeup from DPD1, and DPD2. */
    kPower_WS_AonHsGpioWakeup0 = POWER_ENCODE_WS(0U, 0U, 0U, 0U, 0U, 8U),
    kPower_WS_AonHsGpioWakeup1 = POWER_ENCODE_WS(0U, 0U, 0U, 0U, 0U, 9U),
    kPower_WS_Lpuart0 = POWER_ENCODE_WS(0U, 0U, 0U, 0U, 0U, 10U), /*!< LPUART0 Interrupt as wakeup source, can be
                                                                  used to wakeup from DPD1. */
    kPower_WS_Lpi2c0 = POWER_ENCODE_WS(0U, 0U, 0U, 0U, 0U, 11U),  /*!< LPI2C0 Interrupt as wakeup source, can be
                                                                  used to wakeup from DPD1. */

    /* Following wakeup sources reside in CM33 domain and shall not wakeup device from Deep power down mode. */
    kPower_WS_P0_0RiseEdgeInt = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 2U, 0U),  /*!< Pin P0_0 rising edge interrupt as
                                                              wakeup source, can be used to wakeup from DS mode. */
    kPower_WS_P0_0RiseEdgeDma = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 2U, 0U),  /*!< Pin P0_0 rising edge DMA request as
                                                              wakeup source, can be used to wakeup from DS mode. */
    kPower_WS_P0_0RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 2U, 0U), /*!< Pin P0_0 rising edge trigger as
                                                               wakeup source, can be used to wakeup from DS mode. */
    kPower_WS_P0_0FallEdgeInt = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 2U, 0U),  /*!< Pin P0_0 falling edge interrupt as
                                                              wakeup source, can be used to wakeup from DS mode. */
    kPower_WS_P0_0FallEdgeDma = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 2U, 0U),  /*!< Pin P0_0 falling edge DMA request as
                                                                wakeup source, can be used to wakeup from DS mode. */
    kPower_WS_P0_0FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 2U, 0U), /*!< Pin P0_0 falling edge trigger as
                                                                wakeup source, can be used to wakeup from DS mode. */
    kPower_WS_P0_0AnyEdgeInt = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 2U, 0U),   /*!< Pin P0_0 any edge interrupt as
                                                                wakeup source, can be used to wakeup from DS mode. */
    kPower_WS_P0_0AnyEdgeDma = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 2U, 0U),   /*!< Pin P0_0 any edge DMA request as
                                                                wakeup source, can be used to wakeup from DS mode. */
    kPower_WS_P0_0AnyEdgeTrig = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 2U, 0U),  /*!< Pin P0_0 any edge interrupt as
                                                                wakeup source, can be used to wakeup from DS mode. */

    kPower_WS_P0_15RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 6U, 0U),
    kPower_WS_P0_15RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 6U, 0U),
    kPower_WS_P0_15RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 6U, 0U),
    kPower_WS_P0_15FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 6U, 0U),
    kPower_WS_P0_15FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 6U, 0U),
    kPower_WS_P0_15FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 6U, 0U),
    kPower_WS_P0_15AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 6U, 0U),
    kPower_WS_P0_15AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 6U, 0U),
    kPower_WS_P0_15AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 6U, 0U),

    kPower_WS_P1_16RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 7U, 0U),
    kPower_WS_P1_16RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 7U, 0U),
    kPower_WS_P1_16RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 7U, 0U),
    kPower_WS_P1_16FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 7U, 0U),
    kPower_WS_P1_16FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 7U, 0U),
    kPower_WS_P1_16FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 7U, 0U),
    kPower_WS_P1_16AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 7U, 0U),
    kPower_WS_P1_16AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 7U, 0U),
    kPower_WS_P1_16AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 7U, 0U),

    kPower_WS_P1_17RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 8U, 0U),
    kPower_WS_P1_17RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 8U, 0U),
    kPower_WS_P1_17RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 8U, 0U),
    kPower_WS_P1_17FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 8U, 0U),
    kPower_WS_P1_17FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 8U, 0U),
    kPower_WS_P1_17FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 8U, 0U),
    kPower_WS_P1_17AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 8U, 0U),
    kPower_WS_P1_17AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 8U, 0U),
    kPower_WS_P1_17AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 8U, 0U),

    kPower_WS_P0_20RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 9U, 0U),
    kPower_WS_P0_20RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 9U, 0U),
    kPower_WS_P0_20RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 9U, 0U),
    kPower_WS_P0_20FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 9U, 0U),
    kPower_WS_P0_20FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 9U, 0U),
    kPower_WS_P0_20FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 9U, 0U),
    kPower_WS_P0_20AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 9U, 0U),
    kPower_WS_P0_20AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 9U, 0U),
    kPower_WS_P0_20AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 9U, 0U),

    kPower_WS_P0_23RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 10U, 0U),
    kPower_WS_P0_23RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 10U, 0U),
    kPower_WS_P0_23RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 10U, 0U),
    kPower_WS_P0_23FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 10U, 0U),
    kPower_WS_P0_23FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 10U, 0U),
    kPower_WS_P0_23FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 10U, 0U),
    kPower_WS_P0_23AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 10U, 0U),
    kPower_WS_P0_23AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 10U, 0U),
    kPower_WS_P0_23AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 10U, 0U),

    kPower_WS_P0_3RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 11U, 0U),
    kPower_WS_P0_3RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 11U, 0U),
    kPower_WS_P0_3RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 11U, 0U),
    kPower_WS_P0_3FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 11U, 0U),
    kPower_WS_P0_3FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 11U, 0U),
    kPower_WS_P0_3FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 11U, 0U),
    kPower_WS_P0_3AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 11U, 0U),
    kPower_WS_P0_3AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 11U, 0U),
    kPower_WS_P0_3AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 11U, 0U),

    kPower_WS_P0_4RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 12U, 0U),
    kPower_WS_P0_4RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 12U, 0U),
    kPower_WS_P0_4RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 12U, 0U),
    kPower_WS_P0_4FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 12U, 0U),
    kPower_WS_P0_4FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 12U, 0U),
    kPower_WS_P0_4FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 12U, 0U),
    kPower_WS_P0_4AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 12U, 0U),
    kPower_WS_P0_4AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 12U, 0U),
    kPower_WS_P0_4AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 12U, 0U),

    kPower_WS_P0_13RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 18U, 0U),
    kPower_WS_P0_13RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 18U, 0U),
    kPower_WS_P0_13RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 18U, 0U),
    kPower_WS_P0_13FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 18U, 0U),
    kPower_WS_P0_13FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 18U, 0U),
    kPower_WS_P0_13FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 18U, 0U),
    kPower_WS_P0_13AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 18U, 0U),
    kPower_WS_P0_13AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 18U, 0U),
    kPower_WS_P0_13AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 18U, 0U),

    kPower_WS_P1_13RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 19U, 0U),
    kPower_WS_P1_13RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 19U, 0U),
    kPower_WS_P1_13RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 19U, 0U),
    kPower_WS_P1_13FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 19U, 0U),
    kPower_WS_P1_13FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 19U, 0U),
    kPower_WS_P1_13FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 19U, 0U),
    kPower_WS_P1_13AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 19U, 0U),
    kPower_WS_P1_13AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 19U, 0U),
    kPower_WS_P1_13AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 19U, 0U),

    kPower_WS_P1_1RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 20U, 0U),
    kPower_WS_P1_1RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 20U, 0U),
    kPower_WS_P1_1RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 20U, 0U),
    kPower_WS_P1_1FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 20U, 0U),
    kPower_WS_P1_1FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 20U, 0U),
    kPower_WS_P1_1FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 20U, 0U),
    kPower_WS_P1_1AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 20U, 0U),
    kPower_WS_P1_1AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 20U, 0U),
    kPower_WS_P1_1AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 20U, 0U),

    kPower_WS_P1_2RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 22U, 0U),
    kPower_WS_P1_2RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 22U, 0U),
    kPower_WS_P1_2RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 22U, 0U),
    kPower_WS_P1_2FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 22U, 0U),
    kPower_WS_P1_2FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 22U, 0U),
    kPower_WS_P1_2FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 22U, 0U),
    kPower_WS_P1_2AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 22U, 0U),
    kPower_WS_P1_2AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 22U, 0U),
    kPower_WS_P1_2AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 22U, 0U),

    kPower_WS_P1_5RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 23U, 0U),
    kPower_WS_P1_5RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 23U, 0U),
    kPower_WS_P1_5RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 23U, 0U),
    kPower_WS_P1_5FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 23U, 0U),
    kPower_WS_P1_5FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 23U, 0U),
    kPower_WS_P1_5FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 23U, 0U),
    kPower_WS_P1_5AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 23U, 0U),
    kPower_WS_P1_5AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 23U, 0U),
    kPower_WS_P1_5AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 23U, 0U),

    kPower_WS_P1_14RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 24U, 0U),
    kPower_WS_P1_14RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 24U, 0U),
    kPower_WS_P1_14RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 24U, 0U),
    kPower_WS_P1_14FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 24U, 0U),
    kPower_WS_P1_14FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 24U, 0U),
    kPower_WS_P1_14FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 24U, 0U),
    kPower_WS_P1_14AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 24U, 0U),
    kPower_WS_P1_14AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 24U, 0U),
    kPower_WS_P1_14AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 24U, 0U),

    kPower_WS_P1_19RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 25U, 0U),
    kPower_WS_P1_19RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 25U, 0U),
    kPower_WS_P1_19RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 25U, 0U),
    kPower_WS_P1_19FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 25U, 0U),
    kPower_WS_P1_19FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 25U, 0U),
    kPower_WS_P1_19FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 25U, 0U),
    kPower_WS_P1_19AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 25U, 0U),
    kPower_WS_P1_19AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 25U, 0U),
    kPower_WS_P1_19AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 25U, 0U),

    kPower_WS_P1_23RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 26U, 0U),
    kPower_WS_P1_23RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 26U, 0U),
    kPower_WS_P1_23RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 26U, 0U),
    kPower_WS_P1_23FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 26U, 0U),
    kPower_WS_P1_23FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 26U, 0U),
    kPower_WS_P1_23FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 26U, 0U),
    kPower_WS_P1_23AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 26U, 0U),
    kPower_WS_P1_23AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 26U, 0U),
    kPower_WS_P1_23AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 26U, 0U),

    kPower_WS_P1_22RiseEdgeInt  = POWER_ENCODE_WS(1U, 1U, 1U, 0U, 27U, 0U),
    kPower_WS_P1_22RiseEdgeDma  = POWER_ENCODE_WS(1U, 1U, 1U, 1U, 27U, 0U),
    kPower_WS_P1_22RiseEdgeTrig = POWER_ENCODE_WS(1U, 1U, 1U, 2U, 27U, 0U),
    kPower_WS_P1_22FallEdgeInt  = POWER_ENCODE_WS(1U, 1U, 2U, 0U, 27U, 0U),
    kPower_WS_P1_22FallEdgeDma  = POWER_ENCODE_WS(1U, 1U, 2U, 1U, 27U, 0U),
    kPower_WS_P1_22FallEdgeTrig = POWER_ENCODE_WS(1U, 1U, 2U, 2U, 27U, 0U),
    kPower_WS_P1_22AnyEdgeInt   = POWER_ENCODE_WS(1U, 1U, 3U, 0U, 27U, 0U),
    kPower_WS_P1_22AnyEdgeDma   = POWER_ENCODE_WS(1U, 1U, 3U, 1U, 27U, 0U),
    kPower_WS_P1_22AnyEdgeTrig  = POWER_ENCODE_WS(1U, 1U, 3U, 2U, 27U, 0U),

    kPower_WS_Lptmr0Int  = POWER_ENCODE_WS(1U, 0U, 0U, 0U, 6U, 0U),
    kPower_WS_Cmp0Int    = POWER_ENCODE_WS(1U, 0U, 0U, 0U, 8U, 0U),
    kPower_WS_Lptmr0Dma  = POWER_ENCODE_WS(1U, 0U, 0U, 1U, 4U, 0U),
    kPower_WS_Lptmr0Trig = POWER_ENCODE_WS(1U, 0U, 0U, 1U, 6U, 0U),
    kPower_WS_Cmp0DMA    = POWER_ENCODE_WS(1U, 0U, 0U, 1U, 8U, 0U),
} power_wakeup_source_t;

/*!
 * @brief The structure of dumped wakeup source information.
 */
typedef struct _power_wakeup_source_info
{
    uint32_t aonWakeupSourceMask;    /*!< The mask of wakeup sources in AON domain. */
    uint32_t wuuPinIntEnable[2];     /*!< Information of enabled Pin interrupts. */
    uint32_t wuuModuleIntEnable;     /*!< Information of enabled internal module interrupts. */
    uint32_t wuuModuleDmaTrigEnable; /*!< Information of enabled internal module DMA request/trigger. */
    uint32_t wuuPinDmaTrigConfig[2]; /*!< Information of enabled pin DMA request/trigger. */
} power_wakeup_source_info_t;

/*******************************************************************************
 * API
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @name Wakeup Source Control Interfaces
 * @{
 */

/*!
 * @brief Enable input wakeup source, once enabled it will be effective until disabled
 *
 * @param[in] ws Specify the coded wakeup source, please refer to @ref power_wakeup_source_t for details.
 */
void Power_EnableWakeupSource(power_wakeup_source_t ws);

/*!
 * @brief Disable input wakeup source.
 *
 * @param[in] ws Specify the coded wakeup source, please refer to @ref power_wakeup_source_t for details.
 */
void Power_DisableWakeupSource(power_wakeup_source_t ws);

/*!
 * @brief Dump information of all configured wakeup sources, in type of @ref power_wakeup_source_info_t.
 *
 * @param[out] ptrWsInfo Pointer to the variable to store dumped wakeup source information.
 */
void Power_DumpEnabledWakeSource(power_wakeup_source_info_t *ptrWsInfo);

/*!
 * @brief Get latest mask of wakeup sources which cause AON domain exit DPD modes.
 *
 * @param[out] ptrWakeupSourceMask Pointer to the variable to store mask of wakeup sources.
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 *
 * @retval kStatus_Success Succeed to get last boot information.
 * @retval kStatus_Power_InvalidResponse Invalid response from AON.
 */
status_t Power_GetWakeupSource(uint32_t *ptrWakeupSourceMask, uint8_t userData);

/*!
 * @}
 */

/*!
 * @name Low Power Modes Control Interfaces
 * @{
 */

/*!
 * @brief Set the whole device into deep sleep mode.
 *
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 */
status_t Power_EnterDeepSleep(uint8_t userData);

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
                                   uint8_t userData);

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
                                   uint8_t userData);

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
status_t Power_EnterDeepPowerDown3(int8_t logicPatch, uint8_t userData);

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
status_t Power_EnterShutDown(int8_t logicPatch, uint8_t userData);

/*!
 * @brief Abort flow of entering deep power down modes(including DPD1, DPD2, DPD3 and shutdown).
 *
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 */
void Power_AbortAonDeepPowerDownFlow(uint8_t userData);

/*!
 * @}
 *
 */

/*!
 * @name Boot Interfaces
 * @{
 */

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
status_t Power_GetBootInfo(power_boot_info_t *ptrWakeupBootInfo, uint8_t userData);

/*!
 * @}
 */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* __FSL_POWER_H */
