/*
** ###################################################################
**     Processors:          MCXL142VLH
**                          MCXL142VLH_cm0plus
**                          MCXL142VPJ
**                          MCXL142VPJ_cm0plus
**                          MCXL143VLH
**                          MCXL143VLH_cm0plus
**                          MCXL143VPJ
**                          MCXL143VPJ_cm0plus
**                          MCXL144VLH
**                          MCXL144VLH_cm0plus
**                          MCXL144VPJ
**                          MCXL144VPJ_cm0plus
**
**     Version:             rev. 1.0, 2023-01-09
**     Build:               b240705
**
**     Abstract:
**         CMSIS Peripheral Access Layer for PMIC
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
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

#if (defined(CPU_MCXL142VLH) || defined(CPU_MCXL142VPJ))
#include "MCXL142_COMMON.h"
#include "MCXL142_cm0plus_COMMON.h"
#elif (defined(CPU_MCXL143VLH) || defined(CPU_MCXL143VPJ))
#include "MCXL143_COMMON.h"
#include "MCXL143_cm0plus_COMMON.h"
#elif (defined(CPU_MCXL144VLH) || defined(CPU_MCXL144VPJ))
#include "MCXL144_COMMON.h"
#include "MCXL144_cm0plus_COMMON.h"
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
  __IO uint32_t VDD_CORE_1P0_CONFIG;               /**< VDD_CORE_1P0 Configuration, offset: 0x8 */
  __IO uint32_t SNS_VDD_CONFIG;                    /**< SNS VDD Configuration, offset: 0xC */
  __IO uint32_t FRO_CTRL;                          /**< 16KHz FRO Control, offset: 0x10 */
       uint8_t RESERVED_0[64];
  __IO uint32_t VDD_WKUP_WDTC;                     /**< VDD Wakeup Watchdog Time Count, offset: 0x54 */
  __IO uint32_t AWK_UP_TIME;                       /**< Analog Wakeup Time, offset: 0x58 */
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

#define PMIC_PCTRL_HVDL_MASK                     (0x200U)
#define PMIC_PCTRL_HVDL_SHIFT                    (9U)
/*! HVDL - High Voltage Detect Level
 *  0b0..Default
 *  0b1..Safe mode
 */
#define PMIC_PCTRL_HVDL(x)                       (((uint32_t)(((uint32_t)(x)) << PMIC_PCTRL_HVDL_SHIFT)) & PMIC_PCTRL_HVDL_MASK)
/*! @} */

/*! @name VDD_CORE_PCONFIG - VDD Core Power Configuration */
/*! @{ */

#define PMIC_VDD_CORE_PCONFIG_VDD_ACONFIG_MASK   (0x3FU)
#define PMIC_VDD_CORE_PCONFIG_VDD_ACONFIG_SHIFT  (0U)
/*! VDD_ACONFIG - VDD_CORE Active Configuration */
#define PMIC_VDD_CORE_PCONFIG_VDD_ACONFIG(x)     (((uint32_t)(((uint32_t)(x)) << PMIC_VDD_CORE_PCONFIG_VDD_ACONFIG_SHIFT)) & PMIC_VDD_CORE_PCONFIG_VDD_ACONFIG_MASK)

#define PMIC_VDD_CORE_PCONFIG_VDD_DSCONFIG_MASK  (0xFC0U)
#define PMIC_VDD_CORE_PCONFIG_VDD_DSCONFIG_SHIFT (6U)
/*! VDD_DSCONFIG - VDD_CORE Deep Sleep Configuration */
#define PMIC_VDD_CORE_PCONFIG_VDD_DSCONFIG(x)    (((uint32_t)(((uint32_t)(x)) << PMIC_VDD_CORE_PCONFIG_VDD_DSCONFIG_SHIFT)) & PMIC_VDD_CORE_PCONFIG_VDD_DSCONFIG_MASK)
/*! @} */

/*! @name VDD_CORE_1P0_CONFIG - VDD_CORE_1P0 Configuration */
/*! @{ */

#define PMIC_VDD_CORE_1P0_CONFIG_VDD_CORE_1P0_ACONFIG_MASK (0x3FU)
#define PMIC_VDD_CORE_1P0_CONFIG_VDD_CORE_1P0_ACONFIG_SHIFT (0U)
/*! VDD_CORE_1P0_ACONFIG - VDD_CORE_1P0 Active Configuration */
#define PMIC_VDD_CORE_1P0_CONFIG_VDD_CORE_1P0_ACONFIG(x) (((uint32_t)(((uint32_t)(x)) << PMIC_VDD_CORE_1P0_CONFIG_VDD_CORE_1P0_ACONFIG_SHIFT)) & PMIC_VDD_CORE_1P0_CONFIG_VDD_CORE_1P0_ACONFIG_MASK)
/*! @} */

/*! @name SNS_VDD_CONFIG - SNS VDD Configuration */
/*! @{ */

#define PMIC_SNS_VDD_CONFIG_VDDSNS_LDO_CONFIG_MASK (0x3FU)
#define PMIC_SNS_VDD_CONFIG_VDDSNS_LDO_CONFIG_SHIFT (0U)
/*! VDDSNS_LDO_CONFIG - VDDSNS LDO Configuration */
#define PMIC_SNS_VDD_CONFIG_VDDSNS_LDO_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << PMIC_SNS_VDD_CONFIG_VDDSNS_LDO_CONFIG_SHIFT)) & PMIC_SNS_VDD_CONFIG_VDDSNS_LDO_CONFIG_MASK)
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

