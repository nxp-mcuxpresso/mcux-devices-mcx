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
**         CMSIS Peripheral Access Layer for SYSCON
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
 * @file SYSCON.h
 * @version 1.0
 * @date 2023-01-09
 * @brief CMSIS Peripheral Access Layer for SYSCON
 *
 * CMSIS Peripheral Access Layer for SYSCON
 */

#if !defined(SYSCON_H_)
#define SYSCON_H_                                /**< Symbol preventing repeated inclusion */

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
   -- SYSCON Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SYSCON_Peripheral_Access_Layer SYSCON Peripheral Access Layer
 * @{
 */

/** SYSCON - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[512];
  __IO uint32_t REMAP;                             /**< AHB Matrix Remap Control, offset: 0x200 */
       uint8_t RESERVED_1[12];
  __IO uint32_t AHBMATPRIO;                        /**< AHB Matrix Priority Control, offset: 0x210 */
       uint8_t RESERVED_2[40];
  __IO uint32_t CPU0NSTCKCAL;                      /**< Non-Secure CPU0 System Tick Calibration, offset: 0x23C */
       uint8_t RESERVED_3[8];
  __IO uint32_t NMISRC;                            /**< NMI Source Select, offset: 0x248 */
       uint8_t RESERVED_4[300];
  __IO uint32_t AHBAIPSCLKDIV;                     /**< AHB2AIPS Bridge Clock Divider, offset: 0x378 */
       uint8_t RESERVED_5[4];
  __IO uint32_t AHBCLKDIV;                         /**< System Clock Divider, offset: 0x380 */
       uint8_t RESERVED_6[120];
  __IO uint32_t CLKUNLOCK;                         /**< Clock Configuration Unlock, offset: 0x3FC */
  __IO uint32_t NVM_CTRL;                          /**< NVM Control, offset: 0x400 */
  __IO uint32_t ROMCR;                             /**< ROM Wait State, offset: 0x404 */
       uint8_t RESERVED_7[252];
  __IO uint32_t SRAM_TMTR;                         /**< SRAM Timing Margin trim, offset: 0x504 */
       uint8_t RESERVED_8[4];
  __IO uint32_t PLSCLKDIV;                         /**< PLS SRAM Clock Divider Control, offset: 0x50C */
       uint8_t RESERVED_9[16];
  __IO uint32_t PLS_SRAM_1K_TEST;                  /**< PLS SRAM Triming Margin for 1k cut, offset: 0x520 */
  __IO uint32_t PLS_SRAM_4K_TEST;                  /**< PLS SRAM Triming Margin for 4k cut, offset: 0x524 */
  __IO uint32_t IP_TRIGGER_SYNC;                   /**< Control Bits for Trigger sync for IP group1, offset: 0x528 */
  __IO uint32_t IP_TRIGGER_SYNC_2;                 /**< Control bits for IP Trigger group2, offset: 0x52C */
  __IO uint32_t HOT_POINT;                         /**< Configuration bits for PMC hot point, offset: 0x530 */
  __IO uint32_t PULSE_CAP_MUX_CONTROL;             /**< CMP clock select Mux, offset: 0x534 */
  __IO uint32_t FLASH_ADVC_PROTECT;                /**< Bits to control soc_rf_active of FMU, offset: 0x538 */
  __IO uint32_t LPTMR_INPUT_CONTROL_PAD;           /**< Select Input Source for LPTIMER, offset: 0x53C */
       uint8_t RESERVED_10[716];
  __I  uint32_t CPUSTAT;                           /**< CPU Status, offset: 0x80C */
       uint8_t RESERVED_11[20];
  __IO uint32_t LPCAC_CTRL;                        /**< LPCAC Control, offset: 0x824 */
       uint8_t RESERVED_12[272];
  __IO uint32_t PWM0SUBCTL;                        /**< PWM0 Submodule Control, offset: 0x938 */
       uint8_t RESERVED_13[4];
  __IO uint32_t CTIMERGLOBALSTARTEN;               /**< CTIMER Global Start Enable, offset: 0x940 */
  __IO uint32_t RAM_CTRL;                          /**< RAM Control, offset: 0x944 */
       uint8_t RESERVED_14[536];
  __IO uint32_t GRAY_CODE_LSB;                     /**< Gray to Binary Converter Gray Code [31:0], offset: 0xB60 */
  __IO uint32_t GRAY_CODE_MSB;                     /**< Gray to Binary Converter Gray Code [41:32], offset: 0xB64 */
  __I  uint32_t BINARY_CODE_LSB;                   /**< Gray to Binary Converter Binary Code [31:0], offset: 0xB68 */
  __I  uint32_t BINARY_CODE_MSB;                   /**< Gray to Binary Converter Binary Code [41:32], offset: 0xB6C */
       uint8_t RESERVED_15[684];
  __IO uint32_t FLASH_CFG;                         /**< Flash Configuration, offset: 0xE1C */
       uint8_t RESERVED_16[28];
  __IO uint32_t ROP_STATE;                         /**< ROP State Register, offset: 0xE3C */
  __I  uint32_t OVP_PAD_STATE;                     /**< OVP_PAD_STATE, offset: 0xE40 */
  __I  uint32_t PROBE_STATE;                       /**< PROBE_STATE, offset: 0xE44 */
  __I  uint32_t FT_STATE_A;                        /**< FT_STATE_A, offset: 0xE48 */
  __I  uint32_t FT_STATE_B;                        /**< FT_STATE_B, offset: 0xE4C */
       uint8_t RESERVED_17[8];
  __IO uint32_t SRAM_XEN;                          /**< RAM XEN Control, offset: 0xE58 */
  __IO uint32_t SRAM_XEN_DP;                       /**< RAM XEN Control (Duplicate), offset: 0xE5C */
       uint8_t RESERVED_18[84];
  __IO uint32_t CSS_BOOT_STATE_LOCK;               /**< CSS Boot State Lock Down, offset: 0xEB4 */
       uint8_t RESERVED_19[232];
  __IO uint32_t DEBUG_LOCK_EN;                     /**< Control Write Access to Security, offset: 0xFA0 */
  __IO uint32_t DEBUG_FEATURES;                    /**< Cortex Debug Features Control, offset: 0xFA4 */
  __IO uint32_t DEBUG_FEATURES_DP;                 /**< Cortex Debug Features Control (Duplicate), offset: 0xFA8 */
       uint8_t RESERVED_20[8];
  __IO uint32_t SWD_ACCESS_CPU0;                   /**< CPU0 Software Debug Access, offset: 0xFB4 */
       uint8_t RESERVED_21[8];
  __IO uint32_t DEBUG_AUTH_BEACON;                 /**< Debug Authentication BEACON, offset: 0xFC0 */
       uint8_t RESERVED_22[44];
  __I  uint32_t JTAG_ID;                           /**< JTAG Chip ID, offset: 0xFF0 */
  __I  uint32_t DEVICE_TYPE;                       /**< Device Type, offset: 0xFF4 */
  __I  uint32_t DEVICE_ID0;                        /**< Device ID, offset: 0xFF8 */
  __I  uint32_t DIEID;                             /**< Chip Revision ID and Number, offset: 0xFFC */
} SYSCON_Type;

/* ----------------------------------------------------------------------------
   -- SYSCON Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SYSCON_Register_Masks SYSCON Register Masks
 * @{
 */

/*! @name REMAP - AHB Matrix Remap Control */
/*! @{ */

#define SYSCON_REMAP_REMAP_CPU0_SBUS_MASK        (0x3U)
#define SYSCON_REMAP_REMAP_CPU0_SBUS_SHIFT       (0U)
/*! REMAP_CPU0_SBUS - RAMX0 address remap for CPU System bus
 *  0b00..RAMX0: 0x04000000 - 0x04001fff
 *  0b01..RAMX0: 0x20060000 - 0x20007fff
 */
#define SYSCON_REMAP_REMAP_CPU0_SBUS(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_REMAP_REMAP_CPU0_SBUS_SHIFT)) & SYSCON_REMAP_REMAP_CPU0_SBUS_MASK)

#define SYSCON_REMAP_REMAP_DMA_MASK              (0xCU)
#define SYSCON_REMAP_REMAP_DMA_SHIFT             (2U)
/*! REMAP_DMA - RAMX0 address remap for DMA
 *  0b00..RAMX0: 0x04000000 - 0x04001fff
 *  0b01..RAMX0: 0x20060000 - 0x20007fff
 */
#define SYSCON_REMAP_REMAP_DMA(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_REMAP_REMAP_DMA_SHIFT)) & SYSCON_REMAP_REMAP_DMA_MASK)

#define SYSCON_REMAP_LOCK_MASK                   (0x80000000U)
#define SYSCON_REMAP_LOCK_SHIFT                  (31U)
/*! LOCK - This 1-bit field provides a mechanism to limit writes to the this register to protect its
 *    contents. Once set, this bit remains asserted until the next reset.
 *  0b0..This register is not locked and can be altered.
 *  0b1..This register is locked and cannot be altered.
 */
#define SYSCON_REMAP_LOCK(x)                     (((uint32_t)(((uint32_t)(x)) << SYSCON_REMAP_LOCK_SHIFT)) & SYSCON_REMAP_LOCK_MASK)
/*! @} */

/*! @name AHBMATPRIO - AHB Matrix Priority Control */
/*! @{ */

#define SYSCON_AHBMATPRIO_PRI_CPU0_CBUS_MASK     (0x3U)
#define SYSCON_AHBMATPRIO_PRI_CPU0_CBUS_SHIFT    (0U)
/*! PRI_CPU0_CBUS - CPU0 C-AHB bus priority level
 *  0b00..level 0
 *  0b01..level 1
 *  0b10..level 2
 *  0b11..level 3
 */
