/*
** ###################################################################
**     Processors:          MCXA144VFT
**                          MCXA144VLH
**                          MCXA144VLL
**                          MCXA144VMP
**                          MCXA144VPJ
**                          MCXA145VFT
**                          MCXA145VLH
**                          MCXA145VLL
**                          MCXA145VMP
**                          MCXA145VPJ
**                          MCXA146VFT
**                          MCXA146VLH
**                          MCXA146VLL
**                          MCXA146VMP
**                          MCXA146VPJ
**                          MCXA154VFT
**                          MCXA154VLH
**                          MCXA154VLL
**                          MCXA154VMP
**                          MCXA154VPJ
**                          MCXA155VFT
**                          MCXA155VLH
**                          MCXA155VLL
**                          MCXA155VMP
**                          MCXA155VPJ
**                          MCXA156VFT
**                          MCXA156VLH
**                          MCXA156VLL
**                          MCXA156VMP
**                          MCXA156VPJ
**
**     Version:             rev. 2.0, 2024-10-29
**     Build:               b250521
**
**     Abstract:
**         CMSIS Peripheral Access Layer for LPSPI
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2022-03-29)
**         Initial version based on v0.1UM
**     - rev. 2.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_LPSPI.h
 * @version 2.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for LPSPI
 *
 * CMSIS Peripheral Access Layer for LPSPI
 */

#if !defined(PERI_LPSPI_H_)
#define PERI_LPSPI_H_                            /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MCXA144VFT) || defined(CPU_MCXA144VLH) || defined(CPU_MCXA144VLL) || defined(CPU_MCXA144VMP) || defined(CPU_MCXA144VPJ))
#include "MCXA144_COMMON.h"
#elif (defined(CPU_MCXA145VFT) || defined(CPU_MCXA145VLH) || defined(CPU_MCXA145VLL) || defined(CPU_MCXA145VMP) || defined(CPU_MCXA145VPJ))
#include "MCXA145_COMMON.h"
#elif (defined(CPU_MCXA146VFT) || defined(CPU_MCXA146VLH) || defined(CPU_MCXA146VLL) || defined(CPU_MCXA146VMP) || defined(CPU_MCXA146VPJ))
#include "MCXA146_COMMON.h"
#elif (defined(CPU_MCXA154VFT) || defined(CPU_MCXA154VLH) || defined(CPU_MCXA154VLL) || defined(CPU_MCXA154VMP) || defined(CPU_MCXA154VPJ))
#include "MCXA154_COMMON.h"
#elif (defined(CPU_MCXA155VFT) || defined(CPU_MCXA155VLH) || defined(CPU_MCXA155VLL) || defined(CPU_MCXA155VMP) || defined(CPU_MCXA155VPJ))
#include "MCXA155_COMMON.h"
#elif (defined(CPU_MCXA156VFT) || defined(CPU_MCXA156VLH) || defined(CPU_MCXA156VLL) || defined(CPU_MCXA156VMP) || defined(CPU_MCXA156VPJ))
#include "MCXA156_COMMON.h"
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
   -- LPSPI Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPSPI_Peripheral_Access_Layer LPSPI Peripheral Access Layer
 * @{
 */

/** LPSPI - Size of Registers Arrays */
#define LPSPI_TDBR_COUNT                          128u
#define LPSPI_RDBR_COUNT                          128u

/** LPSPI - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter, offset: 0x4 */
       uint8_t RESERVED_0[8];
  __IO uint32_t CR;                                /**< Control, offset: 0x10 */
  __IO uint32_t SR;                                /**< Status, offset: 0x14 */
  __IO uint32_t IER;                               /**< Interrupt Enable, offset: 0x18 */
  __IO uint32_t DER;                               /**< DMA Enable, offset: 0x1C */
  __IO uint32_t CFGR0;                             /**< Configuration 0, offset: 0x20 */
  __IO uint32_t CFGR1;                             /**< Configuration 1, offset: 0x24 */
       uint8_t RESERVED_1[8];
  __IO uint32_t DMR0;                              /**< Data Match 0, offset: 0x30 */
  __IO uint32_t DMR1;                              /**< Data Match 1, offset: 0x34 */
       uint8_t RESERVED_2[8];
  __IO uint32_t CCR;                               /**< Clock Configuration, offset: 0x40 */
  __IO uint32_t CCR1;                              /**< Clock Configuration 1, offset: 0x44 */
       uint8_t RESERVED_3[16];
  __IO uint32_t FCR;                               /**< FIFO Control, offset: 0x58 */
  __I  uint32_t FSR;                               /**< FIFO Status, offset: 0x5C */
  __IO uint32_t TCR;                               /**< Transmit Command, offset: 0x60 */
  __O  uint32_t TDR;                               /**< Transmit Data, offset: 0x64 */
       uint8_t RESERVED_4[8];
  __I  uint32_t RSR;                               /**< Receive Status, offset: 0x70 */
  __I  uint32_t RDR;                               /**< Receive Data, offset: 0x74 */
  __I  uint32_t RDROR;                             /**< Receive Data Read Only, offset: 0x78 */
       uint8_t RESERVED_5[896];
  __O  uint32_t TCBR;                              /**< Transmit Command Burst, offset: 0x3FC */
  __O  uint32_t TDBR[LPSPI_TDBR_COUNT];            /**< Transmit Data Burst, array offset: 0x400, array step: 0x4 */
  __I  uint32_t RDBR[LPSPI_RDBR_COUNT];            /**< Receive Data Burst, array offset: 0x600, array step: 0x4 */
} LPSPI_Type;

