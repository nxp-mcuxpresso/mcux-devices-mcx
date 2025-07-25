/*
** ###################################################################
**     Processors:          MCXW716AMFPA
**                          MCXW716AMFTA
**                          MCXW716CMFPA
**                          MCXW716CMFTA
**
**     Version:             rev. 2.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         CMSIS Peripheral Access Layer for SPC
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2024-03-21)
**         Initial version.
**     - rev. 2.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_SPC.h
 * @version 2.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for SPC
 *
 * CMSIS Peripheral Access Layer for SPC
 */

#if !defined(PERI_SPC_H_)
#define PERI_SPC_H_                              /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MCXW716AMFPA) || defined(CPU_MCXW716AMFTA))
#include "MCXW716A_COMMON.h"
#elif (defined(CPU_MCXW716CMFPA) || defined(CPU_MCXW716CMFTA))
#include "MCXW716C_COMMON.h"
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
   -- SPC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SPC_Peripheral_Access_Layer SPC Peripheral Access Layer
 * @{
 */

/** SPC - Size of Registers Arrays */
#define SPC_PD_STATUS_COUNT                       3u

/** SPC - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID, offset: 0x0 */
       uint8_t RESERVED_0[12];
  __IO uint32_t SC;                                /**< Status Control, offset: 0x10 */
  __IO uint32_t CNTRL;                             /**< SPC Regulator Control, offset: 0x14 */
       uint8_t RESERVED_1[4];
  __IO uint32_t LPREQ_CFG;                         /**< Low-Power Request Configuration, offset: 0x1C */
  __IO uint32_t CFG;                               /**< SPC Configuration, offset: 0x20 */
       uint8_t RESERVED_2[12];
  __IO uint32_t PD_STATUS[SPC_PD_STATUS_COUNT];    /**< SPC Power Domain Mode Status, array offset: 0x30, array step: 0x4 */
       uint8_t RESERVED_3[4];
  __IO uint32_t SRAMCTL;                           /**< SRAM Control, offset: 0x40 */
       uint8_t RESERVED_4[156];
  __IO uint32_t WAKEUP;                            /**< General Purpose Wake-up, offset: 0xE0 */
       uint8_t RESERVED_5[28];
  __IO uint32_t ACTIVE_CFG;                        /**< Active Power Mode Configuration, offset: 0x100 */
  __IO uint32_t LP_CFG;                            /**< Low-Power Mode Configuration, offset: 0x104 */
       uint8_t RESERVED_6[24];
  __IO uint32_t LPWKUP_DELAY;                      /**< Low Power Wake-Up Delay, offset: 0x120 */
  __IO uint32_t ACTIVE_VDELAY;                     /**< Active Voltage Trim Delay, offset: 0x124 */
       uint8_t RESERVED_7[8];
  __IO uint32_t VD_STAT;                           /**< Voltage Detect Status Register, offset: 0x130 */
  __IO uint32_t VD_CORE_CFG;                       /**< Core Voltage Detect Configuration Register, offset: 0x134 */
  __IO uint32_t VD_SYS_CFG;                        /**< System Voltage Detect Configuration Register, offset: 0x138 */
  __IO uint32_t VD_IO_CFG;                         /**< IO Voltage Detect Configuration Register, offset: 0x13C */
  __IO uint32_t EVD_CFG;                           /**< External Voltage Domain Configuration Register, offset: 0x140 */
  __IO uint32_t VDD_CORE_GLITCH_DETECT_SC;         /**< VDD Core Glitch Detect Status Control Register, offset: 0x144 */
       uint8_t RESERVED_8[440];
  __IO uint32_t CORELDO_CFG;                       /**< LDO_CORE Configuration Register, offset: 0x300 */
       uint8_t RESERVED_9[252];
  __IO uint32_t SYSLDO_CFG;                        /**< LDO_SYS Configuration Register, offset: 0x400 */
       uint8_t RESERVED_10[252];
  __IO uint32_t DCDC_CFG;                          /**< DCDC Configuration Register, offset: 0x500 */
  __IO uint32_t DCDC_BURST_CFG;                    /**< DCDC BURST Configuration Register, offset: 0x504 */
} SPC_Type;

/* ----------------------------------------------------------------------------
   -- SPC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SPC_Register_Masks SPC Register Masks
 * @{
 */

/*! @name VERID - Version ID */
/*! @{ */

#define SPC_VERID_FEATURE_MASK                   (0xFFFFU)
#define SPC_VERID_FEATURE_SHIFT                  (0U)
/*! FEATURE - Feature Specification Number
 *  0b0000000000000000..Standard features
 */
#define SPC_VERID_FEATURE(x)                     (((uint32_t)(((uint32_t)(x)) << SPC_VERID_FEATURE_SHIFT)) & SPC_VERID_FEATURE_MASK)

#define SPC_VERID_MINOR_MASK                     (0xFF0000U)
#define SPC_VERID_MINOR_SHIFT                    (16U)
/*! MINOR - Minor Version Number */
#define SPC_VERID_MINOR(x)                       (((uint32_t)(((uint32_t)(x)) << SPC_VERID_MINOR_SHIFT)) & SPC_VERID_MINOR_MASK)

#define SPC_VERID_MAJOR_MASK                     (0xFF000000U)
#define SPC_VERID_MAJOR_SHIFT                    (24U)
/*! MAJOR - Major Version Number */
#define SPC_VERID_MAJOR(x)                       (((uint32_t)(((uint32_t)(x)) << SPC_VERID_MAJOR_SHIFT)) & SPC_VERID_MAJOR_MASK)
/*! @} */

/*! @name SC - Status Control */
/*! @{ */

#define SPC_SC_BUSY_MASK                         (0x1U)
#define SPC_SC_BUSY_SHIFT                        (0U)
/*! BUSY - SPC Busy Status Flag
 *  0b0..Not busy
 *  0b1..Busy
 */
#define SPC_SC_BUSY(x)                           (((uint32_t)(((uint32_t)(x)) << SPC_SC_BUSY_SHIFT)) & SPC_SC_BUSY_MASK)

#define SPC_SC_SPC_LP_REQ_MASK                   (0x2U)
#define SPC_SC_SPC_LP_REQ_SHIFT                  (1U)
/*! SPC_LP_REQ - SPC Power Mode Configuration Status Flag
 *  0b0..No effect
 *  0b0..SPC is in Active mode; the ACTIVE_CFG register has control
 *  0b1..All power domains requested low-power mode; SPC entered a low-power state; power-mode configuration based on the LP_CFG register
 *  0b1..Clear the flag
 */
#define SPC_SC_SPC_LP_REQ(x)                     (((uint32_t)(((uint32_t)(x)) << SPC_SC_SPC_LP_REQ_SHIFT)) & SPC_SC_SPC_LP_REQ_MASK)

#define SPC_SC_SPC_LP_MODE_MASK                  (0xF0U)
#define SPC_SC_SPC_LP_MODE_SHIFT                 (4U)
/*! SPC_LP_MODE - Power Domain Low-Power Mode Request
 *  0b0000..Sleep mode with system clock running
 *  0b0001..SLEEP with system clock off
 *  0b0010..DSLEEP with system clock off
 *  0b0100..PDOWN with system clock off
 *  0b1000..DPDOWN with system clock off
 */
#define SPC_SC_SPC_LP_MODE(x)                    (((uint32_t)(((uint32_t)(x)) << SPC_SC_SPC_LP_MODE_SHIFT)) & SPC_SC_SPC_LP_MODE_MASK)

#define SPC_SC_ISO_CLR_MASK                      (0x70000U)
#define SPC_SC_ISO_CLR_SHIFT                     (16U)
/*! ISO_CLR - Isolation Clear Flags */
#define SPC_SC_ISO_CLR(x)                        (((uint32_t)(((uint32_t)(x)) << SPC_SC_ISO_CLR_SHIFT)) & SPC_SC_ISO_CLR_MASK)

#define SPC_SC_SWITCH_STATE_MASK                 (0x80000000U)
#define SPC_SC_SWITCH_STATE_SHIFT                (31U)
/*! SWITCH_STATE - Power Switch State
 *  0b0..Off
 *  0b1..On
 */
