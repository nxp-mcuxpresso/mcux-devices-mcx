/*
** ###################################################################
**     Processors:          MCXW235BIHNAR
**                          MCXW235BIUKAR
**                          MCXW236AIHNAR
**                          MCXW236AIUKAR
**                          MCXW236BIHNAR
**                          MCXW236BIUKAR
**
**     Version:             rev. 2.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         CMSIS Peripheral Access Layer for RTC
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2022-03-08)
**         Initial version based on v0.1UM
**     - rev. 2.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_RTC.h
 * @version 2.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for RTC
 *
 * CMSIS Peripheral Access Layer for RTC
 */

#if !defined(PERI_RTC_H_)
#define PERI_RTC_H_                              /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MCXW235BIHNAR) || defined(CPU_MCXW235BIUKAR))
#include "MCXW235_COMMON.h"
#elif (defined(CPU_MCXW236AIHNAR) || defined(CPU_MCXW236AIUKAR) || defined(CPU_MCXW236BIHNAR) || defined(CPU_MCXW236BIUKAR))
#include "MCXW236_COMMON.h"
#else
  #error "No valid CPU defined!"
#endif

/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */


/*
** Start of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic push
  #else
    #pragma push
    #pragma anon_unions
  #endif
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- RTC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RTC_Peripheral_Access_Layer RTC Peripheral Access Layer
 * @{
 */

/** RTC - Size of Registers Arrays */
#define RTC_GPREG_COUNT                           8u

/** RTC - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTRL;                              /**< RTC control register, offset: 0x0 */
  __IO uint32_t MATCH;                             /**< RTC Match, offset: 0x4 */
  __IO uint32_t COUNT;                             /**< RTC Counter, offset: 0x8 */
  __IO uint32_t WAKE;                              /**< High-resolution/Wake-up Timer Control, offset: 0xC */
  __I  uint32_t SUBSEC;                            /**< Sub-second counter register, offset: 0x10 */
       uint8_t RESERVED_0[44];
  __IO uint32_t GPREG[RTC_GPREG_COUNT];            /**< General Purpose register, array offset: 0x40, array step: 0x4 */
} RTC_Type;

/* ----------------------------------------------------------------------------
   -- RTC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RTC_Register_Masks RTC Register Masks
 * @{
 */

/*! @name CTRL - RTC control register */
/*! @{ */

#define RTC_CTRL_SWRESET_MASK                    (0x1U)
#define RTC_CTRL_SWRESET_SHIFT                   (0U)
/*! SWRESET - Software reset control
 *  0b0..Not in reset. The RTC is not held in reset. This bit must be cleared prior to configuring or initiating any operation of the RTC.
 *  0b1..In reset. The RTC is held in reset. All register bits within the RTC will be forced to their reset value.
 *       Do not attempt to write to any bits of this register at the same time that the reset bit is being cleared.
 */
#define RTC_CTRL_SWRESET(x)                      (((uint32_t)(((uint32_t)(x)) << RTC_CTRL_SWRESET_SHIFT)) & RTC_CTRL_SWRESET_MASK)

#define RTC_CTRL_ALARM1HZ_MASK                   (0x4U)
#define RTC_CTRL_ALARM1HZ_SHIFT                  (2U)
/*! ALARM1HZ - RTC 1 Hz timer alarm flag status.
 *  0b0..No match. No match has occurred on the 1 Hz RTC timer. Writing a 0 has no effect.
 *  0b1..Match. A match condition has occurred on the 1 Hz RTC timer. This flag generates an RTC alarm interrupt
 *       request RTC_ALARM which can also wake up the part from any low power mode. Writing a 1 clears this bit.
 */
#define RTC_CTRL_ALARM1HZ(x)                     (((uint32_t)(((uint32_t)(x)) << RTC_CTRL_ALARM1HZ_SHIFT)) & RTC_CTRL_ALARM1HZ_MASK)

#define RTC_CTRL_WAKE1KHZ_MASK                   (0x8U)
#define RTC_CTRL_WAKE1KHZ_SHIFT                  (3U)
/*! WAKE1KHZ - RTC 1 kHz timer wake-up flag status.
 *  0b0..Run. The RTC 1 kHz timer is running. Writing a 0 has no effect.
 *  0b1..Time-out. The 1 kHz high-resolution/wake-up timer has timed out. This flag generates an RTC wake-up
 *       interrupt request RTC-WAKE which can also wake up the part from any low power mode. Writing a 1 clears this bit.
 */
#define RTC_CTRL_WAKE1KHZ(x)                     (((uint32_t)(((uint32_t)(x)) << RTC_CTRL_WAKE1KHZ_SHIFT)) & RTC_CTRL_WAKE1KHZ_MASK)