/* ----------------------------------------------------------------------------
   -- LPSPI Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LPSPI_Register_Masks LPSPI Register Masks
 * @{
 */

/*! @name VERID - Version ID */
/*! @{ */

#define LPSPI_VERID_FEATURE_MASK                 (0xFFFFU)
#define LPSPI_VERID_FEATURE_SHIFT                (0U)
/*! FEATURE - Module Identification Number
 *  0b0000000000000100..Standard feature set supporting a 32-bit shift register.
 */
#define LPSPI_VERID_FEATURE(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_VERID_FEATURE_SHIFT)) & LPSPI_VERID_FEATURE_MASK)

#define LPSPI_VERID_MINOR_MASK                   (0xFF0000U)
#define LPSPI_VERID_MINOR_SHIFT                  (16U)
/*! MINOR - Minor Version Number */
#define LPSPI_VERID_MINOR(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_VERID_MINOR_SHIFT)) & LPSPI_VERID_MINOR_MASK)

#define LPSPI_VERID_MAJOR_MASK                   (0xFF000000U)
#define LPSPI_VERID_MAJOR_SHIFT                  (24U)
/*! MAJOR - Major Version Number */
#define LPSPI_VERID_MAJOR(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_VERID_MAJOR_SHIFT)) & LPSPI_VERID_MAJOR_MASK)
/*! @} */

/*! @name PARAM - Parameter */
/*! @{ */

#define LPSPI_PARAM_TXFIFO_MASK                  (0xFFU)
#define LPSPI_PARAM_TXFIFO_SHIFT                 (0U)
/*! TXFIFO - Transmit FIFO Size */
#define LPSPI_PARAM_TXFIFO(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_PARAM_TXFIFO_SHIFT)) & LPSPI_PARAM_TXFIFO_MASK)

#define LPSPI_PARAM_RXFIFO_MASK                  (0xFF00U)
#define LPSPI_PARAM_RXFIFO_SHIFT                 (8U)
/*! RXFIFO - Receive FIFO Size */
#define LPSPI_PARAM_RXFIFO(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_PARAM_RXFIFO_SHIFT)) & LPSPI_PARAM_RXFIFO_MASK)

#define LPSPI_PARAM_PCSNUM_MASK                  (0xFF0000U)
#define LPSPI_PARAM_PCSNUM_SHIFT                 (16U)
/*! PCSNUM - PCS Number */
#define LPSPI_PARAM_PCSNUM(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_PARAM_PCSNUM_SHIFT)) & LPSPI_PARAM_PCSNUM_MASK)
/*! @} */

/*! @name CR - Control */
/*! @{ */

#define LPSPI_CR_MEN_MASK                        (0x1U)
#define LPSPI_CR_MEN_SHIFT                       (0U)
/*! MEN - Module Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_CR_MEN(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_MEN_SHIFT)) & LPSPI_CR_MEN_MASK)

#define LPSPI_CR_RST_MASK                        (0x2U)
#define LPSPI_CR_RST_SHIFT                       (1U)
/*! RST - Software Reset
 *  0b0..Not reset
 *  0b1..Reset
 */
#define LPSPI_CR_RST(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_RST_SHIFT)) & LPSPI_CR_RST_MASK)

#define LPSPI_CR_DBGEN_MASK                      (0x8U)
#define LPSPI_CR_DBGEN_SHIFT                     (3U)
/*! DBGEN - Debug Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_CR_DBGEN(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_DBGEN_SHIFT)) & LPSPI_CR_DBGEN_MASK)

#define LPSPI_CR_RTF_MASK                        (0x100U)
#define LPSPI_CR_RTF_SHIFT                       (8U)
/*! RTF - Reset Transmit FIFO
 *  0b0..No effect
 *  0b1..Reset
 */
#define LPSPI_CR_RTF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_RTF_SHIFT)) & LPSPI_CR_RTF_MASK)

#define LPSPI_CR_RRF_MASK                        (0x200U)
#define LPSPI_CR_RRF_SHIFT                       (9U)
/*! RRF - Reset Receive FIFO
 *  0b0..No effect
 *  0b1..Reset
 */
#define LPSPI_CR_RRF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_CR_RRF_SHIFT)) & LPSPI_CR_RRF_MASK)
/*! @} */