#define SPC_SC_SWITCH_STATE(x)                   (((uint32_t)(((uint32_t)(x)) << SPC_SC_SWITCH_STATE_SHIFT)) & SPC_SC_SWITCH_STATE_MASK)
/*! @} */

/*! @name CNTRL - SPC Regulator Control */
/*! @{ */

#define SPC_CNTRL_CORELDO_EN_MASK                (0x1U)
#define SPC_CNTRL_CORELDO_EN_SHIFT               (0U)
/*! CORELDO_EN - LDO_CORE Regulator Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_CNTRL_CORELDO_EN(x)                  (((uint32_t)(((uint32_t)(x)) << SPC_CNTRL_CORELDO_EN_SHIFT)) & SPC_CNTRL_CORELDO_EN_MASK)

#define SPC_CNTRL_SYSLDO_EN_MASK                 (0x2U)
#define SPC_CNTRL_SYSLDO_EN_SHIFT                (1U)
/*! SYSLDO_EN - LDO_SYS Regulator Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_CNTRL_SYSLDO_EN(x)                   (((uint32_t)(((uint32_t)(x)) << SPC_CNTRL_SYSLDO_EN_SHIFT)) & SPC_CNTRL_SYSLDO_EN_MASK)

#define SPC_CNTRL_DCDC_EN_MASK                   (0x4U)
#define SPC_CNTRL_DCDC_EN_SHIFT                  (2U)
/*! DCDC_EN - DCDC_CORE Regulator Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_CNTRL_DCDC_EN(x)                     (((uint32_t)(((uint32_t)(x)) << SPC_CNTRL_DCDC_EN_SHIFT)) & SPC_CNTRL_DCDC_EN_MASK)
/*! @} */

/*! @name LPREQ_CFG - Low-Power Request Configuration */
/*! @{ */

#define SPC_LPREQ_CFG_LPREQOE_MASK               (0x1U)
#define SPC_LPREQ_CFG_LPREQOE_SHIFT              (0U)
/*! LPREQOE - Low-Power Request Output Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_LPREQ_CFG_LPREQOE(x)                 (((uint32_t)(((uint32_t)(x)) << SPC_LPREQ_CFG_LPREQOE_SHIFT)) & SPC_LPREQ_CFG_LPREQOE_MASK)

#define SPC_LPREQ_CFG_LPREQPOL_MASK              (0x2U)
#define SPC_LPREQ_CFG_LPREQPOL_SHIFT             (1U)
/*! LPREQPOL - Low-Power Request Output Pin Polarity Control
 *  0b0..High
 *  0b1..Low
 */
#define SPC_LPREQ_CFG_LPREQPOL(x)                (((uint32_t)(((uint32_t)(x)) << SPC_LPREQ_CFG_LPREQPOL_SHIFT)) & SPC_LPREQ_CFG_LPREQPOL_MASK)

#define SPC_LPREQ_CFG_LPREQOV_MASK               (0xCU)
#define SPC_LPREQ_CFG_LPREQOV_SHIFT              (2U)
/*! LPREQOV - Low-Power Request Output Override
 *  0b00..Not forced
 *  0b01..
 *  0b10..Forced low (ignore LPREQPOL settings)
 *  0b11..Forced high (ignore LPREQPOL settings)
 */
#define SPC_LPREQ_CFG_LPREQOV(x)                 (((uint32_t)(((uint32_t)(x)) << SPC_LPREQ_CFG_LPREQOV_SHIFT)) & SPC_LPREQ_CFG_LPREQOV_MASK)
/*! @} */

/*! @name CFG - SPC Configuration */
/*! @{ */

#define SPC_CFG_INTG_PWSWTCH_SLEEP_EN_MASK       (0x1U)
#define SPC_CFG_INTG_PWSWTCH_SLEEP_EN_SHIFT      (0U)
/*! INTG_PWSWTCH_SLEEP_EN - Integrated Power Switch Sleep Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_CFG_INTG_PWSWTCH_SLEEP_EN(x)         (((uint32_t)(((uint32_t)(x)) << SPC_CFG_INTG_PWSWTCH_SLEEP_EN_SHIFT)) & SPC_CFG_INTG_PWSWTCH_SLEEP_EN_MASK)

#define SPC_CFG_INTG_PWSWTCH_WKUP_EN_MASK        (0x2U)
#define SPC_CFG_INTG_PWSWTCH_WKUP_EN_SHIFT       (1U)
/*! INTG_PWSWTCH_WKUP_EN - Integrated Power Switch Wake-up Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_CFG_INTG_PWSWTCH_WKUP_EN(x)          (((uint32_t)(((uint32_t)(x)) << SPC_CFG_INTG_PWSWTCH_WKUP_EN_SHIFT)) & SPC_CFG_INTG_PWSWTCH_WKUP_EN_MASK)

#define SPC_CFG_INTG_PWSWTCH_SLEEP_ACTIVE_EN_MASK (0x4U)
#define SPC_CFG_INTG_PWSWTCH_SLEEP_ACTIVE_EN_SHIFT (2U)
/*! INTG_PWSWTCH_SLEEP_ACTIVE_EN - Integrated Power Switch Active Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_CFG_INTG_PWSWTCH_SLEEP_ACTIVE_EN(x)  (((uint32_t)(((uint32_t)(x)) << SPC_CFG_INTG_PWSWTCH_SLEEP_ACTIVE_EN_SHIFT)) & SPC_CFG_INTG_PWSWTCH_SLEEP_ACTIVE_EN_MASK)

#define SPC_CFG_INTG_PWSWTCH_WKUP_ACTIVE_EN_MASK (0x8U)
#define SPC_CFG_INTG_PWSWTCH_WKUP_ACTIVE_EN_SHIFT (3U)
/*! INTG_PWSWTCH_WKUP_ACTIVE_EN - Integrated Power Switch Wake-up Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_CFG_INTG_PWSWTCH_WKUP_ACTIVE_EN(x)   (((uint32_t)(((uint32_t)(x)) << SPC_CFG_INTG_PWSWTCH_WKUP_ACTIVE_EN_SHIFT)) & SPC_CFG_INTG_PWSWTCH_WKUP_ACTIVE_EN_MASK)
/*! @} */

/*! @name PD_STATUS - SPC Power Domain Mode Status */
/*! @{ */

#define SPC_PD_STATUS_PWR_REQ_STATUS_MASK        (0x1U)
#define SPC_PD_STATUS_PWR_REQ_STATUS_SHIFT       (0U)
/*! PWR_REQ_STATUS - Power Request Status Flag
 *  0b0..Did not request
 *  0b1..Requested
 */
#define SPC_PD_STATUS_PWR_REQ_STATUS(x)          (((uint32_t)(((uint32_t)(x)) << SPC_PD_STATUS_PWR_REQ_STATUS_SHIFT)) & SPC_PD_STATUS_PWR_REQ_STATUS_MASK)

#define SPC_PD_STATUS_PD_LP_REQ_MASK             (0x10U)
#define SPC_PD_STATUS_PD_LP_REQ_SHIFT            (4U)
/*! PD_LP_REQ - Power Domain Low Power Request Flag
 *  0b0..Did not request
 *  0b1..Requested
 */
#define SPC_PD_STATUS_PD_LP_REQ(x)               (((uint32_t)(((uint32_t)(x)) << SPC_PD_STATUS_PD_LP_REQ_SHIFT)) & SPC_PD_STATUS_PD_LP_REQ_MASK)

#define SPC_PD_STATUS_LP_MODE_MASK               (0xF00U)
#define SPC_PD_STATUS_LP_MODE_SHIFT              (8U)
/*! LP_MODE - Power Domain Low Power Mode Request
 *  0b0000..SLEEP with system clock running
 *  0b0001..SLEEP with system clock off
 *  0b0010..DSLEEP with system clock off
 *  0b0100..PDOWN with system clock off
 *  0b1000..DPDOWN with system clock off
 */