#define SYSCON_AHBMATPRIO_PRI_CPU0_CBUS(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_AHBMATPRIO_PRI_CPU0_CBUS_SHIFT)) & SYSCON_AHBMATPRIO_PRI_CPU0_CBUS_MASK)

#define SYSCON_AHBMATPRIO_PRI_CPU0_SBUS_MASK     (0xCU)
#define SYSCON_AHBMATPRIO_PRI_CPU0_SBUS_SHIFT    (2U)
/*! PRI_CPU0_SBUS - CPU0 S-AHB bus priority level
 *  0b00..level 0
 *  0b01..level 1
 *  0b10..level 2
 *  0b11..level 3
 */
#define SYSCON_AHBMATPRIO_PRI_CPU0_SBUS(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_AHBMATPRIO_PRI_CPU0_SBUS_SHIFT)) & SYSCON_AHBMATPRIO_PRI_CPU0_SBUS_MASK)

#define SYSCON_AHBMATPRIO_DMA0_MASK              (0x300U)
#define SYSCON_AHBMATPRIO_DMA0_SHIFT             (8U)
/*! DMA0 - DMA0 controller priority level
 *  0b00..level 0
 *  0b01..level 1
 *  0b10..level 2
 *  0b11..level 3
 */
#define SYSCON_AHBMATPRIO_DMA0(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_AHBMATPRIO_DMA0_SHIFT)) & SYSCON_AHBMATPRIO_DMA0_MASK)
/*! @} */

/*! @name CPU0NSTCKCAL - Non-Secure CPU0 System Tick Calibration */
/*! @{ */

#define SYSCON_CPU0NSTCKCAL_TENMS_MASK           (0xFFFFFFU)
#define SYSCON_CPU0NSTCKCAL_TENMS_SHIFT          (0U)
/*! TENMS - Reload value for 10 ms (100 Hz) timing, subject to system clock skew errors. If the
 *    value reads as zero, the calibration value is not known.
 */
#define SYSCON_CPU0NSTCKCAL_TENMS(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_CPU0NSTCKCAL_TENMS_SHIFT)) & SYSCON_CPU0NSTCKCAL_TENMS_MASK)

#define SYSCON_CPU0NSTCKCAL_SKEW_MASK            (0x1000000U)
#define SYSCON_CPU0NSTCKCAL_SKEW_SHIFT           (24U)
/*! SKEW - Indicates whether the TENMS value is exact.
 *  0b0..TENMS value is exact
 *  0b1..TENMS value is not exact or not given
 */
#define SYSCON_CPU0NSTCKCAL_SKEW(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_CPU0NSTCKCAL_SKEW_SHIFT)) & SYSCON_CPU0NSTCKCAL_SKEW_MASK)

#define SYSCON_CPU0NSTCKCAL_NOREF_MASK           (0x2000000U)
#define SYSCON_CPU0NSTCKCAL_NOREF_SHIFT          (25U)
/*! NOREF - Indicates whether the device provides a reference clock to the processor.
 *  0b0..Reference clock is provided
 *  0b1..No reference clock is provided
 */
#define SYSCON_CPU0NSTCKCAL_NOREF(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_CPU0NSTCKCAL_NOREF_SHIFT)) & SYSCON_CPU0NSTCKCAL_NOREF_MASK)
/*! @} */

/*! @name NMISRC - NMI Source Select */
/*! @{ */

#define SYSCON_NMISRC_IRQCPU0_MASK               (0xFFU)
#define SYSCON_NMISRC_IRQCPU0_SHIFT              (0U)
/*! IRQCPU0 - The IRQ number of the interrupt that acts as the Non-Maskable Interrupt (NMI) for the CPU0, if enabled by NMIENCPU0. */
#define SYSCON_NMISRC_IRQCPU0(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_NMISRC_IRQCPU0_SHIFT)) & SYSCON_NMISRC_IRQCPU0_MASK)

#define SYSCON_NMISRC_NMIENCPU0_MASK             (0x80000000U)
#define SYSCON_NMISRC_NMIENCPU0_SHIFT            (31U)
/*! NMIENCPU0 - Writing a 1 to this bit enables the Non-Maskable Interrupt (NMI) source selected by IRQCPU0. */
#define SYSCON_NMISRC_NMIENCPU0(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_NMISRC_NMIENCPU0_SHIFT)) & SYSCON_NMISRC_NMIENCPU0_MASK)
/*! @} */

/*! @name AHBAIPSCLKDIV - AHB2AIPS Bridge Clock Divider */
/*! @{ */

#define SYSCON_AHBAIPSCLKDIV_RESET_MASK          (0x20000000U)
#define SYSCON_AHBAIPSCLKDIV_RESET_SHIFT         (29U)
/*! RESET - Resets the divider counter
 *  0b1..Divider is reset
 *  0b0..Divider is not reset
 */
#define SYSCON_AHBAIPSCLKDIV_RESET(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_AHBAIPSCLKDIV_RESET_SHIFT)) & SYSCON_AHBAIPSCLKDIV_RESET_MASK)

#define SYSCON_AHBAIPSCLKDIV_HALT_MASK           (0x40000000U)
#define SYSCON_AHBAIPSCLKDIV_HALT_SHIFT          (30U)
/*! HALT - Halts the divider counter
 *  0b1..Divider clock is stopped
 *  0b0..Divider clock is running
 */
#define SYSCON_AHBAIPSCLKDIV_HALT(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_AHBAIPSCLKDIV_HALT_SHIFT)) & SYSCON_AHBAIPSCLKDIV_HALT_MASK)

#define SYSCON_AHBAIPSCLKDIV_UNSTAB_MASK         (0x80000000U)
#define SYSCON_AHBAIPSCLKDIV_UNSTAB_SHIFT        (31U)
/*! UNSTAB - Divider status flag
 *  0b1..Clock frequency is not stable
 *  0b0..Divider clock is stable
 */
#define SYSCON_AHBAIPSCLKDIV_UNSTAB(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_AHBAIPSCLKDIV_UNSTAB_SHIFT)) & SYSCON_AHBAIPSCLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name AHBCLKDIV - System Clock Divider */
/*! @{ */

#define SYSCON_AHBCLKDIV_DIV_MASK                (0xFFU)
#define SYSCON_AHBCLKDIV_DIV_SHIFT               (0U)
/*! DIV - Clock divider value */
#define SYSCON_AHBCLKDIV_DIV(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_AHBCLKDIV_DIV_SHIFT)) & SYSCON_AHBCLKDIV_DIV_MASK)

#define SYSCON_AHBCLKDIV_UNSTAB_MASK             (0x80000000U)
#define SYSCON_AHBCLKDIV_UNSTAB_SHIFT            (31U)
/*! UNSTAB - Divider status flag
 *  0b1..Clock frequency is not stable
 *  0b0..Divider clock is stable
 */
#define SYSCON_AHBCLKDIV_UNSTAB(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_AHBCLKDIV_UNSTAB_SHIFT)) & SYSCON_AHBCLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name CLKUNLOCK - Clock Configuration Unlock */
/*! @{ */

#define SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_MASK     (0x1U)
#define SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_SHIFT    (0U)
/*! CLKGEN_LOCKOUT - Controls clock configuration registers access (for example, xxxDIV, xxxSEL)
 *  0b1..Locks all clock configuration
 *  0b0..Unlocks all hardware clock control logic
 */
#define SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_SHIFT)) & SYSCON_CLKUNLOCK_CLKGEN_LOCKOUT_MASK)
/*! @} */

/*! @name NVM_CTRL - NVM Control */
/*! @{ */

#define SYSCON_NVM_CTRL_DIS_FLASH_SPEC_MASK      (0x1U)
#define SYSCON_NVM_CTRL_DIS_FLASH_SPEC_SHIFT     (0U)
/*! DIS_FLASH_SPEC - Flash speculation control
 *  0b0..Enables flash speculation
 *  0b1..Disables flash speculation
 */
#define SYSCON_NVM_CTRL_DIS_FLASH_SPEC(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_NVM_CTRL_DIS_FLASH_SPEC_SHIFT)) & SYSCON_NVM_CTRL_DIS_FLASH_SPEC_MASK)

#define SYSCON_NVM_CTRL_DIS_DATA_SPEC_MASK       (0x2U)
#define SYSCON_NVM_CTRL_DIS_DATA_SPEC_SHIFT      (1U)
/*! DIS_DATA_SPEC - Flash data speculation control
 *  0b0..Enables data speculation
 *  0b1..Disables data speculation
 */
#define SYSCON_NVM_CTRL_DIS_DATA_SPEC(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_NVM_CTRL_DIS_DATA_SPEC_SHIFT)) & SYSCON_NVM_CTRL_DIS_DATA_SPEC_MASK)

#define SYSCON_NVM_CTRL_FLASH_STALL_EN_MASK      (0x400U)
#define SYSCON_NVM_CTRL_FLASH_STALL_EN_SHIFT     (10U)
/*! FLASH_STALL_EN - FLASH stall on busy control
 *  0b0..No stall on FLASH busy
 *  0b1..Stall on FLASH busy
 */
#define SYSCON_NVM_CTRL_FLASH_STALL_EN(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_NVM_CTRL_FLASH_STALL_EN_SHIFT)) & SYSCON_NVM_CTRL_FLASH_STALL_EN_MASK)

#define SYSCON_NVM_CTRL_DIS_MBECC_ERR_INST_MASK  (0x10000U)
#define SYSCON_NVM_CTRL_DIS_MBECC_ERR_INST_SHIFT (16U)
/*! DIS_MBECC_ERR_INST - Bus error on instruction multi-bit ecc error control
 *  0b0..Enables bus error on multi-bit ecc error for instruction
 *  0b1..Disables bus error on multi-bit ecc error for instruction
 */