/*! @name SR - Status */
/*! @{ */

#define LPSPI_SR_TDF_MASK                        (0x1U)
#define LPSPI_SR_TDF_SHIFT                       (0U)
/*! TDF - Transmit Data Flag
 *  0b0..Transmit data not requested
 *  0b1..Transmit data requested
 */
#define LPSPI_SR_TDF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_TDF_SHIFT)) & LPSPI_SR_TDF_MASK)

#define LPSPI_SR_RDF_MASK                        (0x2U)
#define LPSPI_SR_RDF_SHIFT                       (1U)
/*! RDF - Receive Data Flag
 *  0b0..Receive data not ready
 *  0b1..Receive data ready
 */
#define LPSPI_SR_RDF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_RDF_SHIFT)) & LPSPI_SR_RDF_MASK)

#define LPSPI_SR_WCF_MASK                        (0x100U)
#define LPSPI_SR_WCF_SHIFT                       (8U)
/*! WCF - Word Complete Flag
 *  0b0..No effect
 *  0b0..Not complete
 *  0b1..Clear the flag
 *  0b1..Complete
 */
#define LPSPI_SR_WCF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_WCF_SHIFT)) & LPSPI_SR_WCF_MASK)

#define LPSPI_SR_FCF_MASK                        (0x200U)
#define LPSPI_SR_FCF_SHIFT                       (9U)
/*! FCF - Frame Complete Flag
 *  0b0..No effect
 *  0b0..Not complete
 *  0b1..Clear the flag
 *  0b1..Complete
 */
#define LPSPI_SR_FCF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_FCF_SHIFT)) & LPSPI_SR_FCF_MASK)

#define LPSPI_SR_TCF_MASK                        (0x400U)
#define LPSPI_SR_TCF_SHIFT                       (10U)
/*! TCF - Transfer Complete Flag
 *  0b0..No effect
 *  0b0..Not complete
 *  0b1..Clear the flag
 *  0b1..Complete
 */
#define LPSPI_SR_TCF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_TCF_SHIFT)) & LPSPI_SR_TCF_MASK)

#define LPSPI_SR_TEF_MASK                        (0x800U)
#define LPSPI_SR_TEF_SHIFT                       (11U)
/*! TEF - Transmit Error Flag
 *  0b0..No effect
 *  0b0..No underrun
 *  0b1..Clear the flag
 *  0b1..Underrun
 */
#define LPSPI_SR_TEF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_TEF_SHIFT)) & LPSPI_SR_TEF_MASK)

#define LPSPI_SR_REF_MASK                        (0x1000U)
#define LPSPI_SR_REF_SHIFT                       (12U)
/*! REF - Receive Error Flag
 *  0b0..No effect
 *  0b0..No overflow
 *  0b1..Clear the flag
 *  0b1..Overflow
 */
#define LPSPI_SR_REF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_REF_SHIFT)) & LPSPI_SR_REF_MASK)

#define LPSPI_SR_DMF_MASK                        (0x2000U)
#define LPSPI_SR_DMF_SHIFT                       (13U)
/*! DMF - Data Match Flag
 *  0b0..No effect
 *  0b0..No match
 *  0b1..Clear the flag
 *  0b1..Match
 */
#define LPSPI_SR_DMF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_DMF_SHIFT)) & LPSPI_SR_DMF_MASK)

#define LPSPI_SR_MBF_MASK                        (0x1000000U)
#define LPSPI_SR_MBF_SHIFT                       (24U)
/*! MBF - Module Busy Flag
 *  0b0..LPSPI is idle
 *  0b1..LPSPI is busy
 */
#define LPSPI_SR_MBF(x)                          (((uint32_t)(((uint32_t)(x)) << LPSPI_SR_MBF_SHIFT)) & LPSPI_SR_MBF_MASK)
/*! @} */

/*! @name IER - Interrupt Enable */
/*! @{ */