#define SPC_PD_STATUS_LP_MODE(x)                 (((uint32_t)(((uint32_t)(x)) << SPC_PD_STATUS_LP_MODE_SHIFT)) & SPC_PD_STATUS_LP_MODE_MASK)
/*! @} */

/*! @name SRAMCTL - SRAM Control */
/*! @{ */

#define SPC_SRAMCTL_VSM_MASK                     (0x3U)
#define SPC_SRAMCTL_VSM_SHIFT                    (0U)
/*! VSM - Voltage Select Margin
 *  0b00..
 *  0b01..1.0 V
 *  0b10..1.1 V
 *  0b11..SRAM configured for 1.1 V operation
 */
#define SPC_SRAMCTL_VSM(x)                       (((uint32_t)(((uint32_t)(x)) << SPC_SRAMCTL_VSM_SHIFT)) & SPC_SRAMCTL_VSM_MASK)

#define SPC_SRAMCTL_REQ_MASK                     (0x40000000U)
#define SPC_SRAMCTL_REQ_SHIFT                    (30U)
/*! REQ - SRAM Voltage Update Request
 *  0b0..Do not request
 *  0b1..Request
 */
#define SPC_SRAMCTL_REQ(x)                       (((uint32_t)(((uint32_t)(x)) << SPC_SRAMCTL_REQ_SHIFT)) & SPC_SRAMCTL_REQ_MASK)

#define SPC_SRAMCTL_ACK_MASK                     (0x80000000U)
#define SPC_SRAMCTL_ACK_SHIFT                    (31U)
/*! ACK - SRAM Voltage Update Request Acknowledge
 *  0b0..Not acknowledged
 *  0b1..Acknowledged
 */
#define SPC_SRAMCTL_ACK(x)                       (((uint32_t)(((uint32_t)(x)) << SPC_SRAMCTL_ACK_SHIFT)) & SPC_SRAMCTL_ACK_MASK)
/*! @} */

/*! @name WAKEUP - General Purpose Wake-up */
/*! @{ */

#define SPC_WAKEUP_WAKEUP_MASK                   (0xFFFFFFFFU)
#define SPC_WAKEUP_WAKEUP_SHIFT                  (0U)
/*! WAKEUP - Wake-up */
#define SPC_WAKEUP_WAKEUP(x)                     (((uint32_t)(((uint32_t)(x)) << SPC_WAKEUP_WAKEUP_SHIFT)) & SPC_WAKEUP_WAKEUP_MASK)
/*! @} */

/*! @name ACTIVE_CFG - Active Power Mode Configuration */
/*! @{ */

#define SPC_ACTIVE_CFG_CORELDO_VDD_DS_MASK       (0x1U)
#define SPC_ACTIVE_CFG_CORELDO_VDD_DS_SHIFT      (0U)
/*! CORELDO_VDD_DS - LDO_CORE VDD Drive Strength
 *  0b0..Low
 *  0b1..Normal
 */
#define SPC_ACTIVE_CFG_CORELDO_VDD_DS(x)         (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_CORELDO_VDD_DS_SHIFT)) & SPC_ACTIVE_CFG_CORELDO_VDD_DS_MASK)

#define SPC_ACTIVE_CFG_CORELDO_VDD_LVL_MASK      (0xCU)
#define SPC_ACTIVE_CFG_CORELDO_VDD_LVL_SHIFT     (2U)
/*! CORELDO_VDD_LVL - LDO_CORE VDD Regulator Voltage Level
 *  0b00..
 *  0b01..Regulate to mid voltage (1.0 V)
 *  0b10..Regulate to normal voltage (1.1 V)
 *  0b11..Regulate to safe-mode voltage (1.15 V)
 */
#define SPC_ACTIVE_CFG_CORELDO_VDD_LVL(x)        (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_CORELDO_VDD_LVL_SHIFT)) & SPC_ACTIVE_CFG_CORELDO_VDD_LVL_MASK)

#define SPC_ACTIVE_CFG_SYSLDO_VDD_DS_MASK        (0x10U)
#define SPC_ACTIVE_CFG_SYSLDO_VDD_DS_SHIFT       (4U)
/*! SYSLDO_VDD_DS - LDO_SYS VDD Drive Strength
 *  0b0..Low
 *  0b1..Normal
 */
#define SPC_ACTIVE_CFG_SYSLDO_VDD_DS(x)          (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_SYSLDO_VDD_DS_SHIFT)) & SPC_ACTIVE_CFG_SYSLDO_VDD_DS_MASK)

#define SPC_ACTIVE_CFG_SYSLDO_VDD_LVL_MASK       (0x40U)
#define SPC_ACTIVE_CFG_SYSLDO_VDD_LVL_SHIFT      (6U)
/*! SYSLDO_VDD_LVL - LDO_SYS VDD Regulator Voltage Level
 *  0b0..Normal voltage (1.8 V)
 *  0b1..Overdrive voltage (2.5 V)
 */
#define SPC_ACTIVE_CFG_SYSLDO_VDD_LVL(x)         (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_SYSLDO_VDD_LVL_SHIFT)) & SPC_ACTIVE_CFG_SYSLDO_VDD_LVL_MASK)

#define SPC_ACTIVE_CFG_DCDC_VDD_DS_MASK          (0x300U)
#define SPC_ACTIVE_CFG_DCDC_VDD_DS_SHIFT         (8U)
/*! DCDC_VDD_DS - DCDC VDD Drive Strength
 *  0b01..Low
 *  0b10..Normal
 */
#define SPC_ACTIVE_CFG_DCDC_VDD_DS(x)            (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_DCDC_VDD_DS_SHIFT)) & SPC_ACTIVE_CFG_DCDC_VDD_DS_MASK)

#define SPC_ACTIVE_CFG_DCDC_VDD_LVL_MASK         (0xC00U)
#define SPC_ACTIVE_CFG_DCDC_VDD_LVL_SHIFT        (10U)
/*! DCDC_VDD_LVL - DCDC VDD Regulator Voltage Level
 *  0b00..Low undervoltage (1.25 V)
 *  0b01..Midvoltage (1.35 V)
 *  0b10..Normal voltage (2.5 V)
 *  0b11..Safe-mode voltage (1.8 V)
 */
#define SPC_ACTIVE_CFG_DCDC_VDD_LVL(x)           (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_DCDC_VDD_LVL_SHIFT)) & SPC_ACTIVE_CFG_DCDC_VDD_LVL_MASK)

#define SPC_ACTIVE_CFG_GLITCH_DETECT_DISABLE_MASK (0x1000U)
#define SPC_ACTIVE_CFG_GLITCH_DETECT_DISABLE_SHIFT (12U)
/*! GLITCH_DETECT_DISABLE - VDD Core Glitch Detect Disable
 *  0b0..VDD Core Low Voltage Glitch Detect enabled
 *  0b1..VDD Core Low Voltage Glitch Detect disabled
 */
#define SPC_ACTIVE_CFG_GLITCH_DETECT_DISABLE(x)  (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_GLITCH_DETECT_DISABLE_SHIFT)) & SPC_ACTIVE_CFG_GLITCH_DETECT_DISABLE_MASK)

#define SPC_ACTIVE_CFG_LPBUFF_EN_MASK            (0x40000U)
#define SPC_ACTIVE_CFG_LPBUFF_EN_SHIFT           (18U)
/*! LPBUFF_EN - CMP Bandgap Buffer Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_ACTIVE_CFG_LPBUFF_EN(x)              (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_LPBUFF_EN_SHIFT)) & SPC_ACTIVE_CFG_LPBUFF_EN_MASK)

#define SPC_ACTIVE_CFG_BGMODE_MASK               (0x300000U)
#define SPC_ACTIVE_CFG_BGMODE_SHIFT              (20U)
/*! BGMODE - Bandgap Mode
 *  0b00..Bandgap disabled
 *  0b01..Bandgap enabled, buffer disabled
 *  0b10..Bandgap enabled, buffer enabled
 *  0b11..
 */
#define SPC_ACTIVE_CFG_BGMODE(x)                 (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_BGMODE_SHIFT)) & SPC_ACTIVE_CFG_BGMODE_MASK)