#define SYSCON_NVM_CTRL_DIS_MBECC_ERR_INST(x)    (((uint32_t)(((uint32_t)(x)) << SYSCON_NVM_CTRL_DIS_MBECC_ERR_INST_SHIFT)) & SYSCON_NVM_CTRL_DIS_MBECC_ERR_INST_MASK)

#define SYSCON_NVM_CTRL_DIS_MBECC_ERR_DATA_MASK  (0x20000U)
#define SYSCON_NVM_CTRL_DIS_MBECC_ERR_DATA_SHIFT (17U)
/*! DIS_MBECC_ERR_DATA - Bus error on data multi-bit ecc error control
 *  0b0..Enables bus error on multi-bit ecc error for data
 *  0b1..Disables bus error on multi-bit ecc error for data
 */
#define SYSCON_NVM_CTRL_DIS_MBECC_ERR_DATA(x)    (((uint32_t)(((uint32_t)(x)) << SYSCON_NVM_CTRL_DIS_MBECC_ERR_DATA_SHIFT)) & SYSCON_NVM_CTRL_DIS_MBECC_ERR_DATA_MASK)
/*! @} */

/*! @name ROMCR - ROM Wait State */
/*! @{ */

#define SYSCON_ROMCR_ROM_WAIT_MASK               (0x1U)
#define SYSCON_ROMCR_ROM_WAIT_SHIFT              (0U)
/*! ROM_WAIT - ROM waiting Arm core and other masters */
#define SYSCON_ROMCR_ROM_WAIT(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_ROMCR_ROM_WAIT_SHIFT)) & SYSCON_ROMCR_ROM_WAIT_MASK)
/*! @} */

/*! @name SRAM_TMTR - SRAM Timing Margin trim */
/*! @{ */

#define SYSCON_SRAM_TMTR_TMTR_MASK               (0x3FFFFU)
#define SYSCON_SRAM_TMTR_TMTR_SHIFT              (0U)
/*! TMTR - Timing Margin */
#define SYSCON_SRAM_TMTR_TMTR(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_SRAM_TMTR_TMTR_SHIFT)) & SYSCON_SRAM_TMTR_TMTR_MASK)
/*! @} */

/*! @name PLSCLKDIV - PLS SRAM Clock Divider Control */
/*! @{ */

#define SYSCON_PLSCLKDIV_DIV_MASK                (0x1U)
#define SYSCON_PLSCLKDIV_DIV_SHIFT               (0U)
/*! DIV - Clock divider value */
#define SYSCON_PLSCLKDIV_DIV(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_PLSCLKDIV_DIV_SHIFT)) & SYSCON_PLSCLKDIV_DIV_MASK)

#define SYSCON_PLSCLKDIV_RESET_MASK              (0x20000000U)
#define SYSCON_PLSCLKDIV_RESET_SHIFT             (29U)
/*! RESET - Resets the divider counter
 *  0b1..Divider is reset
 *  0b0..Divider is not reset
 */
#define SYSCON_PLSCLKDIV_RESET(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_PLSCLKDIV_RESET_SHIFT)) & SYSCON_PLSCLKDIV_RESET_MASK)

#define SYSCON_PLSCLKDIV_HALT_MASK               (0x40000000U)
#define SYSCON_PLSCLKDIV_HALT_SHIFT              (30U)
/*! HALT - Halts the divider counter
 *  0b1..Divider clock is stopped
 *  0b0..Divider clock is running
 */
#define SYSCON_PLSCLKDIV_HALT(x)                 (((uint32_t)(((uint32_t)(x)) << SYSCON_PLSCLKDIV_HALT_SHIFT)) & SYSCON_PLSCLKDIV_HALT_MASK)

#define SYSCON_PLSCLKDIV_UNSTAB_MASK             (0x80000000U)
#define SYSCON_PLSCLKDIV_UNSTAB_SHIFT            (31U)
/*! UNSTAB - Divider status flag
 *  0b1..Clock frequency is not stable
 *  0b0..Divider clock is stable
 */
#define SYSCON_PLSCLKDIV_UNSTAB(x)               (((uint32_t)(((uint32_t)(x)) << SYSCON_PLSCLKDIV_UNSTAB_SHIFT)) & SYSCON_PLSCLKDIV_UNSTAB_MASK)
/*! @} */

/*! @name PLS_SRAM_1K_TEST - PLS SRAM Triming Margin for 1k cut */
/*! @{ */

#define SYSCON_PLS_SRAM_1K_TEST_TRIM_1k_MASK     (0x1FU)
#define SYSCON_PLS_SRAM_1K_TEST_TRIM_1k_SHIFT    (0U)
/*! TRIM_1k - Triming Margin */
#define SYSCON_PLS_SRAM_1K_TEST_TRIM_1k(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_PLS_SRAM_1K_TEST_TRIM_1k_SHIFT)) & SYSCON_PLS_SRAM_1K_TEST_TRIM_1k_MASK)
/*! @} */

/*! @name PLS_SRAM_4K_TEST - PLS SRAM Triming Margin for 4k cut */
/*! @{ */

#define SYSCON_PLS_SRAM_4K_TEST_TRIM_4k_MASK     (0x1FU)
#define SYSCON_PLS_SRAM_4K_TEST_TRIM_4k_SHIFT    (0U)
/*! TRIM_4k - Triming Margin */
#define SYSCON_PLS_SRAM_4K_TEST_TRIM_4k(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_PLS_SRAM_4K_TEST_TRIM_4k_SHIFT)) & SYSCON_PLS_SRAM_4K_TEST_TRIM_4k_MASK)
/*! @} */

/*! @name IP_TRIGGER_SYNC - Control Bits for Trigger sync for IP group1 */
/*! @{ */

#define SYSCON_IP_TRIGGER_SYNC_ctimer0_0_MASK    (0x1U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer0_0_SHIFT   (0U)
/*! ctimer0_0 - Ctimer0_0 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer0_0(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer0_0_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer0_0_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer0_1_MASK    (0x2U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer0_1_SHIFT   (1U)
/*! ctimer0_1 - Ctimer0_1 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer0_1(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer0_1_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer0_1_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer0_2_MASK    (0x4U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer0_2_SHIFT   (2U)
/*! ctimer0_2 - Ctimer0_2 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer0_2(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer0_2_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer0_2_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer0_3_MASK    (0x8U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer0_3_SHIFT   (3U)
/*! ctimer0_3 - Ctimer0_3 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer0_3(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer0_3_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer0_3_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer0_4_MASK    (0x10U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer0_4_SHIFT   (4U)
/*! ctimer0_4 - Ctimer0_4 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer0_4(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer0_4_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer0_4_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer1_0_MASK    (0x20U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer1_0_SHIFT   (5U)
/*! ctimer1_0 - Ctimer1_0 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer1_0(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer1_0_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer1_0_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer1_1_MASK    (0x40U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer1_1_SHIFT   (6U)
/*! ctimer1_1 - Ctimer1_1 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer1_1(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer1_1_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer1_1_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer1_2_MASK    (0x80U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer1_2_SHIFT   (7U)
/*! ctimer1_2 - Ctimer1_2 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer1_2(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer1_2_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer1_2_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer1_3_MASK    (0x100U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer1_3_SHIFT   (8U)
/*! ctimer1_3 - Ctimer1_3 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer1_3(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer1_3_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer1_3_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer1_4_MASK    (0x200U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer1_4_SHIFT   (9U)
/*! ctimer1_4 - Ctimer1_4 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer1_4(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer1_4_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer1_4_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer2_0_MASK    (0x400U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer2_0_SHIFT   (10U)
/*! ctimer2_0 - ctimer2_0 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer2_0(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer2_0_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer2_0_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer2_1_MASK    (0x800U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer2_1_SHIFT   (11U)
/*! ctimer2_1 - ctimer2_1 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer2_1(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer2_1_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer2_1_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer2_2_MASK    (0x1000U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer2_2_SHIFT   (12U)
/*! ctimer2_2 - ctimer2_2 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer2_2(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer2_2_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer2_2_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer2_3_MASK    (0x2000U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer2_3_SHIFT   (13U)
/*! ctimer2_3 - ctimer2_3 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer2_3(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer2_3_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer2_3_MASK)

#define SYSCON_IP_TRIGGER_SYNC_ctimer2_4_MASK    (0x4000U)
#define SYSCON_IP_TRIGGER_SYNC_ctimer2_4_SHIFT   (14U)
/*! ctimer2_4 - ctimer2_4 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_ctimer2_4(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_ctimer2_4_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_ctimer2_4_MASK)

#define SYSCON_IP_TRIGGER_SYNC_freqme0_0_MASK    (0x8000U)
#define SYSCON_IP_TRIGGER_SYNC_freqme0_0_SHIFT   (15U)
/*! freqme0_0 - freqme0_0 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_freqme0_0(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_freqme0_0_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_freqme0_0_MASK)

#define SYSCON_IP_TRIGGER_SYNC_freqme0_1_MASK    (0x10000U)
#define SYSCON_IP_TRIGGER_SYNC_freqme0_1_SHIFT   (16U)
/*! freqme0_1 - freqme0_1 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_freqme0_1(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_freqme0_1_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_freqme0_1_MASK)

#define SYSCON_IP_TRIGGER_SYNC_lpcmp0_0_MASK     (0x20000U)
#define SYSCON_IP_TRIGGER_SYNC_lpcmp0_0_SHIFT    (17U)
/*! lpcmp0_0 - lpcmp0_0 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_lpcmp0_0(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_lpcmp0_0_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_lpcmp0_0_MASK)

#define SYSCON_IP_TRIGGER_SYNC_lpcmp1_0_MASK     (0x40000U)
#define SYSCON_IP_TRIGGER_SYNC_lpcmp1_0_SHIFT    (18U)
/*! lpcmp1_0 - lpcmp1_0 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_lpcmp1_0(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_lpcmp1_0_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_lpcmp1_0_MASK)

#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_0_MASK   (0x80000U)
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_0_SHIFT  (19U)
/*! flexpwm0_0 - flexpwm0_0 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_0(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_flexpwm0_0_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_flexpwm0_0_MASK)

#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_1_MASK   (0x100000U)
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_1_SHIFT  (20U)
/*! flexpwm0_1 - flexpwm0_1 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_1(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_flexpwm0_1_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_flexpwm0_1_MASK)

#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_2_MASK   (0x200000U)
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_2_SHIFT  (21U)
/*! flexpwm0_2 - flexpwm0_2 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_2(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_flexpwm0_2_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_flexpwm0_2_MASK)

#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_3_MASK   (0x400000U)
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_3_SHIFT  (22U)
/*! flexpwm0_3 - flexpwm0_3 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_3(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_flexpwm0_3_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_flexpwm0_3_MASK)

#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_4_MASK   (0x800000U)
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_4_SHIFT  (23U)
/*! flexpwm0_4 - flexpwm0_4 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_4(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_flexpwm0_4_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_flexpwm0_4_MASK)

#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_5_MASK   (0x1000000U)
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_5_SHIFT  (24U)
/*! flexpwm0_5 - flexpwm0_5 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_5(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_flexpwm0_5_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_flexpwm0_5_MASK)

#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_6_MASK   (0x2000000U)
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_6_SHIFT  (25U)
/*! flexpwm0_6 - flexpwm0_6 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_6(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_flexpwm0_6_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_flexpwm0_6_MASK)

#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_7_MASK   (0x4000000U)
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_7_SHIFT  (26U)
/*! flexpwm0_7 - flexpwm0_7 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_7(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_flexpwm0_7_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_flexpwm0_7_MASK)

#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_8_MASK   (0x8000000U)
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_8_SHIFT  (27U)
/*! flexpwm0_8 - flexpwm0_8 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_8(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_flexpwm0_8_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_flexpwm0_8_MASK)

#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_9_MASK   (0x10000000U)
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_9_SHIFT  (28U)
/*! flexpwm0_9 - flexpwm0_9 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_9(x)     (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_flexpwm0_9_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_flexpwm0_9_MASK)

#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_10_MASK  (0x20000000U)
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_10_SHIFT (29U)
/*! flexpwm0_10 - flexpwm0_10 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_10(x)    (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_flexpwm0_10_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_flexpwm0_10_MASK)

#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_11_MASK  (0x40000000U)
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_11_SHIFT (30U)
/*! flexpwm0_11 - flexpwm0_11 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_flexpwm0_11(x)    (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_flexpwm0_11_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_flexpwm0_11_MASK)
/*! @} */

