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
**         CMSIS Peripheral Access Layer for SMM
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
 * @file SMM.h
 * @version 1.0
 * @date 2023-01-09
 * @brief CMSIS Peripheral Access Layer for SMM
 *
 * CMSIS Peripheral Access Layer for SMM
 */

#if !defined(SMM_H_)
#define SMM_H_                                   /**< Symbol preventing repeated inclusion */

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
   -- SMM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SMM_Peripheral_Access_Layer SMM Peripheral Access Layer
 * @{
 */

/** SMM - Register Layout Typedef */
typedef struct {
  __IO uint32_t CNFG;                              /**< Configuration, offset: 0x0 */
  __IO uint32_t WKUP_MAIN;                         /**< Main CPU wakeup source, offset: 0x4 */
  __IO uint32_t AON_CPU;                           /**< AON CPU wakeup source, offset: 0x8 */
  __I  uint32_t WKUP_STAT;                         /**< Wakeup sources status, offset: 0xC */
  __IO uint32_t STAT;                              /**< Status, offset: 0x10 */
  __IO uint32_t PWDN_CONFIG;                       /**< Power down configuration, offset: 0x14 */
  __IO uint32_t DPSLP_COUNT;                       /**< Deep sleep count, offset: 0x18 */
  __IO uint32_t RTC_DC2DC_CNTRL;                   /**< RTC DC2DC Control, offset: 0x1C */
  __IO uint32_t RTC_XTAL_CONFG1;                   /**< RTC analog XTAL configuration, offset: 0x20 */
  __IO uint32_t RTC_XTAL_CONFG2;                   /**< RTC analog XTAL configuration, offset: 0x24 */
  __I  uint32_t PWR_SWTCH;                         /**< Power switch feedback, offset: 0x28 */
  __IO uint32_t LSB_BCKP1;                         /**< Backup LSB1, offset: 0x2C */
  __IO uint32_t MSB_BCKP1;                         /**< Backup MSB1, offset: 0x30 */
  __IO uint32_t LSB_BCKP2;                         /**< Backup LSB2, offset: 0x34 */
  __IO uint32_t MSB_BCKP2;                         /**< Backup MSB2, offset: 0x38 */
  __IO uint32_t STALL1;                            /**< Stall1, offset: 0x3C */
  __IO uint32_t STALL2;                            /**< Stall2, offset: 0x40 */
  __IO uint32_t RTC_ANLG_XTAL_TST;                 /**< RTC analog XTAL test, offset: 0x44 */
  __IO uint32_t MEMORY_RTN;                        /**< Memory retain, offset: 0x48 */
  __IO uint32_t BIAS_CTRL;                         /**< RTC analog XTAL bias control, offset: 0x4C */
  __IO uint32_t CM0_SEC1;                          /**< Cortex M0+ Security1, offset: 0x50 */
  __IO uint32_t CM0_SEC2;                          /**< Cortex M0+ Security2, offset: 0x54 */
  __IO uint32_t CM0_SEC3;                          /**< Cortex M0+ Security3, offset: 0x58 */
  __IO uint32_t XTAL_TRIM;                         /**< XTAL Trim, offset: 0x5C */
} SMM_Type;

/* ----------------------------------------------------------------------------
   -- SMM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SMM_Register_Masks SMM Register Masks
 * @{
 */

/*! @name CNFG - Configuration */
/*! @{ */

#define SMM_CNFG_EXT_INTP_POL_MASK               (0x1U)
#define SMM_CNFG_EXT_INTP_POL_SHIFT              (0U)
/*! EXT_INTP_POL - External interrupt polarity
 *  0b0..Rising
 *  0b1..Falling
 */
#define SMM_CNFG_EXT_INTP_POL(x)                 (((uint32_t)(((uint32_t)(x)) << SMM_CNFG_EXT_INTP_POL_SHIFT)) & SMM_CNFG_EXT_INTP_POL_MASK)

#define SMM_CNFG_EXT_INTP_MASK_MASK              (0x2U)
#define SMM_CNFG_EXT_INTP_MASK_SHIFT             (1U)
/*! EXT_INTP_MASK - External interrupt mask */
#define SMM_CNFG_EXT_INTP_MASK(x)                (((uint32_t)(((uint32_t)(x)) << SMM_CNFG_EXT_INTP_MASK_SHIFT)) & SMM_CNFG_EXT_INTP_MASK_MASK)

#define SMM_CNFG_DSLP_COUNT_USE_MASK             (0x4U)
#define SMM_CNFG_DSLP_COUNT_USE_SHIFT            (2U)
/*! DSLP_COUNT_USE - DeepSleep counter for use */
#define SMM_CNFG_DSLP_COUNT_USE(x)               (((uint32_t)(((uint32_t)(x)) << SMM_CNFG_DSLP_COUNT_USE_SHIFT)) & SMM_CNFG_DSLP_COUNT_USE_MASK)

#define SMM_CNFG_DSLP_COUNT_STRT_MASK            (0x8U)
#define SMM_CNFG_DSLP_COUNT_STRT_SHIFT           (3U)
/*! DSLP_COUNT_STRT - DeepSleep counter start */
#define SMM_CNFG_DSLP_COUNT_STRT(x)              (((uint32_t)(((uint32_t)(x)) << SMM_CNFG_DSLP_COUNT_STRT_SHIFT)) & SMM_CNFG_DSLP_COUNT_STRT_MASK)

#define SMM_CNFG_DSLP_COUNT_RST_MASK             (0x10U)
#define SMM_CNFG_DSLP_COUNT_RST_SHIFT            (4U)
/*! DSLP_COUNT_RST - DeepSleep counter reset */
#define SMM_CNFG_DSLP_COUNT_RST(x)               (((uint32_t)(((uint32_t)(x)) << SMM_CNFG_DSLP_COUNT_RST_SHIFT)) & SMM_CNFG_DSLP_COUNT_RST_MASK)

#define SMM_CNFG_WTCHDG_USE_INT_MASK             (0x20U)
#define SMM_CNFG_WTCHDG_USE_INT_SHIFT            (5U)
/*! WTCHDG_USE_INT - Watchdog alarm use
 *  0b1..Interrupt to CMo+
 *  0b0..Reset to CMo+
 */
#define SMM_CNFG_WTCHDG_USE_INT(x)               (((uint32_t)(((uint32_t)(x)) << SMM_CNFG_WTCHDG_USE_INT_SHIFT)) & SMM_CNFG_WTCHDG_USE_INT_MASK)

#define SMM_CNFG_MAIN_ISO_DSBL_MASK              (0x40U)
#define SMM_CNFG_MAIN_ISO_DSBL_SHIFT             (6U)
/*! MAIN_ISO_DSBL - Main CPU I/O ISO */
#define SMM_CNFG_MAIN_ISO_DSBL(x)                (((uint32_t)(((uint32_t)(x)) << SMM_CNFG_MAIN_ISO_DSBL_SHIFT)) & SMM_CNFG_MAIN_ISO_DSBL_MASK)

#define SMM_CNFG_AON_ISO_DSBL_MASK               (0x80U)
#define SMM_CNFG_AON_ISO_DSBL_SHIFT              (7U)
/*! AON_ISO_DSBL - AON CPU I/O ISO signals */
#define SMM_CNFG_AON_ISO_DSBL(x)                 (((uint32_t)(((uint32_t)(x)) << SMM_CNFG_AON_ISO_DSBL_SHIFT)) & SMM_CNFG_AON_ISO_DSBL_MASK)
/*! @} */

/*! @name WKUP_MAIN - Main CPU wakeup source */
/*! @{ */

#define SMM_WKUP_MAIN_WKUP_SRC_MAIN_CPU_MASK     (0xFFFU)
#define SMM_WKUP_MAIN_WKUP_SRC_MAIN_CPU_SHIFT    (0U)
/*! WKUP_SRC_MAIN_CPU - Bit selection of the wakeup sources to the main CPU */
#define SMM_WKUP_MAIN_WKUP_SRC_MAIN_CPU(x)       (((uint32_t)(((uint32_t)(x)) << SMM_WKUP_MAIN_WKUP_SRC_MAIN_CPU_SHIFT)) & SMM_WKUP_MAIN_WKUP_SRC_MAIN_CPU_MASK)
/*! @} */

/*! @name AON_CPU - AON CPU wakeup source */
/*! @{ */

#define SMM_AON_CPU_WKUP_SRC_AON_CPU_MASK        (0xFFU)
#define SMM_AON_CPU_WKUP_SRC_AON_CPU_SHIFT       (0U)
/*! WKUP_SRC_AON_CPU - Selections of the wakeup sources to the VFE sub cluster */
#define SMM_AON_CPU_WKUP_SRC_AON_CPU(x)          (((uint32_t)(((uint32_t)(x)) << SMM_AON_CPU_WKUP_SRC_AON_CPU_SHIFT)) & SMM_AON_CPU_WKUP_SRC_AON_CPU_MASK)
/*! @} */

/*! @name WKUP_STAT - Wakeup sources status */
/*! @{ */

#define SMM_WKUP_STAT_WKUP_SRCS_MASK             (0xFFFU)
#define SMM_WKUP_STAT_WKUP_SRCS_SHIFT            (0U)
/*! WKUP_SRCS - Wakeup sources status */
#define SMM_WKUP_STAT_WKUP_SRCS(x)               (((uint32_t)(((uint32_t)(x)) << SMM_WKUP_STAT_WKUP_SRCS_SHIFT)) & SMM_WKUP_STAT_WKUP_SRCS_MASK)
/*! @} */

/*! @name STAT - Status */
/*! @{ */

#define SMM_STAT_DPSLP_END_MASK                  (0x1U)
#define SMM_STAT_DPSLP_END_SHIFT                 (0U)
/*! DPSLP_END - Deep sleep end */
#define SMM_STAT_DPSLP_END(x)                    (((uint32_t)(((uint32_t)(x)) << SMM_STAT_DPSLP_END_SHIFT)) & SMM_STAT_DPSLP_END_MASK)

#define SMM_STAT_DPSLP_STATE_MASK                (0xEU)
#define SMM_STAT_DPSLP_STATE_SHIFT               (1U)
/*! DPSLP_STATE - Deep sleep state
 *  0b000..All on
 *  0b001..DS0
 *  0b010..DS1
 *  0b100..DS2
 *  0b101..DS3
 *  0b110..Shutdown
 */
#define SMM_STAT_DPSLP_STATE(x)                  (((uint32_t)(((uint32_t)(x)) << SMM_STAT_DPSLP_STATE_SHIFT)) & SMM_STAT_DPSLP_STATE_MASK)

#define SMM_STAT_EXT_INT_A_MASK                  (0x10U)
#define SMM_STAT_EXT_INT_A_SHIFT                 (4U)
/*! EXT_INT_A - External interrupt active */
#define SMM_STAT_EXT_INT_A(x)                    (((uint32_t)(((uint32_t)(x)) << SMM_STAT_EXT_INT_A_SHIFT)) & SMM_STAT_EXT_INT_A_MASK)

#define SMM_STAT_COMP_MATCH_MASK                 (0x20U)
#define SMM_STAT_COMP_MATCH_SHIFT                (5U)
/*! COMP_MATCH - Comparator match */
#define SMM_STAT_COMP_MATCH(x)                   (((uint32_t)(((uint32_t)(x)) << SMM_STAT_COMP_MATCH_SHIFT)) & SMM_STAT_COMP_MATCH_MASK)

#define SMM_STAT_DPSLP_CNTR_M_MASK               (0x40U)
#define SMM_STAT_DPSLP_CNTR_M_SHIFT              (6U)
/*! DPSLP_CNTR_M - DeepSleep counter match */
#define SMM_STAT_DPSLP_CNTR_M(x)                 (((uint32_t)(((uint32_t)(x)) << SMM_STAT_DPSLP_CNTR_M_SHIFT)) & SMM_STAT_DPSLP_CNTR_M_MASK)

#define SMM_STAT_DPSLP_SEQ_END_MASK              (0x80U)
#define SMM_STAT_DPSLP_SEQ_END_SHIFT             (7U)
/*! DPSLP_SEQ_END - DeepSleep sequence end */
#define SMM_STAT_DPSLP_SEQ_END(x)                (((uint32_t)(((uint32_t)(x)) << SMM_STAT_DPSLP_SEQ_END_SHIFT)) & SMM_STAT_DPSLP_SEQ_END_MASK)

#define SMM_STAT_COMP_MATCH_IE_EN_MASK           (0x100U)
#define SMM_STAT_COMP_MATCH_IE_EN_SHIFT          (8U)
/*! COMP_MATCH_IE_EN - Comparator match enable */
#define SMM_STAT_COMP_MATCH_IE_EN(x)             (((uint32_t)(((uint32_t)(x)) << SMM_STAT_COMP_MATCH_IE_EN_SHIFT)) & SMM_STAT_COMP_MATCH_IE_EN_MASK)

#define SMM_STAT_DPSLP_CNTR_IE_EN_MASK           (0x200U)
#define SMM_STAT_DPSLP_CNTR_IE_EN_SHIFT          (9U)
/*! DPSLP_CNTR_IE_EN - DeepSleep counter enable */
#define SMM_STAT_DPSLP_CNTR_IE_EN(x)             (((uint32_t)(((uint32_t)(x)) << SMM_STAT_DPSLP_CNTR_IE_EN_SHIFT)) & SMM_STAT_DPSLP_CNTR_IE_EN_MASK)

#define SMM_STAT_RST_B_WKP_MASK                  (0x400U)
#define SMM_STAT_RST_B_WKP_SHIFT                 (10U)
/*! RST_B_WKP - RESET_B Wakeup */
#define SMM_STAT_RST_B_WKP(x)                    (((uint32_t)(((uint32_t)(x)) << SMM_STAT_RST_B_WKP_SHIFT)) & SMM_STAT_RST_B_WKP_MASK)

#define SMM_STAT_STATE_DEV_MASK                  (0x800U)
#define SMM_STAT_STATE_DEV_SHIFT                 (11U)
/*! STATE_DEV - Development state
 *  0b0..The chip is at any other state
 *  0b1..The chip is in development state
 */
#define SMM_STAT_STATE_DEV(x)                    (((uint32_t)(((uint32_t)(x)) << SMM_STAT_STATE_DEV_SHIFT)) & SMM_STAT_STATE_DEV_MASK)
/*! @} */

/*! @name PWDN_CONFIG - Power down configuration */
/*! @{ */

#define SMM_PWDN_CONFIG_DPSLP_STRT_MASK          (0x1U)
#define SMM_PWDN_CONFIG_DPSLP_STRT_SHIFT         (0U)
/*! DPSLP_STRT - Deep sleep start */
#define SMM_PWDN_CONFIG_DPSLP_STRT(x)            (((uint32_t)(((uint32_t)(x)) << SMM_PWDN_CONFIG_DPSLP_STRT_SHIFT)) & SMM_PWDN_CONFIG_DPSLP_STRT_MASK)

#define SMM_PWDN_CONFIG_DPSLP1_VDD_SRC_MASK      (0x6U)
#define SMM_PWDN_CONFIG_DPSLP1_VDD_SRC_SHIFT     (1U)
/*! DPSLP1_VDD_SRC - Deep sleep VDD power supply
 *  0b00..DeepSleep off
 *  0b01..DS1 shutdown VDD DC2DC
 *  0b10..DS1 keep VDD DC2DC
 *  0b11..NA
 */
#define SMM_PWDN_CONFIG_DPSLP1_VDD_SRC(x)        (((uint32_t)(((uint32_t)(x)) << SMM_PWDN_CONFIG_DPSLP1_VDD_SRC_SHIFT)) & SMM_PWDN_CONFIG_DPSLP1_VDD_SRC_MASK)

#define SMM_PWDN_CONFIG_DPSLP2_VDD_SRC_MASK      (0x18U)
#define SMM_PWDN_CONFIG_DPSLP2_VDD_SRC_SHIFT     (3U)
/*! DPSLP2_VDD_SRC - Deep sleep VDD power supply
 *  0b00..DeepSleep off
 *  0b01..DS2 shutdown VDD DC2DC
 *  0b10..DS2 keep VDD DC2DC
 *  0b11..NA
 */
#define SMM_PWDN_CONFIG_DPSLP2_VDD_SRC(x)        (((uint32_t)(((uint32_t)(x)) << SMM_PWDN_CONFIG_DPSLP2_VDD_SRC_SHIFT)) & SMM_PWDN_CONFIG_DPSLP2_VDD_SRC_MASK)

#define SMM_PWDN_CONFIG_PWDN_SHTDWN_MASK         (0x20U)
#define SMM_PWDN_CONFIG_PWDN_SHTDWN_SHIFT        (5U)
/*! PWDN_SHTDWN - Powerdown shutdown */
#define SMM_PWDN_CONFIG_PWDN_SHTDWN(x)           (((uint32_t)(((uint32_t)(x)) << SMM_PWDN_CONFIG_PWDN_SHTDWN_SHIFT)) & SMM_PWDN_CONFIG_PWDN_SHTDWN_MASK)

#define SMM_PWDN_CONFIG_PWDN_AON_MASK            (0x40U)
#define SMM_PWDN_CONFIG_PWDN_AON_SHIFT           (6U)
/*! PWDN_AON - Powerdown AON */
#define SMM_PWDN_CONFIG_PWDN_AON(x)              (((uint32_t)(((uint32_t)(x)) << SMM_PWDN_CONFIG_PWDN_AON_SHIFT)) & SMM_PWDN_CONFIG_PWDN_AON_MASK)

#define SMM_PWDN_CONFIG_DS_ABRT_MASK             (0x80U)
#define SMM_PWDN_CONFIG_DS_ABRT_SHIFT            (7U)
/*! DS_ABRT - Abort DS */
#define SMM_PWDN_CONFIG_DS_ABRT(x)               (((uint32_t)(((uint32_t)(x)) << SMM_PWDN_CONFIG_DS_ABRT_SHIFT)) & SMM_PWDN_CONFIG_DS_ABRT_MASK)

#define SMM_PWDN_CONFIG_AON_DPSLP_SL_CLK_MASK    (0x200U)
#define SMM_PWDN_CONFIG_AON_DPSLP_SL_CLK_SHIFT   (9U)
/*! AON_DPSLP_SL_CLK - AON DeepSleep slow clock
 *  0b0..Move to 32KHz at DS2
 *  0b1..Remain at AON_CLK at DS2
 */
#define SMM_PWDN_CONFIG_AON_DPSLP_SL_CLK(x)      (((uint32_t)(((uint32_t)(x)) << SMM_PWDN_CONFIG_AON_DPSLP_SL_CLK_SHIFT)) & SMM_PWDN_CONFIG_AON_DPSLP_SL_CLK_MASK)

#define SMM_PWDN_CONFIG_WKUP_DS1_CPU_M_MASK      (0x400U)
#define SMM_PWDN_CONFIG_WKUP_DS1_CPU_M_SHIFT     (10U)
/*! WKUP_DS1_CPU_M - Wakeup main CPU from DS1 */
#define SMM_PWDN_CONFIG_WKUP_DS1_CPU_M(x)        (((uint32_t)(((uint32_t)(x)) << SMM_PWDN_CONFIG_WKUP_DS1_CPU_M_SHIFT)) & SMM_PWDN_CONFIG_WKUP_DS1_CPU_M_MASK)

#define SMM_PWDN_CONFIG_MAIN_SRAM_DSBL_MASK      (0x800U)
#define SMM_PWDN_CONFIG_MAIN_SRAM_DSBL_SHIFT     (11U)
/*! MAIN_SRAM_DSBL - TSMC SRAM DISABLE */
#define SMM_PWDN_CONFIG_MAIN_SRAM_DSBL(x)        (((uint32_t)(((uint32_t)(x)) << SMM_PWDN_CONFIG_MAIN_SRAM_DSBL_SHIFT)) & SMM_PWDN_CONFIG_MAIN_SRAM_DSBL_MASK)

#define SMM_PWDN_CONFIG_SEC_SRAM_DSBL_MASK       (0x1000U)
#define SMM_PWDN_CONFIG_SEC_SRAM_DSBL_SHIFT      (12U)
/*! SEC_SRAM_DSBL - PLS SRAM DISABLE */
#define SMM_PWDN_CONFIG_SEC_SRAM_DSBL(x)         (((uint32_t)(((uint32_t)(x)) << SMM_PWDN_CONFIG_SEC_SRAM_DSBL_SHIFT)) & SMM_PWDN_CONFIG_SEC_SRAM_DSBL_MASK)
/*! @} */

/*! @name DPSLP_COUNT - Deep sleep count */
/*! @{ */

#define SMM_DPSLP_COUNT_DPSLP_CNT_MASK           (0xFFFFU)
#define SMM_DPSLP_COUNT_DPSLP_CNT_SHIFT          (0U)
/*! DPSLP_CNT - Deep sleep count */
#define SMM_DPSLP_COUNT_DPSLP_CNT(x)             (((uint32_t)(((uint32_t)(x)) << SMM_DPSLP_COUNT_DPSLP_CNT_SHIFT)) & SMM_DPSLP_COUNT_DPSLP_CNT_MASK)
/*! @} */

/*! @name RTC_DC2DC_CNTRL - RTC DC2DC Control */
/*! @{ */

#define SMM_RTC_DC2DC_CNTRL_CAP_DIV_RATIO_MASK   (0xFU)
#define SMM_RTC_DC2DC_CNTRL_CAP_DIV_RATIO_SHIFT  (0U)
/*! CAP_DIV_RATIO - Capacitor division ratio
 *  0b1111..2
 *  0b1110..3
 *  0b1100..4
 *  0b1000..5
 *  0b0000..6
 */
#define SMM_RTC_DC2DC_CNTRL_CAP_DIV_RATIO(x)     (((uint32_t)(((uint32_t)(x)) << SMM_RTC_DC2DC_CNTRL_CAP_DIV_RATIO_SHIFT)) & SMM_RTC_DC2DC_CNTRL_CAP_DIV_RATIO_MASK)

#define SMM_RTC_DC2DC_CNTRL_CLK_ALV_CHK_EN_MASK  (0x10U)
#define SMM_RTC_DC2DC_CNTRL_CLK_ALV_CHK_EN_SHIFT (4U)
/*! CLK_ALV_CHK_EN - Alive detector enable */
#define SMM_RTC_DC2DC_CNTRL_CLK_ALV_CHK_EN(x)    (((uint32_t)(((uint32_t)(x)) << SMM_RTC_DC2DC_CNTRL_CLK_ALV_CHK_EN_SHIFT)) & SMM_RTC_DC2DC_CNTRL_CLK_ALV_CHK_EN_MASK)

#define SMM_RTC_DC2DC_CNTRL_DC2DC_EN_MASK        (0x20U)
#define SMM_RTC_DC2DC_CNTRL_DC2DC_EN_SHIFT       (5U)
/*! DC2DC_EN - DC2DC enable */
#define SMM_RTC_DC2DC_CNTRL_DC2DC_EN(x)          (((uint32_t)(((uint32_t)(x)) << SMM_RTC_DC2DC_CNTRL_DC2DC_EN_SHIFT)) & SMM_RTC_DC2DC_CNTRL_DC2DC_EN_MASK)

#define SMM_RTC_DC2DC_CNTRL_ALV_BYPASS_MASK      (0x40U)
#define SMM_RTC_DC2DC_CNTRL_ALV_BYPASS_SHIFT     (6U)
/*! ALV_BYPASS - RTC alive bypass */
#define SMM_RTC_DC2DC_CNTRL_ALV_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << SMM_RTC_DC2DC_CNTRL_ALV_BYPASS_SHIFT)) & SMM_RTC_DC2DC_CNTRL_ALV_BYPASS_MASK)

#define SMM_RTC_DC2DC_CNTRL_ANA_RESET_N_MASK     (0x80U)
#define SMM_RTC_DC2DC_CNTRL_ANA_RESET_N_SHIFT    (7U)
/*! ANA_RESET_N - RTC analog reset */
#define SMM_RTC_DC2DC_CNTRL_ANA_RESET_N(x)       (((uint32_t)(((uint32_t)(x)) << SMM_RTC_DC2DC_CNTRL_ANA_RESET_N_SHIFT)) & SMM_RTC_DC2DC_CNTRL_ANA_RESET_N_MASK)

#define SMM_RTC_DC2DC_CNTRL_DGTL_RST_N_MASK      (0x100U)
#define SMM_RTC_DC2DC_CNTRL_DGTL_RST_N_SHIFT     (8U)
/*! DGTL_RST_N - RTC digital block reset */
#define SMM_RTC_DC2DC_CNTRL_DGTL_RST_N(x)        (((uint32_t)(((uint32_t)(x)) << SMM_RTC_DC2DC_CNTRL_DGTL_RST_N_SHIFT)) & SMM_RTC_DC2DC_CNTRL_DGTL_RST_N_MASK)

#define SMM_RTC_DC2DC_CNTRL_ISO_MASK             (0x200U)
#define SMM_RTC_DC2DC_CNTRL_ISO_SHIFT            (9U)
/*! ISO - RTC ISO signal */
#define SMM_RTC_DC2DC_CNTRL_ISO(x)               (((uint32_t)(((uint32_t)(x)) << SMM_RTC_DC2DC_CNTRL_ISO_SHIFT)) & SMM_RTC_DC2DC_CNTRL_ISO_MASK)

#define SMM_RTC_DC2DC_CNTRL_STOP_DIG_CLK_MASK    (0x400U)
#define SMM_RTC_DC2DC_CNTRL_STOP_DIG_CLK_SHIFT   (10U)
/*! STOP_DIG_CLK - Stop digital clock */
#define SMM_RTC_DC2DC_CNTRL_STOP_DIG_CLK(x)      (((uint32_t)(((uint32_t)(x)) << SMM_RTC_DC2DC_CNTRL_STOP_DIG_CLK_SHIFT)) & SMM_RTC_DC2DC_CNTRL_STOP_DIG_CLK_MASK)

#define SMM_RTC_DC2DC_CNTRL_DC2DC_START_PULSE_MASK (0x800U)
#define SMM_RTC_DC2DC_CNTRL_DC2DC_START_PULSE_SHIFT (11U)
/*! DC2DC_START_PULSE - DC2DC start pulse */
#define SMM_RTC_DC2DC_CNTRL_DC2DC_START_PULSE(x) (((uint32_t)(((uint32_t)(x)) << SMM_RTC_DC2DC_CNTRL_DC2DC_START_PULSE_SHIFT)) & SMM_RTC_DC2DC_CNTRL_DC2DC_START_PULSE_MASK)

#define SMM_RTC_DC2DC_CNTRL_VDDRTC_TST_BFR_EN_MASK (0x1000U)
#define SMM_RTC_DC2DC_CNTRL_VDDRTC_TST_BFR_EN_SHIFT (12U)
/*! VDDRTC_TST_BFR_EN - VDDRTC test buffer enable */
#define SMM_RTC_DC2DC_CNTRL_VDDRTC_TST_BFR_EN(x) (((uint32_t)(((uint32_t)(x)) << SMM_RTC_DC2DC_CNTRL_VDDRTC_TST_BFR_EN_SHIFT)) & SMM_RTC_DC2DC_CNTRL_VDDRTC_TST_BFR_EN_MASK)

#define SMM_RTC_DC2DC_CNTRL_TST_DIG_OUT_MASK     (0x2000U)
#define SMM_RTC_DC2DC_CNTRL_TST_DIG_OUT_SHIFT    (13U)
/*! TST_DIG_OUT - Select test digital output
 *  0b0..Test signals from OSC
 */
#define SMM_RTC_DC2DC_CNTRL_TST_DIG_OUT(x)       (((uint32_t)(((uint32_t)(x)) << SMM_RTC_DC2DC_CNTRL_TST_DIG_OUT_SHIFT)) & SMM_RTC_DC2DC_CNTRL_TST_DIG_OUT_MASK)

#define SMM_RTC_DC2DC_CNTRL_XTAL_FAIL_RESET_EN_MASK (0x4000U)
#define SMM_RTC_DC2DC_CNTRL_XTAL_FAIL_RESET_EN_SHIFT (14U)
/*! XTAL_FAIL_RESET_EN - Enable to reset all chip */
#define SMM_RTC_DC2DC_CNTRL_XTAL_FAIL_RESET_EN(x) (((uint32_t)(((uint32_t)(x)) << SMM_RTC_DC2DC_CNTRL_XTAL_FAIL_RESET_EN_SHIFT)) & SMM_RTC_DC2DC_CNTRL_XTAL_FAIL_RESET_EN_MASK)
/*! @} */

/*! @name RTC_XTAL_CONFG1 - RTC analog XTAL configuration */
/*! @{ */

#define SMM_RTC_XTAL_CONFG1_XTAL_EN_MASK         (0x1U)
#define SMM_RTC_XTAL_CONFG1_XTAL_EN_SHIFT        (0U)
/*! XTAL_EN - XTAL enable */
#define SMM_RTC_XTAL_CONFG1_XTAL_EN(x)           (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG1_XTAL_EN_SHIFT)) & SMM_RTC_XTAL_CONFG1_XTAL_EN_MASK)

#define SMM_RTC_XTAL_CONFG1_AMPSEL_MASK          (0x6U)
#define SMM_RTC_XTAL_CONFG1_AMPSEL_SHIFT         (1U)
/*! AMPSEL - XTAL AMPSEL */
#define SMM_RTC_XTAL_CONFG1_AMPSEL(x)            (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG1_AMPSEL_SHIFT)) & SMM_RTC_XTAL_CONFG1_AMPSEL_MASK)

#define SMM_RTC_XTAL_CONFG1_CB_XI_MASK           (0x78U)
#define SMM_RTC_XTAL_CONFG1_CB_XI_SHIFT          (3U)
/*! CB_XI - Capacitance on XI or XTAL pin */
#define SMM_RTC_XTAL_CONFG1_CB_XI(x)             (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG1_CB_XI_SHIFT)) & SMM_RTC_XTAL_CONFG1_CB_XI_MASK)

#define SMM_RTC_XTAL_CONFG1_CB_XO_MASK           (0x780U)
#define SMM_RTC_XTAL_CONFG1_CB_XO_SHIFT          (7U)
/*! CB_XO - Capacitance on XO or XTAL pin */
#define SMM_RTC_XTAL_CONFG1_CB_XO(x)             (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG1_CB_XO_SHIFT)) & SMM_RTC_XTAL_CONFG1_CB_XO_MASK)

#define SMM_RTC_XTAL_CONFG1_CMP_IBIAS_SOX_MASK   (0x3800U)
#define SMM_RTC_XTAL_CONFG1_CMP_IBIAS_SOX_SHIFT  (11U)
/*! CMP_IBIAS_SOX - XTAL CMP IBIAS SOX */
#define SMM_RTC_XTAL_CONFG1_CMP_IBIAS_SOX(x)     (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG1_CMP_IBIAS_SOX_SHIFT)) & SMM_RTC_XTAL_CONFG1_CMP_IBIAS_SOX_MASK)
/*! @} */

/*! @name RTC_XTAL_CONFG2 - RTC analog XTAL configuration */
/*! @{ */

#define SMM_RTC_XTAL_CONFG2_DLY_IBIAS_SOX_MASK   (0xFU)
#define SMM_RTC_XTAL_CONFG2_DLY_IBIAS_SOX_SHIFT  (0U)
/*! DLY_IBIAS_SOX - DLY IBIAS SOX */
#define SMM_RTC_XTAL_CONFG2_DLY_IBIAS_SOX(x)     (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG2_DLY_IBIAS_SOX_SHIFT)) & SMM_RTC_XTAL_CONFG2_DLY_IBIAS_SOX_MASK)

#define SMM_RTC_XTAL_CONFG2_CAP_BNK_EN_MASK      (0x10U)
#define SMM_RTC_XTAL_CONFG2_CAP_BNK_EN_SHIFT     (4U)
/*! CAP_BNK_EN - XTAL AMPSEL */
#define SMM_RTC_XTAL_CONFG2_CAP_BNK_EN(x)        (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG2_CAP_BNK_EN_SHIFT)) & SMM_RTC_XTAL_CONFG2_CAP_BNK_EN_MASK)

#define SMM_RTC_XTAL_CONFG2_SOX_EN_MASK          (0x20U)
#define SMM_RTC_XTAL_CONFG2_SOX_EN_SHIFT         (5U)
/*! SOX_EN - Switching mode control enable */
#define SMM_RTC_XTAL_CONFG2_SOX_EN(x)            (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG2_SOX_EN_SHIFT)) & SMM_RTC_XTAL_CONFG2_SOX_EN_MASK)

#define SMM_RTC_XTAL_CONFG2_GMSEL_MASK           (0xC0U)
#define SMM_RTC_XTAL_CONFG2_GMSEL_SHIFT          (6U)
/*! GMSEL - Selects the GM setting */
#define SMM_RTC_XTAL_CONFG2_GMSEL(x)             (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG2_GMSEL_SHIFT)) & SMM_RTC_XTAL_CONFG2_GMSEL_MASK)

#define SMM_RTC_XTAL_CONFG2_HYSTEL_MASK          (0x100U)
#define SMM_RTC_XTAL_CONFG2_HYSTEL_SHIFT         (8U)
/*! HYSTEL - Hysteresis value for Schmitt trigger */
#define SMM_RTC_XTAL_CONFG2_HYSTEL(x)            (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG2_HYSTEL_SHIFT)) & SMM_RTC_XTAL_CONFG2_HYSTEL_MASK)

#define SMM_RTC_XTAL_CONFG2_SUPDET_TM_SOX_MASK   (0x600U)
#define SMM_RTC_XTAL_CONFG2_SUPDET_TM_SOX_SHIFT  (9U)
/*! SUPDET_TM_SOX - SUPDET TM SOX */
#define SMM_RTC_XTAL_CONFG2_SUPDET_TM_SOX(x)     (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG2_SUPDET_TM_SOX_SHIFT)) & SMM_RTC_XTAL_CONFG2_SUPDET_TM_SOX_MASK)

#define SMM_RTC_XTAL_CONFG2_XTM_MASK             (0x800U)
#define SMM_RTC_XTAL_CONFG2_XTM_SHIFT            (11U)
/*! XTM - XTM */
#define SMM_RTC_XTAL_CONFG2_XTM(x)               (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG2_XTM_SHIFT)) & SMM_RTC_XTAL_CONFG2_XTM_MASK)

#define SMM_RTC_XTAL_CONFG2_DLY_CAP_SOX_MASK     (0x7000U)
#define SMM_RTC_XTAL_CONFG2_DLY_CAP_SOX_SHIFT    (12U)
/*! DLY_CAP_SOX - DLY CAP SOX */
#define SMM_RTC_XTAL_CONFG2_DLY_CAP_SOX(x)       (((uint32_t)(((uint32_t)(x)) << SMM_RTC_XTAL_CONFG2_DLY_CAP_SOX_SHIFT)) & SMM_RTC_XTAL_CONFG2_DLY_CAP_SOX_MASK)
/*! @} */

/*! @name PWR_SWTCH - Power switch feedback */
/*! @{ */

#define SMM_PWR_SWTCH_MAIN_CPU_MASK              (0x1U)
#define SMM_PWR_SWTCH_MAIN_CPU_SHIFT             (0U)
/*! MAIN_CPU - Main CPU */
#define SMM_PWR_SWTCH_MAIN_CPU(x)                (((uint32_t)(((uint32_t)(x)) << SMM_PWR_SWTCH_MAIN_CPU_SHIFT)) & SMM_PWR_SWTCH_MAIN_CPU_MASK)

#define SMM_PWR_SWTCH_AON_CPU_MASK               (0x2U)
#define SMM_PWR_SWTCH_AON_CPU_SHIFT              (1U)
/*! AON_CPU - AON CPU */
#define SMM_PWR_SWTCH_AON_CPU(x)                 (((uint32_t)(((uint32_t)(x)) << SMM_PWR_SWTCH_AON_CPU_SHIFT)) & SMM_PWR_SWTCH_AON_CPU_MASK)

#define SMM_PWR_SWTCH_FLSH_VDD09_MASK            (0x4U)
#define SMM_PWR_SWTCH_FLSH_VDD09_SHIFT           (2U)
/*! FLSH_VDD09 - FlashVDD09 */
#define SMM_PWR_SWTCH_FLSH_VDD09(x)              (((uint32_t)(((uint32_t)(x)) << SMM_PWR_SWTCH_FLSH_VDD09_SHIFT)) & SMM_PWR_SWTCH_FLSH_VDD09_MASK)
/*! @} */

/*! @name LSB_BCKP1 - Backup LSB1 */
/*! @{ */

#define SMM_LSB_BCKP1_LSB1_MASK                  (0xFFFFU)
#define SMM_LSB_BCKP1_LSB1_SHIFT                 (0U)
/*! LSB1 - LSB1 */
#define SMM_LSB_BCKP1_LSB1(x)                    (((uint32_t)(((uint32_t)(x)) << SMM_LSB_BCKP1_LSB1_SHIFT)) & SMM_LSB_BCKP1_LSB1_MASK)
/*! @} */

/*! @name MSB_BCKP1 - Backup MSB1 */
/*! @{ */

#define SMM_MSB_BCKP1_MSB1_MASK                  (0xFFFFU)
#define SMM_MSB_BCKP1_MSB1_SHIFT                 (0U)
/*! MSB1 - MSB1 */
#define SMM_MSB_BCKP1_MSB1(x)                    (((uint32_t)(((uint32_t)(x)) << SMM_MSB_BCKP1_MSB1_SHIFT)) & SMM_MSB_BCKP1_MSB1_MASK)
/*! @} */

/*! @name LSB_BCKP2 - Backup LSB2 */
/*! @{ */

#define SMM_LSB_BCKP2_LSB2_MASK                  (0xFFFFU)
#define SMM_LSB_BCKP2_LSB2_SHIFT                 (0U)
/*! LSB2 - LSB2 */
#define SMM_LSB_BCKP2_LSB2(x)                    (((uint32_t)(((uint32_t)(x)) << SMM_LSB_BCKP2_LSB2_SHIFT)) & SMM_LSB_BCKP2_LSB2_MASK)
/*! @} */

/*! @name MSB_BCKP2 - Backup MSB2 */
/*! @{ */

#define SMM_MSB_BCKP2_MSB2_MASK                  (0xFFFFU)
#define SMM_MSB_BCKP2_MSB2_SHIFT                 (0U)
/*! MSB2 - MSB2 */
#define SMM_MSB_BCKP2_MSB2(x)                    (((uint32_t)(((uint32_t)(x)) << SMM_MSB_BCKP2_MSB2_SHIFT)) & SMM_MSB_BCKP2_MSB2_MASK)
/*! @} */

/*! @name STALL1 - Stall1 */
/*! @{ */

#define SMM_STALL1_STALL_SHRT_MASK               (0xFU)
#define SMM_STALL1_STALL_SHRT_SHIFT              (0U)
/*! STALL_SHRT - Short stall */
#define SMM_STALL1_STALL_SHRT(x)                 (((uint32_t)(((uint32_t)(x)) << SMM_STALL1_STALL_SHRT_SHIFT)) & SMM_STALL1_STALL_SHRT_MASK)

#define SMM_STALL1_STALL_MID_MASK                (0xFF0U)
#define SMM_STALL1_STALL_MID_SHIFT               (4U)
/*! STALL_MID - Mid stall */
#define SMM_STALL1_STALL_MID(x)                  (((uint32_t)(((uint32_t)(x)) << SMM_STALL1_STALL_MID_SHIFT)) & SMM_STALL1_STALL_MID_MASK)
/*! @} */

/*! @name STALL2 - Stall2 */
/*! @{ */

#define SMM_STALL2_STALL_LNG_MASK                (0xFFFFU)
#define SMM_STALL2_STALL_LNG_SHIFT               (0U)
/*! STALL_LNG - Long stall */
#define SMM_STALL2_STALL_LNG(x)                  (((uint32_t)(((uint32_t)(x)) << SMM_STALL2_STALL_LNG_SHIFT)) & SMM_STALL2_STALL_LNG_MASK)
/*! @} */

/*! @name RTC_ANLG_XTAL_TST - RTC analog XTAL test */
/*! @{ */

#define SMM_RTC_ANLG_XTAL_TST_XTAL_TST_MASK      (0x1FU)
#define SMM_RTC_ANLG_XTAL_TST_XTAL_TST_SHIFT     (0U)
/*! XTAL_TST - XTAL test */
#define SMM_RTC_ANLG_XTAL_TST_XTAL_TST(x)        (((uint32_t)(((uint32_t)(x)) << SMM_RTC_ANLG_XTAL_TST_XTAL_TST_SHIFT)) & SMM_RTC_ANLG_XTAL_TST_XTAL_TST_MASK)

#define SMM_RTC_ANLG_XTAL_TST_SCR_TST_MASK       (0x1E0U)
#define SMM_RTC_ANLG_XTAL_TST_SCR_TST_SHIFT      (5U)
/*! SCR_TST - SCR test */
#define SMM_RTC_ANLG_XTAL_TST_SCR_TST(x)         (((uint32_t)(((uint32_t)(x)) << SMM_RTC_ANLG_XTAL_TST_SCR_TST_SHIFT)) & SMM_RTC_ANLG_XTAL_TST_SCR_TST_MASK)

#define SMM_RTC_ANLG_XTAL_TST_XTAL_SPARE_MASK    (0xFE00U)
#define SMM_RTC_ANLG_XTAL_TST_XTAL_SPARE_SHIFT   (9U)
/*! XTAL_SPARE - XTAL spare */
#define SMM_RTC_ANLG_XTAL_TST_XTAL_SPARE(x)      (((uint32_t)(((uint32_t)(x)) << SMM_RTC_ANLG_XTAL_TST_XTAL_SPARE_SHIFT)) & SMM_RTC_ANLG_XTAL_TST_XTAL_SPARE_MASK)
/*! @} */

/*! @name MEMORY_RTN - Memory retain */
/*! @{ */

#define SMM_MEMORY_RTN_RETAIN_EN_MASK            (0x1U)
#define SMM_MEMORY_RTN_RETAIN_EN_SHIFT           (0U)
/*! RETAIN_EN - Retain enable */
#define SMM_MEMORY_RTN_RETAIN_EN(x)              (((uint32_t)(((uint32_t)(x)) << SMM_MEMORY_RTN_RETAIN_EN_SHIFT)) & SMM_MEMORY_RTN_RETAIN_EN_MASK)

#define SMM_MEMORY_RTN_MAIN_CPU_SRAM_RET_MASK    (0x1EU)
#define SMM_MEMORY_RTN_MAIN_CPU_SRAM_RET_SHIFT   (1U)
/*! MAIN_CPU_SRAM_RET - SRAM retain
 *  0b0001..X0 array
 *  0b0010..X1 array
 *  0b0011..X0 and X1 array
 *  0b0100..A1 array
 *  0b0101..X0 and A0 array
 *  0b0110..X1 and A0 array
 *  0b0111..X0, X1, and A0 array
 *  0b1000..A1 array
 *  0b1001..X0 and A1 array
 *  0b1010..X1 and A1 array
 *  0b1011..X0, X1, and A1 array
 *  0b1100..A0 and A1 array
 *  0b1101..X0, A0, and A1 array
 *  0b1110..X1, A0, and A1 array
 *  0b1111..X0, X1, A0, and A1 array
 */
#define SMM_MEMORY_RTN_MAIN_CPU_SRAM_RET(x)      (((uint32_t)(((uint32_t)(x)) << SMM_MEMORY_RTN_MAIN_CPU_SRAM_RET_SHIFT)) & SMM_MEMORY_RTN_MAIN_CPU_SRAM_RET_MASK)

#define SMM_MEMORY_RTN_MAIN_CPU_SEC_SRAM_RET_MASK (0x3E0U)
#define SMM_MEMORY_RTN_MAIN_CPU_SEC_SRAM_RET_SHIFT (5U)
/*! MAIN_CPU_SEC_SRAM_RET - Cortex - M33 core PLS SRAM retain
 *  0b00001..X1 array
 *  0b00010..A0 array
 *  0b00011..X1 and A0 array
 *  0b00100..A1 array
 *  0b00101..X1 and A1 array
 *  0b00110..A0 and A1 array
 *  0b00111..X1, A0, and A1 array
 */
#define SMM_MEMORY_RTN_MAIN_CPU_SEC_SRAM_RET(x)  (((uint32_t)(((uint32_t)(x)) << SMM_MEMORY_RTN_MAIN_CPU_SEC_SRAM_RET_SHIFT)) & SMM_MEMORY_RTN_MAIN_CPU_SEC_SRAM_RET_MASK)
/*! @} */

/*! @name BIAS_CTRL - RTC analog XTAL bias control */
/*! @{ */

#define SMM_BIAS_CTRL_BIAS_EN_MASK               (0x1U)
#define SMM_BIAS_CTRL_BIAS_EN_SHIFT              (0U)
/*! BIAS_EN - Enable XTAL bias block */
#define SMM_BIAS_CTRL_BIAS_EN(x)                 (((uint32_t)(((uint32_t)(x)) << SMM_BIAS_CTRL_BIAS_EN_SHIFT)) & SMM_BIAS_CTRL_BIAS_EN_MASK)

#define SMM_BIAS_CTRL_SPARE_MASK                 (0x2U)
#define SMM_BIAS_CTRL_SPARE_SHIFT                (1U)
/*! SPARE - Spare */
#define SMM_BIAS_CTRL_SPARE(x)                   (((uint32_t)(((uint32_t)(x)) << SMM_BIAS_CTRL_SPARE_SHIFT)) & SMM_BIAS_CTRL_SPARE_MASK)

#define SMM_BIAS_CTRL_COARSE_MASK                (0x3CU)
#define SMM_BIAS_CTRL_COARSE_SHIFT               (2U)
/*! COARSE - Coarse value */
#define SMM_BIAS_CTRL_COARSE(x)                  (((uint32_t)(((uint32_t)(x)) << SMM_BIAS_CTRL_COARSE_SHIFT)) & SMM_BIAS_CTRL_COARSE_MASK)

#define SMM_BIAS_CTRL_FINE_MASK                  (0x3C0U)
#define SMM_BIAS_CTRL_FINE_SHIFT                 (6U)
/*! FINE - Fine value */
#define SMM_BIAS_CTRL_FINE(x)                    (((uint32_t)(((uint32_t)(x)) << SMM_BIAS_CTRL_FINE_SHIFT)) & SMM_BIAS_CTRL_FINE_MASK)
/*! @} */

/*! @name CM0_SEC1 - Cortex M0+ Security1 */
/*! @{ */

#define SMM_CM0_SEC1_SEC1_EN_MASK                (0xFU)
#define SMM_CM0_SEC1_SEC1_EN_SHIFT               (0U)
/*! SEC1_EN - Security1 enable */
#define SMM_CM0_SEC1_SEC1_EN(x)                  (((uint32_t)(((uint32_t)(x)) << SMM_CM0_SEC1_SEC1_EN_SHIFT)) & SMM_CM0_SEC1_SEC1_EN_MASK)
/*! @} */

/*! @name CM0_SEC2 - Cortex M0+ Security2 */
/*! @{ */

#define SMM_CM0_SEC2_SEC2_EN_MASK                (0xFU)
#define SMM_CM0_SEC2_SEC2_EN_SHIFT               (0U)
/*! SEC2_EN - Security2 enable */
#define SMM_CM0_SEC2_SEC2_EN(x)                  (((uint32_t)(((uint32_t)(x)) << SMM_CM0_SEC2_SEC2_EN_SHIFT)) & SMM_CM0_SEC2_SEC2_EN_MASK)
/*! @} */

/*! @name CM0_SEC3 - Cortex M0+ Security3 */
/*! @{ */

#define SMM_CM0_SEC3_SEC3_EN_MASK                (0xFU)
#define SMM_CM0_SEC3_SEC3_EN_SHIFT               (0U)
/*! SEC3_EN - Security3 enable */
#define SMM_CM0_SEC3_SEC3_EN(x)                  (((uint32_t)(((uint32_t)(x)) << SMM_CM0_SEC3_SEC3_EN_SHIFT)) & SMM_CM0_SEC3_SEC3_EN_MASK)
/*! @} */

/*! @name XTAL_TRIM - XTAL Trim */
/*! @{ */

#define SMM_XTAL_TRIM_TRIM_DIR_MASK              (0x3FFU)
#define SMM_XTAL_TRIM_TRIM_DIR_SHIFT             (0U)
/*! TRIM_DIR - XTAL Trim interval */
#define SMM_XTAL_TRIM_TRIM_DIR(x)                (((uint32_t)(((uint32_t)(x)) << SMM_XTAL_TRIM_TRIM_DIR_SHIFT)) & SMM_XTAL_TRIM_TRIM_DIR_MASK)

#define SMM_XTAL_TRIM_TRIM_VAL_MASK              (0x400U)
#define SMM_XTAL_TRIM_TRIM_VAL_SHIFT             (10U)
/*! TRIM_VAL - XTAL Trim up */
#define SMM_XTAL_TRIM_TRIM_VAL(x)                (((uint32_t)(((uint32_t)(x)) << SMM_XTAL_TRIM_TRIM_VAL_SHIFT)) & SMM_XTAL_TRIM_TRIM_VAL_MASK)
/*! @} */

/*  Wake-up sources at DS1, DS2, DS3, and shutdown */
#define SMM_WAKEUP_SOURCE_RTC_A0_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_RTC_A0_SHIFT 0
#define SMM_WAKEUP_SOURCE_RTC_A0_BIT   ((uint32_t)(SMM_WAKEUP_SOURCE_RTC_A0_MASK << SMM_WAKEUP_SOURCE_RTC_A0_SHIFT))

#define SMM_WAKEUP_SOURCE_RTC_A1_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_RTC_A1_SHIFT 1
#define SMM_WAKEUP_SOURCE_RTC_A1_BIT   ((uint32_t)(SMM_WAKEUP_SOURCE_RTC_A1_MASK << SMM_WAKEUP_SOURCE_RTC_A1_SHIFT))

#define SMM_WAKEUP_SOURCE_RTC_A2_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_RTC_A2_SHIFT 2
#define SMM_WAKEUP_SOURCE_RTC_A2_BIT   ((uint32_t)(SMM_WAKEUP_SOURCE_RTC_A2_MASK << SMM_WAKEUP_SOURCE_RTC_A2_SHIFT))

#define SMM_WAKEUP_SOURCE_RTC_WDT_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_RTC_WDT_SHIFT 3
#define SMM_WAKEUP_SOURCE_RTC_WDT_BIT   ((uint32_t)(SMM_WAKEUP_SOURCE_RTC_WDT_MASK << SMM_WAKEUP_SOURCE_RTC_WDT_SHIFT))

#define SMM_WAKEUP_SOURCE_RTC_XTAL_FAIL_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_RTC_XTAL_FAIL_SHIFT 4
#define SMM_WAKEUP_SOURCE_RTC_XTAL_FAIL_BIT \
    ((uint32_t)(SMM_WAKEUP_SOURCE_RTC_XTAL_FAIL_MASK << SMM_WAKEUP_SOURCE_RTC_XTAL_FAIL_SHIFT))

#define SMM_WAKEUP_SOURCE_EXT_INT_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_EXT_INT_SHIFT 5
#define SMM_WAKEUP_SOURCE_EXT_INT_BIT   ((uint32_t)(SMM_WAKEUP_SOURCE_EXT_INT_MASK << SMM_WAKEUP_SOURCE_EXT_INT_SHIFT))

#define SMM_WAKEUP_SOURCE_DEEP_SLEEP_CNT_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_DEEP_SLEEP_CNT_SHIFT 6
#define SMM_WAKEUP_SOURCE_DEEP_SLEEP_CNT_BIT \
    ((uint32_t)(SMM_WAKEUP_SOURCE_DEEP_SLEEP_CNT_MASK << SMM_WAKEUP_SOURCE_DEEP_SLEEP_CNT_SHIFT))

#define SMM_WAKEUP_SOURCE_VOLTE_COMP_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_VOLTE_COMP_SHIFT 7
#define SMM_WAKEUP_SOURCE_VOLTE_COMP_BIT \
    ((uint32_t)(SMM_WAKEUP_SOURCE_VOLTE_COMP_MASK << SMM_WAKEUP_SOURCE_VOLTE_COMP_SHIFT))

#define SMM_WAKEUP_SOURCE_GPIO0_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_GPIO0_SHIFT 8
#define SMM_WAKEUP_SOURCE_GPIO0_BIT   ((uint32_t)(SMM_WAKEUP_SOURCE_GPIO0_MASK << SMM_WAKEUP_SOURCE_GPIO0_SHIFT))

#define SMM_WAKEUP_SOURCE_GPIO1_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_GPIO1_SHIFT 9
#define SMM_WAKEUP_SOURCE_GPIO1_BIT   ((uint32_t)(SMM_WAKEUP_SOURCE_GPIO1_MASK << SMM_WAKEUP_SOURCE_GPIO1_SHIFT))

#define SMM_WAKEUP_SOURCE_LPUART_IRQ_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_LPUART_IRQ_SHIFT 10
#define SMM_WAKEUP_SOURCE_LPUART_IRQ_BIT \
    ((uint32_t)(SMM_WAKEUP_SOURCE_LPUART_IRQ_MASK << SMM_WAKEUP_SOURCE_LPUART_IRQ_SHIFT))

#define SMM_WAKEUP_SOURCE_LPI2C_IRQ_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_LPI2C_IRQ_SHIFT 11
#define SMM_WAKEUP_SOURCE_LPI2C_IRQ_BIT \
    ((uint32_t)(SMM_WAKEUP_SOURCE_LPI2C_IRQ_MASK << SMM_WAKEUP_SOURCE_LPI2C_IRQ_SHIFT))

#define SMM_WAKEUP_SOURCE_CM0P_SW_MASK  (0x1U)
#define SMM_WAKEUP_SOURCE_CM0P_SW_SHIFT 12
#define SMM_WAKEUP_SOURCE_CM0P_SW_BIT   ((uint32_t)(SMM_WAKEUP_SOURCE_CM0P_SW_MASK << SMM_WAKEUP_SOURCE_CM0P_SW_SHIFT))
/*! @} */


/*!
 * @}
 */ /* end of group SMM_Register_Masks */


/*!
 * @}
 */ /* end of group SMM_Peripheral_Access_Layer */


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


#endif  /* SMM_H_ */