#define SPC_ACTIVE_CFG_CORE_LVDE_MASK            (0x1000000U)
#define SPC_ACTIVE_CFG_CORE_LVDE_SHIFT           (24U)
/*! CORE_LVDE - Core Low-Voltage Detection Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_ACTIVE_CFG_CORE_LVDE(x)              (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_CORE_LVDE_SHIFT)) & SPC_ACTIVE_CFG_CORE_LVDE_MASK)

#define SPC_ACTIVE_CFG_SYS_LVDE_MASK             (0x2000000U)
#define SPC_ACTIVE_CFG_SYS_LVDE_SHIFT            (25U)
/*! SYS_LVDE - System Low-Voltage Detection Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_ACTIVE_CFG_SYS_LVDE(x)               (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_SYS_LVDE_SHIFT)) & SPC_ACTIVE_CFG_SYS_LVDE_MASK)

#define SPC_ACTIVE_CFG_IO_LVDE_MASK              (0x4000000U)
#define SPC_ACTIVE_CFG_IO_LVDE_SHIFT             (26U)
/*! IO_LVDE - IO Low-Voltage Detection Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_ACTIVE_CFG_IO_LVDE(x)                (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_IO_LVDE_SHIFT)) & SPC_ACTIVE_CFG_IO_LVDE_MASK)

#define SPC_ACTIVE_CFG_CORE_HVDE_MASK            (0x8000000U)
#define SPC_ACTIVE_CFG_CORE_HVDE_SHIFT           (27U)
/*! CORE_HVDE - Core High-Voltage Detection Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_ACTIVE_CFG_CORE_HVDE(x)              (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_CORE_HVDE_SHIFT)) & SPC_ACTIVE_CFG_CORE_HVDE_MASK)

#define SPC_ACTIVE_CFG_SYS_HVDE_MASK             (0x10000000U)
#define SPC_ACTIVE_CFG_SYS_HVDE_SHIFT            (28U)
/*! SYS_HVDE - System High-Voltage Detection Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_ACTIVE_CFG_SYS_HVDE(x)               (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_SYS_HVDE_SHIFT)) & SPC_ACTIVE_CFG_SYS_HVDE_MASK)

#define SPC_ACTIVE_CFG_IO_HVDE_MASK              (0x20000000U)
#define SPC_ACTIVE_CFG_IO_HVDE_SHIFT             (29U)
/*! IO_HVDE - IO High-Voltage Detection Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_ACTIVE_CFG_IO_HVDE(x)                (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_CFG_IO_HVDE_SHIFT)) & SPC_ACTIVE_CFG_IO_HVDE_MASK)
/*! @} */

/*! @name LP_CFG - Low-Power Mode Configuration */
/*! @{ */

#define SPC_LP_CFG_CORELDO_VDD_DS_MASK           (0x1U)
#define SPC_LP_CFG_CORELDO_VDD_DS_SHIFT          (0U)
/*! CORELDO_VDD_DS - LDO_CORE VDD Drive Strength
 *  0b0..Low
 *  0b1..Normal
 */
#define SPC_LP_CFG_CORELDO_VDD_DS(x)             (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_CORELDO_VDD_DS_SHIFT)) & SPC_LP_CFG_CORELDO_VDD_DS_MASK)

#define SPC_LP_CFG_CORELDO_VDD_LVL_MASK          (0xCU)
#define SPC_LP_CFG_CORELDO_VDD_LVL_SHIFT         (2U)
/*! CORELDO_VDD_LVL - LDO_CORE VDD Regulator Voltage Level
 *  0b00..Under voltage (0.95 V)
 *  0b01..Mid voltage (1.0 V)
 *  0b10..Normal voltage (1.1 V)
 *  0b11..Safe-mode voltage (1.15 V)
 */
#define SPC_LP_CFG_CORELDO_VDD_LVL(x)            (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_CORELDO_VDD_LVL_SHIFT)) & SPC_LP_CFG_CORELDO_VDD_LVL_MASK)

#define SPC_LP_CFG_SYSLDO_VDD_DS_MASK            (0x10U)
#define SPC_LP_CFG_SYSLDO_VDD_DS_SHIFT           (4U)
/*! SYSLDO_VDD_DS - LDO_SYS VDD Drive Strength
 *  0b0..Low
 *  0b1..Normal
 */
#define SPC_LP_CFG_SYSLDO_VDD_DS(x)              (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_SYSLDO_VDD_DS_SHIFT)) & SPC_LP_CFG_SYSLDO_VDD_DS_MASK)

#define SPC_LP_CFG_DCDC_VDD_DS_MASK              (0x300U)
#define SPC_LP_CFG_DCDC_VDD_DS_SHIFT             (8U)
/*! DCDC_VDD_DS - DCDC VDD Drive Strength
 *  0b00..Pulse refresh
 *  0b01..Low
 *  0b10..Normal
 *  0b11..
 */
#define SPC_LP_CFG_DCDC_VDD_DS(x)                (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_DCDC_VDD_DS_SHIFT)) & SPC_LP_CFG_DCDC_VDD_DS_MASK)

#define SPC_LP_CFG_DCDC_VDD_LVL_MASK             (0xC00U)
#define SPC_LP_CFG_DCDC_VDD_LVL_SHIFT            (10U)
/*! DCDC_VDD_LVL - DCDC VDD Regulator Voltage Level
 *  0b00..Low under voltage (1.25 V)
 *  0b01..Mid voltage (1.35 V)
 *  0b10..Normal voltage (2.5 V)
 *  0b11..Safe-mode voltage (1.8 V)
 */
#define SPC_LP_CFG_DCDC_VDD_LVL(x)               (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_DCDC_VDD_LVL_SHIFT)) & SPC_LP_CFG_DCDC_VDD_LVL_MASK)

#define SPC_LP_CFG_GLITCH_DETECT_DISABLE_MASK    (0x1000U)
#define SPC_LP_CFG_GLITCH_DETECT_DISABLE_SHIFT   (12U)
/*! GLITCH_DETECT_DISABLE - VDD Core Glitch Detect Disable
 *  0b0..Enable
 *  0b1..Disable
 */
#define SPC_LP_CFG_GLITCH_DETECT_DISABLE(x)      (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_GLITCH_DETECT_DISABLE_SHIFT)) & SPC_LP_CFG_GLITCH_DETECT_DISABLE_MASK)

#define SPC_LP_CFG_COREVDD_IVS_EN_MASK           (0x20000U)
#define SPC_LP_CFG_COREVDD_IVS_EN_SHIFT          (17U)
/*! COREVDD_IVS_EN - CORE VDD Internal Voltage Scaling (IVS) Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_LP_CFG_COREVDD_IVS_EN(x)             (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_COREVDD_IVS_EN_SHIFT)) & SPC_LP_CFG_COREVDD_IVS_EN_MASK)

#define SPC_LP_CFG_LPBUFF_EN_MASK                (0x40000U)
#define SPC_LP_CFG_LPBUFF_EN_SHIFT               (18U)
/*! LPBUFF_EN - CMP Bandgap Buffer Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_LP_CFG_LPBUFF_EN(x)                  (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_LPBUFF_EN_SHIFT)) & SPC_LP_CFG_LPBUFF_EN_MASK)

#define SPC_LP_CFG_BGMODE_MASK                   (0x300000U)
#define SPC_LP_CFG_BGMODE_SHIFT                  (20U)
/*! BGMODE - Bandgap Mode
 *  0b00..Bandgap disabled
 *  0b01..Bandgap enabled, buffer disabled
 *  0b10..Bandgap enabled, buffer enabled
 *  0b11..
 */
#define SPC_LP_CFG_BGMODE(x)                     (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_BGMODE_SHIFT)) & SPC_LP_CFG_BGMODE_MASK)

#define SPC_LP_CFG_LP_IREFEN_MASK                (0x800000U)
#define SPC_LP_CFG_LP_IREFEN_SHIFT               (23U)
/*! LP_IREFEN - Low-Power IREF Enable
 *  0b0..Disable for power saving in Deep Power Down mode
 *  0b1..Enable
 */
