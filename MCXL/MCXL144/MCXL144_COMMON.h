/*
** ###################################################################
**     Processors:          MCXL144VLH
**                          MCXL144VPJ
**
**     Compilers:           GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**                          MCUXpresso Compiler
**
**     Reference manual:    MCXL14xRM Rev1 DraftI
**     Version:             rev. 1.0, 2023-01-09
**     Build:               b240705
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MCXL144
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
 * @file MCXL144_COMMON.h
 * @version 1.0
 * @date 2023-01-09
 * @brief CMSIS Peripheral Access Layer for MCXL144
 *
 * CMSIS Peripheral Access Layer for MCXL144
 */

#if !defined(MCXL144_COMMON_H_)
#define MCXL144_COMMON_H_                        /**< Symbol preventing repeated inclusion */

/** Memory map major version (memory maps with equal major version number are
 * compatible) */
#define MCU_MEM_MAP_VERSION 0x0100U
/** Memory map minor version */
#define MCU_MEM_MAP_VERSION_MINOR 0x0000U


/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_vector_numbers Interrupt vector numbers
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 99                 /**< Number of interrupts in the Vector table */

typedef enum IRQn {
  /* Auxiliary constants */
  NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

  /* Core interrupts */
  NonMaskableInt_IRQn          = -14,              /**< Non Maskable Interrupt */
  HardFault_IRQn               = -13,              /**< Cortex-M33 SV Hard Fault Interrupt */
  MemoryManagement_IRQn        = -12,              /**< Cortex-M33 Memory Management Interrupt */
  BusFault_IRQn                = -11,              /**< Cortex-M33 Bus Fault Interrupt */
  UsageFault_IRQn              = -10,              /**< Cortex-M33 Usage Fault Interrupt */
  SecureFault_IRQn             = -9,               /**< Cortex-M33 Secure Fault Interrupt */
  SVCall_IRQn                  = -5,               /**< Cortex-M33 SV Call Interrupt */
  DebugMonitor_IRQn            = -4,               /**< Cortex-M33 Debug Monitor Interrupt */
  PendSV_IRQn                  = -2,               /**< Cortex-M33 Pend SV Interrupt */
  SysTick_IRQn                 = -1,               /**< Cortex-M33 System Tick Interrupt */

  /* Device specific interrupts */
  Reserved16_IRQn              = 0,                /**< Reserved interrupt 16 */
  CMC_IRQn                     = 1,                /**< Core Mode Controller interrupt */
  DMA_CH0_IRQn                 = 2,                /**< DMA3_0_CH0 error or transfer complete */
  DMA_CH1_IRQn                 = 3,                /**< DMA3_0_CH1 error or transfer complete */
  DMA_CH2_IRQn                 = 4,                /**< DMA3_0_CH2 error or transfer complete */
  DMA_CH3_IRQn                 = 5,                /**< DMA3_0_CH3 error or transfer complete */
  Reserved22_IRQn              = 6,                /**< Reserved interrupt 22 */
  Reserved23_IRQn              = 7,                /**< Reserved interrupt 23 */
  Reserved24_IRQn              = 8,                /**< Reserved interrupt 24 */
  Reserved25_IRQn              = 9,                /**< Reserved interrupt 25 */
  Reserved26_IRQn              = 10,               /**< Reserved interrupt 26 */
  Reserved27_IRQn              = 11,               /**< Reserved interrupt 27 */
  FMU0_IRQn                    = 12,               /**< Flash Management Unit interrupt */
  GLIKEY0_IRQn                 = 13,               /**< GLIKEY Interrupt */
  MBC0_IRQn                    = 14,               /**< MBC secure violation interrupt */
  SCG0_IRQn                    = 15,               /**< System Clock Generator interrupt */
  Reserved32_IRQn              = 16,               /**< Reserved interrupt 32 */
  Reserved33_IRQn              = 17,               /**< Reserved interrupt 33 */
  WUU0_IRQn                    = 18,               /**< Wake Up Unit interrupt */
  Reserved35_IRQn              = 19,               /**< Reserved interrupt 35 */
  Reserved36_IRQn              = 20,               /**< Reserved interrupt 36 */
  Reserved37_IRQn              = 21,               /**< Reserved interrupt 37 */
  Reserved38_IRQn              = 22,               /**< Reserved interrupt 38 */
  Reserved39_IRQn              = 23,               /**< Reserved interrupt 39 */
  Reserved40_IRQn              = 24,               /**< Reserved interrupt 40 */
  Reserved41_IRQn              = 25,               /**< Reserved interrupt 41 */
  LPI2C0_IRQn                  = 26,               /**< Low-Power Inter Integrated Circuit interrupt */
  Reserved43_IRQn              = 27,               /**< Reserved interrupt 43 */
  LPSPI0_IRQn                  = 28,               /**< Low-Power Serial Peripheral Interface interrupt */
  LPSPI1_IRQn                  = 29,               /**< Low-Power Serial Peripheral Interface interrupt */
  Reserved46_IRQn              = 30,               /**< Reserved interrupt 46 */
  LPUART0_IRQn                 = 31,               /**< Low-Power Universal Asynchronous Receive/Transmit interrupt */
  LPUART1_IRQn                 = 32,               /**< Low-Power Universal Asynchronous Receive/Transmit interrupt */
  LPUART2_IRQn                 = 33,               /**< Low-Power Universal Asynchronous Receive/Transmit interrupt */
  Reserved50_IRQn              = 34,               /**< Reserved interrupt 50 */
  Reserved51_IRQn              = 35,               /**< Reserved interrupt 51 */
  Reserved52_IRQn              = 36,               /**< Reserved interrupt 52 */
  Reserved53_IRQn              = 37,               /**< Reserved interrupt 53 */
  CDOG0_IRQn                   = 38,               /**< Code Watchdog Timer 0 interrupt */
  CTIMER0_IRQn                 = 39,               /**< Standard counter/timer 0 interrupt */
  CTIMER1_IRQn                 = 40,               /**< Standard counter/timer 1 interrupt */
  CTIMER2_IRQn                 = 41,               /**< Standard counter/timer 2 interrupt */
  Reserved58_IRQn              = 42,               /**< Reserved interrupt 58 */
  Reserved59_IRQn              = 43,               /**< Reserved interrupt 59 */
  FLEXPWM0_RELOAD_ERROR_IRQn   = 44,               /**< eFlexPWM0_reload_error interrupt */
  FLEXPWM0_FAULT_IRQn          = 45,               /**< eFlexPWM0_fault interrupt */
  FLEXPWM0_SUBMODULE0_IRQn     = 46,               /**< eFlexPWM0 Submodule 0 capture/compare/reload interrupt */
  FLEXPWM0_SUBMODULE1_IRQn     = 47,               /**< eFlexPWM0 Submodule 1 capture/compare/reload interrupt */
  FLEXPWM0_SUBMODULE2_IRQn     = 48,               /**< eFlexPWM0 Submodule 2 capture/compare/reload interrupt */
  Reserved65_IRQn              = 49,               /**< Reserved interrupt 65 */
  QDC0_COMPARE_IRQn            = 50,               /**< Compare */
  QDC0_HOME_IRQn               = 51,               /**< Home */
  QDC0_WATCHDOG_IRQn           = 52,               /**< Watchdog / Simultaneous A and B Change */
  QDC0_INDEX_IRQn              = 53,               /**< Index / Roll Over / Roll Under */
  FREQME0_IRQn                 = 54,               /**< Frequency Measurement interrupt */
  LPTMR0_IRQn                  = 55,               /**< Low Power Timer 0 interrupt */
  Reserved72_IRQn              = 56,               /**< Reserved interrupt 72 */
  OS_EVENT_IRQn                = 57,               /**< OS event timer interrupt */
  Reserved74_IRQn              = 58,               /**< Reserved interrupt 74 */
  UTICK0_IRQn                  = 59,               /**< Micro-Tick Timer interrupt */
  WWDT0_IRQn                   = 60,               /**< Windowed Watchdog Timer 0 interrupt */
  Reserved77_IRQn              = 61,               /**< Reserved interrupt 77 */
  ADC0_IRQn                    = 62,               /**< Analog-to-Digital Converter interrupt */
  Reserved79_IRQn              = 63,               /**< Reserved interrupt 79 */
  CMP0_IRQn                    = 64,               /**< Comparator interrupt */
  CMP1_IRQn                    = 65,               /**< Comparator interrupt */
  Reserved82_IRQn              = 66,               /**< Reserved interrupt 82 */
  Reserved83_IRQn              = 67,               /**< Reserved interrupt 83 */
  Reserved84_IRQn              = 68,               /**< Reserved interrupt 84 */
  Reserved85_IRQn              = 69,               /**< Reserved interrupt 85 */
  Reserved86_IRQn              = 70,               /**< Reserved interrupt 86 */
  GPIO0_IRQn                   = 71,               /**< General Purpose Input/Output interrupt 0 */
  GPIO1_IRQn                   = 72,               /**< General Purpose Input/Output interrupt 1 */
  Reserved89_IRQn              = 73,               /**< Reserved interrupt 89 */
  Reserved90_IRQn              = 74,               /**< Reserved interrupt 90 */
  Reserved91_IRQn              = 75,               /**< Reserved interrupt 91 */
  PORT_IRQn                    = 76,               /**< PORT0~PORTx EFT interrupts */
  Reserved93_IRQn              = 77,               /**< Reserved interrupt 93 */
  Reserved94_IRQn              = 78,               /**< Reserved interrupt 94 */
  Reserved95_IRQn              = 79,               /**< Reserved interrupt 95 */
  MU_A_TX_IRQn                 = 80,               /**< Ored tx interrupt to MUA */
  MU_A_RX_IRQn                 = 81,               /**< Ored rx interrupt to MUA */
  MU_A_INT_IRQn                = 82                /**< ORed general purpose interrupt request to MUA */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_vector_numbers */


/* ----------------------------------------------------------------------------
   -- Cortex M33 Core Configuration
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Cortex_Core_Configuration Cortex M33 Core Configuration
 * @{
 */

#define __MPU_PRESENT                  0         /**< Defines if an MPU is present or not */
#define __NVIC_PRIO_BITS               3         /**< Number of priority bits implemented in the NVIC */
#define __Vendor_SysTickConfig         0         /**< Vendor specific implementation of SysTickConfig is defined */
#define __FPU_PRESENT                  0         /**< Defines if an FPU is present or not */
#define __DSP_PRESENT                  0         /**< Defines if Armv8-M Mainline core supports DSP instructions */
#define __SAUREGION_PRESENT            0         /**< Defines if an SAU is present or not */

#include "core_cm33.h"                 /* Core Peripheral Access Layer */
#include "system_MCXL144.h"            /* Device specific configuration file */

#define MCXL144_SERIES
/* CPU specific feature definitions */
#include "MCXL144_features.h"

/*!
 * @}
 */ /* end of group Cortex_Core_Configuration */


/* ADC - Peripheral instance base addresses */
/** Peripheral ADC0 base address */
#define ADC0_BASE                                (0x400AF000u)
/** Peripheral ADC0 base pointer */
#define ADC0                                     ((ADC_Type *)ADC0_BASE)
/** Array initializer of ADC peripheral base addresses */
#define ADC_BASE_ADDRS                           { ADC0_BASE }
/** Array initializer of ADC peripheral base pointers */
#define ADC_BASE_PTRS                            { ADC0 }
/** Interrupt vectors for the ADC peripheral type */
#define ADC_IRQS                                 { ADC0_IRQn }
/* Backward compatibility */
#define ADC_CTRL_RSTFIFO_MASK                     ADC_CTRL_RSTFIFO0_MASK
#define ADC_CTRL_RSTFIFO_SHIFT                    ADC_CTRL_RSTFIFO0_SHIFT
#define ADC_CTRL_RSTFIFO(x)                       ADC_CTRL_RSTFIFO0(x)
#define ADC_STAT_RDY_MASK                         ADC_STAT_RDY0_MASK
#define ADC_STAT_RDY_SHIFT                        ADC_STAT_RDY0_SHIFT
#define ADC_STAT_RDY(x)                           ADC_STAT_RDY0(x)
#define ADC_STAT_FOF_MASK                         ADC_STAT_FOF0_MASK
#define ADC_STAT_FOF_SHIFT                        ADC_STAT_FOF0_SHIFT
#define ADC_STAT_FOF(x)                           ADC_STAT_FOF0(x)
#define ADC_IE_FWMIE_MASK                         ADC_IE_FWMIE0_MASK
#define ADC_IE_FWMIE_SHIFT                        ADC_IE_FWMIE0_SHIFT
#define ADC_IE_FWMIE(x)                           ADC_IE_FWMIE0(x)
#define ADC_IE_FOFIE_MASK                         ADC_IE_FOFIE0_MASK
#define ADC_IE_FOFIE_SHIFT                        ADC_IE_FOFIE0_SHIFT
#define ADC_IE_FOFIE(x)                           ADC_IE_FOFIE0(x)
#define ADC_DE_FWMDE_MASK                         ADC_DE_FWMDE0_MASK
#define ADC_DE_FWMDE_SHIFT                        ADC_DE_FWMDE0_SHIFT
#define ADC_DE_FWMDE(x)                           ADC_DE_FWMDE0(x)
/* ADC temperature sensor related parameters */
/* @brief Temperature sensor parameter A (slope). */
#define TEMP_PARAMETER_A (783.0f)
/* @brief Temperature sensor parameter B (offset). */
#define TEMP_PARAMETER_B (297.0f)
/* @brief Temperature sensor parameter Alpha. */
#define TEMP_PARAMETER_ALPHA (9.63f)


/* AOI - Peripheral instance base addresses */
/** Peripheral AOI0 base address */
#define AOI0_BASE                                (0x40089000u)
/** Peripheral AOI0 base pointer */
#define AOI0                                     ((AOI_Type *)AOI0_BASE)
/** Array initializer of AOI peripheral base addresses */
#define AOI_BASE_ADDRS                           { AOI0_BASE }
/** Array initializer of AOI peripheral base pointers */
#define AOI_BASE_PTRS                            { AOI0 }

/* ATX - Peripheral instance base addresses */
/** Peripheral ATX0 base address */
#define ATX0_BASE                                (0x400FD000u)
/** Peripheral ATX0 base pointer */
#define ATX0                                     ((ATX_Type *)ATX0_BASE)
/** Array initializer of ATX peripheral base addresses */
#define ATX_BASE_ADDRS                           { ATX0_BASE }
/** Array initializer of ATX peripheral base pointers */
#define ATX_BASE_PTRS                            { ATX0 }

/* CDOG - Peripheral instance base addresses */
/** Peripheral CDOG base address */
#define CDOG_BASE                                (0x40100000u)
/** Peripheral CDOG base pointer */
#define CDOG                                     ((CDOG_Type *)CDOG_BASE)
/** Array initializer of CDOG peripheral base addresses */
#define CDOG_BASE_ADDRS                          { CDOG_BASE }
/** Array initializer of CDOG peripheral base pointers */
#define CDOG_BASE_PTRS                           { CDOG }
/** Interrupt vectors for the CDOG peripheral type */
#define CDOG_IRQS                                { CDOG0_IRQn }

/* CMC - Peripheral instance base addresses */
/** Peripheral CMC base address */
#define CMC_BASE                                 (0x4008B000u)
/** Peripheral CMC base pointer */
#define CMC                                      ((CMC_Type *)CMC_BASE)
/** Array initializer of CMC peripheral base addresses */
#define CMC_BASE_ADDRS                           { CMC_BASE }
/** Array initializer of CMC peripheral base pointers */
#define CMC_BASE_PTRS                            { CMC }
/** Interrupt vectors for the CMC peripheral type */
#define CMC_IRQS                                 { CMC_IRQn }

/* CRC - Peripheral instance base addresses */
/** Peripheral CRC0 base address */
#define CRC0_BASE                                (0x4008A000u)
/** Peripheral CRC0 base pointer */
#define CRC0                                     ((CRC_Type *)CRC0_BASE)
/** Array initializer of CRC peripheral base addresses */
#define CRC_BASE_ADDRS                           { CRC0_BASE }
/** Array initializer of CRC peripheral base pointers */
#define CRC_BASE_PTRS                            { CRC0 }

/* CTIMER - Peripheral instance base addresses */
/** Peripheral CTIMER0 base address */
#define CTIMER0_BASE                             (0x40004000u)
/** Peripheral CTIMER0 base pointer */
#define CTIMER0                                  ((CTIMER_Type *)CTIMER0_BASE)
/** Peripheral CTIMER1 base address */
#define CTIMER1_BASE                             (0x40005000u)
/** Peripheral CTIMER1 base pointer */
#define CTIMER1                                  ((CTIMER_Type *)CTIMER1_BASE)
/** Peripheral CTIMER2 base address */
#define CTIMER2_BASE                             (0x40006000u)
/** Peripheral CTIMER2 base pointer */
#define CTIMER2                                  ((CTIMER_Type *)CTIMER2_BASE)
/** Array initializer of CTIMER peripheral base addresses */
#define CTIMER_BASE_ADDRS                        { CTIMER0_BASE, CTIMER1_BASE, CTIMER2_BASE }
/** Array initializer of CTIMER peripheral base pointers */
#define CTIMER_BASE_PTRS                         { CTIMER0, CTIMER1, CTIMER2 }
/** Interrupt vectors for the CTIMER peripheral type */
#define CTIMER_IRQS                              { CTIMER0_IRQn, CTIMER1_IRQn, CTIMER2_IRQn }

/* DEBUGMAILBOX - Peripheral instance base addresses */
/** Peripheral DBGMAILBOX base address */
#define DBGMAILBOX_BASE                          (0x40101000u)
/** Peripheral DBGMAILBOX base pointer */
#define DBGMAILBOX                               ((DEBUGMAILBOX_Type *)DBGMAILBOX_BASE)
/** Array initializer of DEBUGMAILBOX peripheral base addresses */
#define DEBUGMAILBOX_BASE_ADDRS                  { DBGMAILBOX_BASE }
/** Array initializer of DEBUGMAILBOX peripheral base pointers */
#define DEBUGMAILBOX_BASE_PTRS                   { DBGMAILBOX }

/* DMA - Peripheral instance base addresses */
/** Peripheral DMA0 base address */
#define DMA0_BASE                                (0x40080000u)
/** Peripheral DMA0 base pointer */
#define DMA0                                     ((DMA_Type *)DMA0_BASE)
/** Array initializer of DMA peripheral base addresses */
#define DMA_BASE_ADDRS                           { DMA0_BASE }
/** Array initializer of DMA peripheral base pointers */
#define DMA_BASE_PTRS                            { DMA0 }
/** Interrupt vectors for the DMA peripheral type */
#define DMA_IRQS                                 { { DMA_CH0_IRQn, DMA_CH1_IRQn, DMA_CH2_IRQn, DMA_CH3_IRQn } }
#define DMA_ERROR_IRQS                           { { DMA_CH0_IRQn, DMA_CH1_IRQn, DMA_CH2_IRQn, DMA_CH3_IRQn } }

/* EQDC - Peripheral instance base addresses */
/** Peripheral QDC0 base address */
#define QDC0_BASE                                (0x400A7000u)
/** Peripheral QDC0 base pointer */
#define QDC0                                     ((EQDC_Type *)QDC0_BASE)
/** Array initializer of EQDC peripheral base addresses */
#define EQDC_BASE_ADDRS                          { QDC0_BASE }
/** Array initializer of EQDC peripheral base pointers */
#define EQDC_BASE_PTRS                           { QDC0 }
/** Interrupt vectors for the EQDC peripheral type */
#define EQDC_COMPARE_IRQS                        { QDC0_COMPARE_IRQn }
#define EQDC_HOME_IRQS                           { QDC0_HOME_IRQn }
#define EQDC_WDOG_IRQS                           { QDC0_WATCHDOG_IRQn }
#define EQDC_INDEX_IRQS                          { QDC0_INDEX_IRQn }

/* FMC - Peripheral instance base addresses */
/** Peripheral FMC0 base address */
#define FMC0_BASE                                (0x40094000u)
/** Peripheral FMC0 base pointer */
#define FMC0                                     ((FMC_Type *)FMC0_BASE)
/** Array initializer of FMC peripheral base addresses */
#define FMC_BASE_ADDRS                           { FMC0_BASE }
/** Array initializer of FMC peripheral base pointers */
#define FMC_BASE_PTRS                            { FMC0 }

/* FMU - Peripheral instance base addresses */
/** Peripheral FMU0 base address */
#define FMU0_BASE                                (0x40095000u)
/** Peripheral FMU0 base pointer */
#define FMU0                                     ((FMU_Type *)FMU0_BASE)
/** Array initializer of FMU peripheral base addresses */
#define FMU_BASE_ADDRS                           { FMU0_BASE }
/** Array initializer of FMU peripheral base pointers */
#define FMU_BASE_PTRS                            { FMU0 }
/** Interrupt vectors for the FMU peripheral type */
#define FMU_IRQS                                 { FMU0_IRQn }

/* FMUTEST - Peripheral instance base addresses */
/** Peripheral FMU0TEST base address */
#define FMU0TEST_BASE                            (0x40096000u)
/** Peripheral FMU0TEST base pointer */
#define FMU0TEST                                 ((FMUTEST_Type *)FMU0TEST_BASE)
/** Array initializer of FMUTEST peripheral base addresses */
#define FMUTEST_BASE_ADDRS                       { FMU0TEST_BASE }
/** Array initializer of FMUTEST peripheral base pointers */
#define FMUTEST_BASE_PTRS                        { FMU0TEST }

/* FREQME - Peripheral instance base addresses */
/** Peripheral FREQME0 base address */
#define FREQME0_BASE                             (0x40009000u)
/** Peripheral FREQME0 base pointer */
#define FREQME0                                  ((FREQME_Type *)FREQME0_BASE)
/** Array initializer of FREQME peripheral base addresses */
#define FREQME_BASE_ADDRS                        { FREQME0_BASE }
/** Array initializer of FREQME peripheral base pointers */
#define FREQME_BASE_PTRS                         { FREQME0 }
/** Interrupt vectors for the FREQME peripheral type */
#define FREQME_IRQS                              { FREQME0_IRQn }

/* GLIKEY - Peripheral instance base addresses */
/** Peripheral GLIKEY0 base address */
#define GLIKEY0_BASE                             (0x40091D00u)
/** Peripheral GLIKEY0 base pointer */
#define GLIKEY0                                  ((GLIKEY_Type *)GLIKEY0_BASE)
/** Array initializer of GLIKEY peripheral base addresses */
#define GLIKEY_BASE_ADDRS                        { GLIKEY0_BASE }
/** Array initializer of GLIKEY peripheral base pointers */
#define GLIKEY_BASE_PTRS                         { GLIKEY0 }
/** Interrupt vectors for the GLIKEY peripheral type */
#define GLIKEY_IRQS                              { GLIKEY0_IRQn }

/* GPIO - Peripheral instance base addresses */
/** Peripheral GPIO0 base address */
#define GPIO0_BASE                               (0x40102000u)
/** Peripheral GPIO0 base pointer */
#define GPIO0                                    ((GPIO_Type *)GPIO0_BASE)
/** Peripheral GPIO1 base address */
#define GPIO1_BASE                               (0x40103000u)
/** Peripheral GPIO1 base pointer */
#define GPIO1                                    ((GPIO_Type *)GPIO1_BASE)
/** Array initializer of GPIO peripheral base addresses */
#define GPIO_BASE_ADDRS                          { GPIO0_BASE, GPIO1_BASE }
/** Array initializer of GPIO peripheral base pointers */
#define GPIO_BASE_PTRS                           { GPIO0, GPIO1 }
/** Interrupt vectors for the GPIO peripheral type */
#define GPIO_IRQS                                { GPIO0_IRQn, GPIO1_IRQn }

/* INPUTMUX - Peripheral instance base addresses */
/** Peripheral INPUTMUX0 base address */
#define INPUTMUX0_BASE                           (0x40001000u)
/** Peripheral INPUTMUX0 base pointer */
#define INPUTMUX0                                ((INPUTMUX_Type *)INPUTMUX0_BASE)
/** Array initializer of INPUTMUX peripheral base addresses */
#define INPUTMUX_BASE_ADDRS                      { INPUTMUX0_BASE }
/** Array initializer of INPUTMUX peripheral base pointers */
#define INPUTMUX_BASE_PTRS                       { INPUTMUX0 }

/* LPCMP - Peripheral instance base addresses */
/** Peripheral CMP0 base address */
#define CMP0_BASE                                (0x400B1000u)
/** Peripheral CMP0 base pointer */
#define CMP0                                     ((LPCMP_Type *)CMP0_BASE)
/** Peripheral CMP1 base address */
#define CMP1_BASE                                (0x400B2000u)
/** Peripheral CMP1 base pointer */
#define CMP1                                     ((LPCMP_Type *)CMP1_BASE)
/** Array initializer of LPCMP peripheral base addresses */
#define LPCMP_BASE_ADDRS                         { CMP0_BASE, CMP1_BASE }
/** Array initializer of LPCMP peripheral base pointers */
#define LPCMP_BASE_PTRS                          { CMP0, CMP1 }
/** Interrupt vectors for the LPCMP peripheral type */
#define LPCMP_IRQS                               { CMP0_IRQn, CMP1_IRQn }

/* LPI2C - Peripheral instance base addresses */
/** Peripheral LPI2C0 base address */
#define LPI2C0_BASE                              (0x4009A000u)
/** Peripheral LPI2C0 base pointer */
#define LPI2C0                                   ((LPI2C_Type *)LPI2C0_BASE)
/** Array initializer of LPI2C peripheral base addresses */
#define LPI2C_BASE_ADDRS                         { LPI2C0_BASE }
/** Array initializer of LPI2C peripheral base pointers */
#define LPI2C_BASE_PTRS                          { LPI2C0 }
/** Interrupt vectors for the LPI2C peripheral type */
#define LPI2C_IRQS                               { LPI2C0_IRQn }

/* LPSPI - Peripheral instance base addresses */
/** Peripheral LPSPI0 base address */
#define LPSPI0_BASE                              (0x4009C000u)
/** Peripheral LPSPI0 base pointer */
#define LPSPI0                                   ((LPSPI_Type *)LPSPI0_BASE)
/** Peripheral LPSPI1 base address */
#define LPSPI1_BASE                              (0x4009D000u)
/** Peripheral LPSPI1 base pointer */
#define LPSPI1                                   ((LPSPI_Type *)LPSPI1_BASE)
/** Array initializer of LPSPI peripheral base addresses */
#define LPSPI_BASE_ADDRS                         { LPSPI0_BASE, LPSPI1_BASE }
/** Array initializer of LPSPI peripheral base pointers */
#define LPSPI_BASE_PTRS                          { LPSPI0, LPSPI1 }
/** Interrupt vectors for the LPSPI peripheral type */
#define LPSPI_IRQS                               { LPSPI0_IRQn, LPSPI1_IRQn }

/* LPTMR - Peripheral instance base addresses */
/** Peripheral LPTMR0 base address */
#define LPTMR0_BASE                              (0x400AB000u)
/** Peripheral LPTMR0 base pointer */
#define LPTMR0                                   ((LPTMR_Type *)LPTMR0_BASE)
/** Array initializer of LPTMR peripheral base addresses */
#define LPTMR_BASE_ADDRS                         { LPTMR0_BASE }
/** Array initializer of LPTMR peripheral base pointers */
#define LPTMR_BASE_PTRS                          { LPTMR0 }
/** Interrupt vectors for the LPTMR peripheral type */
#define LPTMR_IRQS                               { LPTMR0_IRQn }

/* LPUART - Peripheral instance base addresses */
/** Peripheral LPUART0 base address */
#define LPUART0_BASE                             (0x4009F000u)
/** Peripheral LPUART0 base pointer */
#define LPUART0                                  ((LPUART_Type *)LPUART0_BASE)
/** Peripheral LPUART1 base address */
#define LPUART1_BASE                             (0x400A0000u)
/** Peripheral LPUART1 base pointer */
#define LPUART1                                  ((LPUART_Type *)LPUART1_BASE)
/** Peripheral LPUART2 base address */
#define LPUART2_BASE                             (0x400A1000u)
/** Peripheral LPUART2 base pointer */
#define LPUART2                                  ((LPUART_Type *)LPUART2_BASE)
/** Array initializer of LPUART peripheral base addresses */
#define LPUART_BASE_ADDRS                        { LPUART0_BASE, LPUART1_BASE, LPUART2_BASE }
/** Array initializer of LPUART peripheral base pointers */
#define LPUART_BASE_PTRS                         { LPUART0, LPUART1, LPUART2 }
/** Interrupt vectors for the LPUART peripheral type */
#define LPUART_RX_TX_IRQS                        { LPUART0_IRQn, LPUART1_IRQn, LPUART2_IRQn }
#define LPUART_ERR_IRQS                          { LPUART0_IRQn, LPUART1_IRQn, LPUART2_IRQn }

/* MRCC - Peripheral instance base addresses */
/** Peripheral MRCC base address */
#define MRCC_BASE                                (0x40091000u)
/** Peripheral MRCC base pointer */
#define MRCC                                     ((MRCC_Type *)MRCC_BASE)
/** Array initializer of MRCC peripheral base addresses */
#define MRCC_BASE_ADDRS                          { MRCC_BASE }
/** Array initializer of MRCC peripheral base pointers */
#define MRCC_BASE_PTRS                           { MRCC }

/* MU - Peripheral instance base addresses */
/** Peripheral MUA base address */
#define MUA_BASE                                 (0x400C4000u)
/** Peripheral MUA base pointer */
#define MUA                                      ((MU_Type *)MUA_BASE)
/** Array initializer of MU peripheral base addresses */
#define MU_BASE_ADDRS                            { MUA_BASE }
/** Array initializer of MU peripheral base pointers */
#define MU_BASE_PTRS                             { MUA }

/* OSTIMER - Peripheral instance base addresses */
/** Peripheral OSTIMER0 base address */
#define OSTIMER0_BASE                            (0x400AD000u)
/** Peripheral OSTIMER0 base pointer */
#define OSTIMER0                                 ((OSTIMER_Type *)OSTIMER0_BASE)
/** Array initializer of OSTIMER peripheral base addresses */
#define OSTIMER_BASE_ADDRS                       { OSTIMER0_BASE }
/** Array initializer of OSTIMER peripheral base pointers */
#define OSTIMER_BASE_PTRS                        { OSTIMER0 }
/** Interrupt vectors for the OSTIMER peripheral type */
#define OSTIMER_IRQS                             { OS_EVENT_IRQn }

/* PORT - Peripheral instance base addresses */
/** Peripheral PORT0 base address */
#define PORT0_BASE                               (0x400BC000u)
/** Peripheral PORT0 base pointer */
#define PORT0                                    ((PORT_Type *)PORT0_BASE)
/** Peripheral PORT1 base address */
#define PORT1_BASE                               (0x400BD000u)
/** Peripheral PORT1 base pointer */
#define PORT1                                    ((PORT_Type *)PORT1_BASE)
/** Array initializer of PORT peripheral base addresses */
#define PORT_BASE_ADDRS                          { PORT0_BASE, PORT1_BASE }
/** Array initializer of PORT peripheral base pointers */
#define PORT_BASE_PTRS                           { PORT0, PORT1 }
/** Interrupt vectors for the PORT peripheral type */
#define PORT_IRQS                                { PORT_IRQn, PORT_IRQn }

/* PWM - Peripheral instance base addresses */
/** Peripheral EFLEXPWM0 base address */
#define EFLEXPWM0_BASE                           (0x400A9000u)
/** Peripheral EFLEXPWM0 base pointer */
#define EFLEXPWM0                                ((PWM_Type *)EFLEXPWM0_BASE)
/** Array initializer of PWM peripheral base addresses */
#define PWM_BASE_ADDRS                           { EFLEXPWM0_BASE }
/** Array initializer of PWM peripheral base pointers */
#define PWM_BASE_PTRS                            { EFLEXPWM0 }
/** Interrupt vectors for the PWM peripheral type */
#define PWM_CMP_IRQS                             { { FLEXPWM0_SUBMODULE0_IRQn, FLEXPWM0_SUBMODULE1_IRQn, FLEXPWM0_SUBMODULE2_IRQn } }
#define PWM_RELOAD_IRQS                          { { FLEXPWM0_SUBMODULE0_IRQn, FLEXPWM0_SUBMODULE1_IRQn, FLEXPWM0_SUBMODULE2_IRQn } }
#define PWM_CAPTURE_IRQS                         { { FLEXPWM0_SUBMODULE0_IRQn, FLEXPWM0_SUBMODULE1_IRQn, FLEXPWM0_SUBMODULE2_IRQn } }
#define PWM_FAULT_IRQS                           { FLEXPWM0_FAULT_IRQn }
#define PWM_RELOAD_ERROR_IRQS                    { FLEXPWM0_RELOAD_ERROR_IRQn }

/* SCG - Peripheral instance base addresses */
/** Peripheral SCG0 base address */
#define SCG0_BASE                                (0x4008F000u)
/** Peripheral SCG0 base pointer */
#define SCG0                                     ((SCG_Type *)SCG0_BASE)
/** Array initializer of SCG peripheral base addresses */
#define SCG_BASE_ADDRS                           { SCG0_BASE }
/** Array initializer of SCG peripheral base pointers */
#define SCG_BASE_PTRS                            { SCG0 }
/** Interrupt vectors for the SCG peripheral type */
#define SCG_IRQS                                 { SCG0_IRQn }

/* SYSCON - Peripheral instance base addresses */
/** Peripheral SYSCON base address */
#define SYSCON_BASE                              (0x40091000u)
/** Peripheral SYSCON base pointer */
#define SYSCON                                   ((SYSCON_Type *)SYSCON_BASE)
/** Array initializer of SYSCON peripheral base addresses */
#define SYSCON_BASE_ADDRS                        { SYSCON_BASE }
/** Array initializer of SYSCON peripheral base pointers */
#define SYSCON_BASE_PTRS                         { SYSCON }

/* TRDC - Peripheral instance base addresses */
/** Peripheral MBC0 base address */
#define MBC0_BASE                                (0x4008E000u)
/** Peripheral MBC0 base pointer */
#define MBC0                                     ((TRDC_Type *)MBC0_BASE)
/** Array initializer of TRDC peripheral base addresses */
#define TRDC_BASE_ADDRS                          { MBC0_BASE }
/** Array initializer of TRDC peripheral base pointers */
#define TRDC_BASE_PTRS                           { MBC0 }
/** Interrupt vectors for the TRDC peripheral type */
#define TRDC_IRQS                                { MBC0_IRQn }

/* UTICK - Peripheral instance base addresses */
/** Peripheral UTICK0 base address */
#define UTICK0_BASE                              (0x4000B000u)
/** Peripheral UTICK0 base pointer */
#define UTICK0                                   ((UTICK_Type *)UTICK0_BASE)
/** Array initializer of UTICK peripheral base addresses */
#define UTICK_BASE_ADDRS                         { UTICK0_BASE }
/** Array initializer of UTICK peripheral base pointers */
#define UTICK_BASE_PTRS                          { UTICK0 }
/** Interrupt vectors for the UTICK peripheral type */
#define UTICK_IRQS                               { UTICK0_IRQn }

/* WUU - Peripheral instance base addresses */
/** Peripheral WUU0 base address */
#define WUU0_BASE                                (0x40092000u)
/** Peripheral WUU0 base pointer */
#define WUU0                                     ((WUU_Type *)WUU0_BASE)
/** Array initializer of WUU peripheral base addresses */
#define WUU_BASE_ADDRS                           { WUU0_BASE }
/** Array initializer of WUU peripheral base pointers */
#define WUU_BASE_PTRS                            { WUU0 }
/** Interrupt vectors for the WUU peripheral type */
#define WUU_IRQS                                 { WUU0_IRQn }

/* WWDT - Peripheral instance base addresses */
/** Peripheral WWDT0 base address */
#define WWDT0_BASE                               (0x4000C000u)
/** Peripheral WWDT0 base pointer */
#define WWDT0                                    ((WWDT_Type *)WWDT0_BASE)
/** Array initializer of WWDT peripheral base addresses */
#define WWDT_BASE_ADDRS                          { WWDT0_BASE }
/** Array initializer of WWDT peripheral base pointers */
#define WWDT_BASE_PTRS                           { WWDT0 }

/* ----------------------------------------------------------------------------
   -- Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Bit_Field_Generic_Macros Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
 * @{
 */

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang system_header
  #endif
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma system_include
#endif

/**
 * @brief Mask and left-shift a bit field value for use in a register bit range.
 * @param field Name of the register bit field.
 * @param value Value of the bit field.
 * @return Masked and shifted value.
 */
#define NXP_VAL2FLD(field, value)    (((value) << (field ## _SHIFT)) & (field ## _MASK))
/**
 * @brief Mask and right-shift a register value to extract a bit field value.
 * @param field Name of the register bit field.
 * @param value Value of the register.
 * @return Masked and shifted bit field value.
 */
#define NXP_FLD2VAL(field, value)    (((value) & (field ## _MASK)) >> (field ## _SHIFT))

/*!
 * @}
 */ /* end of group Bit_Field_Generic_Macros */


/* ----------------------------------------------------------------------------
   -- SDK Compatibility
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SDK_Compatibility_Symbols SDK Compatibility
 * @{
 */

/* No SDK compatibility issues. */

/*!
 * @}
 */ /* end of group SDK_Compatibility_Symbols */


#endif  /* MCXL144_COMMON_H_ */