/*! @name IP_TRIGGER_SYNC_2 - Control bits for IP Trigger group2 */
/*! @{ */

#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_0_MASK     (0x1U)
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_0_SHIFT    (0U)
/*! qdc0_0 - qdc0_0 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_0(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_2_qdc0_0_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_2_qdc0_0_MASK)

#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_1_MASK     (0x2U)
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_1_SHIFT    (1U)
/*! qdc0_1 - qdc0_1 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_1(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_2_qdc0_1_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_2_qdc0_1_MASK)

#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_2_MASK     (0x4U)
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_2_SHIFT    (2U)
/*! qdc0_2 - qdc0_2 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_2(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_2_qdc0_2_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_2_qdc0_2_MASK)

#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_3_MASK     (0x8U)
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_3_SHIFT    (3U)
/*! qdc0_3 - qdc0_3 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_3(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_2_qdc0_3_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_2_qdc0_3_MASK)

#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_4_MASK     (0x10U)
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_4_SHIFT    (4U)
/*! qdc0_4 - qdc0_4 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_4(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_2_qdc0_4_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_2_qdc0_4_MASK)

#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_5_MASK     (0x20U)
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_5_SHIFT    (5U)
/*! qdc0_5 - qdc0_5 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_5(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_2_qdc0_5_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_2_qdc0_5_MASK)

#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_6_MASK     (0x40U)
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_6_SHIFT    (6U)
/*! qdc0_6 - qdc0_6 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_6(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_2_qdc0_6_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_2_qdc0_6_MASK)

#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_7_MASK     (0x80U)
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_7_SHIFT    (7U)
/*! qdc0_7 - qdc0_7 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_2_qdc0_7(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_2_qdc0_7_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_2_qdc0_7_MASK)

#define SYSCON_IP_TRIGGER_SYNC_2_lpuart0_0_MASK  (0x100U)
#define SYSCON_IP_TRIGGER_SYNC_2_lpuart0_0_SHIFT (8U)
/*! lpuart0_0 - lpuart0_0 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_2_lpuart0_0(x)    (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_2_lpuart0_0_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_2_lpuart0_0_MASK)

#define SYSCON_IP_TRIGGER_SYNC_2_lpuart1_0_MASK  (0x200U)
#define SYSCON_IP_TRIGGER_SYNC_2_lpuart1_0_SHIFT (9U)
/*! lpuart1_0 - lpuart1_0 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_2_lpuart1_0(x)    (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_2_lpuart1_0_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_2_lpuart1_0_MASK)

#define SYSCON_IP_TRIGGER_SYNC_2_lpuart2_0_MASK  (0x400U)
#define SYSCON_IP_TRIGGER_SYNC_2_lpuart2_0_SHIFT (10U)
/*! lpuart2_0 - lpuart2_0 trigger control
 *  0b0..Bypass Mode is selected
 *  0b1..Trigger Sync Enable
 */
#define SYSCON_IP_TRIGGER_SYNC_2_lpuart2_0(x)    (((uint32_t)(((uint32_t)(x)) << SYSCON_IP_TRIGGER_SYNC_2_lpuart2_0_SHIFT)) & SYSCON_IP_TRIGGER_SYNC_2_lpuart2_0_MASK)
/*! @} */

/*! @name HOT_POINT - Configuration bits for PMC hot point */
/*! @{ */

#define SYSCON_HOT_POINT_Enable_Hot_point_0_MASK (0x1U)
#define SYSCON_HOT_POINT_Enable_Hot_point_0_SHIFT (0U)
/*! Enable_Hot_point_0 - Enables hot point 0
 *  0b1..Enables
 *  0b0..Disables
 */
#define SYSCON_HOT_POINT_Enable_Hot_point_0(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_HOT_POINT_Enable_Hot_point_0_SHIFT)) & SYSCON_HOT_POINT_Enable_Hot_point_0_MASK)

#define SYSCON_HOT_POINT_Enable_Hot_Point_1_MASK (0x2U)
#define SYSCON_HOT_POINT_Enable_Hot_Point_1_SHIFT (1U)
/*! Enable_Hot_Point_1 - Enables hot point 1
 *  0b1..Enables
 *  0b0..Disables
 */
#define SYSCON_HOT_POINT_Enable_Hot_Point_1(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_HOT_POINT_Enable_Hot_Point_1_SHIFT)) & SYSCON_HOT_POINT_Enable_Hot_Point_1_MASK)
/*! @} */

/*! @name PULSE_CAP_MUX_CONTROL - CMP clock select Mux */
/*! @{ */

#define SYSCON_PULSE_CAP_MUX_CONTROL_lpcmp0_pulse_cap_sync_clk_mux_sel_MASK (0x3U)
#define SYSCON_PULSE_CAP_MUX_CONTROL_lpcmp0_pulse_cap_sync_clk_mux_sel_SHIFT (0U)
/*! lpcmp0_pulse_cap_sync_clk_mux_sel - Clock source select for CMP0
 *  0b00..Clock Source 1
 *  0b01..Clock source 2
 *  0b10..Clock source 3
 *  0b11..Clock source 4
 */
#define SYSCON_PULSE_CAP_MUX_CONTROL_lpcmp0_pulse_cap_sync_clk_mux_sel(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_PULSE_CAP_MUX_CONTROL_lpcmp0_pulse_cap_sync_clk_mux_sel_SHIFT)) & SYSCON_PULSE_CAP_MUX_CONTROL_lpcmp0_pulse_cap_sync_clk_mux_sel_MASK)

#define SYSCON_PULSE_CAP_MUX_CONTROL_lpcmp1_pulse_cap_sync_clk_mux_sel_MASK (0xCU)
#define SYSCON_PULSE_CAP_MUX_CONTROL_lpcmp1_pulse_cap_sync_clk_mux_sel_SHIFT (2U)
/*! lpcmp1_pulse_cap_sync_clk_mux_sel - Clock source select for CMP1
 *  0b00..Clock source 1
 *  0b01..Clock Source 2
 *  0b10..Clock source 3
 *  0b11..Clock source 4
 */
#define SYSCON_PULSE_CAP_MUX_CONTROL_lpcmp1_pulse_cap_sync_clk_mux_sel(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_PULSE_CAP_MUX_CONTROL_lpcmp1_pulse_cap_sync_clk_mux_sel_SHIFT)) & SYSCON_PULSE_CAP_MUX_CONTROL_lpcmp1_pulse_cap_sync_clk_mux_sel_MASK)
/*! @} */

/*! @name FLASH_ADVC_PROTECT - Bits to control soc_rf_active of FMU */
/*! @{ */