#define SPC_LP_CFG_LP_IREFEN(x)                  (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_LP_IREFEN_SHIFT)) & SPC_LP_CFG_LP_IREFEN_MASK)

#define SPC_LP_CFG_CORE_LVDE_MASK                (0x1000000U)
#define SPC_LP_CFG_CORE_LVDE_SHIFT               (24U)
/*! CORE_LVDE - Core Low Voltage Detect Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_LP_CFG_CORE_LVDE(x)                  (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_CORE_LVDE_SHIFT)) & SPC_LP_CFG_CORE_LVDE_MASK)

#define SPC_LP_CFG_SYS_LVDE_MASK                 (0x2000000U)
#define SPC_LP_CFG_SYS_LVDE_SHIFT                (25U)
/*! SYS_LVDE - System Low Voltage Detect Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_LP_CFG_SYS_LVDE(x)                   (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_SYS_LVDE_SHIFT)) & SPC_LP_CFG_SYS_LVDE_MASK)

#define SPC_LP_CFG_IO_LVDE_MASK                  (0x4000000U)
#define SPC_LP_CFG_IO_LVDE_SHIFT                 (26U)
/*! IO_LVDE - IO Low Voltage Detect Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_LP_CFG_IO_LVDE(x)                    (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_IO_LVDE_SHIFT)) & SPC_LP_CFG_IO_LVDE_MASK)

#define SPC_LP_CFG_CORE_HVDE_MASK                (0x8000000U)
#define SPC_LP_CFG_CORE_HVDE_SHIFT               (27U)
/*! CORE_HVDE - Core High Voltage Detect Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_LP_CFG_CORE_HVDE(x)                  (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_CORE_HVDE_SHIFT)) & SPC_LP_CFG_CORE_HVDE_MASK)

#define SPC_LP_CFG_SYS_HVDE_MASK                 (0x10000000U)
#define SPC_LP_CFG_SYS_HVDE_SHIFT                (28U)
/*! SYS_HVDE - System High Voltage Detect Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_LP_CFG_SYS_HVDE(x)                   (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_SYS_HVDE_SHIFT)) & SPC_LP_CFG_SYS_HVDE_MASK)

#define SPC_LP_CFG_IO_HVDE_MASK                  (0x20000000U)
#define SPC_LP_CFG_IO_HVDE_SHIFT                 (29U)
/*! IO_HVDE - IO High Voltage Detect Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define SPC_LP_CFG_IO_HVDE(x)                    (((uint32_t)(((uint32_t)(x)) << SPC_LP_CFG_IO_HVDE_SHIFT)) & SPC_LP_CFG_IO_HVDE_MASK)
/*! @} */

/*! @name LPWKUP_DELAY - Low Power Wake-Up Delay */
/*! @{ */

#define SPC_LPWKUP_DELAY_LPWKUP_DELAY_MASK       (0xFFFFU)
#define SPC_LPWKUP_DELAY_LPWKUP_DELAY_SHIFT      (0U)
/*! LPWKUP_DELAY - Low-Power Wake-Up Delay */
#define SPC_LPWKUP_DELAY_LPWKUP_DELAY(x)         (((uint32_t)(((uint32_t)(x)) << SPC_LPWKUP_DELAY_LPWKUP_DELAY_SHIFT)) & SPC_LPWKUP_DELAY_LPWKUP_DELAY_MASK)
/*! @} */

/*! @name ACTIVE_VDELAY - Active Voltage Trim Delay */
/*! @{ */

#define SPC_ACTIVE_VDELAY_ACTIVE_VDELAY_MASK     (0xFFFFU)
#define SPC_ACTIVE_VDELAY_ACTIVE_VDELAY_SHIFT    (0U)
/*! ACTIVE_VDELAY - Active Voltage Delay */
#define SPC_ACTIVE_VDELAY_ACTIVE_VDELAY(x)       (((uint32_t)(((uint32_t)(x)) << SPC_ACTIVE_VDELAY_ACTIVE_VDELAY_SHIFT)) & SPC_ACTIVE_VDELAY_ACTIVE_VDELAY_MASK)
/*! @} */

/*! @name VD_STAT - Voltage Detect Status Register */
/*! @{ */

#define SPC_VD_STAT_COREVDD_LVDF_MASK            (0x1U)
#define SPC_VD_STAT_COREVDD_LVDF_SHIFT           (0U)
/*! COREVDD_LVDF - Core VDD Low-Voltage Detect Flag
 *  0b0..Low-voltage event not detected
 *  0b1..Low-voltage event detected
 */
#define SPC_VD_STAT_COREVDD_LVDF(x)              (((uint32_t)(((uint32_t)(x)) << SPC_VD_STAT_COREVDD_LVDF_SHIFT)) & SPC_VD_STAT_COREVDD_LVDF_MASK)

#define SPC_VD_STAT_SYSVDD_LVDF_MASK             (0x2U)
#define SPC_VD_STAT_SYSVDD_LVDF_SHIFT            (1U)
/*! SYSVDD_LVDF - System VDD Low-Voltage Detect Flag
 *  0b0..Low-voltage event not detected
 *  0b1..Low-voltage event detected
 */
#define SPC_VD_STAT_SYSVDD_LVDF(x)               (((uint32_t)(((uint32_t)(x)) << SPC_VD_STAT_SYSVDD_LVDF_SHIFT)) & SPC_VD_STAT_SYSVDD_LVDF_MASK)

#define SPC_VD_STAT_IOVDD_LVDF_MASK              (0x4U)
#define SPC_VD_STAT_IOVDD_LVDF_SHIFT             (2U)
/*! IOVDD_LVDF - IO VDD Low-Voltage Detect Flag
 *  0b0..Low-voltage event not detected
 *  0b1..Low-voltage event detected
 */
#define SPC_VD_STAT_IOVDD_LVDF(x)                (((uint32_t)(((uint32_t)(x)) << SPC_VD_STAT_IOVDD_LVDF_SHIFT)) & SPC_VD_STAT_IOVDD_LVDF_MASK)

#define SPC_VD_STAT_COREVDD_HVDF_MASK            (0x10U)
#define SPC_VD_STAT_COREVDD_HVDF_SHIFT           (4U)
/*! COREVDD_HVDF - Core VDD High-Voltage Detect Flag
 *  0b0..High-voltage event not detected
 *  0b1..High-voltage event detected
 */
#define SPC_VD_STAT_COREVDD_HVDF(x)              (((uint32_t)(((uint32_t)(x)) << SPC_VD_STAT_COREVDD_HVDF_SHIFT)) & SPC_VD_STAT_COREVDD_HVDF_MASK)

#define SPC_VD_STAT_SYSVDD_HVDF_MASK             (0x20U)
#define SPC_VD_STAT_SYSVDD_HVDF_SHIFT            (5U)
/*! SYSVDD_HVDF - System VDD High-Voltage Detect Flag
 *  0b0..High-voltage event not detected
 *  0b1..High-voltage event detected
 */
#define SPC_VD_STAT_SYSVDD_HVDF(x)               (((uint32_t)(((uint32_t)(x)) << SPC_VD_STAT_SYSVDD_HVDF_SHIFT)) & SPC_VD_STAT_SYSVDD_HVDF_MASK)

#define SPC_VD_STAT_IOVDD_HVDF_MASK              (0x40U)
#define SPC_VD_STAT_IOVDD_HVDF_SHIFT             (6U)
/*! IOVDD_HVDF - IO VDD High-Voltage Detect Flag
 *  0b0..High-voltage event not detected
 *  0b1..High-voltage event detected
 */
#define SPC_VD_STAT_IOVDD_HVDF(x)                (((uint32_t)(((uint32_t)(x)) << SPC_VD_STAT_IOVDD_HVDF_SHIFT)) & SPC_VD_STAT_IOVDD_HVDF_MASK)
/*! @} */

/*! @name VD_CORE_CFG - Core Voltage Detect Configuration Register */
/*! @{ */

#define SPC_VD_CORE_CFG_LVDRE_MASK               (0x1U)
#define SPC_VD_CORE_CFG_LVDRE_SHIFT              (0U)
/*! LVDRE - Core VDD Low-Voltage Detect Reset Enable
 *  0b0..COREVDD_LVDF does not generate hardware reset
 *  0b1..COREVDD_LVDF does generate hardware reset
 */
