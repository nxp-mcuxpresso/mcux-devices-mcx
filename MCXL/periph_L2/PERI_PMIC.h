/*
** ###################################################################
**     Processors:          MCXL253VDF_cm0plus
**                          MCXL253VDF_cm33
**                          MCXL253VLL_cm0plus
**                          MCXL253VLL_cm33
**                          MCXL254VDF_cm0plus
**                          MCXL254VDF_cm33
**                          MCXL254VLL_cm0plus
**                          MCXL254VLL_cm33
**                          MCXL255VDF_cm0plus
**                          MCXL255VDF_cm33
**                          MCXL255VLL_cm0plus
**                          MCXL255VLL_cm33
**
**     Version:             rev. 1.0, 2023-01-09
**     Build:               b250320
**
**     Abstract:
**         CMSIS Peripheral Access Layer for PMIC
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2023-01-09)
**         Generated based on Rev1 DraftI.
**
** ###################################################################
*/

/*!
 * @file PMIC.h
 * @version 1.0
 * @date 2023-01-09
 * @brief CMSIS Peripheral Access Layer for PMIC
 *
 * CMSIS Peripheral Access Layer for PMIC
 */

#if !defined(PMIC_H_)
#define PMIC_H_                                  /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MCXL253VDF_cm0plus) || defined(CPU_MCXL253VLL_cm0plus))
#include "MCXL253_cm0plus_COMMON.h"
#elif (defined(CPU_MCXL253VDF_cm33) || defined(CPU_MCXL253VLL_cm33))
#include "MCXL253_cm33_COMMON.h"
#elif (defined(CPU_MCXL254VDF_cm0plus) || defined(CPU_MCXL254VLL_cm0plus))
#include "MCXL254_cm0plus_COMMON.h"
#elif (defined(CPU_MCXL254VDF_cm33) || defined(CPU_MCXL254VLL_cm33))
#include "MCXL254_cm33_COMMON.h"
#elif (defined(CPU_MCXL255VDF_cm0plus) || defined(CPU_MCXL255VLL_cm0plus))
#include "MCXL255_cm0plus_COMMON.h"
#elif (defined(CPU_MCXL255VDF_cm33) || defined(CPU_MCXL255VLL_cm33))
#include "MCXL255_cm33_COMMON.h"
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
   -- PMIC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PMIC_Peripheral_Access_Layer PMIC Peripheral Access Layer
 * @{
 */

/** PMIC - Register Layout Typedef */
typedef struct {
  __IO uint32_t PCTRL;                             /**< Power Control, offset: 0x0 */
  __IO uint32_t VDD_CORE_PCONFIG;                  /**< VDD Core Power Configuration, offset: 0x4 */
  __IO uint32_t VDD_CORE_1P1_CONFIG;               /**< VDD_CORE_1P1 Configuration, offset: 0x8 */
       uint8_t RESERVED_0[4];
  __IO uint32_t FRO_CTRL;                          /**< 16KHz FRO Control, offset: 0x10 */
       uint8_t RESERVED_1[72];
  __IO uint32_t VDD_WKUP_WDTC;                     /**< VDD Wakeup Watchdog Time Count, offset: 0x5C */
  __IO uint32_t AWK_UP_TIME;                       /**< Analog Wakeup Time, offset: 0x60 */
} PMIC_Type;

/* ----------------------------------------------------------------------------
   -- PMIC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PMIC_Register_Masks PMIC Register Masks
 * @{
 */

/*! @name PCTRL - Power Control */
/*! @{ */

#define PMIC_PCTRL_VDDP_EN_MASK                  (0x1U)
#define PMIC_PCTRL_VDDP_EN_SHIFT                 (0U)
/*! VDDP_EN - VDD Power Enable */
#define PMIC_PCTRL_VDDP_EN(x)                    (((uint32_t)(((uint32_t)(x)) << PMIC_PCTRL_VDDP_EN_SHIFT)) & PMIC_PCTRL_VDDP_EN_MASK)
/*! @} */

/*! @name VDD_CORE_PCONFIG - VDD Core Power Configuration */
/*! @{ */

#define PMIC_VDD_CORE_PCONFIG_VDD_ACONFIG_MASK   (0x3FU)
#define PMIC_VDD_CORE_PCONFIG_VDD_ACONFIG_SHIFT  (0U)
/*! VDD_ACONFIG - VDD_CORE Active Configuration */
#define PMIC_VDD_CORE_PCONFIG_VDD_ACONFIG(x)     (((uint32_t)(((uint32_t)(x)) << PMIC_VDD_CORE_PCONFIG_VDD_ACONFIG_SHIFT)) & PMIC_VDD_CORE_PCONFIG_VDD_ACONFIG_MASK)

#define PMIC_VDD_CORE_PCONFIG_VDD_DSCONFIG_MASK  (0xFC0U)
#define PMIC_VDD_CORE_PCONFIG_VDD_DSCONFIG_SHIFT (6U)
/*! VDD_DSCONFIG - VDD_CORE Deep Sleep mode Configuration */
#define PMIC_VDD_CORE_PCONFIG_VDD_DSCONFIG(x)    (((uint32_t)(((uint32_t)(x)) << PMIC_VDD_CORE_PCONFIG_VDD_DSCONFIG_SHIFT)) & PMIC_VDD_CORE_PCONFIG_VDD_DSCONFIG_MASK)
/*! @} */

/*! @name VDD_CORE_1P1_CONFIG - VDD_CORE_1P1 Configuration */
/*! @{ */

#define PMIC_VDD_CORE_1P1_CONFIG_VDD_CORE_1P1_ACONFIG_MASK (0xFFU)
#define PMIC_VDD_CORE_1P1_CONFIG_VDD_CORE_1P1_ACONFIG_SHIFT (0U)
/*! VDD_CORE_1P1_ACONFIG - VDD_CORE_1P1 Active Configuration */
#define PMIC_VDD_CORE_1P1_CONFIG_VDD_CORE_1P1_ACONFIG(x) (((uint32_t)(((uint32_t)(x)) << PMIC_VDD_CORE_1P1_CONFIG_VDD_CORE_1P1_ACONFIG_SHIFT)) & PMIC_VDD_CORE_1P1_CONFIG_VDD_CORE_1P1_ACONFIG_MASK)

#define PMIC_VDD_CORE_1P1_CONFIG_VDD_CORE_1P1_VOUTSEL_LPWR_MASK (0x1F00U)
#define PMIC_VDD_CORE_1P1_CONFIG_VDD_CORE_1P1_VOUTSEL_LPWR_SHIFT (8U)
/*! VDD_CORE_1P1_VOUTSEL_LPWR - VDD_CORE_1P1 Voute Select Low Power */
#define PMIC_VDD_CORE_1P1_CONFIG_VDD_CORE_1P1_VOUTSEL_LPWR(x) (((uint32_t)(((uint32_t)(x)) << PMIC_VDD_CORE_1P1_CONFIG_VDD_CORE_1P1_VOUTSEL_LPWR_SHIFT)) & PMIC_VDD_CORE_1P1_CONFIG_VDD_CORE_1P1_VOUTSEL_LPWR_MASK)
/*! @} */

/*! @name FRO_CTRL - 16KHz FRO Control */
/*! @{ */

#define PMIC_FRO_CTRL_FRO16K_EN_MASK             (0x1U)
#define PMIC_FRO_CTRL_FRO16K_EN_SHIFT            (0U)
/*! FRO16K_EN - FRO16K Enable */
#define PMIC_FRO_CTRL_FRO16K_EN(x)               (((uint32_t)(((uint32_t)(x)) << PMIC_FRO_CTRL_FRO16K_EN_SHIFT)) & PMIC_FRO_CTRL_FRO16K_EN_MASK)

#define PMIC_FRO_CTRL_CLOCK_SEL_MASK             (0x2000U)
#define PMIC_FRO_CTRL_CLOCK_SEL_SHIFT            (13U)
/*! CLOCK_SEL - Clock Select
 *  0b0..Use 16 KHz
 *  0b1..Use 8 KHz
 */
#define PMIC_FRO_CTRL_CLOCK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << PMIC_FRO_CTRL_CLOCK_SEL_SHIFT)) & PMIC_FRO_CTRL_CLOCK_SEL_MASK)
/*! @} */

/*! @name VDD_WKUP_WDTC - VDD Wakeup Watchdog Time Count */
/*! @{ */

#define PMIC_VDD_WKUP_WDTC_DCDC_WKUP_WDOG_MASK   (0x7FFFU)
#define PMIC_VDD_WKUP_WDTC_DCDC_WKUP_WDOG_SHIFT  (0U)
/*! DCDC_WKUP_WDOG - DCDC Wakeup Watchdog */
#define PMIC_VDD_WKUP_WDTC_DCDC_WKUP_WDOG(x)     (((uint32_t)(((uint32_t)(x)) << PMIC_VDD_WKUP_WDTC_DCDC_WKUP_WDOG_SHIFT)) & PMIC_VDD_WKUP_WDTC_DCDC_WKUP_WDOG_MASK)
/*! @} */

/*! @name AWK_UP_TIME - Analog Wakeup Time */
/*! @{ */

#define PMIC_AWK_UP_TIME_WKUP_TIME_MASK          (0xFFFU)
#define PMIC_AWK_UP_TIME_WKUP_TIME_SHIFT         (0U)
/*! WKUP_TIME - Wakeup Time */
#define PMIC_AWK_UP_TIME_WKUP_TIME(x)            (((uint32_t)(((uint32_t)(x)) << PMIC_AWK_UP_TIME_WKUP_TIME_SHIFT)) & PMIC_AWK_UP_TIME_WKUP_TIME_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group PMIC_Register_Masks */


/*!
 * @}
 */ /* end of group PMIC_Peripheral_Access_Layer */


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


#endif  /* PMIC_H_ */