#define SYSCON_FLASH_ADVC_PROTECT_flash_advc_protect_MASK (0x1U)
#define SYSCON_FLASH_ADVC_PROTECT_flash_advc_protect_SHIFT (0U)
/*! flash_advc_protect - Bits to control soc_rf_active of FMU
 *  0b1..Enables
 *  0b0..Disables
 */
#define SYSCON_FLASH_ADVC_PROTECT_flash_advc_protect(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_FLASH_ADVC_PROTECT_flash_advc_protect_SHIFT)) & SYSCON_FLASH_ADVC_PROTECT_flash_advc_protect_MASK)
/*! @} */

/*! @name LPTMR_INPUT_CONTROL_PAD - Select Input Source for LPTIMER */
/*! @{ */

#define SYSCON_LPTMR_INPUT_CONTROL_PAD_Lptimer_Input_Ctrl_0_MASK (0x1U)
#define SYSCON_LPTMR_INPUT_CONTROL_PAD_Lptimer_Input_Ctrl_0_SHIFT (0U)
/*! Lptimer_Input_Ctrl_0 - Used to select 0th input of Lptimer
 *  0b0..Choose Input from CMP0
 *  0b1..Choose Input from PAD P0_8 ALT2 Mode
 */
#define SYSCON_LPTMR_INPUT_CONTROL_PAD_Lptimer_Input_Ctrl_0(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_LPTMR_INPUT_CONTROL_PAD_Lptimer_Input_Ctrl_0_SHIFT)) & SYSCON_LPTMR_INPUT_CONTROL_PAD_Lptimer_Input_Ctrl_0_MASK)

#define SYSCON_LPTMR_INPUT_CONTROL_PAD_Lptimer_Input_Ctrl_1_MASK (0x2U)
#define SYSCON_LPTMR_INPUT_CONTROL_PAD_Lptimer_Input_Ctrl_1_SHIFT (1U)
/*! Lptimer_Input_Ctrl_1 - Used to select 1st input of Lptimer
 *  0b0..Choose Input from CMP1
 *  0b1..Choose Input from Pad P0_9 ALT2 Mode
 */
#define SYSCON_LPTMR_INPUT_CONTROL_PAD_Lptimer_Input_Ctrl_1(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_LPTMR_INPUT_CONTROL_PAD_Lptimer_Input_Ctrl_1_SHIFT)) & SYSCON_LPTMR_INPUT_CONTROL_PAD_Lptimer_Input_Ctrl_1_MASK)
/*! @} */

/*! @name CPUSTAT - CPU Status */
/*! @{ */

#define SYSCON_CPUSTAT_CPU0SLEEPING_MASK         (0x1U)
#define SYSCON_CPUSTAT_CPU0SLEEPING_SHIFT        (0U)
/*! CPU0SLEEPING - CPU0 sleeping state
 *  0b1..CPU is sleeping
 *  0b0..CPU is not sleeping
 */
#define SYSCON_CPUSTAT_CPU0SLEEPING(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_CPUSTAT_CPU0SLEEPING_SHIFT)) & SYSCON_CPUSTAT_CPU0SLEEPING_MASK)

#define SYSCON_CPUSTAT_CPU0LOCKUP_MASK           (0x4U)
#define SYSCON_CPUSTAT_CPU0LOCKUP_SHIFT          (2U)
/*! CPU0LOCKUP - CPU0 lockup state
 *  0b1..CPU is in lockup
 *  0b0..CPU is not in lockup
 */
#define SYSCON_CPUSTAT_CPU0LOCKUP(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_CPUSTAT_CPU0LOCKUP_SHIFT)) & SYSCON_CPUSTAT_CPU0LOCKUP_MASK)
/*! @} */

/*! @name LPCAC_CTRL - LPCAC Control */
/*! @{ */

#define SYSCON_LPCAC_CTRL_DIS_LPCAC_MASK         (0x1U)
#define SYSCON_LPCAC_CTRL_DIS_LPCAC_SHIFT        (0U)
/*! DIS_LPCAC - Disables/enables the cache function.
 *  0b0..Enabled
 *  0b1..Disabled
 */
#define SYSCON_LPCAC_CTRL_DIS_LPCAC(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_LPCAC_CTRL_DIS_LPCAC_SHIFT)) & SYSCON_LPCAC_CTRL_DIS_LPCAC_MASK)

#define SYSCON_LPCAC_CTRL_CLR_LPCAC_MASK         (0x2U)
#define SYSCON_LPCAC_CTRL_CLR_LPCAC_SHIFT        (1U)
/*! CLR_LPCAC - Clears the cache function.
 *  0b0..Unclears the cache.
 *  0b1..Clears the cache.
 */
#define SYSCON_LPCAC_CTRL_CLR_LPCAC(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_LPCAC_CTRL_CLR_LPCAC_SHIFT)) & SYSCON_LPCAC_CTRL_CLR_LPCAC_MASK)

#define SYSCON_LPCAC_CTRL_FRC_NO_ALLOC_MASK      (0x4U)
#define SYSCON_LPCAC_CTRL_FRC_NO_ALLOC_SHIFT     (2U)
/*! FRC_NO_ALLOC - Forces no allocation.
 *  0b0..Forces allocation.
 *  0b1..Forces no allocation.
 */
#define SYSCON_LPCAC_CTRL_FRC_NO_ALLOC(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_LPCAC_CTRL_FRC_NO_ALLOC_SHIFT)) & SYSCON_LPCAC_CTRL_FRC_NO_ALLOC_MASK)

#define SYSCON_LPCAC_CTRL_DIS_LPCAC_WTBF_MASK    (0x10U)
#define SYSCON_LPCAC_CTRL_DIS_LPCAC_WTBF_SHIFT   (4U)
/*! DIS_LPCAC_WTBF - Disables LPCAC write through buffer.
 *  0b1..Disables write through buffer.
 *  0b0..Enables write through buffer.
 */
#define SYSCON_LPCAC_CTRL_DIS_LPCAC_WTBF(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_LPCAC_CTRL_DIS_LPCAC_WTBF_SHIFT)) & SYSCON_LPCAC_CTRL_DIS_LPCAC_WTBF_MASK)

#define SYSCON_LPCAC_CTRL_LIM_LPCAC_WTBF_MASK    (0x20U)
#define SYSCON_LPCAC_CTRL_LIM_LPCAC_WTBF_SHIFT   (5U)
/*! LIM_LPCAC_WTBF - Limits LPCAC write through Buffer.
 *  0b1..Write buffer enabled when transaction is cacheable and bufferable.
 *  0b0..Write buffer enabled when transaction is bufferable.
 */
#define SYSCON_LPCAC_CTRL_LIM_LPCAC_WTBF(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_LPCAC_CTRL_LIM_LPCAC_WTBF_SHIFT)) & SYSCON_LPCAC_CTRL_LIM_LPCAC_WTBF_MASK)

#define SYSCON_LPCAC_CTRL_LPCAC_XOM_MASK         (0x80U)
#define SYSCON_LPCAC_CTRL_LPCAC_XOM_SHIFT        (7U)
/*! LPCAC_XOM - LPCAC XOM (eXecute-Only-Memory) attribute control
 *  0b1..Enabled
 *  0b0..Disabled
 */
#define SYSCON_LPCAC_CTRL_LPCAC_XOM(x)           (((uint32_t)(((uint32_t)(x)) << SYSCON_LPCAC_CTRL_LPCAC_XOM_SHIFT)) & SYSCON_LPCAC_CTRL_LPCAC_XOM_MASK)

#define SYSCON_LPCAC_CTRL_LPCAC_MEM_REQ_MASK     (0x100U)
#define SYSCON_LPCAC_CTRL_LPCAC_MEM_REQ_SHIFT    (8U)
/*! LPCAC_MEM_REQ - Request LPCAC memories.
 *  0b1..Configure shared memories RAMX1 as LPCAC memories. Write one to lock.
 *  0b0..Configure shared memories RAMX1 as general memories.
 */
#define SYSCON_LPCAC_CTRL_LPCAC_MEM_REQ(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_LPCAC_CTRL_LPCAC_MEM_REQ_SHIFT)) & SYSCON_LPCAC_CTRL_LPCAC_MEM_REQ_MASK)
/*! @} */

/*! @name PWM0SUBCTL - PWM0 Submodule Control */
/*! @{ */

#define SYSCON_PWM0SUBCTL_CLK0_EN_MASK           (0x1U)
#define SYSCON_PWM0SUBCTL_CLK0_EN_SHIFT          (0U)
/*! CLK0_EN - Enables PWM0 SUB Clock0 */
#define SYSCON_PWM0SUBCTL_CLK0_EN(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_PWM0SUBCTL_CLK0_EN_SHIFT)) & SYSCON_PWM0SUBCTL_CLK0_EN_MASK)

#define SYSCON_PWM0SUBCTL_CLK1_EN_MASK           (0x2U)
#define SYSCON_PWM0SUBCTL_CLK1_EN_SHIFT          (1U)
/*! CLK1_EN - Enables PWM0 SUB Clock1 */
#define SYSCON_PWM0SUBCTL_CLK1_EN(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_PWM0SUBCTL_CLK1_EN_SHIFT)) & SYSCON_PWM0SUBCTL_CLK1_EN_MASK)

#define SYSCON_PWM0SUBCTL_CLK2_EN_MASK           (0x4U)
#define SYSCON_PWM0SUBCTL_CLK2_EN_SHIFT          (2U)
/*! CLK2_EN - Enables PWM0 SUB Clock2 */
#define SYSCON_PWM0SUBCTL_CLK2_EN(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_PWM0SUBCTL_CLK2_EN_SHIFT)) & SYSCON_PWM0SUBCTL_CLK2_EN_MASK)