#define SPC_VD_CORE_CFG_LVDRE(x)                 (((uint32_t)(((uint32_t)(x)) << SPC_VD_CORE_CFG_LVDRE_SHIFT)) & SPC_VD_CORE_CFG_LVDRE_MASK)

#define SPC_VD_CORE_CFG_LVDIE_MASK               (0x2U)
#define SPC_VD_CORE_CFG_LVDIE_SHIFT              (1U)
/*! LVDIE - Core VDD Low-Voltage Detect Interrupt Enable
 *  0b0..COREVDD_LVDF does not generate hardware interrupt (user polling)
 *  0b1..COREVDD_LVDF does generate hardware interrupt
 */
#define SPC_VD_CORE_CFG_LVDIE(x)                 (((uint32_t)(((uint32_t)(x)) << SPC_VD_CORE_CFG_LVDIE_SHIFT)) & SPC_VD_CORE_CFG_LVDIE_MASK)

#define SPC_VD_CORE_CFG_HVDRE_MASK               (0x4U)
#define SPC_VD_CORE_CFG_HVDRE_SHIFT              (2U)
/*! HVDRE - Core VDD High-Voltage Detect Reset Enable
 *  0b0..COREVDD_HVDF does not generate hardware reset
 *  0b1..COREVDD_HVDF does generate hardware reset
 */
#define SPC_VD_CORE_CFG_HVDRE(x)                 (((uint32_t)(((uint32_t)(x)) << SPC_VD_CORE_CFG_HVDRE_SHIFT)) & SPC_VD_CORE_CFG_HVDRE_MASK)

#define SPC_VD_CORE_CFG_HVDIE_MASK               (0x8U)
#define SPC_VD_CORE_CFG_HVDIE_SHIFT              (3U)
/*! HVDIE - Core VDD High-Voltage Detect Interrupt Enable
 *  0b0..COREVDD_HVDF does not generate hardware interrupt (user polling)
 *  0b1..COREVDD_HVDF does generate hardware interrupt
 */
#define SPC_VD_CORE_CFG_HVDIE(x)                 (((uint32_t)(((uint32_t)(x)) << SPC_VD_CORE_CFG_HVDIE_SHIFT)) & SPC_VD_CORE_CFG_HVDIE_MASK)

#define SPC_VD_CORE_CFG_LOCK_MASK                (0x10000U)
#define SPC_VD_CORE_CFG_LOCK_SHIFT               (16U)
/*! LOCK - CORE Voltage Detect Reset Enable Lock Bit
 *  0b0..Writes to VD_CORE_CGF[LVDRE] and VD_CORE_CFG[HVDRE] are allowed.
 *  0b1..Writes to VD_CORE_CGF[LVDRE] and VD_CORE_CFG[HVDRE] are ignored.
 */
#define SPC_VD_CORE_CFG_LOCK(x)                  (((uint32_t)(((uint32_t)(x)) << SPC_VD_CORE_CFG_LOCK_SHIFT)) & SPC_VD_CORE_CFG_LOCK_MASK)
/*! @} */

/*! @name VD_SYS_CFG - System Voltage Detect Configuration Register */
/*! @{ */

#define SPC_VD_SYS_CFG_LVDRE_MASK                (0x1U)
#define SPC_VD_SYS_CFG_LVDRE_SHIFT               (0U)
/*! LVDRE - System VDD Low-Voltage Detect Reset Enable
 *  0b0..SYSVDD_LVDF does not generate hardware reset
 *  0b1..SYSVDD_LVDF does generate hardware reset
 */
#define SPC_VD_SYS_CFG_LVDRE(x)                  (((uint32_t)(((uint32_t)(x)) << SPC_VD_SYS_CFG_LVDRE_SHIFT)) & SPC_VD_SYS_CFG_LVDRE_MASK)

#define SPC_VD_SYS_CFG_LVDIE_MASK                (0x2U)
#define SPC_VD_SYS_CFG_LVDIE_SHIFT               (1U)
/*! LVDIE - System VDD Low-Voltage Detect Interrupt Enable
 *  0b0..SYSVDD_LVDF does not generate hardware interrupt (user polling)
 *  0b1..SYSVDD_LVDF does generate hardware interrupt
 */
#define SPC_VD_SYS_CFG_LVDIE(x)                  (((uint32_t)(((uint32_t)(x)) << SPC_VD_SYS_CFG_LVDIE_SHIFT)) & SPC_VD_SYS_CFG_LVDIE_MASK)

#define SPC_VD_SYS_CFG_HVDRE_MASK                (0x4U)
#define SPC_VD_SYS_CFG_HVDRE_SHIFT               (2U)
/*! HVDRE - System VDD High-Voltage Detect Reset Enable
 *  0b0..SYSVDD_HVDF does not generate hardware reset
 *  0b1..SYSVDD_HVDF does generate hardware reset
 */
#define SPC_VD_SYS_CFG_HVDRE(x)                  (((uint32_t)(((uint32_t)(x)) << SPC_VD_SYS_CFG_HVDRE_SHIFT)) & SPC_VD_SYS_CFG_HVDRE_MASK)

#define SPC_VD_SYS_CFG_HVDIE_MASK                (0x8U)
#define SPC_VD_SYS_CFG_HVDIE_SHIFT               (3U)
/*! HVDIE - System VDD High-Voltage Detect Interrupt Enable
 *  0b0..SYSVDD_HVDF does not generate hardware interrupt (user polling)
 *  0b1..SYSVDD_HVDF does generate hardware interrupt
 */
#define SPC_VD_SYS_CFG_HVDIE(x)                  (((uint32_t)(((uint32_t)(x)) << SPC_VD_SYS_CFG_HVDIE_SHIFT)) & SPC_VD_SYS_CFG_HVDIE_MASK)

#define SPC_VD_SYS_CFG_LVSEL_MASK                (0x100U)
#define SPC_VD_SYS_CFG_LVSEL_SHIFT               (8U)
/*! LVSEL - System VDD Low-Voltage Level Select
 *  0b0..Trip point set to Normal level (See the device data sheet for the normal level value)
 *  0b1..Trip point set to Safe level (See the device data sheet for the safe level value)
 */
#define SPC_VD_SYS_CFG_LVSEL(x)                  (((uint32_t)(((uint32_t)(x)) << SPC_VD_SYS_CFG_LVSEL_SHIFT)) & SPC_VD_SYS_CFG_LVSEL_MASK)

#define SPC_VD_SYS_CFG_LOCK_MASK                 (0x10000U)
#define SPC_VD_SYS_CFG_LOCK_SHIFT                (16U)
/*! LOCK - System Voltage Detect Reset Enable Lock Bit
 *  0b0..Writes to VD_SYS_CFG[LVDRE, HVDRE, LVSEL] are allowed.
 *  0b1..Writes to VD_SYS_CFG[LVDRE, HVDRE, LVSEL] are ignored.
 */
#define SPC_VD_SYS_CFG_LOCK(x)                   (((uint32_t)(((uint32_t)(x)) << SPC_VD_SYS_CFG_LOCK_SHIFT)) & SPC_VD_SYS_CFG_LOCK_MASK)
/*! @} */

/*! @name VD_IO_CFG - IO Voltage Detect Configuration Register */
/*! @{ */

#define SPC_VD_IO_CFG_LVDRE_MASK                 (0x1U)
#define SPC_VD_IO_CFG_LVDRE_SHIFT                (0U)
/*! LVDRE - IO VDD Low-Voltage Detect Reset Enable
 *  0b0..IOVDD_LVDF does not generate hardware reset
 *  0b1..IOVDD_LVDF does generate hardware reset
 */
#define SPC_VD_IO_CFG_LVDRE(x)                   (((uint32_t)(((uint32_t)(x)) << SPC_VD_IO_CFG_LVDRE_SHIFT)) & SPC_VD_IO_CFG_LVDRE_MASK)