#define LPSPI_IER_TDIE_MASK                      (0x1U)
#define LPSPI_IER_TDIE_SHIFT                     (0U)
/*! TDIE - Transmit Data Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_IER_TDIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_TDIE_SHIFT)) & LPSPI_IER_TDIE_MASK)

#define LPSPI_IER_RDIE_MASK                      (0x2U)
#define LPSPI_IER_RDIE_SHIFT                     (1U)
/*! RDIE - Receive Data Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_IER_RDIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_RDIE_SHIFT)) & LPSPI_IER_RDIE_MASK)

#define LPSPI_IER_WCIE_MASK                      (0x100U)
#define LPSPI_IER_WCIE_SHIFT                     (8U)
/*! WCIE - Word Complete Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_IER_WCIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_WCIE_SHIFT)) & LPSPI_IER_WCIE_MASK)

#define LPSPI_IER_FCIE_MASK                      (0x200U)
#define LPSPI_IER_FCIE_SHIFT                     (9U)
/*! FCIE - Frame Complete Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_IER_FCIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_FCIE_SHIFT)) & LPSPI_IER_FCIE_MASK)

#define LPSPI_IER_TCIE_MASK                      (0x400U)
#define LPSPI_IER_TCIE_SHIFT                     (10U)
/*! TCIE - Transfer Complete Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_IER_TCIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_TCIE_SHIFT)) & LPSPI_IER_TCIE_MASK)

#define LPSPI_IER_TEIE_MASK                      (0x800U)
#define LPSPI_IER_TEIE_SHIFT                     (11U)
/*! TEIE - Transmit Error Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_IER_TEIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_TEIE_SHIFT)) & LPSPI_IER_TEIE_MASK)

#define LPSPI_IER_REIE_MASK                      (0x1000U)
#define LPSPI_IER_REIE_SHIFT                     (12U)
/*! REIE - Receive Error Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_IER_REIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_REIE_SHIFT)) & LPSPI_IER_REIE_MASK)

#define LPSPI_IER_DMIE_MASK                      (0x2000U)
#define LPSPI_IER_DMIE_SHIFT                     (13U)
/*! DMIE - Data Match Interrupt Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_IER_DMIE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_IER_DMIE_SHIFT)) & LPSPI_IER_DMIE_MASK)
/*! @} */

/*! @name DER - DMA Enable */
/*! @{ */

#define LPSPI_DER_TDDE_MASK                      (0x1U)
#define LPSPI_DER_TDDE_SHIFT                     (0U)
/*! TDDE - Transmit Data DMA Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_DER_TDDE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_DER_TDDE_SHIFT)) & LPSPI_DER_TDDE_MASK)

#define LPSPI_DER_RDDE_MASK                      (0x2U)
#define LPSPI_DER_RDDE_SHIFT                     (1U)
/*! RDDE - Receive Data DMA Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_DER_RDDE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_DER_RDDE_SHIFT)) & LPSPI_DER_RDDE_MASK)

#define LPSPI_DER_FCDE_MASK                      (0x200U)
#define LPSPI_DER_FCDE_SHIFT                     (9U)
/*! FCDE - Frame Complete DMA Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_DER_FCDE(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_DER_FCDE_SHIFT)) & LPSPI_DER_FCDE_MASK)
/*! @} */

/*! @name CFGR0 - Configuration 0 */
/*! @{ */

#define LPSPI_CFGR0_HREN_MASK                    (0x1U)
#define LPSPI_CFGR0_HREN_SHIFT                   (0U)
/*! HREN - Host Request Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_CFGR0_HREN(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_HREN_SHIFT)) & LPSPI_CFGR0_HREN_MASK)

#define LPSPI_CFGR0_HRPOL_MASK                   (0x2U)
#define LPSPI_CFGR0_HRPOL_SHIFT                  (1U)
/*! HRPOL - Host Request Polarity
 *  0b0..Active high
 *  0b1..Active low
 */
#define LPSPI_CFGR0_HRPOL(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_HRPOL_SHIFT)) & LPSPI_CFGR0_HRPOL_MASK)

#define LPSPI_CFGR0_HRSEL_MASK                   (0x4U)
#define LPSPI_CFGR0_HRSEL_SHIFT                  (2U)
/*! HRSEL - Host Request Select
 *  0b0..HREQ pin
 *  0b1..Input trigger
 */
#define LPSPI_CFGR0_HRSEL(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_HRSEL_SHIFT)) & LPSPI_CFGR0_HRSEL_MASK)

#define LPSPI_CFGR0_HRDIR_MASK                   (0x8U)
#define LPSPI_CFGR0_HRDIR_SHIFT                  (3U)
/*! HRDIR - Host Request Direction
 *  0b0..Input
 *  0b1..Output
 */
#define LPSPI_CFGR0_HRDIR(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_HRDIR_SHIFT)) & LPSPI_CFGR0_HRDIR_MASK)

#define LPSPI_CFGR0_CIRFIFO_MASK                 (0x100U)
#define LPSPI_CFGR0_CIRFIFO_SHIFT                (8U)
/*! CIRFIFO - Circular FIFO Enable
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_CFGR0_CIRFIFO(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_CIRFIFO_SHIFT)) & LPSPI_CFGR0_CIRFIFO_MASK)

#define LPSPI_CFGR0_RDMO_MASK                    (0x200U)
#define LPSPI_CFGR0_RDMO_SHIFT                   (9U)
/*! RDMO - Receive Data Match Only
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_CFGR0_RDMO(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR0_RDMO_SHIFT)) & LPSPI_CFGR0_RDMO_MASK)
/*! @} */

/*! @name CFGR1 - Configuration 1 */
/*! @{ */

#define LPSPI_CFGR1_MASTER_MASK                  (0x1U)
#define LPSPI_CFGR1_MASTER_SHIFT                 (0U)
/*! MASTER - Controller Mode
 *  0b0..Peripheral mode
 *  0b1..Controller mode
 */