#define RTC_CTRL_ALARMDPD_EN_MASK                (0x10U)
#define RTC_CTRL_ALARMDPD_EN_SHIFT               (4U)
/*! ALARMDPD_EN - RTC 1 Hz timer alarm enable for Deep power-down.
 *  0b0..Disable. A match on the 1 Hz RTC timer will not bring the part out of Deep power-down mode.
 *  0b1..Enable. A match on the 1 Hz RTC timer bring the part out of Deep power-down mode.
 */
#define RTC_CTRL_ALARMDPD_EN(x)                  (((uint32_t)(((uint32_t)(x)) << RTC_CTRL_ALARMDPD_EN_SHIFT)) & RTC_CTRL_ALARMDPD_EN_MASK)

#define RTC_CTRL_WAKEDPD_EN_MASK                 (0x20U)
#define RTC_CTRL_WAKEDPD_EN_SHIFT                (5U)
/*! WAKEDPD_EN - RTC 1 kHz timer wake-up enable for Deep power-down. The RESETCAUSE register will be
 *    updated when this bit is set and a wakeup from deep power-down is triggered.
 *  0b0..Disable. A match on the 1 kHz RTC timer will not bring the part out of Deep power-down mode.
 *  0b1..Enable. A match on the 1 kHz RTC timer bring the part out of Deep power-down mode.
 */
#define RTC_CTRL_WAKEDPD_EN(x)                   (((uint32_t)(((uint32_t)(x)) << RTC_CTRL_WAKEDPD_EN_SHIFT)) & RTC_CTRL_WAKEDPD_EN_MASK)

#define RTC_CTRL_RTC1KHZ_EN_MASK                 (0x40U)
#define RTC_CTRL_RTC1KHZ_EN_SHIFT                (6U)
/*! RTC1KHZ_EN - RTC 1 kHz clock enable. This bit can be set to 0 to conserve power if the 1 kHz
 *    timer is not used. This bit has no effect when the RTC is disabled (bit 7 of this register is 0).
 *  0b0..Disable. A match on the 1 kHz RTC timer will not bring the part out of Deep power-down mode.
 *  0b1..Enable. The 1 kHz RTC timer is enabled.
 */
#define RTC_CTRL_RTC1KHZ_EN(x)                   (((uint32_t)(((uint32_t)(x)) << RTC_CTRL_RTC1KHZ_EN_SHIFT)) & RTC_CTRL_RTC1KHZ_EN_MASK)

#define RTC_CTRL_RTC_EN_MASK                     (0x80U)
#define RTC_CTRL_RTC_EN_SHIFT                    (7U)
/*! RTC_EN - RTC enable.
 *  0b0..Disable. The RTC 1 Hz and 1 kHz clocks are shut down and the RTC operation is disabled. This bit should
 *       be 0 when writing to load a value in the RTC counter register.
 *  0b1..Enable. The 1 Hz RTC clock is running and RTC operation is enabled. The first clock to the RTC counter
 *       occurs 1 s after RTC_EN is set. To also enable the high-resolution, 1 kHz clock, set CTRL[RTC1KHZ_EN] = 1.
 */
#define RTC_CTRL_RTC_EN(x)                       (((uint32_t)(((uint32_t)(x)) << RTC_CTRL_RTC_EN_SHIFT)) & RTC_CTRL_RTC_EN_MASK)

#define RTC_CTRL_RTC_OSC_PD_MASK                 (0x100U)
#define RTC_CTRL_RTC_OSC_PD_SHIFT                (8U)
/*! RTC_OSC_PD - RTC oscillator power-down control.
 *  0b0..RTC oscillator is powered up. This bit must be cleared in order for the RTC module to function
 *  0b1..RTC oscillator is powered-down. The RTC oscillator is shut-off to reserve power consumption. RTC operation is disabled.
 */
#define RTC_CTRL_RTC_OSC_PD(x)                   (((uint32_t)(((uint32_t)(x)) << RTC_CTRL_RTC_OSC_PD_SHIFT)) & RTC_CTRL_RTC_OSC_PD_MASK)

#define RTC_CTRL_RTC_OSC_BYPASS_MASK             (0x200U)
#define RTC_CTRL_RTC_OSC_BYPASS_SHIFT            (9U)
/*! RTC_OSC_BYPASS - RTC oscillator bypass control.
 *  0b0..The RTC Oscillator operates normally as a crystal oscillator with the crystal connected between the RTC_XTALIN and RTC_XTALOUT pins.
 *  0b1..The RTC Oscillator is in bypass mode. In this mode a clock can be directly input into the RTC_XTALIN pin.
 */