#define SPC_VD_IO_CFG_LVDIE_MASK                 (0x2U)
#define SPC_VD_IO_CFG_LVDIE_SHIFT                (1U)
/*! LVDIE - IO VDD Low-Voltage Detect Interrupt Enable
 *  0b0..IOVDD_LVDF does not generate hardware interrupt (user polling)
 *  0b1..IOVDD_LVDF does generate hardware interrupt
 */
#define SPC_VD_IO_CFG_LVDIE(x)                   (((uint32_t)(((uint32_t)(x)) << SPC_VD_IO_CFG_LVDIE_SHIFT)) & SPC_VD_IO_CFG_LVDIE_MASK)

#define SPC_VD_IO_CFG_HVDRE_MASK                 (0x4U)
#define SPC_VD_IO_CFG_HVDRE_SHIFT                (2U)
/*! HVDRE - IO VDD High-Voltage Detect Reset Enable
 *  0b0..IOVDD_HVDF does not generate hardware reset
 *  0b1..IOVDD_HVDF does generate hardware reset
 */
#define SPC_VD_IO_CFG_HVDRE(x)                   (((uint32_t)(((uint32_t)(x)) << SPC_VD_IO_CFG_HVDRE_SHIFT)) & SPC_VD_IO_CFG_HVDRE_MASK)

#define SPC_VD_IO_CFG_HVDIE_MASK                 (0x8U)
#define SPC_VD_IO_CFG_HVDIE_SHIFT                (3U)
/*! HVDIE - IO VDD High-Voltage Detect Interrupt Enable
 *  0b0..IOVDD_HVDF does not generate hardware interrupt (user polling)
 *  0b1..IOVDD_HVDF does generate hardware interrupt
 */
#define SPC_VD_IO_CFG_HVDIE(x)                   (((uint32_t)(((uint32_t)(x)) << SPC_VD_IO_CFG_HVDIE_SHIFT)) & SPC_VD_IO_CFG_HVDIE_MASK)

#define SPC_VD_IO_CFG_LVSEL_MASK                 (0x100U)
#define SPC_VD_IO_CFG_LVSEL_SHIFT                (8U)
/*! LVSEL - IO VDD Low-Voltage Level Select
 *  0b0..Trip point set to Normal (See the device data sheet for the normal level value)
 *  0b1..Trip point set to Safe (See the device data sheet for the safe level value)
 */
#define SPC_VD_IO_CFG_LVSEL(x)                   (((uint32_t)(((uint32_t)(x)) << SPC_VD_IO_CFG_LVSEL_SHIFT)) & SPC_VD_IO_CFG_LVSEL_MASK)

#define SPC_VD_IO_CFG_LOCK_MASK                  (0x10000U)
#define SPC_VD_IO_CFG_LOCK_SHIFT                 (16U)
/*! LOCK - IO Voltage Detect Reset Enable Lock Bit
 *  0b0..Writes to VD_IO_CFG[LVDRE, HVDRE, HVSEL, LVSEL] are allowed.
 *  0b1..Writes to VD_IO_CFG[LVDRE, HVDRE, HVSEL, LVSEL] are ignored.
 */
#define SPC_VD_IO_CFG_LOCK(x)                    (((uint32_t)(((uint32_t)(x)) << SPC_VD_IO_CFG_LOCK_SHIFT)) & SPC_VD_IO_CFG_LOCK_MASK)
/*! @} */

/*! @name EVD_CFG - External Voltage Domain Configuration Register */
/*! @{ */

#define SPC_EVD_CFG_EVDISO_MASK                  (0x7U)
#define SPC_EVD_CFG_EVDISO_SHIFT                 (0U)
/*! EVDISO - External Voltage Domain Isolation */
#define SPC_EVD_CFG_EVDISO(x)                    (((uint32_t)(((uint32_t)(x)) << SPC_EVD_CFG_EVDISO_SHIFT)) & SPC_EVD_CFG_EVDISO_MASK)

#define SPC_EVD_CFG_EVDLPISO_MASK                (0x700U)
#define SPC_EVD_CFG_EVDLPISO_SHIFT               (8U)
/*! EVDLPISO - External Voltage Domain Low Power Isolation */
#define SPC_EVD_CFG_EVDLPISO(x)                  (((uint32_t)(((uint32_t)(x)) << SPC_EVD_CFG_EVDLPISO_SHIFT)) & SPC_EVD_CFG_EVDLPISO_MASK)

#define SPC_EVD_CFG_EVDSTAT_MASK                 (0x70000U)
#define SPC_EVD_CFG_EVDSTAT_SHIFT                (16U)
/*! EVDSTAT - External Voltage Domain Status */
#define SPC_EVD_CFG_EVDSTAT(x)                   (((uint32_t)(((uint32_t)(x)) << SPC_EVD_CFG_EVDSTAT_SHIFT)) & SPC_EVD_CFG_EVDSTAT_MASK)
/*! @} */

/*! @name VDD_CORE_GLITCH_DETECT_SC - VDD Core Glitch Detect Status Control Register */
/*! @{ */

#define SPC_VDD_CORE_GLITCH_DETECT_SC_CNT_SELECT_MASK (0x3U)
#define SPC_VDD_CORE_GLITCH_DETECT_SC_CNT_SELECT_SHIFT (0U)
/*! CNT_SELECT - CNT_SELECT
 *  0b00..Select bit-0 of 4-bit Ripple Counter to detect glitch on VDD Core
 *  0b01..Select bit-1 of 4-bit Ripple Counter to detect glitch on VDD Core
 *  0b10..Select bit-2 of 4-bit Ripple Counter to detect glitch on VDD Core
 *  0b11..Select bit-3 of 4-bit Ripple Counter to detect glitch on VDD Core
 */
#define SPC_VDD_CORE_GLITCH_DETECT_SC_CNT_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SPC_VDD_CORE_GLITCH_DETECT_SC_CNT_SELECT_SHIFT)) & SPC_VDD_CORE_GLITCH_DETECT_SC_CNT_SELECT_MASK)

#define SPC_VDD_CORE_GLITCH_DETECT_SC_TIMEOUT_MASK (0x3CU)
#define SPC_VDD_CORE_GLITCH_DETECT_SC_TIMEOUT_SHIFT (2U)
/*! TIMEOUT - TIMEOUT */
#define SPC_VDD_CORE_GLITCH_DETECT_SC_TIMEOUT(x) (((uint32_t)(((uint32_t)(x)) << SPC_VDD_CORE_GLITCH_DETECT_SC_TIMEOUT_SHIFT)) & SPC_VDD_CORE_GLITCH_DETECT_SC_TIMEOUT_MASK)

#define SPC_VDD_CORE_GLITCH_DETECT_SC_RE_MASK    (0x40U)
#define SPC_VDD_CORE_GLITCH_DETECT_SC_RE_SHIFT   (6U)
/*! RE - Core VDD Glitch Detect Reset Enable
 *  0b0..GLITCH_DETECT_FLAG[CNT_SELECT] does not generate POR/LVD reset
 *  0b1..GLITCH_DETECT_FLAG[CNT_SELECT] does generate POR/LVD reset
 */
#define SPC_VDD_CORE_GLITCH_DETECT_SC_RE(x)      (((uint32_t)(((uint32_t)(x)) << SPC_VDD_CORE_GLITCH_DETECT_SC_RE_SHIFT)) & SPC_VDD_CORE_GLITCH_DETECT_SC_RE_MASK)

#define SPC_VDD_CORE_GLITCH_DETECT_SC_IE_MASK    (0x80U)
#define SPC_VDD_CORE_GLITCH_DETECT_SC_IE_SHIFT   (7U)
/*! IE - Core VDD Glitch Detect Interrupt Enable
 *  0b0..GLITCH_DETECT_FLAG[CNT_SELECT] does not generate hardware interrupt (user polling)
 *  0b1..GLITCH_DETECT_FLAG[CNT_SELECT] does generate hardware interrupt
 */
#define SPC_VDD_CORE_GLITCH_DETECT_SC_IE(x)      (((uint32_t)(((uint32_t)(x)) << SPC_VDD_CORE_GLITCH_DETECT_SC_IE_SHIFT)) & SPC_VDD_CORE_GLITCH_DETECT_SC_IE_MASK)