#define LPSPI_CFGR1_MASTER(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_MASTER_SHIFT)) & LPSPI_CFGR1_MASTER_MASK)

#define LPSPI_CFGR1_SAMPLE_MASK                  (0x2U)
#define LPSPI_CFGR1_SAMPLE_SHIFT                 (1U)
/*! SAMPLE - Sample Point
 *  0b0..SCK edge
 *  0b1..Delayed SCK edge
 */
#define LPSPI_CFGR1_SAMPLE(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_SAMPLE_SHIFT)) & LPSPI_CFGR1_SAMPLE_MASK)

#define LPSPI_CFGR1_AUTOPCS_MASK                 (0x4U)
#define LPSPI_CFGR1_AUTOPCS_SHIFT                (2U)
/*! AUTOPCS - Automatic PCS
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_CFGR1_AUTOPCS(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_AUTOPCS_SHIFT)) & LPSPI_CFGR1_AUTOPCS_MASK)

#define LPSPI_CFGR1_NOSTALL_MASK                 (0x8U)
#define LPSPI_CFGR1_NOSTALL_SHIFT                (3U)
/*! NOSTALL - No Stall
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_CFGR1_NOSTALL(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_NOSTALL_SHIFT)) & LPSPI_CFGR1_NOSTALL_MASK)

#define LPSPI_CFGR1_PARTIAL_MASK                 (0x10U)
#define LPSPI_CFGR1_PARTIAL_SHIFT                (4U)
/*! PARTIAL - Partial Enable
 *  0b0..Discard
 *  0b1..Store
 */
#define LPSPI_CFGR1_PARTIAL(x)                   (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_PARTIAL_SHIFT)) & LPSPI_CFGR1_PARTIAL_MASK)

#define LPSPI_CFGR1_PCSPOL_MASK                  (0xF00U)
#define LPSPI_CFGR1_PCSPOL_SHIFT                 (8U)
/*! PCSPOL - Peripheral Chip Select Polarity
 *  0b0000..Active low
 *  0b0001..Active high
 */
#define LPSPI_CFGR1_PCSPOL(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_PCSPOL_SHIFT)) & LPSPI_CFGR1_PCSPOL_MASK)

#define LPSPI_CFGR1_MATCFG_MASK                  (0x70000U)
#define LPSPI_CFGR1_MATCFG_SHIFT                 (16U)
/*! MATCFG - Match Configuration
 *  0b000..Match is disabled
 *  0b001..
 *  0b010..Match first data word with compare word
 *  0b011..Match any data word with compare word
 *  0b100..Sequential match, first data word
 *  0b101..Sequential match, any data word
 *  0b110..Match first data word (masked) with compare word (masked)
 *  0b111..Match any data word (masked) with compare word (masked)
 */
#define LPSPI_CFGR1_MATCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_MATCFG_SHIFT)) & LPSPI_CFGR1_MATCFG_MASK)

#define LPSPI_CFGR1_PINCFG_MASK                  (0x3000000U)
#define LPSPI_CFGR1_PINCFG_SHIFT                 (24U)
/*! PINCFG - Pin Configuration
 *  0b00..SIN is used for input data; SOUT is used for output data
 *  0b01..SIN is used for both input and output data; only half-duplex serial transfers are supported
 *  0b10..SOUT is used for both input and output data; only half-duplex serial transfers are supported
 *  0b11..SOUT is used for input data; SIN is used for output data
 */
#define LPSPI_CFGR1_PINCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_PINCFG_SHIFT)) & LPSPI_CFGR1_PINCFG_MASK)

#define LPSPI_CFGR1_OUTCFG_MASK                  (0x4000000U)
#define LPSPI_CFGR1_OUTCFG_SHIFT                 (26U)
/*! OUTCFG - Output Configuration
 *  0b0..Retain last value
 *  0b1..3-stated
 */
#define LPSPI_CFGR1_OUTCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_OUTCFG_SHIFT)) & LPSPI_CFGR1_OUTCFG_MASK)

#define LPSPI_CFGR1_PCSCFG_MASK                  (0x8000000U)
#define LPSPI_CFGR1_PCSCFG_SHIFT                 (27U)
/*! PCSCFG - Peripheral Chip Select Configuration
 *  0b0..PCS[3:2] configured for chip select function
 *  0b1..PCS[3:2] configured for half-duplex 4-bit transfers (PCS[3:2] = DATA[3:2])
 */
#define LPSPI_CFGR1_PCSCFG(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_CFGR1_PCSCFG_SHIFT)) & LPSPI_CFGR1_PCSCFG_MASK)
/*! @} */

/*! @name DMR0 - Data Match 0 */
/*! @{ */