#define SYSCON_PWM0SUBCTL_CLK3_EN_MASK           (0x8U)
#define SYSCON_PWM0SUBCTL_CLK3_EN_SHIFT          (3U)
/*! CLK3_EN - Enables PWM0 SUB Clock3 */
#define SYSCON_PWM0SUBCTL_CLK3_EN(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_PWM0SUBCTL_CLK3_EN_SHIFT)) & SYSCON_PWM0SUBCTL_CLK3_EN_MASK)
/*! @} */

/*! @name CTIMERGLOBALSTARTEN - CTIMER Global Start Enable */
/*! @{ */

#define SYSCON_CTIMERGLOBALSTARTEN_CTIMER0_CLK_EN_MASK (0x1U)
#define SYSCON_CTIMERGLOBALSTARTEN_CTIMER0_CLK_EN_SHIFT (0U)
/*! CTIMER0_CLK_EN - Enables the CTIMER0 function clock */
#define SYSCON_CTIMERGLOBALSTARTEN_CTIMER0_CLK_EN(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_CTIMERGLOBALSTARTEN_CTIMER0_CLK_EN_SHIFT)) & SYSCON_CTIMERGLOBALSTARTEN_CTIMER0_CLK_EN_MASK)

#define SYSCON_CTIMERGLOBALSTARTEN_CTIMER1_CLK_EN_MASK (0x2U)
#define SYSCON_CTIMERGLOBALSTARTEN_CTIMER1_CLK_EN_SHIFT (1U)
/*! CTIMER1_CLK_EN - Enables the CTIMER1 function clock */
#define SYSCON_CTIMERGLOBALSTARTEN_CTIMER1_CLK_EN(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_CTIMERGLOBALSTARTEN_CTIMER1_CLK_EN_SHIFT)) & SYSCON_CTIMERGLOBALSTARTEN_CTIMER1_CLK_EN_MASK)

#define SYSCON_CTIMERGLOBALSTARTEN_CTIMER2_CLK_EN_MASK (0x4U)
#define SYSCON_CTIMERGLOBALSTARTEN_CTIMER2_CLK_EN_SHIFT (2U)
/*! CTIMER2_CLK_EN - Enables the CTIMER2 function clock */
#define SYSCON_CTIMERGLOBALSTARTEN_CTIMER2_CLK_EN(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_CTIMERGLOBALSTARTEN_CTIMER2_CLK_EN_SHIFT)) & SYSCON_CTIMERGLOBALSTARTEN_CTIMER2_CLK_EN_MASK)
/*! @} */

/*! @name RAM_CTRL - RAM Control */
/*! @{ */

#define SYSCON_RAM_CTRL_RAMA_CG_OVERRIDE_MASK    (0x10000U)
#define SYSCON_RAM_CTRL_RAMA_CG_OVERRIDE_SHIFT   (16U)
/*! RAMA_CG_OVERRIDE - RAMA bank clock gating control
 *  0b1..Auto clock gating feature is disabled
 *  0b0..Memory bank clock is gated automatically if no access more than 16 clock cycles
 */
#define SYSCON_RAM_CTRL_RAMA_CG_OVERRIDE(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_RAM_CTRL_RAMA_CG_OVERRIDE_SHIFT)) & SYSCON_RAM_CTRL_RAMA_CG_OVERRIDE_MASK)

#define SYSCON_RAM_CTRL_RAMX_CG_OVERRIDE_MASK    (0x20000U)
#define SYSCON_RAM_CTRL_RAMX_CG_OVERRIDE_SHIFT   (17U)
/*! RAMX_CG_OVERRIDE - RAMX bank clock gating control
 *  0b1..Auto clock gating feature is disabled
 *  0b0..Memory bank clock is gated automatically if no access more than 16 clock cycles
 */
#define SYSCON_RAM_CTRL_RAMX_CG_OVERRIDE(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_RAM_CTRL_RAMX_CG_OVERRIDE_SHIFT)) & SYSCON_RAM_CTRL_RAMX_CG_OVERRIDE_MASK)

#define SYSCON_RAM_CTRL_RAMB_CG_OVERRIDE_MASK    (0x40000U)
#define SYSCON_RAM_CTRL_RAMB_CG_OVERRIDE_SHIFT   (18U)
/*! RAMB_CG_OVERRIDE - RAMB bank clock gating control
 *  0b1..Auto clock gating feature is disabled
 *  0b0..Memory bank clock is gated automatically if no access more than 16 clock cycles
 */
#define SYSCON_RAM_CTRL_RAMB_CG_OVERRIDE(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_RAM_CTRL_RAMB_CG_OVERRIDE_SHIFT)) & SYSCON_RAM_CTRL_RAMB_CG_OVERRIDE_MASK)
/*! @} */

/*! @name GRAY_CODE_LSB - Gray to Binary Converter Gray Code [31:0] */
/*! @{ */

#define SYSCON_GRAY_CODE_LSB_CODE_GRAY_31_0_MASK (0xFFFFFFFFU)
#define SYSCON_GRAY_CODE_LSB_CODE_GRAY_31_0_SHIFT (0U)
/*! CODE_GRAY_31_0 - Gray code [31:0] */
#define SYSCON_GRAY_CODE_LSB_CODE_GRAY_31_0(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_GRAY_CODE_LSB_CODE_GRAY_31_0_SHIFT)) & SYSCON_GRAY_CODE_LSB_CODE_GRAY_31_0_MASK)
/*! @} */

/*! @name GRAY_CODE_MSB - Gray to Binary Converter Gray Code [41:32] */
/*! @{ */

#define SYSCON_GRAY_CODE_MSB_CODE_GRAY_41_32_MASK (0x3FFU)
#define SYSCON_GRAY_CODE_MSB_CODE_GRAY_41_32_SHIFT (0U)
/*! CODE_GRAY_41_32 - Gray code [41:32] */
#define SYSCON_GRAY_CODE_MSB_CODE_GRAY_41_32(x)  (((uint32_t)(((uint32_t)(x)) << SYSCON_GRAY_CODE_MSB_CODE_GRAY_41_32_SHIFT)) & SYSCON_GRAY_CODE_MSB_CODE_GRAY_41_32_MASK)
/*! @} */

/*! @name BINARY_CODE_LSB - Gray to Binary Converter Binary Code [31:0] */
/*! @{ */

#define SYSCON_BINARY_CODE_LSB_CODE_BIN_31_0_MASK (0xFFFFFFFFU)
#define SYSCON_BINARY_CODE_LSB_CODE_BIN_31_0_SHIFT (0U)
/*! CODE_BIN_31_0 - Binary code [31:0] */
#define SYSCON_BINARY_CODE_LSB_CODE_BIN_31_0(x)  (((uint32_t)(((uint32_t)(x)) << SYSCON_BINARY_CODE_LSB_CODE_BIN_31_0_SHIFT)) & SYSCON_BINARY_CODE_LSB_CODE_BIN_31_0_MASK)
/*! @} */

/*! @name BINARY_CODE_MSB - Gray to Binary Converter Binary Code [41:32] */
/*! @{ */

#define SYSCON_BINARY_CODE_MSB_CODE_BIN_41_32_MASK (0x3FFU)
#define SYSCON_BINARY_CODE_MSB_CODE_BIN_41_32_SHIFT (0U)
/*! CODE_BIN_41_32 - Binary code [41:32] */
#define SYSCON_BINARY_CODE_MSB_CODE_BIN_41_32(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_BINARY_CODE_MSB_CODE_BIN_41_32_SHIFT)) & SYSCON_BINARY_CODE_MSB_CODE_BIN_41_32_MASK)
/*! @} */

/*! @name FLASH_CFG - Flash Configuration */
/*! @{ */

#define SYSCON_FLASH_CFG_IFR_ERASE_DIS_MASK      (0xFU)
#define SYSCON_FLASH_CFG_IFR_ERASE_DIS_SHIFT     (0U)
/*! IFR_ERASE_DIS - user IFR erase control
 *  0b0000..bit N enable IFR sector N erase(N=0-3).
 *  0b1111..bit N disable IFR sector N erase(N=0-3), write one lock.
 */
#define SYSCON_FLASH_CFG_IFR_ERASE_DIS(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_FLASH_CFG_IFR_ERASE_DIS_SHIFT)) & SYSCON_FLASH_CFG_IFR_ERASE_DIS_MASK)

#define SYSCON_FLASH_CFG_MASS_ERASE_DIS_MASK     (0x100U)
#define SYSCON_FLASH_CFG_MASS_ERASE_DIS_SHIFT    (8U)
/*! MASS_ERASE_DIS - Mass erase control
 *  0b1..Disables mass erase, write one lock
 *  0b0..Enables mass erase
 */
#define SYSCON_FLASH_CFG_MASS_ERASE_DIS(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_FLASH_CFG_MASS_ERASE_DIS_SHIFT)) & SYSCON_FLASH_CFG_MASS_ERASE_DIS_MASK)

#define SYSCON_FLASH_CFG_APB_TEST_DIS_MASK       (0x200U)
#define SYSCON_FLASH_CFG_APB_TEST_DIS_SHIFT      (9U)
/*! APB_TEST_DIS - APB TEST port control
 *  0b1..Disables APB test port, write one lock
 *  0b0..Enables APB test port
 */
#define SYSCON_FLASH_CFG_APB_TEST_DIS(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_FLASH_CFG_APB_TEST_DIS_SHIFT)) & SYSCON_FLASH_CFG_APB_TEST_DIS_MASK)
/*! @} */

/*! @name ROP_STATE - ROP State Register */
/*! @{ */