#define SPC_VDD_CORE_GLITCH_DETECT_SC_GLITCH_DETECT_FLAG_MASK (0xF00U)
#define SPC_VDD_CORE_GLITCH_DETECT_SC_GLITCH_DETECT_FLAG_SHIFT (8U)
/*! GLITCH_DETECT_FLAG - GLITCH_DETECT_FLAG */
#define SPC_VDD_CORE_GLITCH_DETECT_SC_GLITCH_DETECT_FLAG(x) (((uint32_t)(((uint32_t)(x)) << SPC_VDD_CORE_GLITCH_DETECT_SC_GLITCH_DETECT_FLAG_SHIFT)) & SPC_VDD_CORE_GLITCH_DETECT_SC_GLITCH_DETECT_FLAG_MASK)

#define SPC_VDD_CORE_GLITCH_DETECT_SC_LOCK_MASK  (0x10000U)
#define SPC_VDD_CORE_GLITCH_DETECT_SC_LOCK_SHIFT (16U)
/*! LOCK - VDD Core Voltage Glitch Detect Reset Enable Lock Bit
 *  0b0..Writes to RE are allowed.
 *  0b1..Writes to RE are ignored.
 */
#define SPC_VDD_CORE_GLITCH_DETECT_SC_LOCK(x)    (((uint32_t)(((uint32_t)(x)) << SPC_VDD_CORE_GLITCH_DETECT_SC_LOCK_SHIFT)) & SPC_VDD_CORE_GLITCH_DETECT_SC_LOCK_MASK)
/*! @} */

/*! @name CORELDO_CFG - LDO_CORE Configuration Register */
/*! @{ */

#define SPC_CORELDO_CFG_DPDOWN_PULLDOWN_DISABLE_MASK (0x10000U)
#define SPC_CORELDO_CFG_DPDOWN_PULLDOWN_DISABLE_SHIFT (16U)
/*! DPDOWN_PULLDOWN_DISABLE - LDO_CORE Deep Power Down Pulldown Disable
 *  0b0..LDO_CORE pulldown in Deep Power Down not disabled
 *  0b1..LDO_CORE pulldown in Deep Power Down disabled
 */
#define SPC_CORELDO_CFG_DPDOWN_PULLDOWN_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << SPC_CORELDO_CFG_DPDOWN_PULLDOWN_DISABLE_SHIFT)) & SPC_CORELDO_CFG_DPDOWN_PULLDOWN_DISABLE_MASK)
/*! @} */

/*! @name SYSLDO_CFG - LDO_SYS Configuration Register */
/*! @{ */

#define SPC_SYSLDO_CFG_ISINKEN_MASK              (0x1U)
#define SPC_SYSLDO_CFG_ISINKEN_SHIFT             (0U)
/*! ISINKEN - Current Sink Enable
 *  0b0..Disable current sink feature of System low power regulator.
 *  0b1..Enable current sink feature of System low power regulator.
 */
#define SPC_SYSLDO_CFG_ISINKEN(x)                (((uint32_t)(((uint32_t)(x)) << SPC_SYSLDO_CFG_ISINKEN_SHIFT)) & SPC_SYSLDO_CFG_ISINKEN_MASK)
/*! @} */

/*! @name DCDC_CFG - DCDC Configuration Register */
/*! @{ */

#define SPC_DCDC_CFG_FREQ_CNTRL_ON_MASK          (0x1U)
#define SPC_DCDC_CFG_FREQ_CNTRL_ON_SHIFT         (0U)
/*! FREQ_CNTRL_ON - DCDC Burst Frequency Control Enable */
#define SPC_DCDC_CFG_FREQ_CNTRL_ON(x)            (((uint32_t)(((uint32_t)(x)) << SPC_DCDC_CFG_FREQ_CNTRL_ON_SHIFT)) & SPC_DCDC_CFG_FREQ_CNTRL_ON_MASK)

#define SPC_DCDC_CFG_FREQ_CNTRL_MASK             (0x3F00U)
#define SPC_DCDC_CFG_FREQ_CNTRL_SHIFT            (8U)
/*! FREQ_CNTRL - DCDC Burst Frequency Control Register */
#define SPC_DCDC_CFG_FREQ_CNTRL(x)               (((uint32_t)(((uint32_t)(x)) << SPC_DCDC_CFG_FREQ_CNTRL_SHIFT)) & SPC_DCDC_CFG_FREQ_CNTRL_MASK)

#define SPC_DCDC_CFG_VOUT2P5_SEL_MASK            (0x40000U)
#define SPC_DCDC_CFG_VOUT2P5_SEL_SHIFT           (18U)
/*! VOUT2P5_SEL - VOUT2P5_SEL
 *  0b0..DCDC Vout set by DCDC_VDD_LVL register
 *  0b1..DCDC Vout set to 2p5V.
 */
#define SPC_DCDC_CFG_VOUT2P5_SEL(x)              (((uint32_t)(((uint32_t)(x)) << SPC_DCDC_CFG_VOUT2P5_SEL_SHIFT)) & SPC_DCDC_CFG_VOUT2P5_SEL_MASK)
/*! @} */

/*! @name DCDC_BURST_CFG - DCDC BURST Configuration Register */
/*! @{ */

#define SPC_DCDC_BURST_CFG_BURST_REQ_MASK        (0x1U)
#define SPC_DCDC_BURST_CFG_BURST_REQ_SHIFT       (0U)
/*! BURST_REQ - Software Burst Request Register
 *  0b0..No burst request generated
 *  0b1..Burst request generated
 */
#define SPC_DCDC_BURST_CFG_BURST_REQ(x)          (((uint32_t)(((uint32_t)(x)) << SPC_DCDC_BURST_CFG_BURST_REQ_SHIFT)) & SPC_DCDC_BURST_CFG_BURST_REQ_MASK)

#define SPC_DCDC_BURST_CFG_EXT_BURST_EN_MASK     (0x2U)
#define SPC_DCDC_BURST_CFG_EXT_BURST_EN_SHIFT    (1U)
/*! EXT_BURST_EN - DCDC External Burst Request Enable Register
 *  0b0..External Burst Request are not enabled
 *  0b1..External Burst Request are enabled
 */
#define SPC_DCDC_BURST_CFG_EXT_BURST_EN(x)       (((uint32_t)(((uint32_t)(x)) << SPC_DCDC_BURST_CFG_EXT_BURST_EN_SHIFT)) & SPC_DCDC_BURST_CFG_EXT_BURST_EN_MASK)

#define SPC_DCDC_BURST_CFG_BURST_ACK_MASK        (0x8U)
#define SPC_DCDC_BURST_CFG_BURST_ACK_SHIFT       (3U)
/*! BURST_ACK - DCDC Burst Acknowledge Flag
 *  0b0..DCDC Burst request has not acknowledged.
 *  0b1..DCDC Burst request has completed and acknowledged.
 */
#define SPC_DCDC_BURST_CFG_BURST_ACK(x)          (((uint32_t)(((uint32_t)(x)) << SPC_DCDC_BURST_CFG_BURST_ACK_SHIFT)) & SPC_DCDC_BURST_CFG_BURST_ACK_MASK)

#define SPC_DCDC_BURST_CFG_PULSE_REFRESH_CNT_MASK (0xFFFF0000U)
#define SPC_DCDC_BURST_CFG_PULSE_REFRESH_CNT_SHIFT (16U)
/*! PULSE_REFRESH_CNT - DCDC 16-bit refresh count value */
#define SPC_DCDC_BURST_CFG_PULSE_REFRESH_CNT(x)  (((uint32_t)(((uint32_t)(x)) << SPC_DCDC_BURST_CFG_PULSE_REFRESH_CNT_SHIFT)) & SPC_DCDC_BURST_CFG_PULSE_REFRESH_CNT_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group SPC_Register_Masks */


/*!
 * @}
 */ /* end of group SPC_Peripheral_Access_Layer */


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


#endif  /* PERI_SPC_H_ */

