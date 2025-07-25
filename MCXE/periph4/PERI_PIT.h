/*
** ###################################################################
**     Processors:          MCXE317MPA
**                          MCXE317MPB
**
**     Version:             rev. 0.1, 2024-11-19
**     Build:               b250512
**
**     Abstract:
**         CMSIS Peripheral Access Layer for PIT
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 0.1 (2024-11-19)
**         Initial version.
**
** ###################################################################
*/

/*!
 * @file PERI_PIT.h
 * @version 0.1
 * @date 2024-11-19
 * @brief CMSIS Peripheral Access Layer for PIT
 *
 * CMSIS Peripheral Access Layer for PIT
 */

#if !defined(PERI_PIT_H_)
#define PERI_PIT_H_                              /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MCXE317MPA) || defined(CPU_MCXE317MPB))
#include "MCXE317_COMMON.h"
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
   -- PIT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PIT_Peripheral_Access_Layer PIT Peripheral Access Layer
 * @{
 */

/** PIT - Size of Registers Arrays */
#define PIT_CHANNEL_COUNT                         4u

/** PIT - Register Layout Typedef */
typedef struct {
  __IO uint32_t MCR;                               /**< PIT Module Control Register, offset: 0x0 */
       uint8_t RESERVED_0[220];
  __I  uint32_t LTMR64H;                           /**< PIT Upper Lifetime Timer Register, offset: 0xE0, available only on: PIT_0 (missing on PIT_1) */
  __I  uint32_t LTMR64L;                           /**< PIT Lower Lifetime Timer Register, offset: 0xE4, available only on: PIT_0 (missing on PIT_1) */
       uint8_t RESERVED_1[4];
  __IO uint32_t RTI_LDVAL_STAT;                    /**< RTI Timer Load Value Sync Status Register, offset: 0xEC, available only on: PIT_0 (missing on PIT_1) */
  __IO uint32_t RTI_LDVAL;                         /**< Timer Load Value Register, offset: 0xF0, available only on: PIT_0 (missing on PIT_1) */
  __I  uint32_t RTI_CVAL;                          /**< Current Timer Value Register, offset: 0xF4, available only on: PIT_0 (missing on PIT_1) */
  __IO uint32_t RTI_TCTRL;                         /**< Timer Control Register, offset: 0xF8, available only on: PIT_0 (missing on PIT_1) */
  __IO uint32_t RTI_TFLG;                          /**< Timer Flag Register, offset: 0xFC, available only on: PIT_0 (missing on PIT_1) */
  struct {                                         /* offset: 0x100, array step: 0x10 */
    __IO uint32_t LDVAL;                             /**< Timer Load Value Register, array offset: 0x100, array step: 0x10 */
    __I  uint32_t CVAL;                              /**< Current Timer Value Register, array offset: 0x104, array step: 0x10 */
    __IO uint32_t TCTRL;                             /**< Timer Control Register, array offset: 0x108, array step: 0x10 */
    __IO uint32_t TFLG;                              /**< Timer Flag Register, array offset: 0x10C, array step: 0x10 */
  } CHANNEL[PIT_CHANNEL_COUNT];
} PIT_Type;

/* ----------------------------------------------------------------------------
   -- PIT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PIT_Register_Masks PIT Register Masks
 * @{
 */

/*! @name MCR - PIT Module Control Register */
/*! @{ */

#define PIT_MCR_FRZ_MASK                         (0x1U)
#define PIT_MCR_FRZ_SHIFT                        (0U)
/*! FRZ - Freeze
 *  0b0..Timers continue to run in Debug mode.
 *  0b1..Timers are stopped in Debug mode.
 */
#define PIT_MCR_FRZ(x)                           (((uint32_t)(((uint32_t)(x)) << PIT_MCR_FRZ_SHIFT)) & PIT_MCR_FRZ_MASK)

#define PIT_MCR_MDIS_MASK                        (0x2U)
#define PIT_MCR_MDIS_SHIFT                       (1U)
/*! MDIS - Module Disable for PIT
 *  0b0..Clock for standard PIT timers is enabled.
 *  0b1..Clock for standard PIT timers is disabled.
 */
#define PIT_MCR_MDIS(x)                          (((uint32_t)(((uint32_t)(x)) << PIT_MCR_MDIS_SHIFT)) & PIT_MCR_MDIS_MASK)

#define PIT_MCR_MDIS_RTI_MASK                    (0x4U)
#define PIT_MCR_MDIS_RTI_SHIFT                   (2U)
/*! MDIS_RTI - Module Disable for RTI
 *  0b0..Clock for RTI timers is enabled
 *  0b1..Clock for RTI timers is disabled
 */
#define PIT_MCR_MDIS_RTI(x)                      (((uint32_t)(((uint32_t)(x)) << PIT_MCR_MDIS_RTI_SHIFT)) & PIT_MCR_MDIS_RTI_MASK)
/*! @} */

/*! @name LTMR64H - PIT Upper Lifetime Timer Register */
/*! @{ */

#define PIT_LTMR64H_LTH_MASK                     (0xFFFFFFFFU)
#define PIT_LTMR64H_LTH_SHIFT                    (0U)
/*! LTH - Life Timer value */
#define PIT_LTMR64H_LTH(x)                       (((uint32_t)(((uint32_t)(x)) << PIT_LTMR64H_LTH_SHIFT)) & PIT_LTMR64H_LTH_MASK)
/*! @} */

/*! @name LTMR64L - PIT Lower Lifetime Timer Register */
/*! @{ */

#define PIT_LTMR64L_LTL_MASK                     (0xFFFFFFFFU)
#define PIT_LTMR64L_LTL_SHIFT                    (0U)
/*! LTL - Life Timer value */
#define PIT_LTMR64L_LTL(x)                       (((uint32_t)(((uint32_t)(x)) << PIT_LTMR64L_LTL_SHIFT)) & PIT_LTMR64L_LTL_MASK)
/*! @} */

/*! @name RTI_LDVAL_STAT - RTI Timer Load Value Sync Status Register */
/*! @{ */

#define PIT_RTI_LDVAL_STAT_RT_STAT_MASK          (0x1U)
#define PIT_RTI_LDVAL_STAT_RT_STAT_SHIFT         (0U)
/*! RT_STAT - RTI Timer Load Value Sync Status
 *  0b0..RTI_LDVAL register not loaded.
 *  0b1..RTI_LDVAL register updated with new value.
 */
#define PIT_RTI_LDVAL_STAT_RT_STAT(x)            (((uint32_t)(((uint32_t)(x)) << PIT_RTI_LDVAL_STAT_RT_STAT_SHIFT)) & PIT_RTI_LDVAL_STAT_RT_STAT_MASK)
/*! @} */

/*! @name RTI_LDVAL - Timer Load Value Register */
/*! @{ */

#define PIT_RTI_LDVAL_TSV_MASK                   (0xFFFFFFFFU)
#define PIT_RTI_LDVAL_TSV_SHIFT                  (0U)
/*! TSV - Timer Start Value */
#define PIT_RTI_LDVAL_TSV(x)                     (((uint32_t)(((uint32_t)(x)) << PIT_RTI_LDVAL_TSV_SHIFT)) & PIT_RTI_LDVAL_TSV_MASK)
/*! @} */

/*! @name RTI_CVAL - Current Timer Value Register */
/*! @{ */

#define PIT_RTI_CVAL_TVL_MASK                    (0xFFFFFFFFU)
#define PIT_RTI_CVAL_TVL_SHIFT                   (0U)
/*! TVL - Current Timer Value */
#define PIT_RTI_CVAL_TVL(x)                      (((uint32_t)(((uint32_t)(x)) << PIT_RTI_CVAL_TVL_SHIFT)) & PIT_RTI_CVAL_TVL_MASK)
/*! @} */

/*! @name RTI_TCTRL - Timer Control Register */
/*! @{ */

#define PIT_RTI_TCTRL_TEN_MASK                   (0x1U)
#define PIT_RTI_TCTRL_TEN_SHIFT                  (0U)
/*! TEN - Timer Enable Bit
 *  0b0..RTI timer is disabled.
 *  0b1..RTI timer is enabled.
 */
#define PIT_RTI_TCTRL_TEN(x)                     (((uint32_t)(((uint32_t)(x)) << PIT_RTI_TCTRL_TEN_SHIFT)) & PIT_RTI_TCTRL_TEN_MASK)

#define PIT_RTI_TCTRL_TIE_MASK                   (0x2U)
#define PIT_RTI_TCTRL_TIE_SHIFT                  (1U)
/*! TIE - Timer Interrupt Enable
 *  0b0..Interrupt requests from the RTI timers are disabled.
 *  0b1..Interrupt is requested whenever TIF is set.
 */
#define PIT_RTI_TCTRL_TIE(x)                     (((uint32_t)(((uint32_t)(x)) << PIT_RTI_TCTRL_TIE_SHIFT)) & PIT_RTI_TCTRL_TIE_MASK)

#define PIT_RTI_TCTRL_CHN_MASK                   (0x4U)
#define PIT_RTI_TCTRL_CHN_SHIFT                  (2U)
/*! CHN - Chain Mode */
#define PIT_RTI_TCTRL_CHN(x)                     (((uint32_t)(((uint32_t)(x)) << PIT_RTI_TCTRL_CHN_SHIFT)) & PIT_RTI_TCTRL_CHN_MASK)
/*! @} */

/*! @name RTI_TFLG - Timer Flag Register */
/*! @{ */

#define PIT_RTI_TFLG_TIF_MASK                    (0x1U)
#define PIT_RTI_TFLG_TIF_SHIFT                   (0U)
/*! TIF - Timer Interrupt Flag
 *  0b0..Time-out has not yet occurred.
 *  0b1..Time-out has occurred.
 */
#define PIT_RTI_TFLG_TIF(x)                      (((uint32_t)(((uint32_t)(x)) << PIT_RTI_TFLG_TIF_SHIFT)) & PIT_RTI_TFLG_TIF_MASK)
/*! @} */

/*! @name LDVAL - Timer Load Value Register */
/*! @{ */

#define PIT_LDVAL_TSV_MASK                       (0xFFFFFFFFU)
#define PIT_LDVAL_TSV_SHIFT                      (0U)
/*! TSV - Timer Start Value */
#define PIT_LDVAL_TSV(x)                         (((uint32_t)(((uint32_t)(x)) << PIT_LDVAL_TSV_SHIFT)) & PIT_LDVAL_TSV_MASK)
/*! @} */

/* The count of PIT_LDVAL */
#define PIT_LDVAL_COUNT                          (4U)

/*! @name CVAL - Current Timer Value Register */
/*! @{ */

#define PIT_CVAL_TVL_MASK                        (0xFFFFFFFFU)
#define PIT_CVAL_TVL_SHIFT                       (0U)
/*! TVL - Current Timer Value */
#define PIT_CVAL_TVL(x)                          (((uint32_t)(((uint32_t)(x)) << PIT_CVAL_TVL_SHIFT)) & PIT_CVAL_TVL_MASK)
/*! @} */

/* The count of PIT_CVAL */
#define PIT_CVAL_COUNT                           (4U)

/*! @name TCTRL - Timer Control Register */
/*! @{ */

#define PIT_TCTRL_TEN_MASK                       (0x1U)
#define PIT_TCTRL_TEN_SHIFT                      (0U)
/*! TEN - Timer Enable
 *  0b0..Timer n is disabled.
 *  0b1..Timer n is enabled.
 */
#define PIT_TCTRL_TEN(x)                         (((uint32_t)(((uint32_t)(x)) << PIT_TCTRL_TEN_SHIFT)) & PIT_TCTRL_TEN_MASK)

#define PIT_TCTRL_TIE_MASK                       (0x2U)
#define PIT_TCTRL_TIE_SHIFT                      (1U)
/*! TIE - Timer Interrupt Enable
 *  0b0..Interrupt requests from Timer n are disabled.
 *  0b1..Interrupt is requested whenever TIF is set.
 */
#define PIT_TCTRL_TIE(x)                         (((uint32_t)(((uint32_t)(x)) << PIT_TCTRL_TIE_SHIFT)) & PIT_TCTRL_TIE_MASK)

#define PIT_TCTRL_CHN_MASK                       (0x4U)
#define PIT_TCTRL_CHN_SHIFT                      (2U)
/*! CHN - Chain Mode
 *  0b0..Timer is not chained.
 *  0b1..Timer is chained to a previous timer. For example, for channel 2, if this field is set, Timer 2 is chained to Timer 1.
 */
#define PIT_TCTRL_CHN(x)                         (((uint32_t)(((uint32_t)(x)) << PIT_TCTRL_CHN_SHIFT)) & PIT_TCTRL_CHN_MASK)
/*! @} */

/* The count of PIT_TCTRL */
#define PIT_TCTRL_COUNT                          (4U)

/*! @name TFLG - Timer Flag Register */
/*! @{ */

#define PIT_TFLG_TIF_MASK                        (0x1U)
#define PIT_TFLG_TIF_SHIFT                       (0U)
/*! TIF - Timer Interrupt Flag
 *  0b0..Timeout has not yet occurred.
 *  0b1..Timeout has occurred.
 */
#define PIT_TFLG_TIF(x)                          (((uint32_t)(((uint32_t)(x)) << PIT_TFLG_TIF_SHIFT)) & PIT_TFLG_TIF_MASK)
/*! @} */

/* The count of PIT_TFLG */
#define PIT_TFLG_COUNT                           (4U)


/*!
 * @}
 */ /* end of group PIT_Register_Masks */


/*!
 * @}
 */ /* end of group PIT_Peripheral_Access_Layer */


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


#endif  /* PERI_PIT_H_ */