#define SYSCON_ROP_STATE_ROP_STATE_MASK          (0xFFFFFFFFU)
#define SYSCON_ROP_STATE_ROP_STATE_SHIFT         (0U)
/*! ROP_STATE - ROP state */
#define SYSCON_ROP_STATE_ROP_STATE(x)            (((uint32_t)(((uint32_t)(x)) << SYSCON_ROP_STATE_ROP_STATE_SHIFT)) & SYSCON_ROP_STATE_ROP_STATE_MASK)
/*! @} */

/*! @name OVP_PAD_STATE - OVP_PAD_STATE */
/*! @{ */

#define SYSCON_OVP_PAD_STATE_OVP_PAD_STATE_MASK  (0xFFFFFFFFU)
#define SYSCON_OVP_PAD_STATE_OVP_PAD_STATE_SHIFT (0U)
/*! OVP_PAD_STATE - OVP_PAD_STATE */
#define SYSCON_OVP_PAD_STATE_OVP_PAD_STATE(x)    (((uint32_t)(((uint32_t)(x)) << SYSCON_OVP_PAD_STATE_OVP_PAD_STATE_SHIFT)) & SYSCON_OVP_PAD_STATE_OVP_PAD_STATE_MASK)
/*! @} */

/*! @name PROBE_STATE - PROBE_STATE */
/*! @{ */

#define SYSCON_PROBE_STATE_PROBE_STATE_MASK      (0xFFFFFFFFU)
#define SYSCON_PROBE_STATE_PROBE_STATE_SHIFT     (0U)
/*! PROBE_STATE - PROBE_STATE */
#define SYSCON_PROBE_STATE_PROBE_STATE(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_PROBE_STATE_PROBE_STATE_SHIFT)) & SYSCON_PROBE_STATE_PROBE_STATE_MASK)
/*! @} */

/*! @name FT_STATE_A - FT_STATE_A */
/*! @{ */

#define SYSCON_FT_STATE_A_FT_STATE_A_MASK        (0xFFFFFFFFU)
#define SYSCON_FT_STATE_A_FT_STATE_A_SHIFT       (0U)
/*! FT_STATE_A - FT_STATE_A */
#define SYSCON_FT_STATE_A_FT_STATE_A(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_FT_STATE_A_FT_STATE_A_SHIFT)) & SYSCON_FT_STATE_A_FT_STATE_A_MASK)
/*! @} */

/*! @name FT_STATE_B - FT_STATE_B */
/*! @{ */

#define SYSCON_FT_STATE_B_FT_STATE_B_MASK        (0xFFFFFFFFU)
#define SYSCON_FT_STATE_B_FT_STATE_B_SHIFT       (0U)
/*! FT_STATE_B - FT_STATE_B */
#define SYSCON_FT_STATE_B_FT_STATE_B(x)          (((uint32_t)(((uint32_t)(x)) << SYSCON_FT_STATE_B_FT_STATE_B_SHIFT)) & SYSCON_FT_STATE_B_FT_STATE_B_MASK)
/*! @} */

/*! @name SRAM_XEN - RAM XEN Control */
/*! @{ */

#define SYSCON_SRAM_XEN_RAMX0_XEN_MASK           (0x1U)
#define SYSCON_SRAM_XEN_RAMX0_XEN_SHIFT          (0U)
/*! RAMX0_XEN - RAMX0 Execute permission control.
 *  0b1..Execute permission is enabled, R/W/X are enabled.
 *  0b0..Execute permission is disabled, R/W are enabled.
 */
#define SYSCON_SRAM_XEN_RAMX0_XEN(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SRAM_XEN_RAMX0_XEN_SHIFT)) & SYSCON_SRAM_XEN_RAMX0_XEN_MASK)

#define SYSCON_SRAM_XEN_RAMX1_XEN_MASK           (0x2U)
#define SYSCON_SRAM_XEN_RAMX1_XEN_SHIFT          (1U)
/*! RAMX1_XEN - RAMX1 Execute permission control.
 *  0b1..Execute permission is enabled, R/W/X are enabled.
 *  0b0..Execute permission is disabled, R/W are enabled.
 */
#define SYSCON_SRAM_XEN_RAMX1_XEN(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SRAM_XEN_RAMX1_XEN_SHIFT)) & SYSCON_SRAM_XEN_RAMX1_XEN_MASK)

#define SYSCON_SRAM_XEN_RAMA0_XEN_MASK           (0x4U)
#define SYSCON_SRAM_XEN_RAMA0_XEN_SHIFT          (2U)
/*! RAMA0_XEN - RAMA0 Execute permission control.
 *  0b1..Execute permission is enabled, R/W/X are enabled.
 *  0b0..Execute permission is disabled, R/W are enabled.
 */
#define SYSCON_SRAM_XEN_RAMA0_XEN(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SRAM_XEN_RAMA0_XEN_SHIFT)) & SYSCON_SRAM_XEN_RAMA0_XEN_MASK)

#define SYSCON_SRAM_XEN_RAMA1_XEN_MASK           (0x8U)
#define SYSCON_SRAM_XEN_RAMA1_XEN_SHIFT          (3U)
/*! RAMA1_XEN - RAMA1 Execute permission control.
 *  0b1..Execute permission is enabled, R/W/X are enabled.
 *  0b0..Execute permission is disabled, R/W are enabled.
 */
#define SYSCON_SRAM_XEN_RAMA1_XEN(x)             (((uint32_t)(((uint32_t)(x)) << SYSCON_SRAM_XEN_RAMA1_XEN_SHIFT)) & SYSCON_SRAM_XEN_RAMA1_XEN_MASK)

#define SYSCON_SRAM_XEN_RAMB_XEN_MASK            (0x10U)
#define SYSCON_SRAM_XEN_RAMB_XEN_SHIFT           (4U)
/*! RAMB_XEN - RAMB Executable Permission Control
 *  0b1..Execute permission is enabled, R/W/X are enabled
 *  0b0..Execute permission is disabled, R/W are enabled
 */
#define SYSCON_SRAM_XEN_RAMB_XEN(x)              (((uint32_t)(((uint32_t)(x)) << SYSCON_SRAM_XEN_RAMB_XEN_SHIFT)) & SYSCON_SRAM_XEN_RAMB_XEN_MASK)

#define SYSCON_SRAM_XEN_LOCK_MASK                (0x80000000U)
#define SYSCON_SRAM_XEN_LOCK_SHIFT               (31U)
/*! LOCK - This 1-bit field provides a mechanism to limit writes to the this register (and
 *    SRAM_XEN_DP) to protect its contents. Once set, this bit remains asserted until the next reset.
 *  0b0..This register is not locked and can be altered.
 *  0b1..This register is locked and cannot be altered.
 */
#define SYSCON_SRAM_XEN_LOCK(x)                  (((uint32_t)(((uint32_t)(x)) << SYSCON_SRAM_XEN_LOCK_SHIFT)) & SYSCON_SRAM_XEN_LOCK_MASK)
/*! @} */

/*! @name SRAM_XEN_DP - RAM XEN Control (Duplicate) */
/*! @{ */

#define SYSCON_SRAM_XEN_DP_RAMX0_XEN_DP_MASK     (0x1U)
#define SYSCON_SRAM_XEN_DP_RAMX0_XEN_DP_SHIFT    (0U)
/*! RAMX0_XEN_DP - Refer to RAMX0_XEN for more details. */
#define SYSCON_SRAM_XEN_DP_RAMX0_XEN_DP(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_SRAM_XEN_DP_RAMX0_XEN_DP_SHIFT)) & SYSCON_SRAM_XEN_DP_RAMX0_XEN_DP_MASK)

#define SYSCON_SRAM_XEN_DP_RAMX1_XEN_DP_MASK     (0x2U)
#define SYSCON_SRAM_XEN_DP_RAMX1_XEN_DP_SHIFT    (1U)
/*! RAMX1_XEN_DP - Refer to RAMX1_XEN for more details. */
#define SYSCON_SRAM_XEN_DP_RAMX1_XEN_DP(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_SRAM_XEN_DP_RAMX1_XEN_DP_SHIFT)) & SYSCON_SRAM_XEN_DP_RAMX1_XEN_DP_MASK)

#define SYSCON_SRAM_XEN_DP_RAMA0_XEN_DP_MASK     (0x4U)
#define SYSCON_SRAM_XEN_DP_RAMA0_XEN_DP_SHIFT    (2U)
/*! RAMA0_XEN_DP - Refer to RAMA0_XEN for more details. */
#define SYSCON_SRAM_XEN_DP_RAMA0_XEN_DP(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_SRAM_XEN_DP_RAMA0_XEN_DP_SHIFT)) & SYSCON_SRAM_XEN_DP_RAMA0_XEN_DP_MASK)

#define SYSCON_SRAM_XEN_DP_RAMA1_XEN_DP_MASK     (0x8U)
#define SYSCON_SRAM_XEN_DP_RAMA1_XEN_DP_SHIFT    (3U)
/*! RAMA1_XEN_DP - Refer to RAMA1_XEN for more details. */
#define SYSCON_SRAM_XEN_DP_RAMA1_XEN_DP(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_SRAM_XEN_DP_RAMA1_XEN_DP_SHIFT)) & SYSCON_SRAM_XEN_DP_RAMA1_XEN_DP_MASK)

#define SYSCON_SRAM_XEN_DP_RAMB_XEN_DP_MASK      (0x10U)
#define SYSCON_SRAM_XEN_DP_RAMB_XEN_DP_SHIFT     (4U)
/*! RAMB_XEN_DP - Refer to RAMB_XEN for more details. */
#define SYSCON_SRAM_XEN_DP_RAMB_XEN_DP(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_SRAM_XEN_DP_RAMB_XEN_DP_SHIFT)) & SYSCON_SRAM_XEN_DP_RAMB_XEN_DP_MASK)
/*! @} */