#define LPSPI_DMR0_MATCH0_MASK                   (0xFFFFFFFFU)
#define LPSPI_DMR0_MATCH0_SHIFT                  (0U)
/*! MATCH0 - Match 0 Value */
#define LPSPI_DMR0_MATCH0(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_DMR0_MATCH0_SHIFT)) & LPSPI_DMR0_MATCH0_MASK)
/*! @} */

/*! @name DMR1 - Data Match 1 */
/*! @{ */

#define LPSPI_DMR1_MATCH1_MASK                   (0xFFFFFFFFU)
#define LPSPI_DMR1_MATCH1_SHIFT                  (0U)
/*! MATCH1 - Match 1 Value */
#define LPSPI_DMR1_MATCH1(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_DMR1_MATCH1_SHIFT)) & LPSPI_DMR1_MATCH1_MASK)
/*! @} */

/*! @name CCR - Clock Configuration */
/*! @{ */

#define LPSPI_CCR_SCKDIV_MASK                    (0xFFU)
#define LPSPI_CCR_SCKDIV_SHIFT                   (0U)
/*! SCKDIV - SCK Divider */
#define LPSPI_CCR_SCKDIV(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR_SCKDIV_SHIFT)) & LPSPI_CCR_SCKDIV_MASK)

#define LPSPI_CCR_DBT_MASK                       (0xFF00U)
#define LPSPI_CCR_DBT_SHIFT                      (8U)
/*! DBT - Delay Between Transfers */
#define LPSPI_CCR_DBT(x)                         (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR_DBT_SHIFT)) & LPSPI_CCR_DBT_MASK)

#define LPSPI_CCR_PCSSCK_MASK                    (0xFF0000U)
#define LPSPI_CCR_PCSSCK_SHIFT                   (16U)
/*! PCSSCK - PCS-to-SCK Delay */
#define LPSPI_CCR_PCSSCK(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR_PCSSCK_SHIFT)) & LPSPI_CCR_PCSSCK_MASK)

#define LPSPI_CCR_SCKPCS_MASK                    (0xFF000000U)
#define LPSPI_CCR_SCKPCS_SHIFT                   (24U)
/*! SCKPCS - SCK-to-PCS Delay */
#define LPSPI_CCR_SCKPCS(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR_SCKPCS_SHIFT)) & LPSPI_CCR_SCKPCS_MASK)
/*! @} */

/*! @name CCR1 - Clock Configuration 1 */
/*! @{ */

#define LPSPI_CCR1_SCKSET_MASK                   (0xFFU)
#define LPSPI_CCR1_SCKSET_SHIFT                  (0U)
/*! SCKSET - SCK Setup */
#define LPSPI_CCR1_SCKSET(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR1_SCKSET_SHIFT)) & LPSPI_CCR1_SCKSET_MASK)

#define LPSPI_CCR1_SCKHLD_MASK                   (0xFF00U)
#define LPSPI_CCR1_SCKHLD_SHIFT                  (8U)
/*! SCKHLD - SCK Hold */
#define LPSPI_CCR1_SCKHLD(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR1_SCKHLD_SHIFT)) & LPSPI_CCR1_SCKHLD_MASK)

#define LPSPI_CCR1_PCSPCS_MASK                   (0xFF0000U)
#define LPSPI_CCR1_PCSPCS_SHIFT                  (16U)
/*! PCSPCS - PCS to PCS Delay */
#define LPSPI_CCR1_PCSPCS(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR1_PCSPCS_SHIFT)) & LPSPI_CCR1_PCSPCS_MASK)

#define LPSPI_CCR1_SCKSCK_MASK                   (0xFF000000U)
#define LPSPI_CCR1_SCKSCK_SHIFT                  (24U)
/*! SCKSCK - SCK Inter-Frame Delay */
#define LPSPI_CCR1_SCKSCK(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_CCR1_SCKSCK_SHIFT)) & LPSPI_CCR1_SCKSCK_MASK)
/*! @} */

/*! @name FCR - FIFO Control */
/*! @{ */

#define LPSPI_FCR_TXWATER_MASK                   (0x3U)
#define LPSPI_FCR_TXWATER_SHIFT                  (0U)
/*! TXWATER - Transmit FIFO Watermark */
#define LPSPI_FCR_TXWATER(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_FCR_TXWATER_SHIFT)) & LPSPI_FCR_TXWATER_MASK)

#define LPSPI_FCR_RXWATER_MASK                   (0x30000U)
#define LPSPI_FCR_RXWATER_SHIFT                  (16U)
/*! RXWATER - Receive FIFO Watermark */
#define LPSPI_FCR_RXWATER(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_FCR_RXWATER_SHIFT)) & LPSPI_FCR_RXWATER_MASK)
/*! @} */

/*! @name FSR - FIFO Status */
/*! @{ */

#define LPSPI_FSR_TXCOUNT_MASK                   (0x7U)
#define LPSPI_FSR_TXCOUNT_SHIFT                  (0U)
/*! TXCOUNT - Transmit FIFO Count */
#define LPSPI_FSR_TXCOUNT(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_FSR_TXCOUNT_SHIFT)) & LPSPI_FSR_TXCOUNT_MASK)