#define RTC_CTRL_RTC_OSC_BYPASS(x)               (((uint32_t)(((uint32_t)(x)) << RTC_CTRL_RTC_OSC_BYPASS_SHIFT)) & RTC_CTRL_RTC_OSC_BYPASS_MASK)

#define RTC_CTRL_RTC_SUBSEC_ENA_MASK             (0x400U)
#define RTC_CTRL_RTC_SUBSEC_ENA_SHIFT            (10U)
/*! RTC_SUBSEC_ENA - RTC Sub-second counter control.
 *  0b0..The sub-second counter (if implemented) is disabled. This bit is cleared by a system-level POR or BOD
 *       reset as well as a by the RTC_ENA bit (bit 7 in this register). On modules not equipped with a sub-second
 *       counter, this bit will always read-back as a '0'.
 *  0b1..The 32 KHz sub-second counter is enabled. Counting commences on the start of the first one-second
 *       interval after this bit is set. Note: This bit can only be set after the RTC_ENA bit (bit 7) is set by a previous
 *       write operation.
 */
#define RTC_CTRL_RTC_SUBSEC_ENA(x)               (((uint32_t)(((uint32_t)(x)) << RTC_CTRL_RTC_SUBSEC_ENA_SHIFT)) & RTC_CTRL_RTC_SUBSEC_ENA_MASK)
/*! @} */

/*! @name MATCH - RTC Match */
/*! @{ */

#define RTC_MATCH_MATVAL_MASK                    (0xFFFFFFFFU)
#define RTC_MATCH_MATVAL_SHIFT                   (0U)
/*! MATVAL - Match Value */
#define RTC_MATCH_MATVAL(x)                      (((uint32_t)(((uint32_t)(x)) << RTC_MATCH_MATVAL_SHIFT)) & RTC_MATCH_MATVAL_MASK)
/*! @} */

/*! @name COUNT - RTC Counter */
/*! @{ */

#define RTC_COUNT_VAL_MASK                       (0xFFFFFFFFU)
#define RTC_COUNT_VAL_SHIFT                      (0U)
/*! VAL - Value */
#define RTC_COUNT_VAL(x)                         (((uint32_t)(((uint32_t)(x)) << RTC_COUNT_VAL_SHIFT)) & RTC_COUNT_VAL_MASK)
/*! @} */

/*! @name WAKE - High-resolution/Wake-up Timer Control */
/*! @{ */

#define RTC_WAKE_VAL_MASK                        (0xFFFFU)
#define RTC_WAKE_VAL_SHIFT                       (0U)
/*! VAL - Value */
#define RTC_WAKE_VAL(x)                          (((uint32_t)(((uint32_t)(x)) << RTC_WAKE_VAL_SHIFT)) & RTC_WAKE_VAL_MASK)
/*! @} */

/*! @name SUBSEC - Sub-second counter register */
/*! @{ */

#define RTC_SUBSEC_SUBSEC_MASK                   (0x7FFFU)
#define RTC_SUBSEC_SUBSEC_SHIFT                  (0U)
/*! SUBSEC - A read reflects the current value of the 32.768 kHz sub-second counter. This counter is
 *    cleared whenever the SUBSEC_ENA bit in the RTC_CONTROL register is low. Up-counting at a
 *    32.768 kHz rate commences at the start of the next one-second interval after the SUBSEC_ENA bit is
 *    set. This counter must be re-enabled after exiting deep power-down mode or after the main RTC
 *    module is disabled and re-enabled. On modules not equipped with a sub-second counter, this
 *    register will read-back as all zeroes.
 */
#define RTC_SUBSEC_SUBSEC(x)                     (((uint32_t)(((uint32_t)(x)) << RTC_SUBSEC_SUBSEC_SHIFT)) & RTC_SUBSEC_SUBSEC_MASK)
/*! @} */

/*! @name GPREG - General Purpose register */
/*! @{ */

#define RTC_GPREG_GPDATA_MASK                    (0xFFFFFFFFU)
#define RTC_GPREG_GPDATA_SHIFT                   (0U)
/*! GPDATA - Data retained during Deep power-down mode or loss of main power as long as VBAT is supplied. */
#define RTC_GPREG_GPDATA(x)                      (((uint32_t)(((uint32_t)(x)) << RTC_GPREG_GPDATA_SHIFT)) & RTC_GPREG_GPDATA_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group RTC_Register_Masks */


/*!
 * @}
 */ /* end of group RTC_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic pop
  #else
    #pragma pop
  #endif
#elif defined(__GNUC__)
  /* leave anonymous unions enabled */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=default
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


#endif  /* PERI_RTC_H_ */