/*! @name CSS_BOOT_STATE_LOCK - CSS Boot State Lock Down */
/*! @{ */

#define SYSCON_CSS_BOOT_STATE_LOCK_BOOT_STATE_LOCK_MASK (0xFU)
#define SYSCON_CSS_BOOT_STATE_LOCK_BOOT_STATE_LOCK_SHIFT (0U)
/*! BOOT_STATE_LOCK - Boot state lock down bit */
#define SYSCON_CSS_BOOT_STATE_LOCK_BOOT_STATE_LOCK(x) (((uint32_t)(((uint32_t)(x)) << SYSCON_CSS_BOOT_STATE_LOCK_BOOT_STATE_LOCK_SHIFT)) & SYSCON_CSS_BOOT_STATE_LOCK_BOOT_STATE_LOCK_MASK)
/*! @} */

/*! @name DEBUG_LOCK_EN - Control Write Access to Security */
/*! @{ */

#define SYSCON_DEBUG_LOCK_EN_LOCK_ALL_MASK       (0xFU)
#define SYSCON_DEBUG_LOCK_EN_LOCK_ALL_SHIFT      (0U)
/*! LOCK_ALL - Controls write access to the security registers
 *  0b1010..1010: Enables write access to all registers
 *  0b0000..Any other value than b1010: disables write access to all registers
 */
#define SYSCON_DEBUG_LOCK_EN_LOCK_ALL(x)         (((uint32_t)(((uint32_t)(x)) << SYSCON_DEBUG_LOCK_EN_LOCK_ALL_SHIFT)) & SYSCON_DEBUG_LOCK_EN_LOCK_ALL_MASK)
/*! @} */

/*! @name DEBUG_FEATURES - Cortex Debug Features Control */
/*! @{ */

#define SYSCON_DEBUG_FEATURES_CPU0_DBGEN_MASK    (0x3U)
#define SYSCON_DEBUG_FEATURES_CPU0_DBGEN_SHIFT   (0U)
/*! CPU0_DBGEN - CPU0 invasive debug control
 *  0b01..Disables debug
 *  0b10..Enables debug
 */
#define SYSCON_DEBUG_FEATURES_CPU0_DBGEN(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_DEBUG_FEATURES_CPU0_DBGEN_SHIFT)) & SYSCON_DEBUG_FEATURES_CPU0_DBGEN_MASK)

#define SYSCON_DEBUG_FEATURES_CPU0_NIDEN_MASK    (0xCU)
#define SYSCON_DEBUG_FEATURES_CPU0_NIDEN_SHIFT   (2U)
/*! CPU0_NIDEN - CPU0 non-invasive debug control
 *  0b01..Disables debug
 *  0b10..Enables debug
 */
#define SYSCON_DEBUG_FEATURES_CPU0_NIDEN(x)      (((uint32_t)(((uint32_t)(x)) << SYSCON_DEBUG_FEATURES_CPU0_NIDEN_SHIFT)) & SYSCON_DEBUG_FEATURES_CPU0_NIDEN_MASK)
/*! @} */

/*! @name DEBUG_FEATURES_DP - Cortex Debug Features Control (Duplicate) */
/*! @{ */

#define SYSCON_DEBUG_FEATURES_DP_CPU0_DBGEN_MASK (0x3U)
#define SYSCON_DEBUG_FEATURES_DP_CPU0_DBGEN_SHIFT (0U)
/*! CPU0_DBGEN - CPU0 invasive debug control
 *  0b01..Disables debug
 *  0b10..Enables debug
 */
#define SYSCON_DEBUG_FEATURES_DP_CPU0_DBGEN(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_DEBUG_FEATURES_DP_CPU0_DBGEN_SHIFT)) & SYSCON_DEBUG_FEATURES_DP_CPU0_DBGEN_MASK)

#define SYSCON_DEBUG_FEATURES_DP_CPU0_NIDEN_MASK (0xCU)
#define SYSCON_DEBUG_FEATURES_DP_CPU0_NIDEN_SHIFT (2U)
/*! CPU0_NIDEN - CPU0 non-invasive debug control
 *  0b01..Disables debug
 *  0b10..Enables debug
 */
#define SYSCON_DEBUG_FEATURES_DP_CPU0_NIDEN(x)   (((uint32_t)(((uint32_t)(x)) << SYSCON_DEBUG_FEATURES_DP_CPU0_NIDEN_SHIFT)) & SYSCON_DEBUG_FEATURES_DP_CPU0_NIDEN_MASK)
/*! @} */

/*! @name SWD_ACCESS_CPU0 - CPU0 Software Debug Access */
/*! @{ */

#define SYSCON_SWD_ACCESS_CPU0_SEC_CODE_MASK     (0xFFFFFFFFU)
#define SYSCON_SWD_ACCESS_CPU0_SEC_CODE_SHIFT    (0U)
/*! SEC_CODE - CPU0 SWD-AP: 0x12345678
 *  0b00010010001101000101011001111000..Value to write to enable CPU0 SWD access. Reading back register is read as 0xA.
 *  0b00000000000000000000000000000000..CPU0 DAP is not allowed. Reading back register is read as 0x5.
 */
#define SYSCON_SWD_ACCESS_CPU0_SEC_CODE(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_SWD_ACCESS_CPU0_SEC_CODE_SHIFT)) & SYSCON_SWD_ACCESS_CPU0_SEC_CODE_MASK)
/*! @} */

/*! @name DEBUG_AUTH_BEACON - Debug Authentication BEACON */
/*! @{ */

#define SYSCON_DEBUG_AUTH_BEACON_BEACON_MASK     (0xFFFFFFFFU)
#define SYSCON_DEBUG_AUTH_BEACON_BEACON_SHIFT    (0U)
/*! BEACON - Sets by the debug authentication code in ROM to pass the debug beacons (Credential
 *    Beacon and Authentication Beacon) to the application code.
 */
#define SYSCON_DEBUG_AUTH_BEACON_BEACON(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_DEBUG_AUTH_BEACON_BEACON_SHIFT)) & SYSCON_DEBUG_AUTH_BEACON_BEACON_MASK)
/*! @} */

/*! @name JTAG_ID - JTAG Chip ID */
/*! @{ */

#define SYSCON_JTAG_ID_JTAG_ID_MASK              (0xFFFFFFFFU)
#define SYSCON_JTAG_ID_JTAG_ID_SHIFT             (0U)
/*! JTAG_ID - Indicates the JTAG Chip ID */
#define SYSCON_JTAG_ID_JTAG_ID(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_JTAG_ID_JTAG_ID_SHIFT)) & SYSCON_JTAG_ID_JTAG_ID_MASK)
/*! @} */

/*! @name DEVICE_TYPE - Device Type */
/*! @{ */

#define SYSCON_DEVICE_TYPE_DEVICE_TYPE_MASK      (0xFFFFFFFFU)
#define SYSCON_DEVICE_TYPE_DEVICE_TYPE_SHIFT     (0U)
/*! DEVICE_TYPE - Indicates the device type */
#define SYSCON_DEVICE_TYPE_DEVICE_TYPE(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_DEVICE_TYPE_DEVICE_TYPE_SHIFT)) & SYSCON_DEVICE_TYPE_DEVICE_TYPE_MASK)
/*! @} */

/*! @name DEVICE_ID0 - Device ID */
/*! @{ */

#define SYSCON_DEVICE_ID0_ROM_REV_MINOR_MASK     (0xF00000U)
#define SYSCON_DEVICE_ID0_ROM_REV_MINOR_SHIFT    (20U)
/*! ROM_REV_MINOR - ROM revision. */
#define SYSCON_DEVICE_ID0_ROM_REV_MINOR(x)       (((uint32_t)(((uint32_t)(x)) << SYSCON_DEVICE_ID0_ROM_REV_MINOR_SHIFT)) & SYSCON_DEVICE_ID0_ROM_REV_MINOR_MASK)
/*! @} */

/*! @name DIEID - Chip Revision ID and Number */
/*! @{ */

#define SYSCON_DIEID_Minor_Rev_MASK              (0xFU)
#define SYSCON_DIEID_Minor_Rev_SHIFT             (0U)
/*! Minor_Rev - Chip metal revision ID */
#define SYSCON_DIEID_Minor_Rev(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_DIEID_Minor_Rev_SHIFT)) & SYSCON_DIEID_Minor_Rev_MASK)

#define SYSCON_DIEID_Major_Rev_MASK              (0xF0U)
#define SYSCON_DIEID_Major_Rev_SHIFT             (4U)
/*! Major_Rev - Chip metal Layer */
#define SYSCON_DIEID_Major_Rev(x)                (((uint32_t)(((uint32_t)(x)) << SYSCON_DIEID_Major_Rev_SHIFT)) & SYSCON_DIEID_Major_Rev_MASK)

#define SYSCON_DIEID_MCO_NUM_IN_DIE_ID_MASK      (0xFFFFF00U)
#define SYSCON_DIEID_MCO_NUM_IN_DIE_ID_SHIFT     (8U)
/*! MCO_NUM_IN_DIE_ID - Chip number */
#define SYSCON_DIEID_MCO_NUM_IN_DIE_ID(x)        (((uint32_t)(((uint32_t)(x)) << SYSCON_DIEID_MCO_NUM_IN_DIE_ID_SHIFT)) & SYSCON_DIEID_MCO_NUM_IN_DIE_ID_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group SYSCON_Register_Masks */


/*!
 * @}
 */ /* end of group SYSCON_Peripheral_Access_Layer */


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


#endif  /* SYSCON_H_ */