#define LPSPI_FSR_RXCOUNT_MASK                   (0x70000U)
#define LPSPI_FSR_RXCOUNT_SHIFT                  (16U)
/*! RXCOUNT - Receive FIFO Count */
#define LPSPI_FSR_RXCOUNT(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_FSR_RXCOUNT_SHIFT)) & LPSPI_FSR_RXCOUNT_MASK)
/*! @} */

/*! @name TCR - Transmit Command */
/*! @{ */

#define LPSPI_TCR_FRAMESZ_MASK                   (0xFFFU)
#define LPSPI_TCR_FRAMESZ_SHIFT                  (0U)
/*! FRAMESZ - Frame Size */
#define LPSPI_TCR_FRAMESZ(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_FRAMESZ_SHIFT)) & LPSPI_TCR_FRAMESZ_MASK)

#define LPSPI_TCR_WIDTH_MASK                     (0x30000U)
#define LPSPI_TCR_WIDTH_SHIFT                    (16U)
/*! WIDTH - Transfer Width
 *  0b00..1-bit transfer
 *  0b01..2-bit transfer
 *  0b10..4-bit transfer
 *  0b11..Reserved
 */
#define LPSPI_TCR_WIDTH(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_WIDTH_SHIFT)) & LPSPI_TCR_WIDTH_MASK)

#define LPSPI_TCR_TXMSK_MASK                     (0x40000U)
#define LPSPI_TCR_TXMSK_SHIFT                    (18U)
/*! TXMSK - Transmit Data Mask
 *  0b0..Normal transfer
 *  0b1..Mask transmit data
 */
#define LPSPI_TCR_TXMSK(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_TXMSK_SHIFT)) & LPSPI_TCR_TXMSK_MASK)

#define LPSPI_TCR_RXMSK_MASK                     (0x80000U)
#define LPSPI_TCR_RXMSK_SHIFT                    (19U)
/*! RXMSK - Receive Data Mask
 *  0b0..Normal transfer
 *  0b1..Mask receive data
 */
#define LPSPI_TCR_RXMSK(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_RXMSK_SHIFT)) & LPSPI_TCR_RXMSK_MASK)

#define LPSPI_TCR_CONTC_MASK                     (0x100000U)
#define LPSPI_TCR_CONTC_SHIFT                    (20U)
/*! CONTC - Continuing Command
 *  0b0..Command word for start of new transfer
 *  0b1..Command word for continuing transfer
 */
#define LPSPI_TCR_CONTC(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_CONTC_SHIFT)) & LPSPI_TCR_CONTC_MASK)

#define LPSPI_TCR_CONT_MASK                      (0x200000U)
#define LPSPI_TCR_CONT_SHIFT                     (21U)
/*! CONT - Continuous Transfer
 *  0b0..Disable
 *  0b1..Enable
 */
#define LPSPI_TCR_CONT(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_CONT_SHIFT)) & LPSPI_TCR_CONT_MASK)

#define LPSPI_TCR_BYSW_MASK                      (0x400000U)
#define LPSPI_TCR_BYSW_SHIFT                     (22U)
/*! BYSW - Byte Swap
 *  0b0..Disable byte swap
 *  0b1..Enable byte swap
 */
#define LPSPI_TCR_BYSW(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_BYSW_SHIFT)) & LPSPI_TCR_BYSW_MASK)

#define LPSPI_TCR_LSBF_MASK                      (0x800000U)
#define LPSPI_TCR_LSBF_SHIFT                     (23U)
/*! LSBF - LSB First
 *  0b0..MSB first
 *  0b1..LSB first
 */
#define LPSPI_TCR_LSBF(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_LSBF_SHIFT)) & LPSPI_TCR_LSBF_MASK)

#define LPSPI_TCR_PCS_MASK                       (0x3000000U)
#define LPSPI_TCR_PCS_SHIFT                      (24U)
/*! PCS - Peripheral Chip Select
 *  0b00..Transfer using PCS[0]
 *  0b01..Transfer using PCS[1]
 *  0b10..Transfer using PCS[2]
 *  0b11..Transfer using PCS[3]
 */
#define LPSPI_TCR_PCS(x)                         (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_PCS_SHIFT)) & LPSPI_TCR_PCS_MASK)

#define LPSPI_TCR_PRESCALE_MASK                  (0x38000000U)
#define LPSPI_TCR_PRESCALE_SHIFT                 (27U)
/*! PRESCALE - Prescaler Value
 *  0b000..Divide by 1
 *  0b001..Divide by 2
 *  0b010..Divide by 4
 *  0b011..Divide by 8
 *  0b100..Divide by 16
 *  0b101..Divide by 32
 *  0b110..Divide by 64
 *  0b111..Divide by 128
 */
