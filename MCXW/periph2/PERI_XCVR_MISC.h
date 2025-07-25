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
**         CMSIS Peripheral Access Layer for XCVR_MISC
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
 * @file PERI_XCVR_MISC.h
 * @version 2.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for XCVR_MISC
 *
 * CMSIS Peripheral Access Layer for XCVR_MISC
 */

#if !defined(PERI_XCVR_MISC_H_)
#define PERI_XCVR_MISC_H_                        /**< Symbol preventing repeated inclusion */

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
   -- XCVR_MISC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup XCVR_MISC_Peripheral_Access_Layer XCVR_MISC Peripheral Access Layer
 * @{
 */

/** XCVR_MISC - Size of Registers Arrays */
#define XCVR_MISC_IPS_FO_ADDRX_COUNT              8u
#define XCVR_MISC_IPS_FO_DRS0_DATAX_COUNT         8u
#define XCVR_MISC_IPS_FO_DRS1_DATAX_COUNT         8u

/** XCVR_MISC - Register Layout Typedef */
typedef struct {
  __IO uint32_t XCVR_CTRL;                         /**< TRANSCEIVER CONTROL, offset: 0x0 */
  __IO uint32_t XCVR_STATUS;                       /**< TRANSCEIVER STATUS, offset: 0x4 */
  __IO uint32_t FAD_CTRL;                          /**< FAD CONTROL, offset: 0x8 */
  __IO uint32_t DMA_CTRL;                          /**< TRANSCEIVER DMA CONTROL, offset: 0xC */
  __IO uint32_t DBG_RAM_CTRL;                      /**< DBG Ram control register, offset: 0x10 */
  __IO uint32_t DBG_RAM_ADDR;                      /**< DBG RAM ADDRESS, offset: 0x14 */
  __I  uint32_t DBG_RAM_STOP_ADDR;                 /**< DBG RAM STOP ADDRESS, offset: 0x18 */
  __IO uint32_t LDO_TRIM_0;                        /**< LDO TRIM Configuration 0, offset: 0x1C */
  __IO uint32_t LDO_TRIM_1;                        /**< LDO TRIM Configuration 1, offset: 0x20 */
  __I  uint32_t LDO_TRIM_RES_0;                    /**< RF Analog LDO Trim Res Control 0, offset: 0x24 */
  __I  uint32_t LDO_TRIM_RES_1;                    /**< RF Analog LDO Trim Res Control 1, offset: 0x28 */
  __IO uint32_t LCL_CFG0;                          /**< LCL CTRL CFG 0, offset: 0x2C */
  __IO uint32_t LCL_CFG1;                          /**< LCL CTRL CFG 1, offset: 0x30 */
  __IO uint32_t LCL_TX_CFG0;                       /**< LCL CTRL TX CONFIG0, offset: 0x34 */
  __IO uint32_t LCL_TX_CFG1;                       /**< LCL CTRL TX CONFIG1, offset: 0x38 */
  __IO uint32_t LCL_TX_CFG2;                       /**< LCL CTRL TX CONFIG2, offset: 0x3C */
  __IO uint32_t LCL_RX_CFG0;                       /**< LCL CTRL RX CONFIG0, offset: 0x40 */
  __IO uint32_t LCL_RX_CFG1;                       /**< LCL CTRL RX CONFIG1, offset: 0x44 */
  __IO uint32_t LCL_RX_CFG2;                       /**< LCL CTRL RX CONFIG2, offset: 0x48 */
  __IO uint32_t LCL_PM_MSB;                        /**< LCL CTRL PM MSB, offset: 0x4C */
  __IO uint32_t LCL_PM_LSB;                        /**< LCL CTRL PM LSB, offset: 0x50 */
  __IO uint32_t LCL_GPIO_CTRL0;                    /**< LCL GPIO CTRL 0, offset: 0x54 */
  __IO uint32_t LCL_GPIO_CTRL1;                    /**< LCL GPIO CTRL 1, offset: 0x58 */
  __IO uint32_t LCL_GPIO_CTRL2;                    /**< LCL GPIO CTRL 2, offset: 0x5C */
  __IO uint32_t LCL_GPIO_CTRL3;                    /**< LCL GPIO CTRL 3, offset: 0x60 */
  __IO uint32_t LCL_GPIO_CTRL4;                    /**< LCL GPIO CTRL 4, offset: 0x64 */
  __IO uint32_t LCL_DMA_MASK_DELAY;                /**< LCL_DMA_MASK_DELAY, offset: 0x68 */
  __IO uint32_t LCL_DMA_MASK_PERIOD;               /**< LCL_DMA_MASK_PERIOD, offset: 0x6C */
  __IO uint32_t RSM_CSR;                           /**< Ranging Sequence Manager Control and Status, offset: 0x70 */
  __IO uint32_t RSM_CTRL0;                         /**< Ranging Sequence Manager Control, offset: 0x74 */
  __IO uint32_t RSM_CTRL1;                         /**< Ranging Sequence Manager Control, offset: 0x78 */
  __IO uint32_t RSM_CTRL2;                         /**< Ranging Sequence Manager Control, offset: 0x7C */
  __IO uint32_t RSM_CTRL3;                         /**< Ranging Sequence Manager Control, offset: 0x80 */
  __IO uint32_t RSM_CTRL4;                         /**< Ranging Sequence Manager Control, offset: 0x84 */
       uint8_t RESERVED_0[20];
  __IO uint32_t RF_DFT_CTRL;                       /**< RF DFT CTRL, offset: 0x9C */
  __IO uint32_t IPS_FO_ADDR[XCVR_MISC_IPS_FO_ADDRX_COUNT]; /**< IPS FAST OVERWRITE ADDRESS, array offset: 0xA0, array step: 0x4 */
  __IO uint32_t IPS_FO_DRS0_DATA[XCVR_MISC_IPS_FO_DRS0_DATAX_COUNT]; /**< IPS FAST OVERWRITE DRS0 DATA, array offset: 0xC0, array step: 0x4 */
  __IO uint32_t IPS_FO_DRS1_DATA[XCVR_MISC_IPS_FO_DRS1_DATAX_COUNT]; /**< IPS FAST OVERWRITE DRS1 DATA, array offset: 0xE0, array step: 0x4 */
} XCVR_MISC_Type;

/* ----------------------------------------------------------------------------
   -- XCVR_MISC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup XCVR_MISC_Register_Masks XCVR_MISC Register Masks
 * @{
 */

/*! @name XCVR_CTRL - TRANSCEIVER CONTROL */
/*! @{ */

#define XCVR_MISC_XCVR_CTRL_XCVR_SOFT_RESET_MASK (0x1U)
#define XCVR_MISC_XCVR_CTRL_XCVR_SOFT_RESET_SHIFT (0U)
/*! XCVR_SOFT_RESET - transciever soft reset control
 *  0b0..no soft reset
 *  0b1..enable soft reset on transciever
 */
#define XCVR_MISC_XCVR_CTRL_XCVR_SOFT_RESET(x)   (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_CTRL_XCVR_SOFT_RESET_SHIFT)) & XCVR_MISC_XCVR_CTRL_XCVR_SOFT_RESET_MASK)

#define XCVR_MISC_XCVR_CTRL_LPPS_ENABLE_MASK     (0x2U)
#define XCVR_MISC_XCVR_CTRL_LPPS_ENABLE_SHIFT    (1U)
/*! LPPS_ENABLE - transciever lpps enable control
 *  0b0..no lpps feature
 *  0b1..enable lpps feature
 */
#define XCVR_MISC_XCVR_CTRL_LPPS_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_CTRL_LPPS_ENABLE_SHIFT)) & XCVR_MISC_XCVR_CTRL_LPPS_ENABLE_MASK)

#define XCVR_MISC_XCVR_CTRL_SDCLK_OUT_EN_MASK    (0x8U)
#define XCVR_MISC_XCVR_CTRL_SDCLK_OUT_EN_SHIFT   (3U)
/*! SDCLK_OUT_EN - sdclk out control
 *  0b0..no sdclk out
 *  0b1..enable sdclk out
 */
#define XCVR_MISC_XCVR_CTRL_SDCLK_OUT_EN(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_CTRL_SDCLK_OUT_EN_SHIFT)) & XCVR_MISC_XCVR_CTRL_SDCLK_OUT_EN_MASK)

#define XCVR_MISC_XCVR_CTRL_DEMOD_SEL_MASK       (0xC0U)
#define XCVR_MISC_XCVR_CTRL_DEMOD_SEL_SHIFT      (6U)
/*! DEMOD_SEL - Demodulator Selector
 *  0b00..No demodulator selected
 *  0b01..Use NXP Multi-standard PHY demodulator
 *  0b10..Use Legacy 802.15.4 demodulator
 *  0b11..Reserved
 */
#define XCVR_MISC_XCVR_CTRL_DEMOD_SEL(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_CTRL_DEMOD_SEL_SHIFT)) & XCVR_MISC_XCVR_CTRL_DEMOD_SEL_MASK)

#define XCVR_MISC_XCVR_CTRL_DATA_RATE_MASK       (0x700U)
#define XCVR_MISC_XCVR_CTRL_DATA_RATE_SHIFT      (8U)
/*! DATA_RATE - Radio data rate setting
 *  0b000..2Mbps
 *  0b001..1Mbps
 *  0b010..500Kbps
 *  0b011..250Kbps
 *  0b1xx..Reserved
 */
#define XCVR_MISC_XCVR_CTRL_DATA_RATE(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_CTRL_DATA_RATE_SHIFT)) & XCVR_MISC_XCVR_CTRL_DATA_RATE_MASK)

#define XCVR_MISC_XCVR_CTRL_DATA_RATE_DRS_MASK   (0x3800U)
#define XCVR_MISC_XCVR_CTRL_DATA_RATE_DRS_SHIFT  (11U)
/*! DATA_RATE_DRS - Radio data rate setting, Data Rate Switch
 *  0b000..2Mbps
 *  0b001..1Mbps
 *  0b010..500Kbps
 *  0b011..250Kbps
 *  0b1xx..Reserved
 */
#define XCVR_MISC_XCVR_CTRL_DATA_RATE_DRS(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_CTRL_DATA_RATE_DRS_SHIFT)) & XCVR_MISC_XCVR_CTRL_DATA_RATE_DRS_MASK)

#define XCVR_MISC_XCVR_CTRL_REF_CLK_FREQ_MASK    (0x8000U)
#define XCVR_MISC_XCVR_CTRL_REF_CLK_FREQ_SHIFT   (15U)
/*! REF_CLK_FREQ - transciever ref clk freq control
 *  0b0..32MHz
 *  0b1..26MHz
 */
#define XCVR_MISC_XCVR_CTRL_REF_CLK_FREQ(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_CTRL_REF_CLK_FREQ_SHIFT)) & XCVR_MISC_XCVR_CTRL_REF_CLK_FREQ_MASK)

#define XCVR_MISC_XCVR_CTRL_FO_RX_EN_MASK        (0x10000U)
#define XCVR_MISC_XCVR_CTRL_FO_RX_EN_SHIFT       (16U)
/*! FO_RX_EN - Fast Overwrite RX Enable */
#define XCVR_MISC_XCVR_CTRL_FO_RX_EN(x)          (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_CTRL_FO_RX_EN_SHIFT)) & XCVR_MISC_XCVR_CTRL_FO_RX_EN_MASK)

#define XCVR_MISC_XCVR_CTRL_FO_TX_EN_MASK        (0x20000U)
#define XCVR_MISC_XCVR_CTRL_FO_TX_EN_SHIFT       (17U)
/*! FO_TX_EN - Fast Overwrite TX Enable */
#define XCVR_MISC_XCVR_CTRL_FO_TX_EN(x)          (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_CTRL_FO_TX_EN_SHIFT)) & XCVR_MISC_XCVR_CTRL_FO_TX_EN_MASK)

#define XCVR_MISC_XCVR_CTRL_TOF_RX_SEL_MASK      (0x40000U)
#define XCVR_MISC_XCVR_CTRL_TOF_RX_SEL_SHIFT     (18U)
/*! TOF_RX_SEL - Time-of-Flight RX Select
 *  0b0..PHY: aa_fnd_to_ll
 *  0b1..Localization Control: pattern_found
 */
#define XCVR_MISC_XCVR_CTRL_TOF_RX_SEL(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_CTRL_TOF_RX_SEL_SHIFT)) & XCVR_MISC_XCVR_CTRL_TOF_RX_SEL_MASK)

#define XCVR_MISC_XCVR_CTRL_TOF_TX_SEL_MASK      (0x80000U)
#define XCVR_MISC_XCVR_CTRL_TOF_TX_SEL_SHIFT     (19U)
/*! TOF_TX_SEL - Time-of-Flight TX Select
 *  0b0..TSM: tx_dig_en
 *  0b1..TXDIG: pa_wu_complete
 */
#define XCVR_MISC_XCVR_CTRL_TOF_TX_SEL(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_CTRL_TOF_TX_SEL_SHIFT)) & XCVR_MISC_XCVR_CTRL_TOF_TX_SEL_MASK)

#define XCVR_MISC_XCVR_CTRL_LL_CFG_CAPT_DIS_MASK (0x100000U)
#define XCVR_MISC_XCVR_CTRL_LL_CFG_CAPT_DIS_SHIFT (20U)
/*! LL_CFG_CAPT_DIS - Link Layer Configuration Capture Disable
 *  0b0..Enabled: Link Layer configuration inputs are captured.
 *  0b1..Disabled: Link Layer configurations are not captured.
 */
#define XCVR_MISC_XCVR_CTRL_LL_CFG_CAPT_DIS(x)   (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_CTRL_LL_CFG_CAPT_DIS_SHIFT)) & XCVR_MISC_XCVR_CTRL_LL_CFG_CAPT_DIS_MASK)
/*! @} */

/*! @name XCVR_STATUS - TRANSCEIVER STATUS */
/*! @{ */

#define XCVR_MISC_XCVR_STATUS_TSM_COUNT_MASK     (0xFFU)
#define XCVR_MISC_XCVR_STATUS_TSM_COUNT_SHIFT    (0U)
/*! TSM_COUNT - TSM_COUNT */
#define XCVR_MISC_XCVR_STATUS_TSM_COUNT(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_STATUS_TSM_COUNT_SHIFT)) & XCVR_MISC_XCVR_STATUS_TSM_COUNT_MASK)

#define XCVR_MISC_XCVR_STATUS_TSM_IRQ0_MASK      (0x100U)
#define XCVR_MISC_XCVR_STATUS_TSM_IRQ0_SHIFT     (8U)
/*! TSM_IRQ0 - TSM Interrupt #0
 *  0b0..TSM Interrupt #0 is not asserted.
 *  0b1..TSM Interrupt #0 is asserted. Write '1' to this bit to clear it.
 */
#define XCVR_MISC_XCVR_STATUS_TSM_IRQ0(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_STATUS_TSM_IRQ0_SHIFT)) & XCVR_MISC_XCVR_STATUS_TSM_IRQ0_MASK)

#define XCVR_MISC_XCVR_STATUS_TSM_IRQ1_MASK      (0x200U)
#define XCVR_MISC_XCVR_STATUS_TSM_IRQ1_SHIFT     (9U)
/*! TSM_IRQ1 - TSM Interrupt #1
 *  0b0..TSM Interrupt #1 is not asserted.
 *  0b1..TSM Interrupt #1 is asserted. Write '1' to this bit to clear it.
 */
#define XCVR_MISC_XCVR_STATUS_TSM_IRQ1(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_STATUS_TSM_IRQ1_SHIFT)) & XCVR_MISC_XCVR_STATUS_TSM_IRQ1_MASK)

#define XCVR_MISC_XCVR_STATUS_TSM_BUSY_MASK      (0x2000U)
#define XCVR_MISC_XCVR_STATUS_TSM_BUSY_SHIFT     (13U)
/*! TSM_BUSY - tsm busy status */
#define XCVR_MISC_XCVR_STATUS_TSM_BUSY(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_STATUS_TSM_BUSY_SHIFT)) & XCVR_MISC_XCVR_STATUS_TSM_BUSY_MASK)

#define XCVR_MISC_XCVR_STATUS_RX_MODE_MASK       (0x4000U)
#define XCVR_MISC_XCVR_STATUS_RX_MODE_SHIFT      (14U)
/*! RX_MODE - Receive Mode */
#define XCVR_MISC_XCVR_STATUS_RX_MODE(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_STATUS_RX_MODE_SHIFT)) & XCVR_MISC_XCVR_STATUS_RX_MODE_MASK)

#define XCVR_MISC_XCVR_STATUS_TX_MODE_MASK       (0x8000U)
#define XCVR_MISC_XCVR_STATUS_TX_MODE_SHIFT      (15U)
/*! TX_MODE - Transmit Mode */
#define XCVR_MISC_XCVR_STATUS_TX_MODE(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_XCVR_STATUS_TX_MODE_SHIFT)) & XCVR_MISC_XCVR_STATUS_TX_MODE_MASK)
/*! @} */

/*! @name FAD_CTRL - FAD CONTROL */
/*! @{ */

#define XCVR_MISC_FAD_CTRL_FAD_EN_MASK           (0x1U)
#define XCVR_MISC_FAD_CTRL_FAD_EN_SHIFT          (0U)
/*! FAD_EN - Fast Antenna Diversity Enable
 *  0b0..Fast Antenna Diversity disabled
 *  0b1..Fast Antenna Diversity enabled
 */
#define XCVR_MISC_FAD_CTRL_FAD_EN(x)             (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_FAD_CTRL_FAD_EN_SHIFT)) & XCVR_MISC_FAD_CTRL_FAD_EN_MASK)

#define XCVR_MISC_FAD_CTRL_ANTX_MASK             (0x2U)
#define XCVR_MISC_FAD_CTRL_ANTX_SHIFT            (1U)
/*! ANTX - Antenna Selection State */
#define XCVR_MISC_FAD_CTRL_ANTX(x)               (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_FAD_CTRL_ANTX_SHIFT)) & XCVR_MISC_FAD_CTRL_ANTX_MASK)

#define XCVR_MISC_FAD_CTRL_ANTX_OVRD_EN_MASK     (0x4U)
#define XCVR_MISC_FAD_CTRL_ANTX_OVRD_EN_SHIFT    (2U)
/*! ANTX_OVRD_EN - Antenna State Override Enable */
#define XCVR_MISC_FAD_CTRL_ANTX_OVRD_EN(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_FAD_CTRL_ANTX_OVRD_EN_SHIFT)) & XCVR_MISC_FAD_CTRL_ANTX_OVRD_EN_MASK)

#define XCVR_MISC_FAD_CTRL_ANTX_OVRD_MASK        (0x8U)
#define XCVR_MISC_FAD_CTRL_ANTX_OVRD_SHIFT       (3U)
/*! ANTX_OVRD - Antenna State Override Value */
#define XCVR_MISC_FAD_CTRL_ANTX_OVRD(x)          (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_FAD_CTRL_ANTX_OVRD_SHIFT)) & XCVR_MISC_FAD_CTRL_ANTX_OVRD_MASK)

#define XCVR_MISC_FAD_CTRL_ANTX_EN_MASK          (0x30U)
#define XCVR_MISC_FAD_CTRL_ANTX_EN_SHIFT         (4U)
/*! ANTX_EN - FAD Antenna Controls Enable
 *  0b00..all disabled (held low)
 *  0b01..only RX/TX_SWITCH enabled
 *  0b10..only ANT_A/B enabled
 *  0b11..all enabled
 */
#define XCVR_MISC_FAD_CTRL_ANTX_EN(x)            (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_FAD_CTRL_ANTX_EN_SHIFT)) & XCVR_MISC_FAD_CTRL_ANTX_EN_MASK)

#define XCVR_MISC_FAD_CTRL_ANTX_CTRLMODE_MASK    (0x80U)
#define XCVR_MISC_FAD_CTRL_ANTX_CTRLMODE_SHIFT   (7U)
/*! ANTX_CTRLMODE - Antenna Diversity Control Mode */
#define XCVR_MISC_FAD_CTRL_ANTX_CTRLMODE(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_FAD_CTRL_ANTX_CTRLMODE_SHIFT)) & XCVR_MISC_FAD_CTRL_ANTX_CTRLMODE_MASK)

#define XCVR_MISC_FAD_CTRL_ANTX_POL_MASK         (0xF00U)
#define XCVR_MISC_FAD_CTRL_ANTX_POL_SHIFT        (8U)
/*! ANTX_POL - FAD Antenna Controls Polarity */
#define XCVR_MISC_FAD_CTRL_ANTX_POL(x)           (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_FAD_CTRL_ANTX_POL_SHIFT)) & XCVR_MISC_FAD_CTRL_ANTX_POL_MASK)

#define XCVR_MISC_FAD_CTRL_FAD_NOT_GPIO_MASK     (0xF000U)
#define XCVR_MISC_FAD_CTRL_FAD_NOT_GPIO_SHIFT    (12U)
/*! FAD_NOT_GPIO - FAD versus GPIO Mode Selector */
#define XCVR_MISC_FAD_CTRL_FAD_NOT_GPIO(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_FAD_CTRL_FAD_NOT_GPIO_SHIFT)) & XCVR_MISC_FAD_CTRL_FAD_NOT_GPIO_MASK)

#define XCVR_MISC_FAD_CTRL_FAD_LANT_SEL_MASK     (0x10000U)
#define XCVR_MISC_FAD_CTRL_FAD_LANT_SEL_SHIFT    (16U)
/*! FAD_LANT_SEL - FAD versus LANT_LUT_GPIO Selector
 *  0b0..LANT_LUT_GPIO[3:0]
 *  0b1..{ANT_B, ANT_A, RX_SWITCH, TX_SWITCH}
 */
#define XCVR_MISC_FAD_CTRL_FAD_LANT_SEL(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_FAD_CTRL_FAD_LANT_SEL_SHIFT)) & XCVR_MISC_FAD_CTRL_FAD_LANT_SEL_MASK)
/*! @} */

/*! @name DMA_CTRL - TRANSCEIVER DMA CONTROL */
/*! @{ */

#define XCVR_MISC_DMA_CTRL_DMA_PAGE_MASK         (0xFU)
#define XCVR_MISC_DMA_CTRL_DMA_PAGE_SHIFT        (0U)
/*! DMA_PAGE - Transceiver DMA Page Selector
 *  0b0000..DMA idle
 *  0b0001..RXDIG-IQ: Select from (mixer, decimator, pd channel filter, src, cfo-mixer, demod chan filter) in RXDIG. 11bit signed data, MSB aligned
 *  0b0010..RXDIG-IQ-ALT: Same as above + signals on unused LSBs : {antenna switch, GenLL or 802.15.4LL CRC_FAIL}
 *          on "Q" LSBs, {preamble_found, aa_sfd_matched} on "I" LSBs.
 *  0b0011..ADC-IQ: 11bit samples are MSB aligned in each 16bit half-word
 *  0b0100..PHASE: Select from (sync phase, demod phase) within RXDIG. MSB aligned
 *  0b0101..RSSI-PHASE: select from 8bit Narrowband (rssi, rssi raw, lqi, snr, noise) and Wideband(rssi, rssi raw) + 8bit high-resolution PHASE
 *  0b0110..MAG-PHASE: RSSI magnitude + 8bit high-resolution PHASE
 *  0b0111..GEN4-PHY
 *  0b1000..DETERMINISTIC
 */
#define XCVR_MISC_DMA_CTRL_DMA_PAGE(x)           (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DMA_CTRL_DMA_PAGE_SHIFT)) & XCVR_MISC_DMA_CTRL_DMA_PAGE_MASK)

#define XCVR_MISC_DMA_CTRL_DMA_START_TRG_MASK    (0xF0U)
#define XCVR_MISC_DMA_CTRL_DMA_START_TRG_SHIFT   (4U)
/*! DMA_START_TRG - DMA Start Trigger Selector
 *  0b0000..no trigger
 *  0b0001..PHY: pd found
 *  0b0010..PHY: aa found
 *  0b0011..Zigbee_PHY: pd found
 *  0b0100..Zigbee_PHY: sfd detect
 *  0b0101..RXDIG: agc_gain_chg
 *  0b0110..TSM: rx_dig_en
 *  0b0111..TSM: tsm_irq0_start_trig
 *  0b1000..CRC pass
 *  0b1001..CRC done (Not used for 15.4LL)
 *  0b1010..Localization control: pattern match
 *  0b1011..GenericLL: cte_present, Bluetooth LE: cte_en
 *  0b1100..Ranging sequence manager: dma_trigger
 */
#define XCVR_MISC_DMA_CTRL_DMA_START_TRG(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DMA_CTRL_DMA_START_TRG_SHIFT)) & XCVR_MISC_DMA_CTRL_DMA_START_TRG_MASK)

#define XCVR_MISC_DMA_CTRL_DMA_START_EDGE_MASK   (0x100U)
#define XCVR_MISC_DMA_CTRL_DMA_START_EDGE_SHIFT  (8U)
/*! DMA_START_EDGE - DMA Start Trigger Edge Selector
 *  0b0..Trigger fires on a rising edge of the selected trigger source
 *  0b1..Trigger fires on a falling edge of the selected trigger source
 */
#define XCVR_MISC_DMA_CTRL_DMA_START_EDGE(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DMA_CTRL_DMA_START_EDGE_SHIFT)) & XCVR_MISC_DMA_CTRL_DMA_START_EDGE_MASK)

#define XCVR_MISC_DMA_CTRL_DMA_DEC_MASK          (0xC00U)
#define XCVR_MISC_DMA_CTRL_DMA_DEC_SHIFT         (10U)
/*! DMA_DEC - DMA Decimation Rate
 *  0b00..Data is captured on every data valid
 *  0b01..Data is captured on every 2nd data valid
 *  0b10..Data is captured on every 4th data valid
 *  0b11..Data is captured on every 8th data valid
 */
#define XCVR_MISC_DMA_CTRL_DMA_DEC(x)            (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DMA_CTRL_DMA_DEC_SHIFT)) & XCVR_MISC_DMA_CTRL_DMA_DEC_MASK)

#define XCVR_MISC_DMA_CTRL_DMA_START_DLY_MASK    (0x7FF000U)
#define XCVR_MISC_DMA_CTRL_DMA_START_DLY_SHIFT   (12U)
/*! DMA_START_DLY - DMA Start Trigger Delay */
#define XCVR_MISC_DMA_CTRL_DMA_START_DLY(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DMA_CTRL_DMA_START_DLY_SHIFT)) & XCVR_MISC_DMA_CTRL_DMA_START_DLY_MASK)

#define XCVR_MISC_DMA_CTRL_DMA_EN_MASK           (0x800000U)
#define XCVR_MISC_DMA_CTRL_DMA_EN_SHIFT          (23U)
/*! DMA_EN - DMA Enable */
#define XCVR_MISC_DMA_CTRL_DMA_EN(x)             (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DMA_CTRL_DMA_EN_SHIFT)) & XCVR_MISC_DMA_CTRL_DMA_EN_MASK)

#define XCVR_MISC_DMA_CTRL_DMA_AA_TRIGGERED_MASK (0x1000000U)
#define XCVR_MISC_DMA_CTRL_DMA_AA_TRIGGERED_SHIFT (24U)
/*! DMA_AA_TRIGGERED - DMA Access Address triggered */
#define XCVR_MISC_DMA_CTRL_DMA_AA_TRIGGERED(x)   (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DMA_CTRL_DMA_AA_TRIGGERED_SHIFT)) & XCVR_MISC_DMA_CTRL_DMA_AA_TRIGGERED_MASK)

#define XCVR_MISC_DMA_CTRL_DMA_START_TRIGGERED_MASK (0x2000000U)
#define XCVR_MISC_DMA_CTRL_DMA_START_TRIGGERED_SHIFT (25U)
/*! DMA_START_TRIGGERED - DMA Start Trigger Occurred */
#define XCVR_MISC_DMA_CTRL_DMA_START_TRIGGERED(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DMA_CTRL_DMA_START_TRIGGERED_SHIFT)) & XCVR_MISC_DMA_CTRL_DMA_START_TRIGGERED_MASK)

#define XCVR_MISC_DMA_CTRL_DMA_SIGNAL_VALID_MASK_EN_MASK (0x80000000U)
#define XCVR_MISC_DMA_CTRL_DMA_SIGNAL_VALID_MASK_EN_SHIFT (31U)
/*! DMA_SIGNAL_VALID_MASK_EN - DMA Signal Valid Mask Enable
 *  0b0..Disable use of dma_signal_valid_mask.
 *  0b1..Enable use of dma_signal_valid_mask.
 */
#define XCVR_MISC_DMA_CTRL_DMA_SIGNAL_VALID_MASK_EN(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DMA_CTRL_DMA_SIGNAL_VALID_MASK_EN_SHIFT)) & XCVR_MISC_DMA_CTRL_DMA_SIGNAL_VALID_MASK_EN_MASK)
/*! @} */

/*! @name DBG_RAM_CTRL - DBG Ram control register */
/*! @{ */

#define XCVR_MISC_DBG_RAM_CTRL_DBG_PAGE_MASK     (0x7U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_PAGE_SHIFT    (0U)
/*! DBG_PAGE - Packet RAM Debug Page Selector
 *  0b000..DMA idle
 *  0b001..RXDIG-IQ: Select from (mixer, decimator, pd channel filter, src, cfo-mixer, demod chan filter) in RXDIG. 11bit signed data, MSB aligned
 *  0b010..RXDIG-IQ-ALT: Same as above + signals on unused LSBs : {antenna switch, GenLL or 802.15.4LL CRC_FAIL}
 *         on "Q" LSBs, {preamble_found, aa_sfd_matched} on "I" LSBs.
 *  0b011..ADC-IQ: 11bit samples are MSB aligned in each 16bit half-word
 *  0b100..PHASE: Select from (sync phase, demod phase) within RXDIG. MSB aligned
 *  0b101..RSSI-PHASE: select from 8bit Narrowband (rssi, rssi raw, lqi, snr, noise) and Wideband(rssi, rssi raw) + 8bit high-resolution PHASE
 *  0b110..MAG-PHASE: RSSI magnitude + 8bit high-resolution PHASE
 *  0b111..GEN4-PHY
 */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_PAGE(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_PAGE_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_PAGE_MASK)

#define XCVR_MISC_DBG_RAM_CTRL_DBG_SIGNAL_VALID_MASK_EN_MASK (0x8U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_SIGNAL_VALID_MASK_EN_SHIFT (3U)
/*! DBG_SIGNAL_VALID_MASK_EN - DBG Signal Valid Mask Enable
 *  0b0..Disable use of dbg_signal_valid_mask.
 *  0b1..Enable use of dbg_signal_valid_mask.
 */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_SIGNAL_VALID_MASK_EN(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_SIGNAL_VALID_MASK_EN_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_SIGNAL_VALID_MASK_EN_MASK)

#define XCVR_MISC_DBG_RAM_CTRL_DBG_START_TRG_MASK (0xF0U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_START_TRG_SHIFT (4U)
/*! DBG_START_TRG - DMA Start Trigger Selector
 *  0b0000..no trigger
 *  0b0001..PHY: pd found
 *  0b0010..PHY: aa found
 *  0b0011..Zigbee_PHY: pd found
 *  0b0100..Zigbee_PHY: sfd detect
 *  0b0101..RXDIG: agc_gain_chg
 *  0b0110..TSM: rx_dig_en
 *  0b0111..TSM: tsm_irq0_start_trig
 *  0b1000..CRC pass
 *  0b1001..CRC done (Not used for 15.4LL)
 *  0b1010..Localization control: pattern match
 *  0b1011..GenericLL: cte_present, Bluetooth LE: cte_en
 *  0b1100..Ranging sequence manager: dma_trigger
 */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_START_TRG(x)  (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_START_TRG_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_START_TRG_MASK)

#define XCVR_MISC_DBG_RAM_CTRL_DBG_START_EDGE_MASK (0x100U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_START_EDGE_SHIFT (8U)
/*! DBG_START_EDGE - DBG Start Trigger Edge Selector
 *  0b0..Trigger fires on a rising edge of the selected trigger source
 *  0b1..Trigger fires on a falling edge of the selected trigger source
 */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_START_EDGE(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_START_EDGE_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_START_EDGE_MASK)

#define XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_EDGE_MASK (0x200U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_EDGE_SHIFT (9U)
/*! DBG_STOP_EDGE - DBG Stop Trigger Edge Selector
 *  0b0..Trigger stops on a rising edge of the selected trigger source
 *  0b1..Trigger stops on a falling edge of the selected trigger source
 */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_EDGE(x)  (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_EDGE_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_EDGE_MASK)

#define XCVR_MISC_DBG_RAM_CTRL_DBG_DEC_MASK      (0xC00U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_DEC_SHIFT     (10U)
/*! DBG_DEC - DBG Decimation Rate
 *  0b00..Data is captured on every data valid
 *  0b01..Data is captured on every 2nd data valid
 *  0b10..Data is captured on every 4th data valid
 *  0b11..Data is captured on every 8th data valid
 */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_DEC(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_DEC_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_DEC_MASK)

#define XCVR_MISC_DBG_RAM_CTRL_DBG_START_DLY_MASK (0x7FF000U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_START_DLY_SHIFT (12U)
/*! DBG_START_DLY - DBG Start Trigger Delay */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_START_DLY(x)  (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_START_DLY_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_START_DLY_MASK)

#define XCVR_MISC_DBG_RAM_CTRL_DBG_EN_MASK       (0x800000U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_EN_SHIFT      (23U)
/*! DBG_EN - DBG Enable */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_EN(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_EN_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_EN_MASK)

#define XCVR_MISC_DBG_RAM_CTRL_DBG_AA_TRIGGERED_MASK (0x1000000U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_AA_TRIGGERED_SHIFT (24U)
/*! DBG_AA_TRIGGERED - DBG Access Address triggered */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_AA_TRIGGERED(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_AA_TRIGGERED_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_AA_TRIGGERED_MASK)

#define XCVR_MISC_DBG_RAM_CTRL_DBG_START_TRIGGERED_MASK (0x2000000U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_START_TRIGGERED_SHIFT (25U)
/*! DBG_START_TRIGGERED - DBG Start Trigger Occurred */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_START_TRIGGERED(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_START_TRIGGERED_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_START_TRIGGERED_MASK)

#define XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_TRIGGERED_MASK (0x4000000U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_TRIGGERED_SHIFT (26U)
/*! DBG_STOP_TRIGGERED - DBG Stop Trigger Occurred */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_TRIGGERED(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_TRIGGERED_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_TRIGGERED_MASK)

#define XCVR_MISC_DBG_RAM_CTRL_DBG_RAM_FULL_MASK (0x8000000U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_RAM_FULL_SHIFT (27U)
/*! DBG_RAM_FULL - DBG_RAM_FULL
 *  0b0..Packet RAM is not full
 *  0b1..Packet RAM is full
 */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_RAM_FULL(x)   (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_RAM_FULL_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_RAM_FULL_MASK)

#define XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_TRG_MASK (0xF0000000U)
#define XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_TRG_SHIFT (28U)
/*! DBG_STOP_TRG - Packet RAM Debug Stop Trigger Selector
 *  0b0000..no trigger
 *  0b0001..PHY: pd found
 *  0b0010..PHY: aa found
 *  0b0011..Zigbee_PHY: pd found
 *  0b0100..Zigbee_PHY: sfd detect
 *  0b0101..RXDIG: agc_gain_chg
 *  0b0110..TSM: rx_dig_en
 *  0b0111..TSM: tsm_irq1_stop_trig
 *  0b1000..CRC fail
 *  0b1001..CRC done (Not used for 15.4LL)
 *  0b1010..RBME: error
 *  0b1011..GenericLL header fail
 *  0b1100..PLL unlock
 */
#define XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_TRG(x)   (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_TRG_SHIFT)) & XCVR_MISC_DBG_RAM_CTRL_DBG_STOP_TRG_MASK)
/*! @} */

/*! @name DBG_RAM_ADDR - DBG RAM ADDRESS */
/*! @{ */

#define XCVR_MISC_DBG_RAM_ADDR_DBG_RAM_FIRST_MASK (0x7FFFU)
#define XCVR_MISC_DBG_RAM_ADDR_DBG_RAM_FIRST_SHIFT (0U)
/*! DBG_RAM_FIRST - DBG RAM First Address */
#define XCVR_MISC_DBG_RAM_ADDR_DBG_RAM_FIRST(x)  (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_ADDR_DBG_RAM_FIRST_SHIFT)) & XCVR_MISC_DBG_RAM_ADDR_DBG_RAM_FIRST_MASK)

#define XCVR_MISC_DBG_RAM_ADDR_DBG_RAM_LAST_MASK (0x7FFF0000U)
#define XCVR_MISC_DBG_RAM_ADDR_DBG_RAM_LAST_SHIFT (16U)
/*! DBG_RAM_LAST - DBG RAM Last Address */
#define XCVR_MISC_DBG_RAM_ADDR_DBG_RAM_LAST(x)   (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_ADDR_DBG_RAM_LAST_SHIFT)) & XCVR_MISC_DBG_RAM_ADDR_DBG_RAM_LAST_MASK)
/*! @} */

/*! @name DBG_RAM_STOP_ADDR - DBG RAM STOP ADDRESS */
/*! @{ */

#define XCVR_MISC_DBG_RAM_STOP_ADDR_DBG_RAM_STOP_MASK (0x7FFFU)
#define XCVR_MISC_DBG_RAM_STOP_ADDR_DBG_RAM_STOP_SHIFT (0U)
/*! DBG_RAM_STOP - DBG RAM Stop Address */
#define XCVR_MISC_DBG_RAM_STOP_ADDR_DBG_RAM_STOP(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_DBG_RAM_STOP_ADDR_DBG_RAM_STOP_SHIFT)) & XCVR_MISC_DBG_RAM_STOP_ADDR_DBG_RAM_STOP_MASK)
/*! @} */

/*! @name LDO_TRIM_0 - LDO TRIM Configuration 0 */
/*! @{ */

#define XCVR_MISC_LDO_TRIM_0_LDO_PLL_TRIM_OFFSET_MASK (0xFU)
#define XCVR_MISC_LDO_TRIM_0_LDO_PLL_TRIM_OFFSET_SHIFT (0U)
/*! LDO_PLL_TRIM_OFFSET - LDO PLL TRIM Offset */
#define XCVR_MISC_LDO_TRIM_0_LDO_PLL_TRIM_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_0_LDO_PLL_TRIM_OFFSET_SHIFT)) & XCVR_MISC_LDO_TRIM_0_LDO_PLL_TRIM_OFFSET_MASK)

#define XCVR_MISC_LDO_TRIM_0_LDO_VCO_TRIM_OFFSET_MASK (0xF0U)
#define XCVR_MISC_LDO_TRIM_0_LDO_VCO_TRIM_OFFSET_SHIFT (4U)
/*! LDO_VCO_TRIM_OFFSET - LDO VCO TRIM Offset */
#define XCVR_MISC_LDO_TRIM_0_LDO_VCO_TRIM_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_0_LDO_VCO_TRIM_OFFSET_SHIFT)) & XCVR_MISC_LDO_TRIM_0_LDO_VCO_TRIM_OFFSET_MASK)

#define XCVR_MISC_LDO_TRIM_0_LDO_RXTXLF_TRIM_OFFSET_MASK (0xF00U)
#define XCVR_MISC_LDO_TRIM_0_LDO_RXTXLF_TRIM_OFFSET_SHIFT (8U)
/*! LDO_RXTXLF_TRIM_OFFSET - LDO RXTXLF TRIM Offset */
#define XCVR_MISC_LDO_TRIM_0_LDO_RXTXLF_TRIM_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_0_LDO_RXTXLF_TRIM_OFFSET_SHIFT)) & XCVR_MISC_LDO_TRIM_0_LDO_RXTXLF_TRIM_OFFSET_MASK)

#define XCVR_MISC_LDO_TRIM_0_LDO_RXTXHF_TRIM_OFFSET_MASK (0xF000U)
#define XCVR_MISC_LDO_TRIM_0_LDO_RXTXHF_TRIM_OFFSET_SHIFT (12U)
/*! LDO_RXTXHF_TRIM_OFFSET - LDO RXTXHF TRIM Offset */
#define XCVR_MISC_LDO_TRIM_0_LDO_RXTXHF_TRIM_OFFSET(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_0_LDO_RXTXHF_TRIM_OFFSET_SHIFT)) & XCVR_MISC_LDO_TRIM_0_LDO_RXTXHF_TRIM_OFFSET_MASK)

#define XCVR_MISC_LDO_TRIM_0_LDO_TRIM_SMPL_DLY_MASK (0x30000U)
#define XCVR_MISC_LDO_TRIM_0_LDO_TRIM_SMPL_DLY_SHIFT (16U)
/*! LDO_TRIM_SMPL_DLY - LDO TRIM Sample Delay */
#define XCVR_MISC_LDO_TRIM_0_LDO_TRIM_SMPL_DLY(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_0_LDO_TRIM_SMPL_DLY_SHIFT)) & XCVR_MISC_LDO_TRIM_0_LDO_TRIM_SMPL_DLY_MASK)

#define XCVR_MISC_LDO_TRIM_0_LDO_TRIM_CMPOUT_INV_MASK (0x80000U)
#define XCVR_MISC_LDO_TRIM_0_LDO_TRIM_CMPOUT_INV_SHIFT (19U)
/*! LDO_TRIM_CMPOUT_INV - LDO TRIM CMPOUT Invert */
#define XCVR_MISC_LDO_TRIM_0_LDO_TRIM_CMPOUT_INV(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_0_LDO_TRIM_CMPOUT_INV_SHIFT)) & XCVR_MISC_LDO_TRIM_0_LDO_TRIM_CMPOUT_INV_MASK)

#define XCVR_MISC_LDO_TRIM_0_LDO_CAL_TRIMSEL_OVRD_MASK (0x1000000U)
#define XCVR_MISC_LDO_TRIM_0_LDO_CAL_TRIMSEL_OVRD_SHIFT (24U)
/*! LDO_CAL_TRIMSEL_OVRD - LDO_CAL_TRIMSEL Override Value */
#define XCVR_MISC_LDO_TRIM_0_LDO_CAL_TRIMSEL_OVRD(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_0_LDO_CAL_TRIMSEL_OVRD_SHIFT)) & XCVR_MISC_LDO_TRIM_0_LDO_CAL_TRIMSEL_OVRD_MASK)

#define XCVR_MISC_LDO_TRIM_0_LDO_PLL_TRIMSEL_OVRD_MASK (0x2000000U)
#define XCVR_MISC_LDO_TRIM_0_LDO_PLL_TRIMSEL_OVRD_SHIFT (25U)
/*! LDO_PLL_TRIMSEL_OVRD - LDO_PLL_TRIMSEL Override Value */
#define XCVR_MISC_LDO_TRIM_0_LDO_PLL_TRIMSEL_OVRD(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_0_LDO_PLL_TRIMSEL_OVRD_SHIFT)) & XCVR_MISC_LDO_TRIM_0_LDO_PLL_TRIMSEL_OVRD_MASK)

#define XCVR_MISC_LDO_TRIM_0_LDO_VCO_TRIMSEL_OVRD_MASK (0x4000000U)
#define XCVR_MISC_LDO_TRIM_0_LDO_VCO_TRIMSEL_OVRD_SHIFT (26U)
/*! LDO_VCO_TRIMSEL_OVRD - LDO_VCO_TRIMSEL Override Value */
#define XCVR_MISC_LDO_TRIM_0_LDO_VCO_TRIMSEL_OVRD(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_0_LDO_VCO_TRIMSEL_OVRD_SHIFT)) & XCVR_MISC_LDO_TRIM_0_LDO_VCO_TRIMSEL_OVRD_MASK)

#define XCVR_MISC_LDO_TRIM_0_LDO_RXTXHF_TRIMSEL_OVRD_MASK (0x10000000U)
#define XCVR_MISC_LDO_TRIM_0_LDO_RXTXHF_TRIMSEL_OVRD_SHIFT (28U)
/*! LDO_RXTXHF_TRIMSEL_OVRD - LDO_RXTXHF_TRIMSEL Override Value */
#define XCVR_MISC_LDO_TRIM_0_LDO_RXTXHF_TRIMSEL_OVRD(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_0_LDO_RXTXHF_TRIMSEL_OVRD_SHIFT)) & XCVR_MISC_LDO_TRIM_0_LDO_RXTXHF_TRIMSEL_OVRD_MASK)

#define XCVR_MISC_LDO_TRIM_0_LDO_TRIM_SAMPLE_OVRD_MASK (0x20000000U)
#define XCVR_MISC_LDO_TRIM_0_LDO_TRIM_SAMPLE_OVRD_SHIFT (29U)
/*! LDO_TRIM_SAMPLE_OVRD - LDO_TRIM_SAMPLE Override Value */
#define XCVR_MISC_LDO_TRIM_0_LDO_TRIM_SAMPLE_OVRD(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_0_LDO_TRIM_SAMPLE_OVRD_SHIFT)) & XCVR_MISC_LDO_TRIM_0_LDO_TRIM_SAMPLE_OVRD_MASK)

#define XCVR_MISC_LDO_TRIM_0_LDO_SAMPLE_TRIMSEL_OVRD_EN_MASK (0x40000000U)
#define XCVR_MISC_LDO_TRIM_0_LDO_SAMPLE_TRIMSEL_OVRD_EN_SHIFT (30U)
/*! LDO_SAMPLE_TRIMSEL_OVRD_EN - LDO SAMPLE TRIMSEL Override Enable */
#define XCVR_MISC_LDO_TRIM_0_LDO_SAMPLE_TRIMSEL_OVRD_EN(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_0_LDO_SAMPLE_TRIMSEL_OVRD_EN_SHIFT)) & XCVR_MISC_LDO_TRIM_0_LDO_SAMPLE_TRIMSEL_OVRD_EN_MASK)
/*! @} */

/*! @name LDO_TRIM_1 - LDO TRIM Configuration 1 */
/*! @{ */

#define XCVR_MISC_LDO_TRIM_1_LDO_PLL_TRIM_OVRD_MASK (0x3FU)
#define XCVR_MISC_LDO_TRIM_1_LDO_PLL_TRIM_OVRD_SHIFT (0U)
/*! LDO_PLL_TRIM_OVRD - LDO PLL TRIM Override Value */
#define XCVR_MISC_LDO_TRIM_1_LDO_PLL_TRIM_OVRD(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_1_LDO_PLL_TRIM_OVRD_SHIFT)) & XCVR_MISC_LDO_TRIM_1_LDO_PLL_TRIM_OVRD_MASK)

#define XCVR_MISC_LDO_TRIM_1_LDO_PLL_TRIM_OVRD_EN_MASK (0x40U)
#define XCVR_MISC_LDO_TRIM_1_LDO_PLL_TRIM_OVRD_EN_SHIFT (6U)
/*! LDO_PLL_TRIM_OVRD_EN - LDO PLL TRIM Override Enable */
#define XCVR_MISC_LDO_TRIM_1_LDO_PLL_TRIM_OVRD_EN(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_1_LDO_PLL_TRIM_OVRD_EN_SHIFT)) & XCVR_MISC_LDO_TRIM_1_LDO_PLL_TRIM_OVRD_EN_MASK)

#define XCVR_MISC_LDO_TRIM_1_LDO_VCO_TRIM_OVRD_MASK (0x3F00U)
#define XCVR_MISC_LDO_TRIM_1_LDO_VCO_TRIM_OVRD_SHIFT (8U)
/*! LDO_VCO_TRIM_OVRD - LDO VCO TRIM Override Value */
#define XCVR_MISC_LDO_TRIM_1_LDO_VCO_TRIM_OVRD(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_1_LDO_VCO_TRIM_OVRD_SHIFT)) & XCVR_MISC_LDO_TRIM_1_LDO_VCO_TRIM_OVRD_MASK)

#define XCVR_MISC_LDO_TRIM_1_LDO_VCO_TRIM_OVRD_EN_MASK (0x4000U)
#define XCVR_MISC_LDO_TRIM_1_LDO_VCO_TRIM_OVRD_EN_SHIFT (14U)
/*! LDO_VCO_TRIM_OVRD_EN - VCO TRIM Override Enable */
#define XCVR_MISC_LDO_TRIM_1_LDO_VCO_TRIM_OVRD_EN(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_1_LDO_VCO_TRIM_OVRD_EN_SHIFT)) & XCVR_MISC_LDO_TRIM_1_LDO_VCO_TRIM_OVRD_EN_MASK)

#define XCVR_MISC_LDO_TRIM_1_LDO_RXTXLF_TRIM_OVRD_MASK (0x3F0000U)
#define XCVR_MISC_LDO_TRIM_1_LDO_RXTXLF_TRIM_OVRD_SHIFT (16U)
/*! LDO_RXTXLF_TRIM_OVRD - LDO RXTXLF TRIM Override Value */
#define XCVR_MISC_LDO_TRIM_1_LDO_RXTXLF_TRIM_OVRD(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_1_LDO_RXTXLF_TRIM_OVRD_SHIFT)) & XCVR_MISC_LDO_TRIM_1_LDO_RXTXLF_TRIM_OVRD_MASK)

#define XCVR_MISC_LDO_TRIM_1_LDO_RXTXLF_TRIM_OVRD_EN_MASK (0x400000U)
#define XCVR_MISC_LDO_TRIM_1_LDO_RXTXLF_TRIM_OVRD_EN_SHIFT (22U)
/*! LDO_RXTXLF_TRIM_OVRD_EN - LDO RXTXLF TRIM Override Enable */
#define XCVR_MISC_LDO_TRIM_1_LDO_RXTXLF_TRIM_OVRD_EN(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_1_LDO_RXTXLF_TRIM_OVRD_EN_SHIFT)) & XCVR_MISC_LDO_TRIM_1_LDO_RXTXLF_TRIM_OVRD_EN_MASK)

#define XCVR_MISC_LDO_TRIM_1_LDO_RXTXHF_TRIM_OVRD_MASK (0x3F000000U)
#define XCVR_MISC_LDO_TRIM_1_LDO_RXTXHF_TRIM_OVRD_SHIFT (24U)
/*! LDO_RXTXHF_TRIM_OVRD - LDO RXTXHF TRIM Override Value */
#define XCVR_MISC_LDO_TRIM_1_LDO_RXTXHF_TRIM_OVRD(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_1_LDO_RXTXHF_TRIM_OVRD_SHIFT)) & XCVR_MISC_LDO_TRIM_1_LDO_RXTXHF_TRIM_OVRD_MASK)

#define XCVR_MISC_LDO_TRIM_1_LDO_RXTXHF_TRIM_OVRD_EN_MASK (0x40000000U)
#define XCVR_MISC_LDO_TRIM_1_LDO_RXTXHF_TRIM_OVRD_EN_SHIFT (30U)
/*! LDO_RXTXHF_TRIM_OVRD_EN - LDO RXTXHF TRIM Override Enable */
#define XCVR_MISC_LDO_TRIM_1_LDO_RXTXHF_TRIM_OVRD_EN(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_1_LDO_RXTXHF_TRIM_OVRD_EN_SHIFT)) & XCVR_MISC_LDO_TRIM_1_LDO_RXTXHF_TRIM_OVRD_EN_MASK)
/*! @} */

/*! @name LDO_TRIM_RES_0 - RF Analog LDO Trim Res Control 0 */
/*! @{ */

#define XCVR_MISC_LDO_TRIM_RES_0_LDO_PLL_TRIM_MASK (0x3FU)
#define XCVR_MISC_LDO_TRIM_RES_0_LDO_PLL_TRIM_SHIFT (0U)
/*! LDO_PLL_TRIM - LDO_PLL_TRIM Result */
#define XCVR_MISC_LDO_TRIM_RES_0_LDO_PLL_TRIM(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_RES_0_LDO_PLL_TRIM_SHIFT)) & XCVR_MISC_LDO_TRIM_RES_0_LDO_PLL_TRIM_MASK)

#define XCVR_MISC_LDO_TRIM_RES_0_LDO_VCO_TRIM_MASK (0x3F00U)
#define XCVR_MISC_LDO_TRIM_RES_0_LDO_VCO_TRIM_SHIFT (8U)
/*! LDO_VCO_TRIM - LDO_VCO_TRIM Result */
#define XCVR_MISC_LDO_TRIM_RES_0_LDO_VCO_TRIM(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_RES_0_LDO_VCO_TRIM_SHIFT)) & XCVR_MISC_LDO_TRIM_RES_0_LDO_VCO_TRIM_MASK)

#define XCVR_MISC_LDO_TRIM_RES_0_LDO_RXTXLF_TRIM_MASK (0x3F0000U)
#define XCVR_MISC_LDO_TRIM_RES_0_LDO_RXTXLF_TRIM_SHIFT (16U)
/*! LDO_RXTXLF_TRIM - LDO_RXTXLF_TRIM Result */
#define XCVR_MISC_LDO_TRIM_RES_0_LDO_RXTXLF_TRIM(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_RES_0_LDO_RXTXLF_TRIM_SHIFT)) & XCVR_MISC_LDO_TRIM_RES_0_LDO_RXTXLF_TRIM_MASK)

#define XCVR_MISC_LDO_TRIM_RES_0_LDO_RXTXHF_TRIM_MASK (0x3F000000U)
#define XCVR_MISC_LDO_TRIM_RES_0_LDO_RXTXHF_TRIM_SHIFT (24U)
/*! LDO_RXTXHF_TRIM - LDO_RXTXHF_TRIM Result */
#define XCVR_MISC_LDO_TRIM_RES_0_LDO_RXTXHF_TRIM(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_RES_0_LDO_RXTXHF_TRIM_SHIFT)) & XCVR_MISC_LDO_TRIM_RES_0_LDO_RXTXHF_TRIM_MASK)
/*! @} */

/*! @name LDO_TRIM_RES_1 - RF Analog LDO Trim Res Control 1 */
/*! @{ */

#define XCVR_MISC_LDO_TRIM_RES_1_LDO_CAL_TRIM_MASK (0x3FU)
#define XCVR_MISC_LDO_TRIM_RES_1_LDO_CAL_TRIM_SHIFT (0U)
/*! LDO_CAL_TRIM - LDO_CAL_TRIM Result */
#define XCVR_MISC_LDO_TRIM_RES_1_LDO_CAL_TRIM(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_RES_1_LDO_CAL_TRIM_SHIFT)) & XCVR_MISC_LDO_TRIM_RES_1_LDO_CAL_TRIM_MASK)

#define XCVR_MISC_LDO_TRIM_RES_1_LDO_TRIM_CMPOUT_MASK (0x100U)
#define XCVR_MISC_LDO_TRIM_RES_1_LDO_TRIM_CMPOUT_SHIFT (8U)
/*! LDO_TRIM_CMPOUT - LDO TRIM CMPOUT */
#define XCVR_MISC_LDO_TRIM_RES_1_LDO_TRIM_CMPOUT(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LDO_TRIM_RES_1_LDO_TRIM_CMPOUT_SHIFT)) & XCVR_MISC_LDO_TRIM_RES_1_LDO_TRIM_CMPOUT_MASK)
/*! @} */

/*! @name LCL_CFG0 - LCL CTRL CFG 0 */
/*! @{ */

#define XCVR_MISC_LCL_CFG0_LCL_EN_MASK           (0x1U)
#define XCVR_MISC_LCL_CFG0_LCL_EN_SHIFT          (0U)
/*! LCL_EN - Localization Control Module Enable */
#define XCVR_MISC_LCL_CFG0_LCL_EN(x)             (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_LCL_EN_SHIFT)) & XCVR_MISC_LCL_CFG0_LCL_EN_MASK)

#define XCVR_MISC_LCL_CFG0_TX_LCL_EN_MASK        (0x2U)
#define XCVR_MISC_LCL_CFG0_TX_LCL_EN_SHIFT       (1U)
/*! TX_LCL_EN - Enable Switching in TX */
#define XCVR_MISC_LCL_CFG0_TX_LCL_EN(x)          (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_TX_LCL_EN_SHIFT)) & XCVR_MISC_LCL_CFG0_TX_LCL_EN_MASK)

#define XCVR_MISC_LCL_CFG0_RX_LCL_EN_MASK        (0x4U)
#define XCVR_MISC_LCL_CFG0_RX_LCL_EN_SHIFT       (2U)
/*! RX_LCL_EN - Enable Switching in RX */
#define XCVR_MISC_LCL_CFG0_RX_LCL_EN(x)          (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_RX_LCL_EN_SHIFT)) & XCVR_MISC_LCL_CFG0_RX_LCL_EN_MASK)

#define XCVR_MISC_LCL_CFG0_LANT_INV_MASK         (0x8U)
#define XCVR_MISC_LCL_CFG0_LANT_INV_SHIFT        (3U)
/*! LANT_INV - Invert Antenna Switch Output */
#define XCVR_MISC_LCL_CFG0_LANT_INV(x)           (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_LANT_INV_SHIFT)) & XCVR_MISC_LCL_CFG0_LANT_INV_MASK)

#define XCVR_MISC_LCL_CFG0_COMP_EN_MASK          (0x10U)
#define XCVR_MISC_LCL_CFG0_COMP_EN_SHIFT         (4U)
/*! COMP_EN - Pattern Matching Enable */
#define XCVR_MISC_LCL_CFG0_COMP_EN(x)            (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_COMP_EN_SHIFT)) & XCVR_MISC_LCL_CFG0_COMP_EN_MASK)

#define XCVR_MISC_LCL_CFG0_COMP_TX_EN_MASK       (0x20U)
#define XCVR_MISC_LCL_CFG0_COMP_TX_EN_SHIFT      (5U)
/*! COMP_TX_EN - Pattern Matching Enable in TX */
#define XCVR_MISC_LCL_CFG0_COMP_TX_EN(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_COMP_TX_EN_SHIFT)) & XCVR_MISC_LCL_CFG0_COMP_TX_EN_MASK)

#define XCVR_MISC_LCL_CFG0_SW_TRIG_MASK          (0x40U)
#define XCVR_MISC_LCL_CFG0_SW_TRIG_SHIFT         (6U)
/*! SW_TRIG - Software Trigger. Can be used with either RX or TX */
#define XCVR_MISC_LCL_CFG0_SW_TRIG(x)            (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_SW_TRIG_SHIFT)) & XCVR_MISC_LCL_CFG0_SW_TRIG_MASK)

#define XCVR_MISC_LCL_CFG0_LANT_SW_WIGGLE_MASK   (0x80U)
#define XCVR_MISC_LCL_CFG0_LANT_SW_WIGGLE_SHIFT  (7U)
/*! LANT_SW_WIGGLE - LANT_SW Wiggle */
#define XCVR_MISC_LCL_CFG0_LANT_SW_WIGGLE(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_LANT_SW_WIGGLE_SHIFT)) & XCVR_MISC_LCL_CFG0_LANT_SW_WIGGLE_MASK)

#define XCVR_MISC_LCL_CFG0_PM_NUM_BYTES_MASK     (0x300U)
#define XCVR_MISC_LCL_CFG0_PM_NUM_BYTES_SHIFT    (8U)
/*! PM_NUM_BYTES - Number of Bytes to Match
 *  0b00..4 bytes
 *  0b01..5 bytes
 *  0b10..6 bytes
 *  0b11..8 bytes
 */
#define XCVR_MISC_LCL_CFG0_PM_NUM_BYTES(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_PM_NUM_BYTES_SHIFT)) & XCVR_MISC_LCL_CFG0_PM_NUM_BYTES_MASK)

#define XCVR_MISC_LCL_CFG0_LANT_BLOCK_TX_MASK    (0x400U)
#define XCVR_MISC_LCL_CFG0_LANT_BLOCK_TX_SHIFT   (10U)
/*! LANT_BLOCK_TX - Block LANT_SW for TX */
#define XCVR_MISC_LCL_CFG0_LANT_BLOCK_TX(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_LANT_BLOCK_TX_SHIFT)) & XCVR_MISC_LCL_CFG0_LANT_BLOCK_TX_MASK)

#define XCVR_MISC_LCL_CFG0_LANT_BLOCK_RX_MASK    (0x800U)
#define XCVR_MISC_LCL_CFG0_LANT_BLOCK_RX_SHIFT   (11U)
/*! LANT_BLOCK_RX - Block LANT_SW for RX */
#define XCVR_MISC_LCL_CFG0_LANT_BLOCK_RX(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_LANT_BLOCK_RX_SHIFT)) & XCVR_MISC_LCL_CFG0_LANT_BLOCK_RX_MASK)

#define XCVR_MISC_LCL_CFG0_CTE_DUR_MASK          (0x1FF0000U)
#define XCVR_MISC_LCL_CFG0_CTE_DUR_SHIFT         (16U)
/*! CTE_DUR - Total Switching Duration */
#define XCVR_MISC_LCL_CFG0_CTE_DUR(x)            (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_CTE_DUR_SHIFT)) & XCVR_MISC_LCL_CFG0_CTE_DUR_MASK)

#define XCVR_MISC_LCL_CFG0_LCL_GPIO_SEL_MASK     (0x40000000U)
#define XCVR_MISC_LCL_CFG0_LCL_GPIO_SEL_SHIFT    (30U)
/*! LCL_GPIO_SEL - Localization GPIO Select */
#define XCVR_MISC_LCL_CFG0_LCL_GPIO_SEL(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_LCL_GPIO_SEL_SHIFT)) & XCVR_MISC_LCL_CFG0_LCL_GPIO_SEL_MASK)

#define XCVR_MISC_LCL_CFG0_LCL_MODE_MASK         (0x80000000U)
#define XCVR_MISC_LCL_CFG0_LCL_MODE_SHIFT        (31U)
/*! LCL_MODE - Localization Mode
 *  0b0..GenLL configuration.
 *  0b1..Bluetooth LE LL configuration.
 */
#define XCVR_MISC_LCL_CFG0_LCL_MODE(x)           (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG0_LCL_MODE_SHIFT)) & XCVR_MISC_LCL_CFG0_LCL_MODE_MASK)
/*! @} */

/*! @name LCL_CFG1 - LCL CTRL CFG 1 */
/*! @{ */

#define XCVR_MISC_LCL_CFG1_M_ON_DELAY_MASK       (0x3FFU)
#define XCVR_MISC_LCL_CFG1_M_ON_DELAY_SHIFT      (0U)
/*! M_ON_DELAY - M on Delay */
#define XCVR_MISC_LCL_CFG1_M_ON_DELAY(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG1_M_ON_DELAY_SHIFT)) & XCVR_MISC_LCL_CFG1_M_ON_DELAY_MASK)

#define XCVR_MISC_LCL_CFG1_N_ON_DELAY_MASK       (0xF000U)
#define XCVR_MISC_LCL_CFG1_N_ON_DELAY_SHIFT      (12U)
/*! N_ON_DELAY - N on Delay */
#define XCVR_MISC_LCL_CFG1_N_ON_DELAY(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG1_N_ON_DELAY_SHIFT)) & XCVR_MISC_LCL_CFG1_N_ON_DELAY_MASK)

#define XCVR_MISC_LCL_CFG1_LANT_SW_IE_MASK       (0x40000000U)
#define XCVR_MISC_LCL_CFG1_LANT_SW_IE_SHIFT      (30U)
/*! LANT_SW_IE - Localization Antenna Switch Interrupt Enable
 *  0b0..Localization Antenna Switch interrupt disabled
 *  0b1..Localization Antenna Switch interrupt enabled
 */
#define XCVR_MISC_LCL_CFG1_LANT_SW_IE(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG1_LANT_SW_IE_SHIFT)) & XCVR_MISC_LCL_CFG1_LANT_SW_IE_MASK)

#define XCVR_MISC_LCL_CFG1_LANT_SW_FLAG_MASK     (0x80000000U)
#define XCVR_MISC_LCL_CFG1_LANT_SW_FLAG_SHIFT    (31U)
/*! LANT_SW_FLAG - Localization Antenna Switch Flag */
#define XCVR_MISC_LCL_CFG1_LANT_SW_FLAG(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_CFG1_LANT_SW_FLAG_SHIFT)) & XCVR_MISC_LCL_CFG1_LANT_SW_FLAG_MASK)
/*! @} */

/*! @name LCL_TX_CFG0 - LCL CTRL TX CONFIG0 */
/*! @{ */

#define XCVR_MISC_LCL_TX_CFG0_TX_DELAY_MASK      (0x7FFU)
#define XCVR_MISC_LCL_TX_CFG0_TX_DELAY_SHIFT     (0U)
/*! TX_DELAY - Interval delay before TX switching begins. */
#define XCVR_MISC_LCL_TX_CFG0_TX_DELAY(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_TX_CFG0_TX_DELAY_SHIFT)) & XCVR_MISC_LCL_TX_CFG0_TX_DELAY_MASK)

#define XCVR_MISC_LCL_TX_CFG0_TX_DELAY_OFF_MASK  (0x1F0000U)
#define XCVR_MISC_LCL_TX_CFG0_TX_DELAY_OFF_SHIFT (16U)
/*! TX_DELAY_OFF - Fine sample delay after TX_DELAY. */
#define XCVR_MISC_LCL_TX_CFG0_TX_DELAY_OFF(x)    (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_TX_CFG0_TX_DELAY_OFF_SHIFT)) & XCVR_MISC_LCL_TX_CFG0_TX_DELAY_OFF_MASK)
/*! @} */

/*! @name LCL_TX_CFG1 - LCL CTRL TX CONFIG1 */
/*! @{ */

#define XCVR_MISC_LCL_TX_CFG1_TX_SPINT_MASK      (0x1FU)
#define XCVR_MISC_LCL_TX_CFG1_TX_SPINT_SHIFT     (0U)
/*! TX_SPINT - Number of TX Samples that define the length of an Interval, where 0=1sample, 1=2sample, etc. */
#define XCVR_MISC_LCL_TX_CFG1_TX_SPINT(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_TX_CFG1_TX_SPINT_SHIFT)) & XCVR_MISC_LCL_TX_CFG1_TX_SPINT_MASK)

#define XCVR_MISC_LCL_TX_CFG1_TX_ANT_TRIG_SEL_MASK (0xE0U)
#define XCVR_MISC_LCL_TX_CFG1_TX_ANT_TRIG_SEL_SHIFT (5U)
/*! TX_ANT_TRIG_SEL - Selects Trigger for TX
 *  0b000..Software Trigger
 *  0b001..LCL Pattern Found
 *  0b010..CRC Complete
 *  0b011..PA Warmup Complete
 *  0b100..RBME tx_done_pre
 *  0b101..Bluetooth LE cte_en
 *  0b110..Ranging sequence manager lcl_tx_trigger
 */
#define XCVR_MISC_LCL_TX_CFG1_TX_ANT_TRIG_SEL(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_TX_CFG1_TX_ANT_TRIG_SEL_SHIFT)) & XCVR_MISC_LCL_TX_CFG1_TX_ANT_TRIG_SEL_MASK)

#define XCVR_MISC_LCL_TX_CFG1_TX_LO_PER_MASK     (0x1F000U)
#define XCVR_MISC_LCL_TX_CFG1_TX_LO_PER_SHIFT    (12U)
/*! TX_LO_PER - Primary Number of intervals for antenna LOW */
#define XCVR_MISC_LCL_TX_CFG1_TX_LO_PER(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_TX_CFG1_TX_LO_PER_SHIFT)) & XCVR_MISC_LCL_TX_CFG1_TX_LO_PER_MASK)

#define XCVR_MISC_LCL_TX_CFG1_TX_HI_PER_MASK     (0x3E0000U)
#define XCVR_MISC_LCL_TX_CFG1_TX_HI_PER_SHIFT    (17U)
/*! TX_HI_PER - Primary Number of intervals for antenna HIGH */
#define XCVR_MISC_LCL_TX_CFG1_TX_HI_PER(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_TX_CFG1_TX_HI_PER_SHIFT)) & XCVR_MISC_LCL_TX_CFG1_TX_HI_PER_MASK)

#define XCVR_MISC_LCL_TX_CFG1_TX_LO_PER_1_MASK   (0x7C00000U)
#define XCVR_MISC_LCL_TX_CFG1_TX_LO_PER_1_SHIFT  (22U)
/*! TX_LO_PER_1 - Alternate Number of intervals for antenna LOW. Used only in conjunction with RSM. */
#define XCVR_MISC_LCL_TX_CFG1_TX_LO_PER_1(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_TX_CFG1_TX_LO_PER_1_SHIFT)) & XCVR_MISC_LCL_TX_CFG1_TX_LO_PER_1_MASK)

#define XCVR_MISC_LCL_TX_CFG1_TX_HI_PER_1_MASK   (0xF8000000U)
#define XCVR_MISC_LCL_TX_CFG1_TX_HI_PER_1_SHIFT  (27U)
/*! TX_HI_PER_1 - Alternate Number of intervals for antenna HIGH. Used only in conjunction with RSM. */
#define XCVR_MISC_LCL_TX_CFG1_TX_HI_PER_1(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_TX_CFG1_TX_HI_PER_1_SHIFT)) & XCVR_MISC_LCL_TX_CFG1_TX_HI_PER_1_MASK)
/*! @} */

/*! @name LCL_TX_CFG2 - LCL CTRL TX CONFIG2 */
/*! @{ */

#define XCVR_MISC_LCL_TX_CFG2_TX_LO_PER_2_MASK   (0x1F000U)
#define XCVR_MISC_LCL_TX_CFG2_TX_LO_PER_2_SHIFT  (12U)
/*! TX_LO_PER_2 - Alternate Number of intervals for antenna LOW. Used only in conjunction with RSM. */
#define XCVR_MISC_LCL_TX_CFG2_TX_LO_PER_2(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_TX_CFG2_TX_LO_PER_2_SHIFT)) & XCVR_MISC_LCL_TX_CFG2_TX_LO_PER_2_MASK)

#define XCVR_MISC_LCL_TX_CFG2_TX_HI_PER_2_MASK   (0x3E0000U)
#define XCVR_MISC_LCL_TX_CFG2_TX_HI_PER_2_SHIFT  (17U)
/*! TX_HI_PER_2 - Alternate Number of intervals for antenna HIGH. Used only in conjunction with RSM. */
#define XCVR_MISC_LCL_TX_CFG2_TX_HI_PER_2(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_TX_CFG2_TX_HI_PER_2_SHIFT)) & XCVR_MISC_LCL_TX_CFG2_TX_HI_PER_2_MASK)

#define XCVR_MISC_LCL_TX_CFG2_TX_LO_PER_3_MASK   (0x7C00000U)
#define XCVR_MISC_LCL_TX_CFG2_TX_LO_PER_3_SHIFT  (22U)
/*! TX_LO_PER_3 - Alternate Number of intervals for antenna LOW. Used only in conjunction with RSM. */
#define XCVR_MISC_LCL_TX_CFG2_TX_LO_PER_3(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_TX_CFG2_TX_LO_PER_3_SHIFT)) & XCVR_MISC_LCL_TX_CFG2_TX_LO_PER_3_MASK)

#define XCVR_MISC_LCL_TX_CFG2_TX_HI_PER_3_MASK   (0xF8000000U)
#define XCVR_MISC_LCL_TX_CFG2_TX_HI_PER_3_SHIFT  (27U)
/*! TX_HI_PER_3 - Alternate Number of intervals for antenna HIGH. Used only in conjunction with RSM. */
#define XCVR_MISC_LCL_TX_CFG2_TX_HI_PER_3(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_TX_CFG2_TX_HI_PER_3_SHIFT)) & XCVR_MISC_LCL_TX_CFG2_TX_HI_PER_3_MASK)
/*! @} */

/*! @name LCL_RX_CFG0 - LCL CTRL RX CONFIG0 */
/*! @{ */

#define XCVR_MISC_LCL_RX_CFG0_RX_DELAY_MASK      (0x7FFU)
#define XCVR_MISC_LCL_RX_CFG0_RX_DELAY_SHIFT     (0U)
/*! RX_DELAY - Interval delay before RX switching begins. */
#define XCVR_MISC_LCL_RX_CFG0_RX_DELAY(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_RX_CFG0_RX_DELAY_SHIFT)) & XCVR_MISC_LCL_RX_CFG0_RX_DELAY_MASK)

#define XCVR_MISC_LCL_RX_CFG0_RX_DELAY_OFF_MASK  (0x1F0000U)
#define XCVR_MISC_LCL_RX_CFG0_RX_DELAY_OFF_SHIFT (16U)
/*! RX_DELAY_OFF - Fine sample delay after RX_DELAY. */
#define XCVR_MISC_LCL_RX_CFG0_RX_DELAY_OFF(x)    (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_RX_CFG0_RX_DELAY_OFF_SHIFT)) & XCVR_MISC_LCL_RX_CFG0_RX_DELAY_OFF_MASK)
/*! @} */

/*! @name LCL_RX_CFG1 - LCL CTRL RX CONFIG1 */
/*! @{ */

#define XCVR_MISC_LCL_RX_CFG1_RX_SPINT_MASK      (0x1FU)
#define XCVR_MISC_LCL_RX_CFG1_RX_SPINT_SHIFT     (0U)
/*! RX_SPINT - Number of RX Samples that define the length of an Interval, where 0=1sample, 1=2sample, etc. */
#define XCVR_MISC_LCL_RX_CFG1_RX_SPINT(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_RX_CFG1_RX_SPINT_SHIFT)) & XCVR_MISC_LCL_RX_CFG1_RX_SPINT_MASK)

#define XCVR_MISC_LCL_RX_CFG1_RX_ANT_TRIG_SEL_MASK (0xE0U)
#define XCVR_MISC_LCL_RX_CFG1_RX_ANT_TRIG_SEL_SHIFT (5U)
/*! RX_ANT_TRIG_SEL - Selects Trigger for RX
 *  0b000..Software Trigger
 *  0b001..LCL Pattern Found
 *  0b010..CRC Complete
 *  0b011..CRC Pass
 *  0b100..GenericLL: cte_present, Bluetooth LE: cte_en
 *  0b101..aa_fnd_to_ll
 *  0b110..Ranging sequence manager lcl_rx_trigger
 */
#define XCVR_MISC_LCL_RX_CFG1_RX_ANT_TRIG_SEL(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_RX_CFG1_RX_ANT_TRIG_SEL_SHIFT)) & XCVR_MISC_LCL_RX_CFG1_RX_ANT_TRIG_SEL_MASK)

#define XCVR_MISC_LCL_RX_CFG1_RX_LO_PER_MASK     (0x1F000U)
#define XCVR_MISC_LCL_RX_CFG1_RX_LO_PER_SHIFT    (12U)
/*! RX_LO_PER - Primary Number of intervals for antenna LOW */
#define XCVR_MISC_LCL_RX_CFG1_RX_LO_PER(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_RX_CFG1_RX_LO_PER_SHIFT)) & XCVR_MISC_LCL_RX_CFG1_RX_LO_PER_MASK)

#define XCVR_MISC_LCL_RX_CFG1_RX_HI_PER_MASK     (0x3E0000U)
#define XCVR_MISC_LCL_RX_CFG1_RX_HI_PER_SHIFT    (17U)
/*! RX_HI_PER - Primary Number of intervals for antenna HIGH */
#define XCVR_MISC_LCL_RX_CFG1_RX_HI_PER(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_RX_CFG1_RX_HI_PER_SHIFT)) & XCVR_MISC_LCL_RX_CFG1_RX_HI_PER_MASK)

#define XCVR_MISC_LCL_RX_CFG1_RX_LO_PER_1_MASK   (0x7C00000U)
#define XCVR_MISC_LCL_RX_CFG1_RX_LO_PER_1_SHIFT  (22U)
/*! RX_LO_PER_1 - Alternate Number of intervals for antenna LOW. Used only in conjunction with RSM. */
#define XCVR_MISC_LCL_RX_CFG1_RX_LO_PER_1(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_RX_CFG1_RX_LO_PER_1_SHIFT)) & XCVR_MISC_LCL_RX_CFG1_RX_LO_PER_1_MASK)

#define XCVR_MISC_LCL_RX_CFG1_RX_HI_PER_1_MASK   (0xF8000000U)
#define XCVR_MISC_LCL_RX_CFG1_RX_HI_PER_1_SHIFT  (27U)
/*! RX_HI_PER_1 - Alternate Number of intervals for antenna HIGH. Used only in conjunction with RSM. */
#define XCVR_MISC_LCL_RX_CFG1_RX_HI_PER_1(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_RX_CFG1_RX_HI_PER_1_SHIFT)) & XCVR_MISC_LCL_RX_CFG1_RX_HI_PER_1_MASK)
/*! @} */

/*! @name LCL_RX_CFG2 - LCL CTRL RX CONFIG2 */
/*! @{ */

#define XCVR_MISC_LCL_RX_CFG2_RX_LO_PER_2_MASK   (0x1F000U)
#define XCVR_MISC_LCL_RX_CFG2_RX_LO_PER_2_SHIFT  (12U)
/*! RX_LO_PER_2 - Alternate Number of intervals for antenna LOW. Used only in conjunction with RSM. */
#define XCVR_MISC_LCL_RX_CFG2_RX_LO_PER_2(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_RX_CFG2_RX_LO_PER_2_SHIFT)) & XCVR_MISC_LCL_RX_CFG2_RX_LO_PER_2_MASK)

#define XCVR_MISC_LCL_RX_CFG2_RX_HI_PER_2_MASK   (0x3E0000U)
#define XCVR_MISC_LCL_RX_CFG2_RX_HI_PER_2_SHIFT  (17U)
/*! RX_HI_PER_2 - Alternate Number of intervals for antenna HIGH. Used only in conjunction with RSM. */
#define XCVR_MISC_LCL_RX_CFG2_RX_HI_PER_2(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_RX_CFG2_RX_HI_PER_2_SHIFT)) & XCVR_MISC_LCL_RX_CFG2_RX_HI_PER_2_MASK)

#define XCVR_MISC_LCL_RX_CFG2_RX_LO_PER_3_MASK   (0x7C00000U)
#define XCVR_MISC_LCL_RX_CFG2_RX_LO_PER_3_SHIFT  (22U)
/*! RX_LO_PER_3 - Alternate Number of intervals for antenna LOW. Used only in conjunction with RSM. */
#define XCVR_MISC_LCL_RX_CFG2_RX_LO_PER_3(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_RX_CFG2_RX_LO_PER_3_SHIFT)) & XCVR_MISC_LCL_RX_CFG2_RX_LO_PER_3_MASK)

#define XCVR_MISC_LCL_RX_CFG2_RX_HI_PER_3_MASK   (0xF8000000U)
#define XCVR_MISC_LCL_RX_CFG2_RX_HI_PER_3_SHIFT  (27U)
/*! RX_HI_PER_3 - Alternate Number of intervals for antenna HIGH. Used only in conjunction with RSM. */
#define XCVR_MISC_LCL_RX_CFG2_RX_HI_PER_3(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_RX_CFG2_RX_HI_PER_3_SHIFT)) & XCVR_MISC_LCL_RX_CFG2_RX_HI_PER_3_MASK)
/*! @} */

/*! @name LCL_PM_MSB - LCL CTRL PM MSB */
/*! @{ */

#define XCVR_MISC_LCL_PM_MSB_COMP_PATTERN_MSB_MASK (0xFFFFFFFFU)
#define XCVR_MISC_LCL_PM_MSB_COMP_PATTERN_MSB_SHIFT (0U)
/*! COMP_PATTERN_MSB - Upper bytes of pattern to be matched, bits 63:32 */
#define XCVR_MISC_LCL_PM_MSB_COMP_PATTERN_MSB(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_PM_MSB_COMP_PATTERN_MSB_SHIFT)) & XCVR_MISC_LCL_PM_MSB_COMP_PATTERN_MSB_MASK)
/*! @} */

/*! @name LCL_PM_LSB - LCL CTRL PM LSB */
/*! @{ */

#define XCVR_MISC_LCL_PM_LSB_COMP_PATTERN_LSB_MASK (0xFFFFFFFFU)
#define XCVR_MISC_LCL_PM_LSB_COMP_PATTERN_LSB_SHIFT (0U)
/*! COMP_PATTERN_LSB - Lower bytes of pattern to be matched, bits 31:0 */
#define XCVR_MISC_LCL_PM_LSB_COMP_PATTERN_LSB(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_PM_LSB_COMP_PATTERN_LSB_SHIFT)) & XCVR_MISC_LCL_PM_LSB_COMP_PATTERN_LSB_MASK)
/*! @} */

/*! @name LCL_GPIO_CTRL0 - LCL GPIO CTRL 0 */
/*! @{ */

#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_0_MASK      (0xFU)
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_0_SHIFT     (0U)
/*! LUT_0 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_0(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL0_LUT_0_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL0_LUT_0_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_1_MASK      (0xF0U)
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_1_SHIFT     (4U)
/*! LUT_1 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_1(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL0_LUT_1_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL0_LUT_1_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_2_MASK      (0xF00U)
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_2_SHIFT     (8U)
/*! LUT_2 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_2(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL0_LUT_2_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL0_LUT_2_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_3_MASK      (0xF000U)
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_3_SHIFT     (12U)
/*! LUT_3 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_3(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL0_LUT_3_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL0_LUT_3_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_4_MASK      (0xF0000U)
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_4_SHIFT     (16U)
/*! LUT_4 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_4(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL0_LUT_4_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL0_LUT_4_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_5_MASK      (0xF00000U)
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_5_SHIFT     (20U)
/*! LUT_5 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_5(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL0_LUT_5_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL0_LUT_5_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_6_MASK      (0xF000000U)
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_6_SHIFT     (24U)
/*! LUT_6 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_6(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL0_LUT_6_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL0_LUT_6_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_7_MASK      (0xF0000000U)
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_7_SHIFT     (28U)
/*! LUT_7 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL0_LUT_7(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL0_LUT_7_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL0_LUT_7_MASK)
/*! @} */

/*! @name LCL_GPIO_CTRL1 - LCL GPIO CTRL 1 */
/*! @{ */

#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_8_MASK      (0xFU)
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_8_SHIFT     (0U)
/*! LUT_8 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_8(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL1_LUT_8_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL1_LUT_8_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_9_MASK      (0xF0U)
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_9_SHIFT     (4U)
/*! LUT_9 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_9(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL1_LUT_9_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL1_LUT_9_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_10_MASK     (0xF00U)
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_10_SHIFT    (8U)
/*! LUT_10 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_10(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL1_LUT_10_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL1_LUT_10_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_11_MASK     (0xF000U)
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_11_SHIFT    (12U)
/*! LUT_11 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_11(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL1_LUT_11_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL1_LUT_11_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_12_MASK     (0xF0000U)
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_12_SHIFT    (16U)
/*! LUT_12 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_12(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL1_LUT_12_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL1_LUT_12_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_13_MASK     (0xF00000U)
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_13_SHIFT    (20U)
/*! LUT_13 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_13(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL1_LUT_13_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL1_LUT_13_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_14_MASK     (0xF000000U)
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_14_SHIFT    (24U)
/*! LUT_14 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_14(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL1_LUT_14_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL1_LUT_14_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_15_MASK     (0xF0000000U)
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_15_SHIFT    (28U)
/*! LUT_15 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL1_LUT_15(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL1_LUT_15_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL1_LUT_15_MASK)
/*! @} */

/*! @name LCL_GPIO_CTRL2 - LCL GPIO CTRL 2 */
/*! @{ */

#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_16_MASK     (0xFU)
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_16_SHIFT    (0U)
/*! LUT_16 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_16(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL2_LUT_16_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL2_LUT_16_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_17_MASK     (0xF0U)
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_17_SHIFT    (4U)
/*! LUT_17 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_17(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL2_LUT_17_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL2_LUT_17_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_18_MASK     (0xF00U)
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_18_SHIFT    (8U)
/*! LUT_18 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_18(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL2_LUT_18_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL2_LUT_18_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_19_MASK     (0xF000U)
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_19_SHIFT    (12U)
/*! LUT_19 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_19(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL2_LUT_19_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL2_LUT_19_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_20_MASK     (0xF0000U)
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_20_SHIFT    (16U)
/*! LUT_20 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_20(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL2_LUT_20_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL2_LUT_20_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_21_MASK     (0xF00000U)
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_21_SHIFT    (20U)
/*! LUT_21 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_21(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL2_LUT_21_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL2_LUT_21_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_22_MASK     (0xF000000U)
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_22_SHIFT    (24U)
/*! LUT_22 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_22(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL2_LUT_22_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL2_LUT_22_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_23_MASK     (0xF0000000U)
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_23_SHIFT    (28U)
/*! LUT_23 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL2_LUT_23(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL2_LUT_23_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL2_LUT_23_MASK)
/*! @} */

/*! @name LCL_GPIO_CTRL3 - LCL GPIO CTRL 3 */
/*! @{ */

#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_24_MASK     (0xFU)
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_24_SHIFT    (0U)
/*! LUT_24 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_24(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL3_LUT_24_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL3_LUT_24_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_25_MASK     (0xF0U)
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_25_SHIFT    (4U)
/*! LUT_25 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_25(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL3_LUT_25_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL3_LUT_25_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_26_MASK     (0xF00U)
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_26_SHIFT    (8U)
/*! LUT_26 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_26(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL3_LUT_26_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL3_LUT_26_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_27_MASK     (0xF000U)
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_27_SHIFT    (12U)
/*! LUT_27 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_27(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL3_LUT_27_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL3_LUT_27_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_28_MASK     (0xF0000U)
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_28_SHIFT    (16U)
/*! LUT_28 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_28(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL3_LUT_28_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL3_LUT_28_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_29_MASK     (0xF00000U)
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_29_SHIFT    (20U)
/*! LUT_29 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_29(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL3_LUT_29_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL3_LUT_29_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_30_MASK     (0xF000000U)
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_30_SHIFT    (24U)
/*! LUT_30 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_30(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL3_LUT_30_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL3_LUT_30_MASK)

#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_31_MASK     (0xF0000000U)
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_31_SHIFT    (28U)
/*! LUT_31 - GPIO antenna state LUT entry */
#define XCVR_MISC_LCL_GPIO_CTRL3_LUT_31(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL3_LUT_31_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL3_LUT_31_MASK)
/*! @} */

/*! @name LCL_GPIO_CTRL4 - LCL GPIO CTRL 4 */
/*! @{ */

#define XCVR_MISC_LCL_GPIO_CTRL4_LUT_WRAP_PTR_MASK (0x1FU)
#define XCVR_MISC_LCL_GPIO_CTRL4_LUT_WRAP_PTR_SHIFT (0U)
/*! LUT_WRAP_PTR - Wrap point for the LUT table in generating the 4 antenna GPIO wire states. */
#define XCVR_MISC_LCL_GPIO_CTRL4_LUT_WRAP_PTR(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_GPIO_CTRL4_LUT_WRAP_PTR_SHIFT)) & XCVR_MISC_LCL_GPIO_CTRL4_LUT_WRAP_PTR_MASK)
/*! @} */

/*! @name LCL_DMA_MASK_DELAY - LCL_DMA_MASK_DELAY */
/*! @{ */

#define XCVR_MISC_LCL_DMA_MASK_DELAY_DMA_MASK_DELAY_OFF_MASK (0x1FU)
#define XCVR_MISC_LCL_DMA_MASK_DELAY_DMA_MASK_DELAY_OFF_SHIFT (0U)
/*! DMA_MASK_DELAY_OFF - DMA_MASK_DELAY_OFF */
#define XCVR_MISC_LCL_DMA_MASK_DELAY_DMA_MASK_DELAY_OFF(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_DMA_MASK_DELAY_DMA_MASK_DELAY_OFF_SHIFT)) & XCVR_MISC_LCL_DMA_MASK_DELAY_DMA_MASK_DELAY_OFF_MASK)

#define XCVR_MISC_LCL_DMA_MASK_DELAY_DMA_MASK_DELAY_MASK (0xFFE0U)
#define XCVR_MISC_LCL_DMA_MASK_DELAY_DMA_MASK_DELAY_SHIFT (5U)
/*! DMA_MASK_DELAY - DMA_MASK_DELAY */
#define XCVR_MISC_LCL_DMA_MASK_DELAY_DMA_MASK_DELAY(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_DMA_MASK_DELAY_DMA_MASK_DELAY_SHIFT)) & XCVR_MISC_LCL_DMA_MASK_DELAY_DMA_MASK_DELAY_MASK)
/*! @} */

/*! @name LCL_DMA_MASK_PERIOD - LCL_DMA_MASK_PERIOD */
/*! @{ */

#define XCVR_MISC_LCL_DMA_MASK_PERIOD_DMA_MASK_REF_PER_MASK (0x1FU)
#define XCVR_MISC_LCL_DMA_MASK_PERIOD_DMA_MASK_REF_PER_SHIFT (0U)
/*! DMA_MASK_REF_PER - DMA_MASK_REF_PER */
#define XCVR_MISC_LCL_DMA_MASK_PERIOD_DMA_MASK_REF_PER(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_LCL_DMA_MASK_PERIOD_DMA_MASK_REF_PER_SHIFT)) & XCVR_MISC_LCL_DMA_MASK_PERIOD_DMA_MASK_REF_PER_MASK)
/*! @} */

/*! @name RSM_CSR - Ranging Sequence Manager Control and Status */
/*! @{ */

#define XCVR_MISC_RSM_CSR_RSM_IRQ_IP1_EN_MASK    (0x1U)
#define XCVR_MISC_RSM_CSR_RSM_IRQ_IP1_EN_SHIFT   (0U)
/*! RSM_IRQ_IP1_EN - RSM_IRQ_IP1_EN */
#define XCVR_MISC_RSM_CSR_RSM_IRQ_IP1_EN(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_IRQ_IP1_EN_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_IRQ_IP1_EN_MASK)

#define XCVR_MISC_RSM_CSR_RSM_IRQ_IP1_MASK       (0x2U)
#define XCVR_MISC_RSM_CSR_RSM_IRQ_IP1_SHIFT      (1U)
/*! RSM_IRQ_IP1 - RSM_IRQ_IP1 Flag */
#define XCVR_MISC_RSM_CSR_RSM_IRQ_IP1(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_IRQ_IP1_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_IRQ_IP1_MASK)

#define XCVR_MISC_RSM_CSR_RSM_IRQ_IP2_EN_MASK    (0x4U)
#define XCVR_MISC_RSM_CSR_RSM_IRQ_IP2_EN_SHIFT   (2U)
/*! RSM_IRQ_IP2_EN - RSM_IRQ_IP2_EN */
#define XCVR_MISC_RSM_CSR_RSM_IRQ_IP2_EN(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_IRQ_IP2_EN_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_IRQ_IP2_EN_MASK)

#define XCVR_MISC_RSM_CSR_RSM_IRQ_IP2_MASK       (0x8U)
#define XCVR_MISC_RSM_CSR_RSM_IRQ_IP2_SHIFT      (3U)
/*! RSM_IRQ_IP2 - RSM_IRQ_IP2 Flag */
#define XCVR_MISC_RSM_CSR_RSM_IRQ_IP2(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_IRQ_IP2_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_IRQ_IP2_MASK)

#define XCVR_MISC_RSM_CSR_RSM_IRQ_FC_EN_MASK     (0x10U)
#define XCVR_MISC_RSM_CSR_RSM_IRQ_FC_EN_SHIFT    (4U)
/*! RSM_IRQ_FC_EN - RSM_IRQ_FC_EN */
#define XCVR_MISC_RSM_CSR_RSM_IRQ_FC_EN(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_IRQ_FC_EN_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_IRQ_FC_EN_MASK)

#define XCVR_MISC_RSM_CSR_RSM_IRQ_FC_MASK        (0x20U)
#define XCVR_MISC_RSM_CSR_RSM_IRQ_FC_SHIFT       (5U)
/*! RSM_IRQ_FC - RSM_IRQ_FC Flag */
#define XCVR_MISC_RSM_CSR_RSM_IRQ_FC(x)          (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_IRQ_FC_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_IRQ_FC_MASK)

#define XCVR_MISC_RSM_CSR_RSM_IRQ_EOS_EN_MASK    (0x40U)
#define XCVR_MISC_RSM_CSR_RSM_IRQ_EOS_EN_SHIFT   (6U)
/*! RSM_IRQ_EOS_EN - RSM_IRQ_EOS_EN */
#define XCVR_MISC_RSM_CSR_RSM_IRQ_EOS_EN(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_IRQ_EOS_EN_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_IRQ_EOS_EN_MASK)

#define XCVR_MISC_RSM_CSR_RSM_IRQ_EOS_MASK       (0x80U)
#define XCVR_MISC_RSM_CSR_RSM_IRQ_EOS_SHIFT      (7U)
/*! RSM_IRQ_EOS - RSM_IRQ_EOS Flag */
#define XCVR_MISC_RSM_CSR_RSM_IRQ_EOS(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_IRQ_EOS_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_IRQ_EOS_MASK)

#define XCVR_MISC_RSM_CSR_RSM_IRQ_ABORT_EN_MASK  (0x100U)
#define XCVR_MISC_RSM_CSR_RSM_IRQ_ABORT_EN_SHIFT (8U)
/*! RSM_IRQ_ABORT_EN - RSM_IRQ_ABORT_EN */
#define XCVR_MISC_RSM_CSR_RSM_IRQ_ABORT_EN(x)    (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_IRQ_ABORT_EN_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_IRQ_ABORT_EN_MASK)

#define XCVR_MISC_RSM_CSR_RSM_IRQ_ABORT_MASK     (0x200U)
#define XCVR_MISC_RSM_CSR_RSM_IRQ_ABORT_SHIFT    (9U)
/*! RSM_IRQ_ABORT - RSM_IRQ_ABORT Flag */
#define XCVR_MISC_RSM_CSR_RSM_IRQ_ABORT(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_IRQ_ABORT_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_IRQ_ABORT_MASK)

#define XCVR_MISC_RSM_CSR_RSM_STATE_MASK         (0x1F0000U)
#define XCVR_MISC_RSM_CSR_RSM_STATE_SHIFT        (16U)
/*! RSM_STATE - RSM_STATE
 *  0b00000..IDLE
 *  0b00001..DELAY. Used only for the trigger delay in SQTE
 *  0b00010..EXT_TX (Extend TX). Used only for PDE
 *  0b00011..EXT_RX (Extend RX). Used only for PDE
 *  0b00100..WU (Warmup). Used only for SQTE
 *  0b00101..DT_TX (Packet TX). Used only for SQTE
 *  0b00110..DT_RX (Packet RX). Used only for SQTE
 *  0b00111..DT_RX_SYNC (Packet RX Sync). Used only for SQTE
 *  0b01000..FM_TX (Frequency Measurement TX). Used only for SQTE
 *  0b01001..FM_RX (Frequency Measurement RX). Used only for SQTE
 *  0b01010..PM_TX (Phase Measurement TX).
 *  0b01011..PM_RX (Phase Measurement RX).
 *  0b01100..IP1_RX2TX (Interlude Period 1 RX2TX). Used only for SQTE
 *  0b01101..IP1_TX2RX (Interlude Period 1 TX2RX). Used only for SQTE
 *  0b01110..S_RX2RX (Short Period RX2RX). Used only for SQTE
 *  0b01111..S_TX2TX (Short Period TX2TX). Used only for SQTE
 *  0b10000..IP2_RX2TX (Interlude Period 2 RX2TX).
 *  0b10001..IP2_TX2RX (Interlude Period 2 TX2RX).
 *  0b10010..FC_RX2TX (Frequency Change RX2TX).
 *  0b10011..FC_TX2RX (Frequency Change TX2RX).
 *  0b10100..WD (Warmdown)
 */
#define XCVR_MISC_RSM_CSR_RSM_STATE(x)           (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_STATE_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_STATE_MASK)

#define XCVR_MISC_RSM_CSR_RSM_STEP_FORMAT_MASK   (0x600000U)
#define XCVR_MISC_RSM_CSR_RSM_STEP_FORMAT_SHIFT  (21U)
/*! RSM_STEP_FORMAT - RSM_STEP_FORMAT */
#define XCVR_MISC_RSM_CSR_RSM_STEP_FORMAT(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_STEP_FORMAT_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_STEP_FORMAT_MASK)

#define XCVR_MISC_RSM_CSR_RSM_CURRENT_STEPS_MASK (0xFF000000U)
#define XCVR_MISC_RSM_CSR_RSM_CURRENT_STEPS_SHIFT (24U)
/*! RSM_CURRENT_STEPS - RSM_CURRENT_STEPS */
#define XCVR_MISC_RSM_CSR_RSM_CURRENT_STEPS(x)   (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CSR_RSM_CURRENT_STEPS_SHIFT)) & XCVR_MISC_RSM_CSR_RSM_CURRENT_STEPS_MASK)
/*! @} */

/*! @name RSM_CTRL0 - Ranging Sequence Manager Control */
/*! @{ */

#define XCVR_MISC_RSM_CTRL0_RSM_MODE_MASK        (0x1U)
#define XCVR_MISC_RSM_CTRL0_RSM_MODE_SHIFT       (0U)
/*! RSM_MODE - RSM_MODE
 *  0b0..SQTE
 *  0b1..PDE
 */
#define XCVR_MISC_RSM_CTRL0_RSM_MODE(x)          (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL0_RSM_MODE_SHIFT)) & XCVR_MISC_RSM_CTRL0_RSM_MODE_MASK)

#define XCVR_MISC_RSM_CTRL0_RSM_RATE_MASK        (0x2U)
#define XCVR_MISC_RSM_CTRL0_RSM_RATE_SHIFT       (1U)
/*! RSM_RATE - RSM_RATE
 *  0b0..1Mbps
 *  0b1..2Mbps
 */
#define XCVR_MISC_RSM_CTRL0_RSM_RATE(x)          (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL0_RSM_RATE_SHIFT)) & XCVR_MISC_RSM_CTRL0_RSM_RATE_MASK)

#define XCVR_MISC_RSM_CTRL0_RSM_RX_EN_MASK       (0x4U)
#define XCVR_MISC_RSM_CTRL0_RSM_RX_EN_SHIFT      (2U)
/*! RSM_RX_EN - RSM_RX_EN */
#define XCVR_MISC_RSM_CTRL0_RSM_RX_EN(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL0_RSM_RX_EN_SHIFT)) & XCVR_MISC_RSM_CTRL0_RSM_RX_EN_MASK)

#define XCVR_MISC_RSM_CTRL0_RSM_TX_EN_MASK       (0x8U)
#define XCVR_MISC_RSM_CTRL0_RSM_TX_EN_SHIFT      (3U)
/*! RSM_TX_EN - RSM_TX_EN */
#define XCVR_MISC_RSM_CTRL0_RSM_TX_EN(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL0_RSM_TX_EN_SHIFT)) & XCVR_MISC_RSM_CTRL0_RSM_TX_EN_MASK)

#define XCVR_MISC_RSM_CTRL0_RSM_FAST_IP_RX_WU_MASK (0x10U)
#define XCVR_MISC_RSM_CTRL0_RSM_FAST_IP_RX_WU_SHIFT (4U)
/*! RSM_FAST_IP_RX_WU - RSM_FAST_IP_RX_WU */
#define XCVR_MISC_RSM_CTRL0_RSM_FAST_IP_RX_WU(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL0_RSM_FAST_IP_RX_WU_SHIFT)) & XCVR_MISC_RSM_CTRL0_RSM_FAST_IP_RX_WU_MASK)

#define XCVR_MISC_RSM_CTRL0_RSM_FAST_IP_TX_WU_MASK (0x20U)
#define XCVR_MISC_RSM_CTRL0_RSM_FAST_IP_TX_WU_SHIFT (5U)
/*! RSM_FAST_IP_TX_WU - RSM_FAST_IP_TX_WU */
#define XCVR_MISC_RSM_CTRL0_RSM_FAST_IP_TX_WU(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL0_RSM_FAST_IP_TX_WU_SHIFT)) & XCVR_MISC_RSM_CTRL0_RSM_FAST_IP_TX_WU_MASK)

#define XCVR_MISC_RSM_CTRL0_RSM_FAST_FC_RX_WU_MASK (0x40U)
#define XCVR_MISC_RSM_CTRL0_RSM_FAST_FC_RX_WU_SHIFT (6U)
/*! RSM_FAST_FC_RX_WU - RSM_FAST_FC_RX_WU */
#define XCVR_MISC_RSM_CTRL0_RSM_FAST_FC_RX_WU(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL0_RSM_FAST_FC_RX_WU_SHIFT)) & XCVR_MISC_RSM_CTRL0_RSM_FAST_FC_RX_WU_MASK)

#define XCVR_MISC_RSM_CTRL0_RSM_FAST_FC_TX_WU_MASK (0x80U)
#define XCVR_MISC_RSM_CTRL0_RSM_FAST_FC_TX_WU_SHIFT (7U)
/*! RSM_FAST_FC_TX_WU - RSM_FAST_FC_TX_WU */
#define XCVR_MISC_RSM_CTRL0_RSM_FAST_FC_TX_WU(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL0_RSM_FAST_FC_TX_WU_SHIFT)) & XCVR_MISC_RSM_CTRL0_RSM_FAST_FC_TX_WU_MASK)

#define XCVR_MISC_RSM_CTRL0_RSM_SW_ABORT_MASK    (0x100U)
#define XCVR_MISC_RSM_CTRL0_RSM_SW_ABORT_SHIFT   (8U)
/*! RSM_SW_ABORT - RSM_SW_ABORT */
#define XCVR_MISC_RSM_CTRL0_RSM_SW_ABORT(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL0_RSM_SW_ABORT_SHIFT)) & XCVR_MISC_RSM_CTRL0_RSM_SW_ABORT_MASK)

#define XCVR_MISC_RSM_CTRL0_RSM_TRIG_SEL_MASK    (0x1C00U)
#define XCVR_MISC_RSM_CTRL0_RSM_TRIG_SEL_SHIFT   (10U)
/*! RSM_TRIG_SEL - RSM_TRIG_SEL
 *  0b000..software trigger
 *  0b001..crc_vld
 *  0b010..aa_fnd_to_ll
 *  0b011..tx_dig_en
 *  0b100..seq_spare3
 *  0b101..lcl pattern_match
 *  0b110-0b111..Reserved
 */
#define XCVR_MISC_RSM_CTRL0_RSM_TRIG_SEL(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL0_RSM_TRIG_SEL_SHIFT)) & XCVR_MISC_RSM_CTRL0_RSM_TRIG_SEL_MASK)

#define XCVR_MISC_RSM_CTRL0_RSM_TRIG_DLY_MASK    (0xFFE000U)
#define XCVR_MISC_RSM_CTRL0_RSM_TRIG_DLY_SHIFT   (13U)
/*! RSM_TRIG_DLY - RSM_TRIG_DLY */
#define XCVR_MISC_RSM_CTRL0_RSM_TRIG_DLY(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL0_RSM_TRIG_DLY_SHIFT)) & XCVR_MISC_RSM_CTRL0_RSM_TRIG_DLY_MASK)

#define XCVR_MISC_RSM_CTRL0_RSM_STEPS_MASK       (0xFF000000U)
#define XCVR_MISC_RSM_CTRL0_RSM_STEPS_SHIFT      (24U)
/*! RSM_STEPS - RSM_FREQUENCY_STEP */
#define XCVR_MISC_RSM_CTRL0_RSM_STEPS(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL0_RSM_STEPS_SHIFT)) & XCVR_MISC_RSM_CTRL0_RSM_STEPS_MASK)
/*! @} */

/*! @name RSM_CTRL1 - Ranging Sequence Manager Control */
/*! @{ */

#define XCVR_MISC_RSM_CTRL1_RSM_T_FM0_MASK       (0x1FU)
#define XCVR_MISC_RSM_CTRL1_RSM_T_FM0_SHIFT      (0U)
/*! RSM_T_FM0 - RSM_T_FM0 */
#define XCVR_MISC_RSM_CTRL1_RSM_T_FM0(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL1_RSM_T_FM0_SHIFT)) & XCVR_MISC_RSM_CTRL1_RSM_T_FM0_MASK)

#define XCVR_MISC_RSM_CTRL1_RSM_T_FM1_MASK       (0x3E0U)
#define XCVR_MISC_RSM_CTRL1_RSM_T_FM1_SHIFT      (5U)
/*! RSM_T_FM1 - RSM_T_FM1 */
#define XCVR_MISC_RSM_CTRL1_RSM_T_FM1(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL1_RSM_T_FM1_SHIFT)) & XCVR_MISC_RSM_CTRL1_RSM_T_FM1_MASK)

#define XCVR_MISC_RSM_CTRL1_RSM_T_FC_MASK        (0xF800U)
#define XCVR_MISC_RSM_CTRL1_RSM_T_FC_SHIFT       (11U)
/*! RSM_T_FC - RSM_T_FC */
#define XCVR_MISC_RSM_CTRL1_RSM_T_FC(x)          (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL1_RSM_T_FC_SHIFT)) & XCVR_MISC_RSM_CTRL1_RSM_T_FC_MASK)

#define XCVR_MISC_RSM_CTRL1_RSM_T_IP1_MASK       (0x1F0000U)
#define XCVR_MISC_RSM_CTRL1_RSM_T_IP1_SHIFT      (16U)
/*! RSM_T_IP1 - RSM_T_IP1 */
#define XCVR_MISC_RSM_CTRL1_RSM_T_IP1(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL1_RSM_T_IP1_SHIFT)) & XCVR_MISC_RSM_CTRL1_RSM_T_IP1_MASK)

#define XCVR_MISC_RSM_CTRL1_RSM_T_IP2_MASK       (0x3E00000U)
#define XCVR_MISC_RSM_CTRL1_RSM_T_IP2_SHIFT      (21U)
/*! RSM_T_IP2 - RSM_T_IP2 */
#define XCVR_MISC_RSM_CTRL1_RSM_T_IP2(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL1_RSM_T_IP2_SHIFT)) & XCVR_MISC_RSM_CTRL1_RSM_T_IP2_MASK)

#define XCVR_MISC_RSM_CTRL1_RSM_T_S_MASK         (0xC000000U)
#define XCVR_MISC_RSM_CTRL1_RSM_T_S_SHIFT        (26U)
/*! RSM_T_S - RSM_T_S */
#define XCVR_MISC_RSM_CTRL1_RSM_T_S(x)           (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL1_RSM_T_S_SHIFT)) & XCVR_MISC_RSM_CTRL1_RSM_T_S_MASK)
/*! @} */

/*! @name RSM_CTRL2 - Ranging Sequence Manager Control */
/*! @{ */

#define XCVR_MISC_RSM_CTRL2_RSM_T_PM0_MASK       (0x3FU)
#define XCVR_MISC_RSM_CTRL2_RSM_T_PM0_SHIFT      (0U)
/*! RSM_T_PM0 - RSM_T_PM0 */
#define XCVR_MISC_RSM_CTRL2_RSM_T_PM0(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL2_RSM_T_PM0_SHIFT)) & XCVR_MISC_RSM_CTRL2_RSM_T_PM0_MASK)

#define XCVR_MISC_RSM_CTRL2_RSM_T_PM1_MASK       (0xFC0U)
#define XCVR_MISC_RSM_CTRL2_RSM_T_PM1_SHIFT      (6U)
/*! RSM_T_PM1 - RSM_T_PM1 */
#define XCVR_MISC_RSM_CTRL2_RSM_T_PM1(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL2_RSM_T_PM1_SHIFT)) & XCVR_MISC_RSM_CTRL2_RSM_T_PM1_MASK)

#define XCVR_MISC_RSM_CTRL2_RSM_T_PM2_MASK       (0x3F000U)
#define XCVR_MISC_RSM_CTRL2_RSM_T_PM2_SHIFT      (12U)
/*! RSM_T_PM2 - RSM_T_PM2 */
#define XCVR_MISC_RSM_CTRL2_RSM_T_PM2(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL2_RSM_T_PM2_SHIFT)) & XCVR_MISC_RSM_CTRL2_RSM_T_PM2_MASK)

#define XCVR_MISC_RSM_CTRL2_RSM_T_PM3_MASK       (0xFC0000U)
#define XCVR_MISC_RSM_CTRL2_RSM_T_PM3_SHIFT      (18U)
/*! RSM_T_PM3 - RSM_T_PM3 */
#define XCVR_MISC_RSM_CTRL2_RSM_T_PM3(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL2_RSM_T_PM3_SHIFT)) & XCVR_MISC_RSM_CTRL2_RSM_T_PM3_MASK)

#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_LCL_MASK (0x4000000U)
#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_LCL_SHIFT (26U)
/*! RSM_ACTIVE_OVRD_LCL - RSM_ACTIVE_OVRD_LCL */
#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_LCL(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_LCL_SHIFT)) & XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_LCL_MASK)

#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_LCL_MASK (0x8000000U)
#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_LCL_SHIFT (27U)
/*! RSM_ACTIVE_OVRD_EN_LCL - RSM_ACTIVE_OVRD_EN_LCL
 *  0b0..Disable override rsm_active of LCL_CTRL module.
 *  0b1..Enable override rsm_active of LCL_CTRL module.
 */
#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_LCL(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_LCL_SHIFT)) & XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_LCL_MASK)

#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_TXDIG_MASK (0x10000000U)
#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_TXDIG_SHIFT (28U)
/*! RSM_ACTIVE_OVRD_TXDIG - RSM_ACTIVE_OVRD_TXDIG */
#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_TXDIG(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_TXDIG_SHIFT)) & XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_TXDIG_MASK)

#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_TXDIG_MASK (0x20000000U)
#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_TXDIG_SHIFT (29U)
/*! RSM_ACTIVE_OVRD_EN_TXDIG - RSM_ACTIVE_OVRD_EN_TXDIG
 *  0b0..Disable override rsm_active of TXDIG module.
 *  0b1..Enable override rsm_active of TXDIG module.
 */
#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_TXDIG(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_TXDIG_SHIFT)) & XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_TXDIG_MASK)

#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_RXDIG_MASK (0x40000000U)
#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_RXDIG_SHIFT (30U)
/*! RSM_ACTIVE_OVRD_RXDIG - RSM_ACTIVE_OVRD_RXDIG */
#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_RXDIG(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_RXDIG_SHIFT)) & XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_RXDIG_MASK)

#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_RXDIG_MASK (0x80000000U)
#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_RXDIG_SHIFT (31U)
/*! RSM_ACTIVE_OVRD_EN_RXDIG - RSM_ACTIVE_OVRD_EN_RXDIG
 *  0b0..Disable override rsm_active of RXDIG module.
 *  0b1..Enable override rsm_active of RXDIG module.
 */
#define XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_RXDIG(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_RXDIG_SHIFT)) & XCVR_MISC_RSM_CTRL2_RSM_ACTIVE_OVRD_EN_RXDIG_MASK)
/*! @} */

/*! @name RSM_CTRL3 - Ranging Sequence Manager Control */
/*! @{ */

#define XCVR_MISC_RSM_CTRL3_RSM_DT_RX_SYNC_DLY_MASK (0xFU)
#define XCVR_MISC_RSM_CTRL3_RSM_DT_RX_SYNC_DLY_SHIFT (0U)
/*! RSM_DT_RX_SYNC_DLY - RSM_DT_RX_SYNC_DLY */
#define XCVR_MISC_RSM_CTRL3_RSM_DT_RX_SYNC_DLY(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL3_RSM_DT_RX_SYNC_DLY_SHIFT)) & XCVR_MISC_RSM_CTRL3_RSM_DT_RX_SYNC_DLY_MASK)

#define XCVR_MISC_RSM_CTRL3_RSM_DT_RX_SYNC_DIS_MASK (0x10U)
#define XCVR_MISC_RSM_CTRL3_RSM_DT_RX_SYNC_DIS_SHIFT (4U)
/*! RSM_DT_RX_SYNC_DIS - RSM_DT_RX_SYNC_DIS */
#define XCVR_MISC_RSM_CTRL3_RSM_DT_RX_SYNC_DIS(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL3_RSM_DT_RX_SYNC_DIS_SHIFT)) & XCVR_MISC_RSM_CTRL3_RSM_DT_RX_SYNC_DIS_MASK)

#define XCVR_MISC_RSM_CTRL3_RSM_AA_HAMM_MASK     (0xE0U)
#define XCVR_MISC_RSM_CTRL3_RSM_AA_HAMM_SHIFT    (5U)
/*! RSM_AA_HAMM - RSM_AA_HAMM */
#define XCVR_MISC_RSM_CTRL3_RSM_AA_HAMM(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL3_RSM_AA_HAMM_SHIFT)) & XCVR_MISC_RSM_CTRL3_RSM_AA_HAMM_MASK)

#define XCVR_MISC_RSM_CTRL3_RSM_HPM_CAL_MASK     (0x100U)
#define XCVR_MISC_RSM_CTRL3_RSM_HPM_CAL_SHIFT    (8U)
/*! RSM_HPM_CAL - RSM_HPM_CAL */
#define XCVR_MISC_RSM_CTRL3_RSM_HPM_CAL(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL3_RSM_HPM_CAL_SHIFT)) & XCVR_MISC_RSM_CTRL3_RSM_HPM_CAL_MASK)

#define XCVR_MISC_RSM_CTRL3_RSM_CTUNE_MASK       (0x200U)
#define XCVR_MISC_RSM_CTRL3_RSM_CTUNE_SHIFT      (9U)
/*! RSM_CTUNE - RSM_CTUNE */
#define XCVR_MISC_RSM_CTRL3_RSM_CTUNE(x)         (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL3_RSM_CTUNE_SHIFT)) & XCVR_MISC_RSM_CTRL3_RSM_CTUNE_MASK)

#define XCVR_MISC_RSM_CTRL3_RSM_DMA_RX_EN_MASK   (0x400U)
#define XCVR_MISC_RSM_CTRL3_RSM_DMA_RX_EN_SHIFT  (10U)
/*! RSM_DMA_RX_EN - RSM_DMA_RX_EN */
#define XCVR_MISC_RSM_CTRL3_RSM_DMA_RX_EN(x)     (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL3_RSM_DMA_RX_EN_SHIFT)) & XCVR_MISC_RSM_CTRL3_RSM_DMA_RX_EN_MASK)

#define XCVR_MISC_RSM_CTRL3_RSM_RX_PHY_EN_MASK_DIS_MASK (0x800U)
#define XCVR_MISC_RSM_CTRL3_RSM_RX_PHY_EN_MASK_DIS_SHIFT (11U)
/*! RSM_RX_PHY_EN_MASK_DIS - RSM_RX_PHY_EN_MASK_DIS */
#define XCVR_MISC_RSM_CTRL3_RSM_RX_PHY_EN_MASK_DIS(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL3_RSM_RX_PHY_EN_MASK_DIS_SHIFT)) & XCVR_MISC_RSM_CTRL3_RSM_RX_PHY_EN_MASK_DIS_MASK)

#define XCVR_MISC_RSM_CTRL3_RSM_RX_SIGNALS_MASK_DIS_MASK (0x1000U)
#define XCVR_MISC_RSM_CTRL3_RSM_RX_SIGNALS_MASK_DIS_SHIFT (12U)
/*! RSM_RX_SIGNALS_MASK_DIS - RSM_RX_SIGNALS_MASK_DIS */
#define XCVR_MISC_RSM_CTRL3_RSM_RX_SIGNALS_MASK_DIS(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL3_RSM_RX_SIGNALS_MASK_DIS_SHIFT)) & XCVR_MISC_RSM_CTRL3_RSM_RX_SIGNALS_MASK_DIS_MASK)

#define XCVR_MISC_RSM_CTRL3_RSM_SEQ_RCCAL_PUP_MASK_DIS_MASK (0x2000U)
#define XCVR_MISC_RSM_CTRL3_RSM_SEQ_RCCAL_PUP_MASK_DIS_SHIFT (13U)
/*! RSM_SEQ_RCCAL_PUP_MASK_DIS - RSM_SEQ_RCCAL_PUP_MASK_DIS */
#define XCVR_MISC_RSM_CTRL3_RSM_SEQ_RCCAL_PUP_MASK_DIS(x) (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL3_RSM_SEQ_RCCAL_PUP_MASK_DIS_SHIFT)) & XCVR_MISC_RSM_CTRL3_RSM_SEQ_RCCAL_PUP_MASK_DIS_MASK)

#define XCVR_MISC_RSM_CTRL3_RSM_DMA_DUR_MASK     (0x3FF0000U)
#define XCVR_MISC_RSM_CTRL3_RSM_DMA_DUR_SHIFT    (16U)
/*! RSM_DMA_DUR - DMA Duration */
#define XCVR_MISC_RSM_CTRL3_RSM_DMA_DUR(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL3_RSM_DMA_DUR_SHIFT)) & XCVR_MISC_RSM_CTRL3_RSM_DMA_DUR_MASK)
/*! @} */

/*! @name RSM_CTRL4 - Ranging Sequence Manager Control */
/*! @{ */

#define XCVR_MISC_RSM_CTRL4_RSM_DMA_DLY0_MASK    (0xFFU)
#define XCVR_MISC_RSM_CTRL4_RSM_DMA_DLY0_SHIFT   (0U)
/*! RSM_DMA_DLY0 - DMA Delay 0 */
#define XCVR_MISC_RSM_CTRL4_RSM_DMA_DLY0(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL4_RSM_DMA_DLY0_SHIFT)) & XCVR_MISC_RSM_CTRL4_RSM_DMA_DLY0_MASK)

#define XCVR_MISC_RSM_CTRL4_RSM_DMA_DLY_MASK     (0xFF00U)
#define XCVR_MISC_RSM_CTRL4_RSM_DMA_DLY_SHIFT    (8U)
/*! RSM_DMA_DLY - DMA Delay */
#define XCVR_MISC_RSM_CTRL4_RSM_DMA_DLY(x)       (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL4_RSM_DMA_DLY_SHIFT)) & XCVR_MISC_RSM_CTRL4_RSM_DMA_DLY_MASK)

#define XCVR_MISC_RSM_CTRL4_RSM_DMA_DUR0_MASK    (0x3FF0000U)
#define XCVR_MISC_RSM_CTRL4_RSM_DMA_DUR0_SHIFT   (16U)
/*! RSM_DMA_DUR0 - DMA Duration 0 */
#define XCVR_MISC_RSM_CTRL4_RSM_DMA_DUR0(x)      (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RSM_CTRL4_RSM_DMA_DUR0_SHIFT)) & XCVR_MISC_RSM_CTRL4_RSM_DMA_DUR0_MASK)
/*! @} */

/*! @name RF_DFT_CTRL - RF DFT CTRL */
/*! @{ */

#define XCVR_MISC_RF_DFT_CTRL_RADIO_DFT_MODE_MASK (0xFU)
#define XCVR_MISC_RF_DFT_CTRL_RADIO_DFT_MODE_SHIFT (0U)
/*! RADIO_DFT_MODE - Radio DFT mode control
 *  0b0000..Normal Mode
 *  0b0001..Carrier Only
 *  0b0010..Pattern Register
 *  0b0011..LFSR
 *  0b0100..RAM Modulation
 *  0b1010..Coarse Tune BIST, no modulation
 *  0b1011..PLL Locking BIST, no modulation
 *  0b1100..HPM DAC Cal BIST, no modulation
 */
#define XCVR_MISC_RF_DFT_CTRL_RADIO_DFT_MODE(x)  (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_RF_DFT_CTRL_RADIO_DFT_MODE_SHIFT)) & XCVR_MISC_RF_DFT_CTRL_RADIO_DFT_MODE_MASK)
/*! @} */

/*! @name IPS_FO_ADDR - IPS FAST OVERWRITE ADDRESS */
/*! @{ */

#define XCVR_MISC_IPS_FO_ADDR_ADDR_MASK          (0xFFFU)
#define XCVR_MISC_IPS_FO_ADDR_ADDR_SHIFT         (0U)
/*! ADDR - IPS Address */
#define XCVR_MISC_IPS_FO_ADDR_ADDR(x)            (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_IPS_FO_ADDR_ADDR_SHIFT)) & XCVR_MISC_IPS_FO_ADDR_ADDR_MASK)

#define XCVR_MISC_IPS_FO_ADDR_ENTRY_RX_MASK      (0x1000U)
#define XCVR_MISC_IPS_FO_ADDR_ENTRY_RX_SHIFT     (12U)
/*! ENTRY_RX - Enable Entry for RX */
#define XCVR_MISC_IPS_FO_ADDR_ENTRY_RX(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_IPS_FO_ADDR_ENTRY_RX_SHIFT)) & XCVR_MISC_IPS_FO_ADDR_ENTRY_RX_MASK)

#define XCVR_MISC_IPS_FO_ADDR_ENTRY_TX_MASK      (0x2000U)
#define XCVR_MISC_IPS_FO_ADDR_ENTRY_TX_SHIFT     (13U)
/*! ENTRY_TX - Enable Entry for TX */
#define XCVR_MISC_IPS_FO_ADDR_ENTRY_TX(x)        (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_IPS_FO_ADDR_ENTRY_TX_SHIFT)) & XCVR_MISC_IPS_FO_ADDR_ENTRY_TX_MASK)
/*! @} */

/* The count of XCVR_MISC_IPS_FO_ADDR */
#define XCVR_MISC_IPS_FO_ADDR_COUNT              (8U)

/*! @name IPS_FO_DRS0_DATA - IPS FAST OVERWRITE DRS0 DATA */
/*! @{ */

#define XCVR_MISC_IPS_FO_DRS0_DATA_DRS0_DATA_MASK (0xFFFFFFFFU)
#define XCVR_MISC_IPS_FO_DRS0_DATA_DRS0_DATA_SHIFT (0U)
/*! DRS0_DATA - Fast Overwrite DRS0 data */
#define XCVR_MISC_IPS_FO_DRS0_DATA_DRS0_DATA(x)  (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_IPS_FO_DRS0_DATA_DRS0_DATA_SHIFT)) & XCVR_MISC_IPS_FO_DRS0_DATA_DRS0_DATA_MASK)
/*! @} */

/* The count of XCVR_MISC_IPS_FO_DRS0_DATA */
#define XCVR_MISC_IPS_FO_DRS0_DATA_COUNT         (8U)

/*! @name IPS_FO_DRS1_DATA - IPS FAST OVERWRITE DRS1 DATA */
/*! @{ */

#define XCVR_MISC_IPS_FO_DRS1_DATA_DRS1_DATA_MASK (0xFFFFFFFFU)
#define XCVR_MISC_IPS_FO_DRS1_DATA_DRS1_DATA_SHIFT (0U)
/*! DRS1_DATA - Fast Overwrite DRS1 data */
#define XCVR_MISC_IPS_FO_DRS1_DATA_DRS1_DATA(x)  (((uint32_t)(((uint32_t)(x)) << XCVR_MISC_IPS_FO_DRS1_DATA_DRS1_DATA_SHIFT)) & XCVR_MISC_IPS_FO_DRS1_DATA_DRS1_DATA_MASK)
/*! @} */

/* The count of XCVR_MISC_IPS_FO_DRS1_DATA */
#define XCVR_MISC_IPS_FO_DRS1_DATA_COUNT         (8U)


/*!
 * @}
 */ /* end of group XCVR_MISC_Register_Masks */


/*!
 * @}
 */ /* end of group XCVR_MISC_Peripheral_Access_Layer */


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


#endif  /* PERI_XCVR_MISC_H_ */