#define LPSPI_TCR_PRESCALE(x)                    (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_PRESCALE_SHIFT)) & LPSPI_TCR_PRESCALE_MASK)

#define LPSPI_TCR_CPHA_MASK                      (0x40000000U)
#define LPSPI_TCR_CPHA_SHIFT                     (30U)
/*! CPHA - Clock Phase
 *  0b0..Captured
 *  0b1..Changed
 */
#define LPSPI_TCR_CPHA(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_CPHA_SHIFT)) & LPSPI_TCR_CPHA_MASK)

#define LPSPI_TCR_CPOL_MASK                      (0x80000000U)
#define LPSPI_TCR_CPOL_SHIFT                     (31U)
/*! CPOL - Clock Polarity
 *  0b0..Inactive low
 *  0b1..Inactive high
 */
#define LPSPI_TCR_CPOL(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TCR_CPOL_SHIFT)) & LPSPI_TCR_CPOL_MASK)
/*! @} */

/*! @name TDR - Transmit Data */
/*! @{ */

#define LPSPI_TDR_DATA_MASK                      (0xFFFFFFFFU)
#define LPSPI_TDR_DATA_SHIFT                     (0U)
/*! DATA - Transmit Data */
#define LPSPI_TDR_DATA(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_TDR_DATA_SHIFT)) & LPSPI_TDR_DATA_MASK)
/*! @} */

/*! @name RSR - Receive Status */
/*! @{ */

#define LPSPI_RSR_SOF_MASK                       (0x1U)
#define LPSPI_RSR_SOF_SHIFT                      (0U)
/*! SOF - Start of Frame
 *  0b0..Subsequent data word or RX FIFO is empty (RXEMPTY=1).
 *  0b1..First data word
 */
#define LPSPI_RSR_SOF(x)                         (((uint32_t)(((uint32_t)(x)) << LPSPI_RSR_SOF_SHIFT)) & LPSPI_RSR_SOF_MASK)

#define LPSPI_RSR_RXEMPTY_MASK                   (0x2U)
#define LPSPI_RSR_RXEMPTY_SHIFT                  (1U)
/*! RXEMPTY - RX FIFO Empty
 *  0b0..Not empty
 *  0b1..Empty
 */
#define LPSPI_RSR_RXEMPTY(x)                     (((uint32_t)(((uint32_t)(x)) << LPSPI_RSR_RXEMPTY_SHIFT)) & LPSPI_RSR_RXEMPTY_MASK)
/*! @} */

/*! @name RDR - Receive Data */
/*! @{ */

#define LPSPI_RDR_DATA_MASK                      (0xFFFFFFFFU)
#define LPSPI_RDR_DATA_SHIFT                     (0U)
/*! DATA - Receive Data */
#define LPSPI_RDR_DATA(x)                        (((uint32_t)(((uint32_t)(x)) << LPSPI_RDR_DATA_SHIFT)) & LPSPI_RDR_DATA_MASK)
/*! @} */

/*! @name RDROR - Receive Data Read Only */
/*! @{ */

#define LPSPI_RDROR_DATA_MASK                    (0xFFFFFFFFU)
#define LPSPI_RDROR_DATA_SHIFT                   (0U)
/*! DATA - Receive Data */
#define LPSPI_RDROR_DATA(x)                      (((uint32_t)(((uint32_t)(x)) << LPSPI_RDROR_DATA_SHIFT)) & LPSPI_RDROR_DATA_MASK)
/*! @} */

/*! @name TCBR - Transmit Command Burst */
/*! @{ */

#define LPSPI_TCBR_DATA_MASK                     (0xFFFFFFFFU)
#define LPSPI_TCBR_DATA_SHIFT                    (0U)
/*! DATA - Command Data */
#define LPSPI_TCBR_DATA(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TCBR_DATA_SHIFT)) & LPSPI_TCBR_DATA_MASK)
/*! @} */

/*! @name TDBR - Transmit Data Burst */
/*! @{ */

#define LPSPI_TDBR_DATA_MASK                     (0xFFFFFFFFU)
#define LPSPI_TDBR_DATA_SHIFT                    (0U)
/*! DATA - Data */
#define LPSPI_TDBR_DATA(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_TDBR_DATA_SHIFT)) & LPSPI_TDBR_DATA_MASK)
/*! @} */

/*! @name RDBR - Receive Data Burst */
/*! @{ */

#define LPSPI_RDBR_DATA_MASK                     (0xFFFFFFFFU)
#define LPSPI_RDBR_DATA_SHIFT                    (0U)
/*! DATA - Data */
#define LPSPI_RDBR_DATA(x)                       (((uint32_t)(((uint32_t)(x)) << LPSPI_RDBR_DATA_SHIFT)) & LPSPI_RDBR_DATA_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group LPSPI_Register_Masks */


/*!
 * @}
 */ /* end of group LPSPI_Peripheral_Access_Layer */


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


#endif  /* PERI_LPSPI_H_ */

