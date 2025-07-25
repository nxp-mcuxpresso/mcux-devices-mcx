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
**         CMSIS Peripheral Access Layer for CAN
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
 * @file PERI_CAN.h
 * @version 2.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for CAN
 *
 * CMSIS Peripheral Access Layer for CAN
 */

#if !defined(PERI_CAN_H_)
#define PERI_CAN_H_                              /**< Symbol preventing repeated inclusion */

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
   -- CAN Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CAN_Peripheral_Access_Layer CAN Peripheral Access Layer
 * @{
 */

/** CAN - Size of Registers Arrays */
#define CAN_MB_SIZE_MB_8B_GROUP_MB_8B_WORD_8B_COUNT 2u
#define CAN_MB_SIZE_MB_8B_GROUP_MB_8B_COUNT       32u
#define CAN_MB_SIZE_MB_16B_GROUP_MB_16B_WORD_16B_COUNT 4u
#define CAN_MB_SIZE_MB_16B_GROUP_MB_16B_COUNT     21u
#define CAN_MB_SIZE_MB_32B_GROUP_MB_32B_WORD_32B_COUNT 8u
#define CAN_MB_SIZE_MB_32B_GROUP_MB_32B_COUNT     12u
#define CAN_MB_SIZE_MB_64B_GROUP_MB_64B_WORD_64B_COUNT 16u
#define CAN_MB_SIZE_MB_64B_GROUP_MB_64B_COUNT     7u
#define CAN_MB_SIZE_MB_GROUP_MB_COUNT             32u
#define CAN_RXIMR_COUNT                           32u
#define CAN_WMB_COUNT                             4u
#define CAN_ERFFEL_COUNT                          32u

/** CAN - Register Layout Typedef */
typedef struct {
  __IO uint32_t MCR;                               /**< Module Configuration Register, offset: 0x0 */
  __IO uint32_t CTRL1;                             /**< Control 1 Register, offset: 0x4 */
  __IO uint32_t TIMER;                             /**< Free Running Timer, offset: 0x8 */
       uint8_t RESERVED_0[4];
  __IO uint32_t RXMGMASK;                          /**< Rx Mailboxes Global Mask Register, offset: 0x10 */
  __IO uint32_t RX14MASK;                          /**< Rx 14 Mask Register, offset: 0x14 */
  __IO uint32_t RX15MASK;                          /**< Rx 15 Mask Register, offset: 0x18 */
  __IO uint32_t ECR;                               /**< Error Counter, offset: 0x1C */
  __IO uint32_t ESR1;                              /**< Error and Status 1 Register, offset: 0x20 */
       uint8_t RESERVED_1[4];
  __IO uint32_t IMASK1;                            /**< Interrupt Masks 1 Register, offset: 0x28 */
       uint8_t RESERVED_2[4];
  __IO uint32_t IFLAG1;                            /**< Interrupt Flags 1 Register, offset: 0x30 */
  __IO uint32_t CTRL2;                             /**< Control 2 Register, offset: 0x34 */
  __I  uint32_t ESR2;                              /**< Error and Status 2 Register, offset: 0x38 */
       uint8_t RESERVED_3[8];
  __I  uint32_t CRCR;                              /**< CRC Register, offset: 0x44 */
  __IO uint32_t RXFGMASK;                          /**< Legacy Rx FIFO Global Mask Register, offset: 0x48 */
  __I  uint32_t RXFIR;                             /**< Legacy Rx FIFO Information Register, offset: 0x4C */
  __IO uint32_t CBT;                               /**< CAN Bit Timing Register, offset: 0x50 */
       uint8_t RESERVED_4[44];
  union {                                          /* offset: 0x80 */
    struct {                                         /* offset: 0x80, array step: 0x10 */
      __IO uint32_t CS;                                /**< Message Buffer 0 CS Register..Message Buffer 31 CS Register, array offset: 0x80, array step: 0x10 */
      __IO uint32_t ID;                                /**< Message Buffer 0 ID Register..Message Buffer 31 ID Register, array offset: 0x84, array step: 0x10 */
      __IO uint32_t WORD[CAN_MB_SIZE_MB_8B_GROUP_MB_8B_WORD_8B_COUNT];     /**< Message Buffer 0 WORD_8B Register..Message Buffer 31 WORD_8B Register, array offset: 0x88, array step: index*0x10, index2*0x4 */
    } MB_8B[CAN_MB_SIZE_MB_8B_GROUP_MB_8B_COUNT];
    struct {                                         /* offset: 0x80, array step: 0x18 */
      __IO uint32_t CS;                                /**< Message Buffer 0 CS Register..Message Buffer 20 CS Register, array offset: 0x80, array step: 0x18 */
      __IO uint32_t ID;                                /**< Message Buffer 0 ID Register..Message Buffer 20 ID Register, array offset: 0x84, array step: 0x18 */
      __IO uint32_t WORD[CAN_MB_SIZE_MB_16B_GROUP_MB_16B_WORD_16B_COUNT];     /**< Message Buffer 0 WORD_16B Register..Message Buffer 20 WORD_16B Register, array offset: 0x88, array step: index*0x18, index2*0x4 */
    } MB_16B[CAN_MB_SIZE_MB_16B_GROUP_MB_16B_COUNT];
    struct {                                         /* offset: 0x80, array step: 0x28 */
      __IO uint32_t CS;                                /**< Message Buffer 0 CS Register..Message Buffer 11 CS Register, array offset: 0x80, array step: 0x28 */
      __IO uint32_t ID;                                /**< Message Buffer 0 ID Register..Message Buffer 11 ID Register, array offset: 0x84, array step: 0x28 */
      __IO uint32_t WORD[CAN_MB_SIZE_MB_32B_GROUP_MB_32B_WORD_32B_COUNT];     /**< Message Buffer 0 WORD_32B Register..Message Buffer 11 WORD_32B Register, array offset: 0x88, array step: index*0x28, index2*0x4 */
    } MB_32B[CAN_MB_SIZE_MB_32B_GROUP_MB_32B_COUNT];
    struct {                                         /* offset: 0x80, array step: 0x48 */
      __IO uint32_t CS;                                /**< Message Buffer 0 CS Register..Message Buffer 6 CS Register, array offset: 0x80, array step: 0x48 */
      __IO uint32_t ID;                                /**< Message Buffer 0 ID Register..Message Buffer 6 ID Register, array offset: 0x84, array step: 0x48 */
      __IO uint32_t WORD[CAN_MB_SIZE_MB_64B_GROUP_MB_64B_WORD_64B_COUNT];     /**< Message Buffer 0 WORD_64B Register..Message Buffer 6 WORD_64B Register, array offset: 0x88, array step: index*0x48, index2*0x4 */
    } MB_64B[CAN_MB_SIZE_MB_64B_GROUP_MB_64B_COUNT];
    struct {                                         /* offset: 0x80, array step: 0x10 */
      __IO uint32_t CS;                                /**< Message Buffer 0 CS Register..Message Buffer 31 CS Register, array offset: 0x80, array step: 0x10 */
      __IO uint32_t ID;                                /**< Message Buffer 0 ID Register..Message Buffer 31 ID Register, array offset: 0x84, array step: 0x10 */
      __IO uint32_t WORD0;                             /**< Message Buffer 0 WORD0 Register..Message Buffer 31 WORD0 Register, array offset: 0x88, array step: 0x10 */
      __IO uint32_t WORD1;                             /**< Message Buffer 0 WORD1 Register..Message Buffer 31 WORD1 Register, array offset: 0x8C, array step: 0x10 */
    } MB[CAN_MB_SIZE_MB_GROUP_MB_COUNT];
  };
       uint8_t RESERVED_5[1536];
  __IO uint32_t RXIMR[CAN_RXIMR_COUNT];            /**< Rx Individual Mask Registers, array offset: 0x880, array step: 0x4 */
       uint8_t RESERVED_6[512];
  __IO uint32_t CTRL1_PN;                          /**< Pretended Networking Control 1 Register, offset: 0xB00 */
  __IO uint32_t CTRL2_PN;                          /**< Pretended Networking Control 2 Register, offset: 0xB04 */
  __IO uint32_t WU_MTC;                            /**< Pretended Networking Wake Up Match Register, offset: 0xB08 */
  __IO uint32_t FLT_ID1;                           /**< Pretended Networking ID Filter 1 Register, offset: 0xB0C */
  __IO uint32_t FLT_DLC;                           /**< Pretended Networking DLC Filter Register, offset: 0xB10 */
  __IO uint32_t PL1_LO;                            /**< Pretended Networking Payload Low Filter 1 Register, offset: 0xB14 */
  __IO uint32_t PL1_HI;                            /**< Pretended Networking Payload High Filter 1 Register, offset: 0xB18 */
  __IO uint32_t FLT_ID2_IDMASK;                    /**< Pretended Networking ID Filter 2 Register / ID Mask Register, offset: 0xB1C */
  __IO uint32_t PL2_PLMASK_LO;                     /**< Pretended Networking Payload Low Filter 2 Register / Payload Low Mask register, offset: 0xB20 */
  __IO uint32_t PL2_PLMASK_HI;                     /**< Pretended Networking Payload High Filter 2 low order bits / Payload High Mask register, offset: 0xB24 */
       uint8_t RESERVED_7[24];
  struct {                                         /* offset: 0xB40, array step: 0x10 */
    __I  uint32_t CS;                                /**< Wake Up Message Buffer register for C/S, array offset: 0xB40, array step: 0x10 */
    __I  uint32_t ID;                                /**< Wake Up Message Buffer Register for ID, array offset: 0xB44, array step: 0x10 */
    __I  uint32_t D03;                               /**< Wake Up Message Buffer Register for Data 0-3, array offset: 0xB48, array step: 0x10 */
    __I  uint32_t D47;                               /**< Wake Up Message Buffer Register Data 4-7, array offset: 0xB4C, array step: 0x10 */
  } WMB[CAN_WMB_COUNT];
       uint8_t RESERVED_8[112];
  __IO uint32_t EPRS;                              /**< Enhanced CAN Bit Timing Prescalers, offset: 0xBF0 */
  __IO uint32_t ENCBT;                             /**< Enhanced Nominal CAN Bit Timing, offset: 0xBF4 */
  __IO uint32_t EDCBT;                             /**< Enhanced Data Phase CAN bit Timing, offset: 0xBF8 */
  __IO uint32_t ETDC;                              /**< Enhanced Transceiver Delay Compensation, offset: 0xBFC */
  __IO uint32_t FDCTRL;                            /**< CAN FD Control Register, offset: 0xC00 */
  __IO uint32_t FDCBT;                             /**< CAN FD Bit Timing Register, offset: 0xC04 */
  __I  uint32_t FDCRC;                             /**< CAN FD CRC Register, offset: 0xC08 */
  __IO uint32_t ERFCR;                             /**< Enhanced Rx FIFO Control Register, offset: 0xC0C */
  __IO uint32_t ERFIER;                            /**< Enhanced Rx FIFO Interrupt Enable Register, offset: 0xC10 */
  __IO uint32_t ERFSR;                             /**< Enhanced Rx FIFO Status Register, offset: 0xC14 */
       uint8_t RESERVED_9[9192];
  __IO uint32_t ERFFEL[CAN_ERFFEL_COUNT];          /**< Enhanced Rx FIFO Filter Element, array offset: 0x3000, array step: 0x4 */
} CAN_Type;

/* ----------------------------------------------------------------------------
   -- CAN Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CAN_Register_Masks CAN Register Masks
 * @{
 */

/*! @name MCR - Module Configuration Register */
/*! @{ */

#define CAN_MCR_MAXMB_MASK                       (0x7FU)
#define CAN_MCR_MAXMB_SHIFT                      (0U)
/*! MAXMB - Number Of The Last Message Buffer */
#define CAN_MCR_MAXMB(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_MCR_MAXMB_SHIFT)) & CAN_MCR_MAXMB_MASK)

#define CAN_MCR_IDAM_MASK                        (0x300U)
#define CAN_MCR_IDAM_SHIFT                       (8U)
/*! IDAM - ID Acceptance Mode
 *  0b00..Format A: One full ID (standard and extended) per ID filter table element.
 *  0b01..Format B: Two full standard IDs or two partial 14-bit (standard and extended) IDs per ID filter table element.
 *  0b10..Format C: Four partial 8-bit standard IDs per ID filter table element.
 *  0b11..Format D: All frames rejected.
 */
#define CAN_MCR_IDAM(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_IDAM_SHIFT)) & CAN_MCR_IDAM_MASK)

#define CAN_MCR_FDEN_MASK                        (0x800U)
#define CAN_MCR_FDEN_SHIFT                       (11U)
/*! FDEN - CAN FD operation enable
 *  0b0..CAN FD is disabled. FlexCAN is able to receive and transmit messages in CAN 2.0 format.
 *  0b1..CAN FD is enabled. FlexCAN is able to receive and transmit messages in both CAN FD and CAN 2.0 formats.
 */
#define CAN_MCR_FDEN(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_FDEN_SHIFT)) & CAN_MCR_FDEN_MASK)

#define CAN_MCR_AEN_MASK                         (0x1000U)
#define CAN_MCR_AEN_SHIFT                        (12U)
/*! AEN - Abort Enable
 *  0b0..Abort disabled.
 *  0b1..Abort enabled.
 */
#define CAN_MCR_AEN(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_MCR_AEN_SHIFT)) & CAN_MCR_AEN_MASK)

#define CAN_MCR_LPRIOEN_MASK                     (0x2000U)
#define CAN_MCR_LPRIOEN_SHIFT                    (13U)
/*! LPRIOEN - Local Priority Enable
 *  0b0..Local Priority disabled.
 *  0b1..Local Priority enabled.
 */
#define CAN_MCR_LPRIOEN(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_MCR_LPRIOEN_SHIFT)) & CAN_MCR_LPRIOEN_MASK)

#define CAN_MCR_PNET_EN_MASK                     (0x4000U)
#define CAN_MCR_PNET_EN_SHIFT                    (14U)
/*! PNET_EN - Pretended Networking Enable
 *  0b0..Pretended Networking mode is disabled.
 *  0b1..Pretended Networking mode is enabled.
 */
#define CAN_MCR_PNET_EN(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_MCR_PNET_EN_SHIFT)) & CAN_MCR_PNET_EN_MASK)

#define CAN_MCR_DMA_MASK                         (0x8000U)
#define CAN_MCR_DMA_SHIFT                        (15U)
/*! DMA - DMA Enable
 *  0b0..DMA feature for Legacy RX FIFO or Enhanced Rx FIFO disabled.
 *  0b1..DMA feature for Legacy RX FIFO or Enhanced Rx FIFO enabled.
 */
#define CAN_MCR_DMA(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_MCR_DMA_SHIFT)) & CAN_MCR_DMA_MASK)

#define CAN_MCR_IRMQ_MASK                        (0x10000U)
#define CAN_MCR_IRMQ_SHIFT                       (16U)
/*! IRMQ - Individual Rx Masking And Queue Enable
 *  0b0..Individual Rx masking and queue feature are disabled. For backward compatibility with legacy
 *       applications, the reading of C/S word locks the MB even if it is EMPTY.
 *  0b1..Individual Rx masking and queue feature are enabled.
 */
#define CAN_MCR_IRMQ(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_IRMQ_SHIFT)) & CAN_MCR_IRMQ_MASK)

#define CAN_MCR_SRXDIS_MASK                      (0x20000U)
#define CAN_MCR_SRXDIS_SHIFT                     (17U)
/*! SRXDIS - Self Reception Disable
 *  0b0..Self-reception enabled.
 *  0b1..Self-reception disabled.
 */
#define CAN_MCR_SRXDIS(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_SRXDIS_SHIFT)) & CAN_MCR_SRXDIS_MASK)

#define CAN_MCR_DOZE_MASK                        (0x40000U)
#define CAN_MCR_DOZE_SHIFT                       (18U)
/*! DOZE - Doze Mode Enable
 *  0b0..FlexCAN is not enabled to enter low-power mode when Doze mode is requested.
 *  0b1..FlexCAN is enabled to enter low-power mode when Doze mode is requested.
 */
#define CAN_MCR_DOZE(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_DOZE_SHIFT)) & CAN_MCR_DOZE_MASK)

#define CAN_MCR_WAKSRC_MASK                      (0x80000U)
#define CAN_MCR_WAKSRC_SHIFT                     (19U)
/*! WAKSRC - Wake Up Source
 *  0b0..FlexCAN uses the unfiltered Rx input to detect recessive to dominant edges on the CAN bus.
 *  0b1..FlexCAN uses the filtered Rx input to detect recessive to dominant edges on the CAN bus.
 */
#define CAN_MCR_WAKSRC(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_WAKSRC_SHIFT)) & CAN_MCR_WAKSRC_MASK)

#define CAN_MCR_LPMACK_MASK                      (0x100000U)
#define CAN_MCR_LPMACK_SHIFT                     (20U)
/*! LPMACK - Low-Power Mode Acknowledge
 *  0b0..FlexCAN is not in a low-power mode.
 *  0b1..FlexCAN is in a low-power mode.
 */
#define CAN_MCR_LPMACK(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_LPMACK_SHIFT)) & CAN_MCR_LPMACK_MASK)

#define CAN_MCR_WRNEN_MASK                       (0x200000U)
#define CAN_MCR_WRNEN_SHIFT                      (21U)
/*! WRNEN - Warning Interrupt Enable
 *  0b0..TWRNINT and RWRNINT bits are zero, independent of the values in the error counters.
 *  0b1..TWRNINT and RWRNINT bits are set when the respective error counter transitions from less than 96 to greater than or equal to 96.
 */
#define CAN_MCR_WRNEN(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_MCR_WRNEN_SHIFT)) & CAN_MCR_WRNEN_MASK)

#define CAN_MCR_SLFWAK_MASK                      (0x400000U)
#define CAN_MCR_SLFWAK_SHIFT                     (22U)
/*! SLFWAK - Self Wake Up
 *  0b0..FlexCAN Self Wake Up feature is disabled.
 *  0b1..FlexCAN Self Wake Up feature is enabled.
 */
#define CAN_MCR_SLFWAK(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_SLFWAK_SHIFT)) & CAN_MCR_SLFWAK_MASK)

#define CAN_MCR_FRZACK_MASK                      (0x1000000U)
#define CAN_MCR_FRZACK_SHIFT                     (24U)
/*! FRZACK - Freeze Mode Acknowledge
 *  0b0..FlexCAN not in Freeze mode, prescaler running.
 *  0b1..FlexCAN in Freeze mode, prescaler stopped.
 */
#define CAN_MCR_FRZACK(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_FRZACK_SHIFT)) & CAN_MCR_FRZACK_MASK)

#define CAN_MCR_SOFTRST_MASK                     (0x2000000U)
#define CAN_MCR_SOFTRST_SHIFT                    (25U)
/*! SOFTRST - Soft Reset
 *  0b0..No reset request.
 *  0b1..Resets the registers affected by soft reset.
 */
#define CAN_MCR_SOFTRST(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_MCR_SOFTRST_SHIFT)) & CAN_MCR_SOFTRST_MASK)

#define CAN_MCR_WAKMSK_MASK                      (0x4000000U)
#define CAN_MCR_WAKMSK_SHIFT                     (26U)
/*! WAKMSK - Wake Up Interrupt Mask
 *  0b0..Wake Up interrupt is disabled.
 *  0b1..Wake Up interrupt is enabled.
 */
#define CAN_MCR_WAKMSK(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_WAKMSK_SHIFT)) & CAN_MCR_WAKMSK_MASK)

#define CAN_MCR_NOTRDY_MASK                      (0x8000000U)
#define CAN_MCR_NOTRDY_SHIFT                     (27U)
/*! NOTRDY - FlexCAN Not Ready
 *  0b0..FlexCAN module is either in Normal mode, Listen-Only mode, or Loop-Back mode.
 *  0b1..FlexCAN module is either in Disable mode, Doze mode, Stop mode, or Freeze mode.
 */
#define CAN_MCR_NOTRDY(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_MCR_NOTRDY_SHIFT)) & CAN_MCR_NOTRDY_MASK)

#define CAN_MCR_HALT_MASK                        (0x10000000U)
#define CAN_MCR_HALT_SHIFT                       (28U)
/*! HALT - Halt FlexCAN
 *  0b0..No Freeze mode request.
 *  0b1..Enters Freeze mode if the FRZ bit is asserted.
 */
#define CAN_MCR_HALT(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_HALT_SHIFT)) & CAN_MCR_HALT_MASK)

#define CAN_MCR_RFEN_MASK                        (0x20000000U)
#define CAN_MCR_RFEN_SHIFT                       (29U)
/*! RFEN - Legacy Rx FIFO Enable
 *  0b0..Legacy Rx FIFO not enabled.
 *  0b1..Legacy Rx FIFO enabled.
 */
#define CAN_MCR_RFEN(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_RFEN_SHIFT)) & CAN_MCR_RFEN_MASK)

#define CAN_MCR_FRZ_MASK                         (0x40000000U)
#define CAN_MCR_FRZ_SHIFT                        (30U)
/*! FRZ - Freeze Enable
 *  0b0..Not enabled to enter Freeze mode.
 *  0b1..Enabled to enter Freeze mode.
 */
#define CAN_MCR_FRZ(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_MCR_FRZ_SHIFT)) & CAN_MCR_FRZ_MASK)

#define CAN_MCR_MDIS_MASK                        (0x80000000U)
#define CAN_MCR_MDIS_SHIFT                       (31U)
/*! MDIS - Module Disable
 *  0b0..Enable the FlexCAN module.
 *  0b1..Disable the FlexCAN module.
 */
#define CAN_MCR_MDIS(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_MCR_MDIS_SHIFT)) & CAN_MCR_MDIS_MASK)
/*! @} */

/*! @name CTRL1 - Control 1 Register */
/*! @{ */

#define CAN_CTRL1_PROPSEG_MASK                   (0x7U)
#define CAN_CTRL1_PROPSEG_SHIFT                  (0U)
/*! PROPSEG - Propagation Segment */
#define CAN_CTRL1_PROPSEG(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PROPSEG_SHIFT)) & CAN_CTRL1_PROPSEG_MASK)

#define CAN_CTRL1_LOM_MASK                       (0x8U)
#define CAN_CTRL1_LOM_SHIFT                      (3U)
/*! LOM - Listen-Only Mode
 *  0b0..Listen-Only mode is deactivated.
 *  0b1..FlexCAN module operates in Listen-Only mode.
 */
#define CAN_CTRL1_LOM(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_LOM_SHIFT)) & CAN_CTRL1_LOM_MASK)

#define CAN_CTRL1_LBUF_MASK                      (0x10U)
#define CAN_CTRL1_LBUF_SHIFT                     (4U)
/*! LBUF - Lowest Buffer Transmitted First
 *  0b0..Buffer with highest priority is transmitted first.
 *  0b1..Lowest number buffer is transmitted first.
 */
#define CAN_CTRL1_LBUF(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_LBUF_SHIFT)) & CAN_CTRL1_LBUF_MASK)

#define CAN_CTRL1_TSYN_MASK                      (0x20U)
#define CAN_CTRL1_TSYN_SHIFT                     (5U)
/*! TSYN - Timer Sync
 *  0b0..Timer sync feature disabled
 *  0b1..Timer sync feature enabled
 */
#define CAN_CTRL1_TSYN(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_TSYN_SHIFT)) & CAN_CTRL1_TSYN_MASK)

#define CAN_CTRL1_BOFFREC_MASK                   (0x40U)
#define CAN_CTRL1_BOFFREC_SHIFT                  (6U)
/*! BOFFREC - Bus Off Recovery
 *  0b0..Automatic recovering from Bus Off state enabled.
 *  0b1..Automatic recovering from Bus Off state disabled.
 */
#define CAN_CTRL1_BOFFREC(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_BOFFREC_SHIFT)) & CAN_CTRL1_BOFFREC_MASK)

#define CAN_CTRL1_SMP_MASK                       (0x80U)
#define CAN_CTRL1_SMP_SHIFT                      (7U)
/*! SMP - CAN Bit Sampling
 *  0b0..Just one sample is used to determine the bit value.
 *  0b1..Three samples are used to determine the value of the received bit: the regular one (sample point) and two
 *       preceding samples; a majority rule is used.
 */
#define CAN_CTRL1_SMP(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_SMP_SHIFT)) & CAN_CTRL1_SMP_MASK)

#define CAN_CTRL1_RWRNMSK_MASK                   (0x400U)
#define CAN_CTRL1_RWRNMSK_SHIFT                  (10U)
/*! RWRNMSK - Rx Warning Interrupt Mask
 *  0b0..Rx Warning interrupt disabled.
 *  0b1..Rx Warning interrupt enabled.
 */
#define CAN_CTRL1_RWRNMSK(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_RWRNMSK_SHIFT)) & CAN_CTRL1_RWRNMSK_MASK)

#define CAN_CTRL1_TWRNMSK_MASK                   (0x800U)
#define CAN_CTRL1_TWRNMSK_SHIFT                  (11U)
/*! TWRNMSK - Tx Warning Interrupt Mask
 *  0b0..Tx Warning interrupt disabled.
 *  0b1..Tx Warning interrupt enabled.
 */
#define CAN_CTRL1_TWRNMSK(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_TWRNMSK_SHIFT)) & CAN_CTRL1_TWRNMSK_MASK)

#define CAN_CTRL1_LPB_MASK                       (0x1000U)
#define CAN_CTRL1_LPB_SHIFT                      (12U)
/*! LPB - Loop Back Mode
 *  0b0..Loop Back disabled.
 *  0b1..Loop Back enabled.
 */
#define CAN_CTRL1_LPB(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_LPB_SHIFT)) & CAN_CTRL1_LPB_MASK)

#define CAN_CTRL1_ERRMSK_MASK                    (0x4000U)
#define CAN_CTRL1_ERRMSK_SHIFT                   (14U)
/*! ERRMSK - Error Interrupt Mask
 *  0b0..Error interrupt disabled.
 *  0b1..Error interrupt enabled.
 */
#define CAN_CTRL1_ERRMSK(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_ERRMSK_SHIFT)) & CAN_CTRL1_ERRMSK_MASK)

#define CAN_CTRL1_BOFFMSK_MASK                   (0x8000U)
#define CAN_CTRL1_BOFFMSK_SHIFT                  (15U)
/*! BOFFMSK - Bus Off Interrupt Mask
 *  0b0..Bus Off interrupt disabled.
 *  0b1..Bus Off interrupt enabled.
 */
#define CAN_CTRL1_BOFFMSK(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_BOFFMSK_SHIFT)) & CAN_CTRL1_BOFFMSK_MASK)

#define CAN_CTRL1_PSEG2_MASK                     (0x70000U)
#define CAN_CTRL1_PSEG2_SHIFT                    (16U)
/*! PSEG2 - Phase Segment 2 */
#define CAN_CTRL1_PSEG2(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PSEG2_SHIFT)) & CAN_CTRL1_PSEG2_MASK)

#define CAN_CTRL1_PSEG1_MASK                     (0x380000U)
#define CAN_CTRL1_PSEG1_SHIFT                    (19U)
/*! PSEG1 - Phase Segment 1 */
#define CAN_CTRL1_PSEG1(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PSEG1_SHIFT)) & CAN_CTRL1_PSEG1_MASK)

#define CAN_CTRL1_RJW_MASK                       (0xC00000U)
#define CAN_CTRL1_RJW_SHIFT                      (22U)
/*! RJW - Resync Jump Width */
#define CAN_CTRL1_RJW(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_RJW_SHIFT)) & CAN_CTRL1_RJW_MASK)

#define CAN_CTRL1_PRESDIV_MASK                   (0xFF000000U)
#define CAN_CTRL1_PRESDIV_SHIFT                  (24U)
/*! PRESDIV - Prescaler Division Factor */
#define CAN_CTRL1_PRESDIV(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PRESDIV_SHIFT)) & CAN_CTRL1_PRESDIV_MASK)
/*! @} */

/*! @name TIMER - Free Running Timer */
/*! @{ */

#define CAN_TIMER_TIMER_MASK                     (0xFFFFU)
#define CAN_TIMER_TIMER_SHIFT                    (0U)
/*! TIMER - Timer Value */
#define CAN_TIMER_TIMER(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_TIMER_TIMER_SHIFT)) & CAN_TIMER_TIMER_MASK)
/*! @} */

/*! @name RXMGMASK - Rx Mailboxes Global Mask Register */
/*! @{ */

#define CAN_RXMGMASK_MG_MASK                     (0xFFFFFFFFU)
#define CAN_RXMGMASK_MG_SHIFT                    (0U)
/*! MG - Rx Mailboxes Global Mask Bits */
#define CAN_RXMGMASK_MG(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_RXMGMASK_MG_SHIFT)) & CAN_RXMGMASK_MG_MASK)
/*! @} */

/*! @name RX14MASK - Rx 14 Mask Register */
/*! @{ */

#define CAN_RX14MASK_RX14M_MASK                  (0xFFFFFFFFU)
#define CAN_RX14MASK_RX14M_SHIFT                 (0U)
/*! RX14M - Rx Buffer 14 Mask Bits */
#define CAN_RX14MASK_RX14M(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_RX14MASK_RX14M_SHIFT)) & CAN_RX14MASK_RX14M_MASK)
/*! @} */

/*! @name RX15MASK - Rx 15 Mask Register */
/*! @{ */

#define CAN_RX15MASK_RX15M_MASK                  (0xFFFFFFFFU)
#define CAN_RX15MASK_RX15M_SHIFT                 (0U)
/*! RX15M - Rx Buffer 15 Mask Bits */
#define CAN_RX15MASK_RX15M(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_RX15MASK_RX15M_SHIFT)) & CAN_RX15MASK_RX15M_MASK)
/*! @} */

/*! @name ECR - Error Counter */
/*! @{ */

#define CAN_ECR_TXERRCNT_MASK                    (0xFFU)
#define CAN_ECR_TXERRCNT_SHIFT                   (0U)
/*! TXERRCNT - Transmit Error Counter */
#define CAN_ECR_TXERRCNT(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ECR_TXERRCNT_SHIFT)) & CAN_ECR_TXERRCNT_MASK)

#define CAN_ECR_RXERRCNT_MASK                    (0xFF00U)
#define CAN_ECR_RXERRCNT_SHIFT                   (8U)
/*! RXERRCNT - Receive Error Counter */
#define CAN_ECR_RXERRCNT(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ECR_RXERRCNT_SHIFT)) & CAN_ECR_RXERRCNT_MASK)

#define CAN_ECR_TXERRCNT_FAST_MASK               (0xFF0000U)
#define CAN_ECR_TXERRCNT_FAST_SHIFT              (16U)
/*! TXERRCNT_FAST - Transmit Error Counter for fast bits */
#define CAN_ECR_TXERRCNT_FAST(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_ECR_TXERRCNT_FAST_SHIFT)) & CAN_ECR_TXERRCNT_FAST_MASK)

#define CAN_ECR_RXERRCNT_FAST_MASK               (0xFF000000U)
#define CAN_ECR_RXERRCNT_FAST_SHIFT              (24U)
/*! RXERRCNT_FAST - Receive Error Counter for fast bits */
#define CAN_ECR_RXERRCNT_FAST(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_ECR_RXERRCNT_FAST_SHIFT)) & CAN_ECR_RXERRCNT_FAST_MASK)
/*! @} */

/*! @name ESR1 - Error and Status 1 Register */
/*! @{ */

#define CAN_ESR1_WAKINT_MASK                     (0x1U)
#define CAN_ESR1_WAKINT_SHIFT                    (0U)
/*! WAKINT - Wake-Up Interrupt
 *  0b0..No such occurrence.
 *  0b1..Indicates a recessive to dominant transition was received on the CAN bus.
 */
#define CAN_ESR1_WAKINT(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_WAKINT_SHIFT)) & CAN_ESR1_WAKINT_MASK)

#define CAN_ESR1_ERRINT_MASK                     (0x2U)
#define CAN_ESR1_ERRINT_SHIFT                    (1U)
/*! ERRINT - Error Interrupt
 *  0b0..No such occurrence.
 *  0b1..Indicates setting of any error bit in the Error and Status register.
 */
#define CAN_ESR1_ERRINT(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_ERRINT_SHIFT)) & CAN_ESR1_ERRINT_MASK)

#define CAN_ESR1_BOFFINT_MASK                    (0x4U)
#define CAN_ESR1_BOFFINT_SHIFT                   (2U)
/*! BOFFINT - Bus Off Interrupt
 *  0b0..No such occurrence.
 *  0b1..FlexCAN module entered Bus Off state.
 */
#define CAN_ESR1_BOFFINT(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BOFFINT_SHIFT)) & CAN_ESR1_BOFFINT_MASK)

#define CAN_ESR1_RX_MASK                         (0x8U)
#define CAN_ESR1_RX_SHIFT                        (3U)
/*! RX - FlexCAN In Reception
 *  0b0..FlexCAN is not receiving a message.
 *  0b1..FlexCAN is receiving a message.
 */
#define CAN_ESR1_RX(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_RX_SHIFT)) & CAN_ESR1_RX_MASK)

#define CAN_ESR1_FLTCONF_MASK                    (0x30U)
#define CAN_ESR1_FLTCONF_SHIFT                   (4U)
/*! FLTCONF - Fault Confinement State
 *  0b00..Error Active
 *  0b01..Error Passive
 *  0b1x..Bus Off
 */
#define CAN_ESR1_FLTCONF(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_FLTCONF_SHIFT)) & CAN_ESR1_FLTCONF_MASK)

#define CAN_ESR1_TX_MASK                         (0x40U)
#define CAN_ESR1_TX_SHIFT                        (6U)
/*! TX - FlexCAN In Transmission
 *  0b0..FlexCAN is not transmitting a message.
 *  0b1..FlexCAN is transmitting a message.
 */
#define CAN_ESR1_TX(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_TX_SHIFT)) & CAN_ESR1_TX_MASK)

#define CAN_ESR1_IDLE_MASK                       (0x80U)
#define CAN_ESR1_IDLE_SHIFT                      (7U)
/*! IDLE - IDLE
 *  0b0..No such occurrence.
 *  0b1..CAN bus is now IDLE.
 */
#define CAN_ESR1_IDLE(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_IDLE_SHIFT)) & CAN_ESR1_IDLE_MASK)

#define CAN_ESR1_RXWRN_MASK                      (0x100U)
#define CAN_ESR1_RXWRN_SHIFT                     (8U)
/*! RXWRN - Rx Error Warning
 *  0b0..No such occurrence.
 *  0b1..RXERRCNT is greater than or equal to 96.
 */
#define CAN_ESR1_RXWRN(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_RXWRN_SHIFT)) & CAN_ESR1_RXWRN_MASK)

#define CAN_ESR1_TXWRN_MASK                      (0x200U)
#define CAN_ESR1_TXWRN_SHIFT                     (9U)
/*! TXWRN - TX Error Warning
 *  0b0..No such occurrence.
 *  0b1..TXERRCNT is greater than or equal to 96.
 */
#define CAN_ESR1_TXWRN(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_TXWRN_SHIFT)) & CAN_ESR1_TXWRN_MASK)

#define CAN_ESR1_STFERR_MASK                     (0x400U)
#define CAN_ESR1_STFERR_SHIFT                    (10U)
/*! STFERR - Stuffing Error
 *  0b0..No such occurrence.
 *  0b1..A stuffing error occurred since last read of this register.
 */
#define CAN_ESR1_STFERR(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_STFERR_SHIFT)) & CAN_ESR1_STFERR_MASK)

#define CAN_ESR1_FRMERR_MASK                     (0x800U)
#define CAN_ESR1_FRMERR_SHIFT                    (11U)
/*! FRMERR - Form Error
 *  0b0..No such occurrence.
 *  0b1..A Form Error occurred since last read of this register.
 */
#define CAN_ESR1_FRMERR(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_FRMERR_SHIFT)) & CAN_ESR1_FRMERR_MASK)

#define CAN_ESR1_CRCERR_MASK                     (0x1000U)
#define CAN_ESR1_CRCERR_SHIFT                    (12U)
/*! CRCERR - Cyclic Redundancy Check Error
 *  0b0..No such occurrence.
 *  0b1..A CRC error occurred since last read of this register.
 */
#define CAN_ESR1_CRCERR(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_CRCERR_SHIFT)) & CAN_ESR1_CRCERR_MASK)

#define CAN_ESR1_ACKERR_MASK                     (0x2000U)
#define CAN_ESR1_ACKERR_SHIFT                    (13U)
/*! ACKERR - Acknowledge Error
 *  0b0..No such occurrence.
 *  0b1..An ACK error occurred since last read of this register.
 */
#define CAN_ESR1_ACKERR(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_ACKERR_SHIFT)) & CAN_ESR1_ACKERR_MASK)

#define CAN_ESR1_BIT0ERR_MASK                    (0x4000U)
#define CAN_ESR1_BIT0ERR_SHIFT                   (14U)
/*! BIT0ERR - Bit0 Error
 *  0b0..No such occurrence.
 *  0b1..At least one bit sent as dominant is received as recessive.
 */
#define CAN_ESR1_BIT0ERR(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BIT0ERR_SHIFT)) & CAN_ESR1_BIT0ERR_MASK)

#define CAN_ESR1_BIT1ERR_MASK                    (0x8000U)
#define CAN_ESR1_BIT1ERR_SHIFT                   (15U)
/*! BIT1ERR - Bit1 Error
 *  0b0..No such occurrence.
 *  0b1..At least one bit sent as recessive is received as dominant.
 */
#define CAN_ESR1_BIT1ERR(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BIT1ERR_SHIFT)) & CAN_ESR1_BIT1ERR_MASK)

#define CAN_ESR1_RWRNINT_MASK                    (0x10000U)
#define CAN_ESR1_RWRNINT_SHIFT                   (16U)
/*! RWRNINT - Rx Warning Interrupt Flag
 *  0b0..No such occurrence.
 *  0b1..The Rx error counter transitioned from less than 96 to greater than or equal to 96.
 */
#define CAN_ESR1_RWRNINT(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_RWRNINT_SHIFT)) & CAN_ESR1_RWRNINT_MASK)

#define CAN_ESR1_TWRNINT_MASK                    (0x20000U)
#define CAN_ESR1_TWRNINT_SHIFT                   (17U)
/*! TWRNINT - Tx Warning Interrupt Flag
 *  0b0..No such occurrence.
 *  0b1..The Tx error counter transitioned from less than 96 to greater than or equal to 96.
 */
#define CAN_ESR1_TWRNINT(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_TWRNINT_SHIFT)) & CAN_ESR1_TWRNINT_MASK)

#define CAN_ESR1_SYNCH_MASK                      (0x40000U)
#define CAN_ESR1_SYNCH_SHIFT                     (18U)
/*! SYNCH - CAN Synchronization Status
 *  0b0..FlexCAN is not synchronized to the CAN bus.
 *  0b1..FlexCAN is synchronized to the CAN bus.
 */
#define CAN_ESR1_SYNCH(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_SYNCH_SHIFT)) & CAN_ESR1_SYNCH_MASK)

#define CAN_ESR1_BOFFDONEINT_MASK                (0x80000U)
#define CAN_ESR1_BOFFDONEINT_SHIFT               (19U)
/*! BOFFDONEINT - Bus Off Done Interrupt
 *  0b0..No such occurrence.
 *  0b1..FlexCAN module has completed Bus Off process.
 */
#define CAN_ESR1_BOFFDONEINT(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BOFFDONEINT_SHIFT)) & CAN_ESR1_BOFFDONEINT_MASK)

#define CAN_ESR1_ERRINT_FAST_MASK                (0x100000U)
#define CAN_ESR1_ERRINT_FAST_SHIFT               (20U)
/*! ERRINT_FAST - Error interrupt for errors detected in Data Phase of CAN FD frames with BRS bit set
 *  0b0..No such occurrence.
 *  0b1..Indicates setting of any error bit detected in the data phase of CAN FD frames with the BRS bit set.
 */
#define CAN_ESR1_ERRINT_FAST(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_ERRINT_FAST_SHIFT)) & CAN_ESR1_ERRINT_FAST_MASK)

#define CAN_ESR1_ERROVR_MASK                     (0x200000U)
#define CAN_ESR1_ERROVR_SHIFT                    (21U)
/*! ERROVR - Error Overrun
 *  0b0..Overrun has not occurred.
 *  0b1..Overrun has occurred.
 */
#define CAN_ESR1_ERROVR(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_ERROVR_SHIFT)) & CAN_ESR1_ERROVR_MASK)

#define CAN_ESR1_STFERR_FAST_MASK                (0x4000000U)
#define CAN_ESR1_STFERR_FAST_SHIFT               (26U)
/*! STFERR_FAST - Stuffing Error in the Data Phase of CAN FD frames with the BRS bit set
 *  0b0..No such occurrence.
 *  0b1..A stuffing error occurred since last read of this register.
 */
#define CAN_ESR1_STFERR_FAST(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_STFERR_FAST_SHIFT)) & CAN_ESR1_STFERR_FAST_MASK)

#define CAN_ESR1_FRMERR_FAST_MASK                (0x8000000U)
#define CAN_ESR1_FRMERR_FAST_SHIFT               (27U)
/*! FRMERR_FAST - Form Error in the Data Phase of CAN FD frames with the BRS bit set
 *  0b0..No such occurrence.
 *  0b1..A form error occurred since last read of this register.
 */
#define CAN_ESR1_FRMERR_FAST(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_FRMERR_FAST_SHIFT)) & CAN_ESR1_FRMERR_FAST_MASK)

#define CAN_ESR1_CRCERR_FAST_MASK                (0x10000000U)
#define CAN_ESR1_CRCERR_FAST_SHIFT               (28U)
/*! CRCERR_FAST - Cyclic Redundancy Check Error in the CRC field of CAN FD frames with the BRS bit set
 *  0b0..No such occurrence.
 *  0b1..A CRC error occurred since last read of this register.
 */
#define CAN_ESR1_CRCERR_FAST(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_CRCERR_FAST_SHIFT)) & CAN_ESR1_CRCERR_FAST_MASK)

#define CAN_ESR1_BIT0ERR_FAST_MASK               (0x40000000U)
#define CAN_ESR1_BIT0ERR_FAST_SHIFT              (30U)
/*! BIT0ERR_FAST - Bit0 Error in the Data Phase of CAN FD frames with the BRS bit set
 *  0b0..No such occurrence.
 *  0b1..At least one bit sent as dominant is received as recessive.
 */
#define CAN_ESR1_BIT0ERR_FAST(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BIT0ERR_FAST_SHIFT)) & CAN_ESR1_BIT0ERR_FAST_MASK)

#define CAN_ESR1_BIT1ERR_FAST_MASK               (0x80000000U)
#define CAN_ESR1_BIT1ERR_FAST_SHIFT              (31U)
/*! BIT1ERR_FAST - Bit1 Error in the Data Phase of CAN FD frames with the BRS bit set
 *  0b0..No such occurrence.
 *  0b1..At least one bit sent as recessive is received as dominant.
 */
#define CAN_ESR1_BIT1ERR_FAST(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BIT1ERR_FAST_SHIFT)) & CAN_ESR1_BIT1ERR_FAST_MASK)
/*! @} */

/*! @name IMASK1 - Interrupt Masks 1 Register */
/*! @{ */

#define CAN_IMASK1_BUF31TO0M_MASK                (0xFFFFFFFFU)
#define CAN_IMASK1_BUF31TO0M_SHIFT               (0U)
/*! BUF31TO0M - Buffer MBi Mask */
#define CAN_IMASK1_BUF31TO0M(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_IMASK1_BUF31TO0M_SHIFT)) & CAN_IMASK1_BUF31TO0M_MASK)
/*! @} */

/*! @name IFLAG1 - Interrupt Flags 1 Register */
/*! @{ */

#define CAN_IFLAG1_BUF0I_MASK                    (0x1U)
#define CAN_IFLAG1_BUF0I_SHIFT                   (0U)
/*! BUF0I - Buffer MB0 Interrupt Or Clear Legacy FIFO bit
 *  0b0..The corresponding buffer has no occurrence of successfully completed transmission or reception when MCR[RFEN]=0.
 *  0b1..The corresponding buffer has successfully completed transmission or reception when MCR[RFEN]=0.
 */
#define CAN_IFLAG1_BUF0I(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF0I_SHIFT)) & CAN_IFLAG1_BUF0I_MASK)

#define CAN_IFLAG1_BUF4TO1I_MASK                 (0x1EU)
#define CAN_IFLAG1_BUF4TO1I_SHIFT                (1U)
/*! BUF4TO1I - Buffer MBi Interrupt Or Reserved */
#define CAN_IFLAG1_BUF4TO1I(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF4TO1I_SHIFT)) & CAN_IFLAG1_BUF4TO1I_MASK)

#define CAN_IFLAG1_BUF5I_MASK                    (0x20U)
#define CAN_IFLAG1_BUF5I_SHIFT                   (5U)
/*! BUF5I - Buffer MB5 Interrupt Or Frames available in Legacy Rx FIFO
 *  0b0..No occurrence of MB5 completing transmission/reception when MCR[RFEN]=0, or of frame(s) available in the Legacy FIFO, when MCR[RFEN]=1
 *  0b1..MB5 completed transmission/reception when MCR[RFEN]=0, or frame(s) available in the Legacy Rx FIFO when
 *       MCR[RFEN]=1. It generates a DMA request in case of MCR[RFEN] and MCR[DMA] are enabled.
 */
#define CAN_IFLAG1_BUF5I(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF5I_SHIFT)) & CAN_IFLAG1_BUF5I_MASK)

#define CAN_IFLAG1_BUF6I_MASK                    (0x40U)
#define CAN_IFLAG1_BUF6I_SHIFT                   (6U)
/*! BUF6I - Buffer MB6 Interrupt Or Legacy Rx FIFO Warning
 *  0b0..No occurrence of MB6 completing transmission/reception when MCR[RFEN]=0, or of Legacy Rx FIFO almost full when MCR[RFEN]=1
 *  0b1..MB6 completed transmission/reception when MCR[RFEN]=0, or Legacy Rx FIFO almost full when MCR[RFEN]=1
 */
#define CAN_IFLAG1_BUF6I(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF6I_SHIFT)) & CAN_IFLAG1_BUF6I_MASK)

#define CAN_IFLAG1_BUF7I_MASK                    (0x80U)
#define CAN_IFLAG1_BUF7I_SHIFT                   (7U)
/*! BUF7I - Buffer MB7 Interrupt Or Legacy Rx FIFO Overflow
 *  0b0..No occurrence of MB7 completing transmission/reception when MCR[RFEN]=0, or of Legacy Rx FIFO overflow when MCR[RFEN]=1
 *  0b1..MB7 completed transmission/reception when MCR[RFEN]=0, or Legacy Rx FIFO overflow when MCR[RFEN]=1
 */
#define CAN_IFLAG1_BUF7I(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF7I_SHIFT)) & CAN_IFLAG1_BUF7I_MASK)

#define CAN_IFLAG1_BUF31TO8I_MASK                (0xFFFFFF00U)
#define CAN_IFLAG1_BUF31TO8I_SHIFT               (8U)
/*! BUF31TO8I - Buffer MBi Interrupt */
#define CAN_IFLAG1_BUF31TO8I(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF31TO8I_SHIFT)) & CAN_IFLAG1_BUF31TO8I_MASK)
/*! @} */

/*! @name CTRL2 - Control 2 Register */
/*! @{ */

#define CAN_CTRL2_EDFLTDIS_MASK                  (0x800U)
#define CAN_CTRL2_EDFLTDIS_SHIFT                 (11U)
/*! EDFLTDIS - Edge Filter Disable
 *  0b0..Edge filter is enabled
 *  0b1..Edge filter is disabled
 */
#define CAN_CTRL2_EDFLTDIS(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_EDFLTDIS_SHIFT)) & CAN_CTRL2_EDFLTDIS_MASK)

#define CAN_CTRL2_ISOCANFDEN_MASK                (0x1000U)
#define CAN_CTRL2_ISOCANFDEN_SHIFT               (12U)
/*! ISOCANFDEN - ISO CAN FD Enable
 *  0b0..FlexCAN operates using the non-ISO CAN FD protocol.
 *  0b1..FlexCAN operates using the ISO CAN FD protocol (ISO 11898-1:2015).
 */
#define CAN_CTRL2_ISOCANFDEN(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_ISOCANFDEN_SHIFT)) & CAN_CTRL2_ISOCANFDEN_MASK)

#define CAN_CTRL2_BTE_MASK                       (0x2000U)
#define CAN_CTRL2_BTE_SHIFT                      (13U)
/*! BTE - Bit Timing Expansion enable
 *  0b0..CAN Bit timing expansion is disabled.
 *  0b1..CAN bit timing expansion is enabled.
 */
#define CAN_CTRL2_BTE(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_BTE_SHIFT)) & CAN_CTRL2_BTE_MASK)

#define CAN_CTRL2_PREXCEN_MASK                   (0x4000U)
#define CAN_CTRL2_PREXCEN_SHIFT                  (14U)
/*! PREXCEN - Protocol Exception Enable
 *  0b0..Protocol exception is disabled.
 *  0b1..Protocol exception is enabled.
 */
#define CAN_CTRL2_PREXCEN(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_PREXCEN_SHIFT)) & CAN_CTRL2_PREXCEN_MASK)

#define CAN_CTRL2_EACEN_MASK                     (0x10000U)
#define CAN_CTRL2_EACEN_SHIFT                    (16U)
/*! EACEN - Entire Frame Arbitration Field Comparison Enable For Rx Mailboxes
 *  0b0..Rx mailbox filter's IDE bit is always compared and RTR is never compared despite mask bits.
 *  0b1..Enables the comparison of both Rx mailbox filter's IDE and RTR bit with their corresponding bits within
 *       the incoming frame. Mask bits do apply.
 */
#define CAN_CTRL2_EACEN(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_EACEN_SHIFT)) & CAN_CTRL2_EACEN_MASK)

#define CAN_CTRL2_RRS_MASK                       (0x20000U)
#define CAN_CTRL2_RRS_SHIFT                      (17U)
/*! RRS - Remote Request Storing
 *  0b0..Remote response frame is generated.
 *  0b1..Remote request frame is stored.
 */
#define CAN_CTRL2_RRS(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_RRS_SHIFT)) & CAN_CTRL2_RRS_MASK)

#define CAN_CTRL2_MRP_MASK                       (0x40000U)
#define CAN_CTRL2_MRP_SHIFT                      (18U)
/*! MRP - Mailboxes Reception Priority
 *  0b0..Matching starts from Legacy Rx FIFO or Enhanced Rx FIFO and continues on mailboxes.
 *  0b1..Matching starts from mailboxes and continues on Legacy Rx FIFO or Enhanced Rx FIFO.
 */
#define CAN_CTRL2_MRP(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_MRP_SHIFT)) & CAN_CTRL2_MRP_MASK)

#define CAN_CTRL2_TASD_MASK                      (0xF80000U)
#define CAN_CTRL2_TASD_SHIFT                     (19U)
/*! TASD - Tx Arbitration Start Delay */
#define CAN_CTRL2_TASD(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_TASD_SHIFT)) & CAN_CTRL2_TASD_MASK)

#define CAN_CTRL2_RFFN_MASK                      (0xF000000U)
#define CAN_CTRL2_RFFN_SHIFT                     (24U)
/*! RFFN - Number Of Legacy Rx FIFO Filters */
#define CAN_CTRL2_RFFN(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_RFFN_SHIFT)) & CAN_CTRL2_RFFN_MASK)

#define CAN_CTRL2_BOFFDONEMSK_MASK               (0x40000000U)
#define CAN_CTRL2_BOFFDONEMSK_SHIFT              (30U)
/*! BOFFDONEMSK - Bus Off Done Interrupt Mask
 *  0b0..Bus off done interrupt disabled.
 *  0b1..Bus off done interrupt enabled.
 */
#define CAN_CTRL2_BOFFDONEMSK(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_BOFFDONEMSK_SHIFT)) & CAN_CTRL2_BOFFDONEMSK_MASK)

#define CAN_CTRL2_ERRMSK_FAST_MASK               (0x80000000U)
#define CAN_CTRL2_ERRMSK_FAST_SHIFT              (31U)
/*! ERRMSK_FAST - Error Interrupt Mask for errors detected in the data phase of fast CAN FD frames
 *  0b0..ERRINT_FAST error interrupt disabled.
 *  0b1..ERRINT_FAST error interrupt enabled.
 */
#define CAN_CTRL2_ERRMSK_FAST(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_ERRMSK_FAST_SHIFT)) & CAN_CTRL2_ERRMSK_FAST_MASK)
/*! @} */

/*! @name ESR2 - Error and Status 2 Register */
/*! @{ */

#define CAN_ESR2_IMB_MASK                        (0x2000U)
#define CAN_ESR2_IMB_SHIFT                       (13U)
/*! IMB - Inactive Mailbox
 *  0b0..If ESR2[VPS] is asserted, the ESR2[LPTM] is not an inactive mailbox.
 *  0b1..If ESR2[VPS] is asserted, there is at least one inactive mailbox. LPTM content is the number of the first one.
 */
#define CAN_ESR2_IMB(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_ESR2_IMB_SHIFT)) & CAN_ESR2_IMB_MASK)

#define CAN_ESR2_VPS_MASK                        (0x4000U)
#define CAN_ESR2_VPS_SHIFT                       (14U)
/*! VPS - Valid Priority Status
 *  0b0..Contents of IMB and LPTM are invalid.
 *  0b1..Contents of IMB and LPTM are valid.
 */
#define CAN_ESR2_VPS(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_ESR2_VPS_SHIFT)) & CAN_ESR2_VPS_MASK)

#define CAN_ESR2_LPTM_MASK                       (0x7F0000U)
#define CAN_ESR2_LPTM_SHIFT                      (16U)
/*! LPTM - Lowest Priority Tx Mailbox */
#define CAN_ESR2_LPTM(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_ESR2_LPTM_SHIFT)) & CAN_ESR2_LPTM_MASK)
/*! @} */

/*! @name CRCR - CRC Register */
/*! @{ */

#define CAN_CRCR_TXCRC_MASK                      (0x7FFFU)
#define CAN_CRCR_TXCRC_SHIFT                     (0U)
/*! TXCRC - Transmitted CRC value */
#define CAN_CRCR_TXCRC(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CRCR_TXCRC_SHIFT)) & CAN_CRCR_TXCRC_MASK)

#define CAN_CRCR_MBCRC_MASK                      (0x7F0000U)
#define CAN_CRCR_MBCRC_SHIFT                     (16U)
/*! MBCRC - CRC Mailbox */
#define CAN_CRCR_MBCRC(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CRCR_MBCRC_SHIFT)) & CAN_CRCR_MBCRC_MASK)
/*! @} */

/*! @name RXFGMASK - Legacy Rx FIFO Global Mask Register */
/*! @{ */

#define CAN_RXFGMASK_FGM_MASK                    (0xFFFFFFFFU)
#define CAN_RXFGMASK_FGM_SHIFT                   (0U)
/*! FGM - Legacy Rx FIFO Global Mask Bits */
#define CAN_RXFGMASK_FGM(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_RXFGMASK_FGM_SHIFT)) & CAN_RXFGMASK_FGM_MASK)
/*! @} */

/*! @name RXFIR - Legacy Rx FIFO Information Register */
/*! @{ */

#define CAN_RXFIR_IDHIT_MASK                     (0x1FFU)
#define CAN_RXFIR_IDHIT_SHIFT                    (0U)
/*! IDHIT - Identifier Acceptance Filter Hit Indicator */
#define CAN_RXFIR_IDHIT(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_RXFIR_IDHIT_SHIFT)) & CAN_RXFIR_IDHIT_MASK)
/*! @} */

/*! @name CBT - CAN Bit Timing Register */
/*! @{ */

#define CAN_CBT_EPSEG2_MASK                      (0x1FU)
#define CAN_CBT_EPSEG2_SHIFT                     (0U)
/*! EPSEG2 - Extended Phase Segment 2 */
#define CAN_CBT_EPSEG2(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CBT_EPSEG2_SHIFT)) & CAN_CBT_EPSEG2_MASK)

#define CAN_CBT_EPSEG1_MASK                      (0x3E0U)
#define CAN_CBT_EPSEG1_SHIFT                     (5U)
/*! EPSEG1 - Extended Phase Segment 1 */
#define CAN_CBT_EPSEG1(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_CBT_EPSEG1_SHIFT)) & CAN_CBT_EPSEG1_MASK)

#define CAN_CBT_EPROPSEG_MASK                    (0xFC00U)
#define CAN_CBT_EPROPSEG_SHIFT                   (10U)
/*! EPROPSEG - Extended Propagation Segment */
#define CAN_CBT_EPROPSEG(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_CBT_EPROPSEG_SHIFT)) & CAN_CBT_EPROPSEG_MASK)

#define CAN_CBT_ERJW_MASK                        (0x1F0000U)
#define CAN_CBT_ERJW_SHIFT                       (16U)
/*! ERJW - Extended Resync Jump Width */
#define CAN_CBT_ERJW(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_CBT_ERJW_SHIFT)) & CAN_CBT_ERJW_MASK)

#define CAN_CBT_EPRESDIV_MASK                    (0x7FE00000U)
#define CAN_CBT_EPRESDIV_SHIFT                   (21U)
/*! EPRESDIV - Extended Prescaler Division Factor */
#define CAN_CBT_EPRESDIV(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_CBT_EPRESDIV_SHIFT)) & CAN_CBT_EPRESDIV_MASK)

#define CAN_CBT_BTF_MASK                         (0x80000000U)
#define CAN_CBT_BTF_SHIFT                        (31U)
/*! BTF - Bit Timing Format Enable
 *  0b0..Extended bit time definitions disabled.
 *  0b1..Extended bit time definitions enabled.
 */
#define CAN_CBT_BTF(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_CBT_BTF_SHIFT)) & CAN_CBT_BTF_MASK)
/*! @} */

/* The count of CAN_CS */
#define CAN_CS_COUNT_MB8B                        (32U)

/* The count of CAN_ID */
#define CAN_ID_COUNT_MB8B                        (32U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB8B                      (32U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB8B2                     (2U)

/* The count of CAN_CS */
#define CAN_CS_COUNT_MB16B                       (21U)

/* The count of CAN_ID */
#define CAN_ID_COUNT_MB16B                       (21U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB16B                     (21U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB16B2                    (4U)

/* The count of CAN_CS */
#define CAN_CS_COUNT_MB32B                       (12U)

/* The count of CAN_ID */
#define CAN_ID_COUNT_MB32B                       (12U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB32B                     (12U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB32B2                    (8U)

/*! @name CS - Message Buffer 0 CS Register..Message Buffer 6 CS Register */
/*! @{ */

#define CAN_CS_TIME_STAMP_MASK                   (0xFFFFU)
#define CAN_CS_TIME_STAMP_SHIFT                  (0U)
/*! TIME_STAMP - Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running
 *    Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field
 *    appears on the CAN bus.
 */
#define CAN_CS_TIME_STAMP(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CS_TIME_STAMP_SHIFT)) & CAN_CS_TIME_STAMP_MASK)

#define CAN_CS_DLC_MASK                          (0xF0000U)
#define CAN_CS_DLC_SHIFT                         (16U)
/*! DLC - Length of the data to be stored/transmitted. */
#define CAN_CS_DLC(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_DLC_SHIFT)) & CAN_CS_DLC_MASK)

#define CAN_CS_RTR_MASK                          (0x100000U)
#define CAN_CS_RTR_SHIFT                         (20U)
/*! RTR - Remote Transmission Request. One/zero for remote/data frame. */
#define CAN_CS_RTR(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_RTR_SHIFT)) & CAN_CS_RTR_MASK)

#define CAN_CS_IDE_MASK                          (0x200000U)
#define CAN_CS_IDE_SHIFT                         (21U)
/*! IDE - ID Extended. One/zero for extended/standard format frame. */
#define CAN_CS_IDE(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_IDE_SHIFT)) & CAN_CS_IDE_MASK)

#define CAN_CS_SRR_MASK                          (0x400000U)
#define CAN_CS_SRR_SHIFT                         (22U)
/*! SRR - Substitute Remote Request. Contains a fixed recessive bit. */
#define CAN_CS_SRR(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_SRR_SHIFT)) & CAN_CS_SRR_MASK)

#define CAN_CS_CODE_MASK                         (0xF000000U)
#define CAN_CS_CODE_SHIFT                        (24U)
/*! CODE - Message Buffer Code. This 4-bit field can be accessed (read or write) by the CPU and by
 *    the FlexCAN module itself, as part of the message buffer matching and arbitration process.
 */
#define CAN_CS_CODE(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_CS_CODE_SHIFT)) & CAN_CS_CODE_MASK)

#define CAN_CS_ESI_MASK                          (0x20000000U)
#define CAN_CS_ESI_SHIFT                         (29U)
/*! ESI - Error State Indicator. This bit indicates if the transmitting node is error active or error passive. */
#define CAN_CS_ESI(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_ESI_SHIFT)) & CAN_CS_ESI_MASK)

#define CAN_CS_BRS_MASK                          (0x40000000U)
#define CAN_CS_BRS_SHIFT                         (30U)
/*! BRS - Bit Rate Switch. This bit defines whether the bit rate is switched inside a CAN FD format frame. */
#define CAN_CS_BRS(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_BRS_SHIFT)) & CAN_CS_BRS_MASK)

#define CAN_CS_EDL_MASK                          (0x80000000U)
#define CAN_CS_EDL_SHIFT                         (31U)
/*! EDL - Extended Data Length. This bit distinguishes between CAN format and CAN FD format frames.
 *    The EDL bit must not be set for Message Buffers configured to RANSWER with code field 0b1010.
 */
#define CAN_CS_EDL(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_CS_EDL_SHIFT)) & CAN_CS_EDL_MASK)
/*! @} */

/* The count of CAN_CS */
#define CAN_CS_COUNT_MB64B                       (7U)

/*! @name ID - Message Buffer 0 ID Register..Message Buffer 6 ID Register */
/*! @{ */

#define CAN_ID_EXT_MASK                          (0x3FFFFU)
#define CAN_ID_EXT_SHIFT                         (0U)
/*! EXT - Contains extended (LOW word) identifier of message buffer. */
#define CAN_ID_EXT(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_ID_EXT_SHIFT)) & CAN_ID_EXT_MASK)

#define CAN_ID_STD_MASK                          (0x1FFC0000U)
#define CAN_ID_STD_SHIFT                         (18U)
/*! STD - Contains standard/extended (HIGH word) identifier of message buffer. */
#define CAN_ID_STD(x)                            (((uint32_t)(((uint32_t)(x)) << CAN_ID_STD_SHIFT)) & CAN_ID_STD_MASK)

#define CAN_ID_PRIO_MASK                         (0xE0000000U)
#define CAN_ID_PRIO_SHIFT                        (29U)
/*! PRIO - Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only
 *    makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular
 *    ID to define the transmission priority.
 */
#define CAN_ID_PRIO(x)                           (((uint32_t)(((uint32_t)(x)) << CAN_ID_PRIO_SHIFT)) & CAN_ID_PRIO_MASK)
/*! @} */

/* The count of CAN_ID */
#define CAN_ID_COUNT_MB64B                       (7U)

/*! @name WORD - Message Buffer 0 WORD_64B Register..Message Buffer 6 WORD_64B Register */
/*! @{ */

#define CAN_WORD_DATA_BYTE_3_MASK                (0xFFU)
#define CAN_WORD_DATA_BYTE_3_SHIFT               (0U)
/*! DATA_BYTE_3 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_3(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_3_SHIFT)) & CAN_WORD_DATA_BYTE_3_MASK)

#define CAN_WORD_DATA_BYTE_7_MASK                (0xFFU)
#define CAN_WORD_DATA_BYTE_7_SHIFT               (0U)
/*! DATA_BYTE_7 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_7(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_7_SHIFT)) & CAN_WORD_DATA_BYTE_7_MASK)

#define CAN_WORD_DATA_BYTE_11_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_11_SHIFT              (0U)
/*! DATA_BYTE_11 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_11(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_11_SHIFT)) & CAN_WORD_DATA_BYTE_11_MASK)

#define CAN_WORD_DATA_BYTE_15_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_15_SHIFT              (0U)
/*! DATA_BYTE_15 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_15(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_15_SHIFT)) & CAN_WORD_DATA_BYTE_15_MASK)

#define CAN_WORD_DATA_BYTE_19_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_19_SHIFT              (0U)
/*! DATA_BYTE_19 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_19(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_19_SHIFT)) & CAN_WORD_DATA_BYTE_19_MASK)

#define CAN_WORD_DATA_BYTE_23_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_23_SHIFT              (0U)
/*! DATA_BYTE_23 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_23(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_23_SHIFT)) & CAN_WORD_DATA_BYTE_23_MASK)

#define CAN_WORD_DATA_BYTE_27_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_27_SHIFT              (0U)
/*! DATA_BYTE_27 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_27(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_27_SHIFT)) & CAN_WORD_DATA_BYTE_27_MASK)

#define CAN_WORD_DATA_BYTE_31_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_31_SHIFT              (0U)
/*! DATA_BYTE_31 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_31(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_31_SHIFT)) & CAN_WORD_DATA_BYTE_31_MASK)

#define CAN_WORD_DATA_BYTE_35_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_35_SHIFT              (0U)
/*! DATA_BYTE_35 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_35(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_35_SHIFT)) & CAN_WORD_DATA_BYTE_35_MASK)

#define CAN_WORD_DATA_BYTE_39_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_39_SHIFT              (0U)
/*! DATA_BYTE_39 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_39(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_39_SHIFT)) & CAN_WORD_DATA_BYTE_39_MASK)

#define CAN_WORD_DATA_BYTE_43_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_43_SHIFT              (0U)
/*! DATA_BYTE_43 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_43(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_43_SHIFT)) & CAN_WORD_DATA_BYTE_43_MASK)

#define CAN_WORD_DATA_BYTE_47_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_47_SHIFT              (0U)
/*! DATA_BYTE_47 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_47(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_47_SHIFT)) & CAN_WORD_DATA_BYTE_47_MASK)

#define CAN_WORD_DATA_BYTE_51_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_51_SHIFT              (0U)
/*! DATA_BYTE_51 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_51(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_51_SHIFT)) & CAN_WORD_DATA_BYTE_51_MASK)

#define CAN_WORD_DATA_BYTE_55_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_55_SHIFT              (0U)
/*! DATA_BYTE_55 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_55(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_55_SHIFT)) & CAN_WORD_DATA_BYTE_55_MASK)

#define CAN_WORD_DATA_BYTE_59_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_59_SHIFT              (0U)
/*! DATA_BYTE_59 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_59(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_59_SHIFT)) & CAN_WORD_DATA_BYTE_59_MASK)

#define CAN_WORD_DATA_BYTE_63_MASK               (0xFFU)
#define CAN_WORD_DATA_BYTE_63_SHIFT              (0U)
/*! DATA_BYTE_63 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_63(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_63_SHIFT)) & CAN_WORD_DATA_BYTE_63_MASK)

#define CAN_WORD_DATA_BYTE_2_MASK                (0xFF00U)
#define CAN_WORD_DATA_BYTE_2_SHIFT               (8U)
/*! DATA_BYTE_2 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_2(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_2_SHIFT)) & CAN_WORD_DATA_BYTE_2_MASK)

#define CAN_WORD_DATA_BYTE_6_MASK                (0xFF00U)
#define CAN_WORD_DATA_BYTE_6_SHIFT               (8U)
/*! DATA_BYTE_6 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_6(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_6_SHIFT)) & CAN_WORD_DATA_BYTE_6_MASK)

#define CAN_WORD_DATA_BYTE_10_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_10_SHIFT              (8U)
/*! DATA_BYTE_10 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_10(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_10_SHIFT)) & CAN_WORD_DATA_BYTE_10_MASK)

#define CAN_WORD_DATA_BYTE_14_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_14_SHIFT              (8U)
/*! DATA_BYTE_14 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_14(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_14_SHIFT)) & CAN_WORD_DATA_BYTE_14_MASK)

#define CAN_WORD_DATA_BYTE_18_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_18_SHIFT              (8U)
/*! DATA_BYTE_18 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_18(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_18_SHIFT)) & CAN_WORD_DATA_BYTE_18_MASK)

#define CAN_WORD_DATA_BYTE_22_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_22_SHIFT              (8U)
/*! DATA_BYTE_22 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_22(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_22_SHIFT)) & CAN_WORD_DATA_BYTE_22_MASK)

#define CAN_WORD_DATA_BYTE_26_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_26_SHIFT              (8U)
/*! DATA_BYTE_26 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_26(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_26_SHIFT)) & CAN_WORD_DATA_BYTE_26_MASK)

#define CAN_WORD_DATA_BYTE_30_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_30_SHIFT              (8U)
/*! DATA_BYTE_30 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_30(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_30_SHIFT)) & CAN_WORD_DATA_BYTE_30_MASK)

#define CAN_WORD_DATA_BYTE_34_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_34_SHIFT              (8U)
/*! DATA_BYTE_34 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_34(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_34_SHIFT)) & CAN_WORD_DATA_BYTE_34_MASK)

#define CAN_WORD_DATA_BYTE_38_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_38_SHIFT              (8U)
/*! DATA_BYTE_38 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_38(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_38_SHIFT)) & CAN_WORD_DATA_BYTE_38_MASK)

#define CAN_WORD_DATA_BYTE_42_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_42_SHIFT              (8U)
/*! DATA_BYTE_42 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_42(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_42_SHIFT)) & CAN_WORD_DATA_BYTE_42_MASK)

#define CAN_WORD_DATA_BYTE_46_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_46_SHIFT              (8U)
/*! DATA_BYTE_46 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_46(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_46_SHIFT)) & CAN_WORD_DATA_BYTE_46_MASK)

#define CAN_WORD_DATA_BYTE_50_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_50_SHIFT              (8U)
/*! DATA_BYTE_50 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_50(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_50_SHIFT)) & CAN_WORD_DATA_BYTE_50_MASK)

#define CAN_WORD_DATA_BYTE_54_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_54_SHIFT              (8U)
/*! DATA_BYTE_54 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_54(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_54_SHIFT)) & CAN_WORD_DATA_BYTE_54_MASK)

#define CAN_WORD_DATA_BYTE_58_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_58_SHIFT              (8U)
/*! DATA_BYTE_58 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_58(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_58_SHIFT)) & CAN_WORD_DATA_BYTE_58_MASK)

#define CAN_WORD_DATA_BYTE_62_MASK               (0xFF00U)
#define CAN_WORD_DATA_BYTE_62_SHIFT              (8U)
/*! DATA_BYTE_62 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_62(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_62_SHIFT)) & CAN_WORD_DATA_BYTE_62_MASK)

#define CAN_WORD_DATA_BYTE_1_MASK                (0xFF0000U)
#define CAN_WORD_DATA_BYTE_1_SHIFT               (16U)
/*! DATA_BYTE_1 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_1(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_1_SHIFT)) & CAN_WORD_DATA_BYTE_1_MASK)

#define CAN_WORD_DATA_BYTE_5_MASK                (0xFF0000U)
#define CAN_WORD_DATA_BYTE_5_SHIFT               (16U)
/*! DATA_BYTE_5 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_5(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_5_SHIFT)) & CAN_WORD_DATA_BYTE_5_MASK)

#define CAN_WORD_DATA_BYTE_9_MASK                (0xFF0000U)
#define CAN_WORD_DATA_BYTE_9_SHIFT               (16U)
/*! DATA_BYTE_9 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_9(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_9_SHIFT)) & CAN_WORD_DATA_BYTE_9_MASK)

#define CAN_WORD_DATA_BYTE_13_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_13_SHIFT              (16U)
/*! DATA_BYTE_13 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_13(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_13_SHIFT)) & CAN_WORD_DATA_BYTE_13_MASK)

#define CAN_WORD_DATA_BYTE_17_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_17_SHIFT              (16U)
/*! DATA_BYTE_17 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_17(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_17_SHIFT)) & CAN_WORD_DATA_BYTE_17_MASK)

#define CAN_WORD_DATA_BYTE_21_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_21_SHIFT              (16U)
/*! DATA_BYTE_21 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_21(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_21_SHIFT)) & CAN_WORD_DATA_BYTE_21_MASK)

#define CAN_WORD_DATA_BYTE_25_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_25_SHIFT              (16U)
/*! DATA_BYTE_25 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_25(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_25_SHIFT)) & CAN_WORD_DATA_BYTE_25_MASK)

#define CAN_WORD_DATA_BYTE_29_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_29_SHIFT              (16U)
/*! DATA_BYTE_29 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_29(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_29_SHIFT)) & CAN_WORD_DATA_BYTE_29_MASK)

#define CAN_WORD_DATA_BYTE_33_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_33_SHIFT              (16U)
/*! DATA_BYTE_33 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_33(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_33_SHIFT)) & CAN_WORD_DATA_BYTE_33_MASK)

#define CAN_WORD_DATA_BYTE_37_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_37_SHIFT              (16U)
/*! DATA_BYTE_37 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_37(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_37_SHIFT)) & CAN_WORD_DATA_BYTE_37_MASK)

#define CAN_WORD_DATA_BYTE_41_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_41_SHIFT              (16U)
/*! DATA_BYTE_41 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_41(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_41_SHIFT)) & CAN_WORD_DATA_BYTE_41_MASK)

#define CAN_WORD_DATA_BYTE_45_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_45_SHIFT              (16U)
/*! DATA_BYTE_45 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_45(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_45_SHIFT)) & CAN_WORD_DATA_BYTE_45_MASK)

#define CAN_WORD_DATA_BYTE_49_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_49_SHIFT              (16U)
/*! DATA_BYTE_49 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_49(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_49_SHIFT)) & CAN_WORD_DATA_BYTE_49_MASK)

#define CAN_WORD_DATA_BYTE_53_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_53_SHIFT              (16U)
/*! DATA_BYTE_53 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_53(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_53_SHIFT)) & CAN_WORD_DATA_BYTE_53_MASK)

#define CAN_WORD_DATA_BYTE_57_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_57_SHIFT              (16U)
/*! DATA_BYTE_57 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_57(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_57_SHIFT)) & CAN_WORD_DATA_BYTE_57_MASK)

#define CAN_WORD_DATA_BYTE_61_MASK               (0xFF0000U)
#define CAN_WORD_DATA_BYTE_61_SHIFT              (16U)
/*! DATA_BYTE_61 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_61(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_61_SHIFT)) & CAN_WORD_DATA_BYTE_61_MASK)

#define CAN_WORD_DATA_BYTE_0_MASK                (0xFF000000U)
#define CAN_WORD_DATA_BYTE_0_SHIFT               (24U)
/*! DATA_BYTE_0 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_0(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_0_SHIFT)) & CAN_WORD_DATA_BYTE_0_MASK)

#define CAN_WORD_DATA_BYTE_4_MASK                (0xFF000000U)
#define CAN_WORD_DATA_BYTE_4_SHIFT               (24U)
/*! DATA_BYTE_4 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_4(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_4_SHIFT)) & CAN_WORD_DATA_BYTE_4_MASK)

#define CAN_WORD_DATA_BYTE_8_MASK                (0xFF000000U)
#define CAN_WORD_DATA_BYTE_8_SHIFT               (24U)
/*! DATA_BYTE_8 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_8(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_8_SHIFT)) & CAN_WORD_DATA_BYTE_8_MASK)

#define CAN_WORD_DATA_BYTE_12_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_12_SHIFT              (24U)
/*! DATA_BYTE_12 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_12(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_12_SHIFT)) & CAN_WORD_DATA_BYTE_12_MASK)

#define CAN_WORD_DATA_BYTE_16_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_16_SHIFT              (24U)
/*! DATA_BYTE_16 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_16(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_16_SHIFT)) & CAN_WORD_DATA_BYTE_16_MASK)

#define CAN_WORD_DATA_BYTE_20_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_20_SHIFT              (24U)
/*! DATA_BYTE_20 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_20(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_20_SHIFT)) & CAN_WORD_DATA_BYTE_20_MASK)

#define CAN_WORD_DATA_BYTE_24_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_24_SHIFT              (24U)
/*! DATA_BYTE_24 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_24(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_24_SHIFT)) & CAN_WORD_DATA_BYTE_24_MASK)

#define CAN_WORD_DATA_BYTE_28_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_28_SHIFT              (24U)
/*! DATA_BYTE_28 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_28(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_28_SHIFT)) & CAN_WORD_DATA_BYTE_28_MASK)

#define CAN_WORD_DATA_BYTE_32_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_32_SHIFT              (24U)
/*! DATA_BYTE_32 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_32(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_32_SHIFT)) & CAN_WORD_DATA_BYTE_32_MASK)

#define CAN_WORD_DATA_BYTE_36_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_36_SHIFT              (24U)
/*! DATA_BYTE_36 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_36(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_36_SHIFT)) & CAN_WORD_DATA_BYTE_36_MASK)

#define CAN_WORD_DATA_BYTE_40_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_40_SHIFT              (24U)
/*! DATA_BYTE_40 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_40(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_40_SHIFT)) & CAN_WORD_DATA_BYTE_40_MASK)

#define CAN_WORD_DATA_BYTE_44_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_44_SHIFT              (24U)
/*! DATA_BYTE_44 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_44(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_44_SHIFT)) & CAN_WORD_DATA_BYTE_44_MASK)

#define CAN_WORD_DATA_BYTE_48_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_48_SHIFT              (24U)
/*! DATA_BYTE_48 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_48(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_48_SHIFT)) & CAN_WORD_DATA_BYTE_48_MASK)

#define CAN_WORD_DATA_BYTE_52_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_52_SHIFT              (24U)
/*! DATA_BYTE_52 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_52(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_52_SHIFT)) & CAN_WORD_DATA_BYTE_52_MASK)

#define CAN_WORD_DATA_BYTE_56_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_56_SHIFT              (24U)
/*! DATA_BYTE_56 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_56(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_56_SHIFT)) & CAN_WORD_DATA_BYTE_56_MASK)

#define CAN_WORD_DATA_BYTE_60_MASK               (0xFF000000U)
#define CAN_WORD_DATA_BYTE_60_SHIFT              (24U)
/*! DATA_BYTE_60 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD_DATA_BYTE_60(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD_DATA_BYTE_60_SHIFT)) & CAN_WORD_DATA_BYTE_60_MASK)
/*! @} */

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB64B                     (7U)

/* The count of CAN_WORD */
#define CAN_WORD_COUNT_MB64B2                    (16U)

/* The count of CAN_CS */
#define CAN_CS_COUNT                             (32U)

/* The count of CAN_ID */
#define CAN_ID_COUNT                             (32U)

/*! @name WORD0 - Message Buffer 0 WORD0 Register..Message Buffer 31 WORD0 Register */
/*! @{ */

#define CAN_WORD0_DATA_BYTE_3_MASK               (0xFFU)
#define CAN_WORD0_DATA_BYTE_3_SHIFT              (0U)
/*! DATA_BYTE_3 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD0_DATA_BYTE_3(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD0_DATA_BYTE_3_SHIFT)) & CAN_WORD0_DATA_BYTE_3_MASK)

#define CAN_WORD0_DATA_BYTE_2_MASK               (0xFF00U)
#define CAN_WORD0_DATA_BYTE_2_SHIFT              (8U)
/*! DATA_BYTE_2 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD0_DATA_BYTE_2(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD0_DATA_BYTE_2_SHIFT)) & CAN_WORD0_DATA_BYTE_2_MASK)

#define CAN_WORD0_DATA_BYTE_1_MASK               (0xFF0000U)
#define CAN_WORD0_DATA_BYTE_1_SHIFT              (16U)
/*! DATA_BYTE_1 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD0_DATA_BYTE_1(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD0_DATA_BYTE_1_SHIFT)) & CAN_WORD0_DATA_BYTE_1_MASK)

#define CAN_WORD0_DATA_BYTE_0_MASK               (0xFF000000U)
#define CAN_WORD0_DATA_BYTE_0_SHIFT              (24U)
/*! DATA_BYTE_0 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD0_DATA_BYTE_0(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD0_DATA_BYTE_0_SHIFT)) & CAN_WORD0_DATA_BYTE_0_MASK)
/*! @} */

/* The count of CAN_WORD0 */
#define CAN_WORD0_COUNT                          (32U)

/*! @name WORD1 - Message Buffer 0 WORD1 Register..Message Buffer 31 WORD1 Register */
/*! @{ */

#define CAN_WORD1_DATA_BYTE_7_MASK               (0xFFU)
#define CAN_WORD1_DATA_BYTE_7_SHIFT              (0U)
/*! DATA_BYTE_7 - Data byte 0 of Rx/Tx frame. */
#define CAN_WORD1_DATA_BYTE_7(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD1_DATA_BYTE_7_SHIFT)) & CAN_WORD1_DATA_BYTE_7_MASK)

#define CAN_WORD1_DATA_BYTE_6_MASK               (0xFF00U)
#define CAN_WORD1_DATA_BYTE_6_SHIFT              (8U)
/*! DATA_BYTE_6 - Data byte 1 of Rx/Tx frame. */
#define CAN_WORD1_DATA_BYTE_6(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD1_DATA_BYTE_6_SHIFT)) & CAN_WORD1_DATA_BYTE_6_MASK)

#define CAN_WORD1_DATA_BYTE_5_MASK               (0xFF0000U)
#define CAN_WORD1_DATA_BYTE_5_SHIFT              (16U)
/*! DATA_BYTE_5 - Data byte 2 of Rx/Tx frame. */
#define CAN_WORD1_DATA_BYTE_5(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD1_DATA_BYTE_5_SHIFT)) & CAN_WORD1_DATA_BYTE_5_MASK)

#define CAN_WORD1_DATA_BYTE_4_MASK               (0xFF000000U)
#define CAN_WORD1_DATA_BYTE_4_SHIFT              (24U)
/*! DATA_BYTE_4 - Data byte 3 of Rx/Tx frame. */
#define CAN_WORD1_DATA_BYTE_4(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_WORD1_DATA_BYTE_4_SHIFT)) & CAN_WORD1_DATA_BYTE_4_MASK)
/*! @} */

/* The count of CAN_WORD1 */
#define CAN_WORD1_COUNT                          (32U)

/*! @name RXIMR - Rx Individual Mask Registers */
/*! @{ */

#define CAN_RXIMR_MI_MASK                        (0xFFFFFFFFU)
#define CAN_RXIMR_MI_SHIFT                       (0U)
/*! MI - Individual Mask Bits */
#define CAN_RXIMR_MI(x)                          (((uint32_t)(((uint32_t)(x)) << CAN_RXIMR_MI_SHIFT)) & CAN_RXIMR_MI_MASK)
/*! @} */

/*! @name CTRL1_PN - Pretended Networking Control 1 Register */
/*! @{ */

#define CAN_CTRL1_PN_FCS_MASK                    (0x3U)
#define CAN_CTRL1_PN_FCS_SHIFT                   (0U)
/*! FCS - Filtering Combination Selection
 *  0b00..Message ID filtering only
 *  0b01..Message ID filtering and payload filtering
 *  0b10..Message ID filtering occurring a specified number of times
 *  0b11..Message ID filtering and payload filtering a specified number of times
 */
#define CAN_CTRL1_PN_FCS(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PN_FCS_SHIFT)) & CAN_CTRL1_PN_FCS_MASK)

#define CAN_CTRL1_PN_IDFS_MASK                   (0xCU)
#define CAN_CTRL1_PN_IDFS_SHIFT                  (2U)
/*! IDFS - ID Filtering Selection
 *  0b00..Match upon ID contents against an exact target value
 *  0b01..Match upon an ID value greater than or equal to a specified target value
 *  0b10..Match upon an ID value smaller than or equal to a specified target value
 *  0b11..Match upon an ID value inside a range, greater than or equal to a specified lower limit, and smaller
 *        than or equal to a specified upper limit
 */
#define CAN_CTRL1_PN_IDFS(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PN_IDFS_SHIFT)) & CAN_CTRL1_PN_IDFS_MASK)

#define CAN_CTRL1_PN_PLFS_MASK                   (0x30U)
#define CAN_CTRL1_PN_PLFS_SHIFT                  (4U)
/*! PLFS - Payload Filtering Selection
 *  0b00..Match upon a payload contents against an exact target value
 *  0b01..Match upon a payload value greater than or equal to a specified target value
 *  0b10..Match upon a payload value smaller than or equal to a specified target value
 *  0b11..Match upon a payload value inside a range, greater than or equal to a specified lower limit, and smaller
 *        than or equal to a specified upper limit
 */
#define CAN_CTRL1_PN_PLFS(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PN_PLFS_SHIFT)) & CAN_CTRL1_PN_PLFS_MASK)

#define CAN_CTRL1_PN_NMATCH_MASK                 (0xFF00U)
#define CAN_CTRL1_PN_NMATCH_SHIFT                (8U)
/*! NMATCH - Number of Messages Matching the Same Filtering Criteria
 *  0b00000001..Received message must match the predefined filtering criteria for ID and/or PL once before generating a wakeup event.
 *  0b00000010..Received message must match the predefined filtering criteria for ID and/or PL twice before generating a wakeup event.
 *  0b11111111..Received message must match the predefined filtering criteria for ID and/or PL 255 times before generating a wakeup event.
 */
#define CAN_CTRL1_PN_NMATCH(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PN_NMATCH_SHIFT)) & CAN_CTRL1_PN_NMATCH_MASK)

#define CAN_CTRL1_PN_WUMF_MSK_MASK               (0x10000U)
#define CAN_CTRL1_PN_WUMF_MSK_SHIFT              (16U)
/*! WUMF_MSK - Wake Up by Match Flag Mask Bit
 *  0b0..Wakeup match event is disabled
 *  0b1..Wakeup match event is enabled
 */
#define CAN_CTRL1_PN_WUMF_MSK(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PN_WUMF_MSK_SHIFT)) & CAN_CTRL1_PN_WUMF_MSK_MASK)

#define CAN_CTRL1_PN_WTOF_MSK_MASK               (0x20000U)
#define CAN_CTRL1_PN_WTOF_MSK_SHIFT              (17U)
/*! WTOF_MSK - Wake Up by Timeout Flag Mask Bit
 *  0b0..Timeout wakeup event is disabled
 *  0b1..Timeout wakeup event is enabled
 */
#define CAN_CTRL1_PN_WTOF_MSK(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PN_WTOF_MSK_SHIFT)) & CAN_CTRL1_PN_WTOF_MSK_MASK)
/*! @} */

/*! @name CTRL2_PN - Pretended Networking Control 2 Register */
/*! @{ */

#define CAN_CTRL2_PN_MATCHTO_MASK                (0xFFFFU)
#define CAN_CTRL2_PN_MATCHTO_SHIFT               (0U)
/*! MATCHTO - Timeout for No Message Matching the Filtering Criteria */
#define CAN_CTRL2_PN_MATCHTO(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_PN_MATCHTO_SHIFT)) & CAN_CTRL2_PN_MATCHTO_MASK)
/*! @} */

/*! @name WU_MTC - Pretended Networking Wake Up Match Register */
/*! @{ */

#define CAN_WU_MTC_MCOUNTER_MASK                 (0xFF00U)
#define CAN_WU_MTC_MCOUNTER_SHIFT                (8U)
/*! MCOUNTER - Number of Matches when in Pretended Networking */
#define CAN_WU_MTC_MCOUNTER(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_WU_MTC_MCOUNTER_SHIFT)) & CAN_WU_MTC_MCOUNTER_MASK)

#define CAN_WU_MTC_WUMF_MASK                     (0x10000U)
#define CAN_WU_MTC_WUMF_SHIFT                    (16U)
/*! WUMF - Wake Up by Match Flag Bit
 *  0b0..No wakeup by match event detected
 *  0b1..Wakeup by match event detected
 */
#define CAN_WU_MTC_WUMF(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_WU_MTC_WUMF_SHIFT)) & CAN_WU_MTC_WUMF_MASK)

#define CAN_WU_MTC_WTOF_MASK                     (0x20000U)
#define CAN_WU_MTC_WTOF_SHIFT                    (17U)
/*! WTOF - Wake Up by Timeout Flag Bit
 *  0b0..No wakeup by timeout event detected
 *  0b1..Wakeup by timeout event detected
 */
#define CAN_WU_MTC_WTOF(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_WU_MTC_WTOF_SHIFT)) & CAN_WU_MTC_WTOF_MASK)
/*! @} */

/*! @name FLT_ID1 - Pretended Networking ID Filter 1 Register */
/*! @{ */

#define CAN_FLT_ID1_FLT_ID1_MASK                 (0x1FFFFFFFU)
#define CAN_FLT_ID1_FLT_ID1_SHIFT                (0U)
/*! FLT_ID1 - ID Filter 1 for Pretended Networking filtering */
#define CAN_FLT_ID1_FLT_ID1(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_FLT_ID1_FLT_ID1_SHIFT)) & CAN_FLT_ID1_FLT_ID1_MASK)

#define CAN_FLT_ID1_FLT_RTR_MASK                 (0x20000000U)
#define CAN_FLT_ID1_FLT_RTR_SHIFT                (29U)
/*! FLT_RTR - Remote Transmission Request Filter
 *  0b0..Reject remote frame (accept data frame)
 *  0b1..Accept remote frame
 */
#define CAN_FLT_ID1_FLT_RTR(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_FLT_ID1_FLT_RTR_SHIFT)) & CAN_FLT_ID1_FLT_RTR_MASK)

#define CAN_FLT_ID1_FLT_IDE_MASK                 (0x40000000U)
#define CAN_FLT_ID1_FLT_IDE_SHIFT                (30U)
/*! FLT_IDE - ID Extended Filter
 *  0b0..Accept standard frame format
 *  0b1..Accept extended frame format
 */
#define CAN_FLT_ID1_FLT_IDE(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_FLT_ID1_FLT_IDE_SHIFT)) & CAN_FLT_ID1_FLT_IDE_MASK)
/*! @} */

/*! @name FLT_DLC - Pretended Networking DLC Filter Register */
/*! @{ */

#define CAN_FLT_DLC_FLT_DLC_HI_MASK              (0xFU)
#define CAN_FLT_DLC_FLT_DLC_HI_SHIFT             (0U)
/*! FLT_DLC_HI - Upper Limit for Length of Data Bytes Filter */
#define CAN_FLT_DLC_FLT_DLC_HI(x)                (((uint32_t)(((uint32_t)(x)) << CAN_FLT_DLC_FLT_DLC_HI_SHIFT)) & CAN_FLT_DLC_FLT_DLC_HI_MASK)

#define CAN_FLT_DLC_FLT_DLC_LO_MASK              (0xF0000U)
#define CAN_FLT_DLC_FLT_DLC_LO_SHIFT             (16U)
/*! FLT_DLC_LO - Lower Limit for Length of Data Bytes Filter */
#define CAN_FLT_DLC_FLT_DLC_LO(x)                (((uint32_t)(((uint32_t)(x)) << CAN_FLT_DLC_FLT_DLC_LO_SHIFT)) & CAN_FLT_DLC_FLT_DLC_LO_MASK)
/*! @} */

/*! @name PL1_LO - Pretended Networking Payload Low Filter 1 Register */
/*! @{ */

#define CAN_PL1_LO_Data_byte_3_MASK              (0xFFU)
#define CAN_PL1_LO_Data_byte_3_SHIFT             (0U)
/*! Data_byte_3 - Payload Filter 1 low order bits for Pretended Networking payload filtering corresponding to data byte 3. */
#define CAN_PL1_LO_Data_byte_3(x)                (((uint32_t)(((uint32_t)(x)) << CAN_PL1_LO_Data_byte_3_SHIFT)) & CAN_PL1_LO_Data_byte_3_MASK)

#define CAN_PL1_LO_Data_byte_2_MASK              (0xFF00U)
#define CAN_PL1_LO_Data_byte_2_SHIFT             (8U)
/*! Data_byte_2 - Payload Filter 1 low order bits for Pretended Networking payload filtering corresponding to data byte 2. */
#define CAN_PL1_LO_Data_byte_2(x)                (((uint32_t)(((uint32_t)(x)) << CAN_PL1_LO_Data_byte_2_SHIFT)) & CAN_PL1_LO_Data_byte_2_MASK)

#define CAN_PL1_LO_Data_byte_1_MASK              (0xFF0000U)
#define CAN_PL1_LO_Data_byte_1_SHIFT             (16U)
/*! Data_byte_1 - Payload Filter 1 low order bits for Pretended Networking payload filtering corresponding to data byte 1. */
#define CAN_PL1_LO_Data_byte_1(x)                (((uint32_t)(((uint32_t)(x)) << CAN_PL1_LO_Data_byte_1_SHIFT)) & CAN_PL1_LO_Data_byte_1_MASK)

#define CAN_PL1_LO_Data_byte_0_MASK              (0xFF000000U)
#define CAN_PL1_LO_Data_byte_0_SHIFT             (24U)
/*! Data_byte_0 - Payload Filter 1 low order bits for Pretended Networking payload filtering corresponding to data byte 0. */
#define CAN_PL1_LO_Data_byte_0(x)                (((uint32_t)(((uint32_t)(x)) << CAN_PL1_LO_Data_byte_0_SHIFT)) & CAN_PL1_LO_Data_byte_0_MASK)
/*! @} */

/*! @name PL1_HI - Pretended Networking Payload High Filter 1 Register */
/*! @{ */

#define CAN_PL1_HI_Data_byte_7_MASK              (0xFFU)
#define CAN_PL1_HI_Data_byte_7_SHIFT             (0U)
/*! Data_byte_7 - Payload Filter 1 high order bits for Pretended Networking payload filtering corresponding to data byte 7. */
#define CAN_PL1_HI_Data_byte_7(x)                (((uint32_t)(((uint32_t)(x)) << CAN_PL1_HI_Data_byte_7_SHIFT)) & CAN_PL1_HI_Data_byte_7_MASK)

#define CAN_PL1_HI_Data_byte_6_MASK              (0xFF00U)
#define CAN_PL1_HI_Data_byte_6_SHIFT             (8U)
/*! Data_byte_6 - Payload Filter 1 high order bits for Pretended Networking payload filtering corresponding to data byte 6. */
#define CAN_PL1_HI_Data_byte_6(x)                (((uint32_t)(((uint32_t)(x)) << CAN_PL1_HI_Data_byte_6_SHIFT)) & CAN_PL1_HI_Data_byte_6_MASK)

#define CAN_PL1_HI_Data_byte_5_MASK              (0xFF0000U)
#define CAN_PL1_HI_Data_byte_5_SHIFT             (16U)
/*! Data_byte_5 - Payload Filter 1 high order bits for Pretended Networking payload filtering corresponding to data byte 5. */
#define CAN_PL1_HI_Data_byte_5(x)                (((uint32_t)(((uint32_t)(x)) << CAN_PL1_HI_Data_byte_5_SHIFT)) & CAN_PL1_HI_Data_byte_5_MASK)

#define CAN_PL1_HI_Data_byte_4_MASK              (0xFF000000U)
#define CAN_PL1_HI_Data_byte_4_SHIFT             (24U)
/*! Data_byte_4 - Payload Filter 1 high order bits for Pretended Networking payload filtering corresponding to data byte 4. */
#define CAN_PL1_HI_Data_byte_4(x)                (((uint32_t)(((uint32_t)(x)) << CAN_PL1_HI_Data_byte_4_SHIFT)) & CAN_PL1_HI_Data_byte_4_MASK)
/*! @} */

/*! @name FLT_ID2_IDMASK - Pretended Networking ID Filter 2 Register / ID Mask Register */
/*! @{ */

#define CAN_FLT_ID2_IDMASK_FLT_ID2_IDMASK_MASK   (0x1FFFFFFFU)
#define CAN_FLT_ID2_IDMASK_FLT_ID2_IDMASK_SHIFT  (0U)
/*! FLT_ID2_IDMASK - ID Filter 2 for Pretended Networking Filtering / ID Mask Bits for Pretended Networking ID Filtering */
#define CAN_FLT_ID2_IDMASK_FLT_ID2_IDMASK(x)     (((uint32_t)(((uint32_t)(x)) << CAN_FLT_ID2_IDMASK_FLT_ID2_IDMASK_SHIFT)) & CAN_FLT_ID2_IDMASK_FLT_ID2_IDMASK_MASK)

#define CAN_FLT_ID2_IDMASK_RTR_MSK_MASK          (0x20000000U)
#define CAN_FLT_ID2_IDMASK_RTR_MSK_SHIFT         (29U)
/*! RTR_MSK - Remote Transmission Request Mask Bit
 *  0b0..The corresponding bit in the filter is "don't care"
 *  0b1..The corresponding bit in the filter is checked
 */
#define CAN_FLT_ID2_IDMASK_RTR_MSK(x)            (((uint32_t)(((uint32_t)(x)) << CAN_FLT_ID2_IDMASK_RTR_MSK_SHIFT)) & CAN_FLT_ID2_IDMASK_RTR_MSK_MASK)

#define CAN_FLT_ID2_IDMASK_IDE_MSK_MASK          (0x40000000U)
#define CAN_FLT_ID2_IDMASK_IDE_MSK_SHIFT         (30U)
/*! IDE_MSK - ID Extended Mask Bit
 *  0b0..The corresponding bit in the filter is "don't care"
 *  0b1..The corresponding bit in the filter is checked
 */
#define CAN_FLT_ID2_IDMASK_IDE_MSK(x)            (((uint32_t)(((uint32_t)(x)) << CAN_FLT_ID2_IDMASK_IDE_MSK_SHIFT)) & CAN_FLT_ID2_IDMASK_IDE_MSK_MASK)
/*! @} */

/*! @name PL2_PLMASK_LO - Pretended Networking Payload Low Filter 2 Register / Payload Low Mask register */
/*! @{ */

#define CAN_PL2_PLMASK_LO_Data_byte_3_MASK       (0xFFU)
#define CAN_PL2_PLMASK_LO_Data_byte_3_SHIFT      (0U)
/*! Data_byte_3 - Payload Filter 2 low order bits / Payload Mask low order bits for Pretended
 *    Networking payload filtering corresponding to the data byte 3.
 */
#define CAN_PL2_PLMASK_LO_Data_byte_3(x)         (((uint32_t)(((uint32_t)(x)) << CAN_PL2_PLMASK_LO_Data_byte_3_SHIFT)) & CAN_PL2_PLMASK_LO_Data_byte_3_MASK)

#define CAN_PL2_PLMASK_LO_Data_byte_2_MASK       (0xFF00U)
#define CAN_PL2_PLMASK_LO_Data_byte_2_SHIFT      (8U)
/*! Data_byte_2 - Payload Filter 2 low order bits / Payload Mask low order bits for Pretended
 *    Networking payload filtering corresponding to the data byte 2.
 */
#define CAN_PL2_PLMASK_LO_Data_byte_2(x)         (((uint32_t)(((uint32_t)(x)) << CAN_PL2_PLMASK_LO_Data_byte_2_SHIFT)) & CAN_PL2_PLMASK_LO_Data_byte_2_MASK)

#define CAN_PL2_PLMASK_LO_Data_byte_1_MASK       (0xFF0000U)
#define CAN_PL2_PLMASK_LO_Data_byte_1_SHIFT      (16U)
/*! Data_byte_1 - Payload Filter 2 low order bits / Payload Mask low order bits for Pretended
 *    Networking payload filtering corresponding to the data byte 1.
 */
#define CAN_PL2_PLMASK_LO_Data_byte_1(x)         (((uint32_t)(((uint32_t)(x)) << CAN_PL2_PLMASK_LO_Data_byte_1_SHIFT)) & CAN_PL2_PLMASK_LO_Data_byte_1_MASK)

#define CAN_PL2_PLMASK_LO_Data_byte_0_MASK       (0xFF000000U)
#define CAN_PL2_PLMASK_LO_Data_byte_0_SHIFT      (24U)
/*! Data_byte_0 - Payload Filter 2 low order bits / Payload Mask low order bits for Pretended
 *    Networking payload filtering corresponding to the data byte 0.
 */
#define CAN_PL2_PLMASK_LO_Data_byte_0(x)         (((uint32_t)(((uint32_t)(x)) << CAN_PL2_PLMASK_LO_Data_byte_0_SHIFT)) & CAN_PL2_PLMASK_LO_Data_byte_0_MASK)
/*! @} */

/*! @name PL2_PLMASK_HI - Pretended Networking Payload High Filter 2 low order bits / Payload High Mask register */
/*! @{ */

#define CAN_PL2_PLMASK_HI_Data_byte_7_MASK       (0xFFU)
#define CAN_PL2_PLMASK_HI_Data_byte_7_SHIFT      (0U)
/*! Data_byte_7 - Payload Filter 2 high order bits / Payload Mask high order bits for Pretended
 *    Networking payload filtering corresponding to the data byte 7.
 */
#define CAN_PL2_PLMASK_HI_Data_byte_7(x)         (((uint32_t)(((uint32_t)(x)) << CAN_PL2_PLMASK_HI_Data_byte_7_SHIFT)) & CAN_PL2_PLMASK_HI_Data_byte_7_MASK)

#define CAN_PL2_PLMASK_HI_Data_byte_6_MASK       (0xFF00U)
#define CAN_PL2_PLMASK_HI_Data_byte_6_SHIFT      (8U)
/*! Data_byte_6 - Payload Filter 2 high order bits / Payload Mask high order bits for Pretended
 *    Networking payload filtering corresponding to the data byte 6.
 */
#define CAN_PL2_PLMASK_HI_Data_byte_6(x)         (((uint32_t)(((uint32_t)(x)) << CAN_PL2_PLMASK_HI_Data_byte_6_SHIFT)) & CAN_PL2_PLMASK_HI_Data_byte_6_MASK)

#define CAN_PL2_PLMASK_HI_Data_byte_5_MASK       (0xFF0000U)
#define CAN_PL2_PLMASK_HI_Data_byte_5_SHIFT      (16U)
/*! Data_byte_5 - Payload Filter 2 high order bits / Payload Mask high order bits for Pretended
 *    Networking payload filtering corresponding to the data byte 5.
 */
#define CAN_PL2_PLMASK_HI_Data_byte_5(x)         (((uint32_t)(((uint32_t)(x)) << CAN_PL2_PLMASK_HI_Data_byte_5_SHIFT)) & CAN_PL2_PLMASK_HI_Data_byte_5_MASK)

#define CAN_PL2_PLMASK_HI_Data_byte_4_MASK       (0xFF000000U)
#define CAN_PL2_PLMASK_HI_Data_byte_4_SHIFT      (24U)
/*! Data_byte_4 - Payload Filter 2 high order bits / Payload Mask high order bits for Pretended
 *    Networking payload filtering corresponding to the data byte 4.
 */
#define CAN_PL2_PLMASK_HI_Data_byte_4(x)         (((uint32_t)(((uint32_t)(x)) << CAN_PL2_PLMASK_HI_Data_byte_4_SHIFT)) & CAN_PL2_PLMASK_HI_Data_byte_4_MASK)
/*! @} */

/*! @name WMB_CS - Wake Up Message Buffer register for C/S */
/*! @{ */

#define CAN_WMB_CS_DLC_MASK                      (0xF0000U)
#define CAN_WMB_CS_DLC_SHIFT                     (16U)
/*! DLC - Length of Data in Bytes */
#define CAN_WMB_CS_DLC(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_WMB_CS_DLC_SHIFT)) & CAN_WMB_CS_DLC_MASK)

#define CAN_WMB_CS_RTR_MASK                      (0x100000U)
#define CAN_WMB_CS_RTR_SHIFT                     (20U)
/*! RTR - Remote Transmission Request Bit
 *  0b0..Frame is data one (not remote)
 *  0b1..Frame is a remote one
 */
#define CAN_WMB_CS_RTR(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_WMB_CS_RTR_SHIFT)) & CAN_WMB_CS_RTR_MASK)

#define CAN_WMB_CS_IDE_MASK                      (0x200000U)
#define CAN_WMB_CS_IDE_SHIFT                     (21U)
/*! IDE - ID Extended Bit
 *  0b0..Frame format is standard
 *  0b1..Frame format is extended
 */
#define CAN_WMB_CS_IDE(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_WMB_CS_IDE_SHIFT)) & CAN_WMB_CS_IDE_MASK)

#define CAN_WMB_CS_SRR_MASK                      (0x400000U)
#define CAN_WMB_CS_SRR_SHIFT                     (22U)
/*! SRR - Substitute Remote Request */
#define CAN_WMB_CS_SRR(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_WMB_CS_SRR_SHIFT)) & CAN_WMB_CS_SRR_MASK)
/*! @} */

/* The count of CAN_WMB_CS */
#define CAN_WMB_CS_COUNT                         (4U)

/*! @name WMB_ID - Wake Up Message Buffer Register for ID */
/*! @{ */

#define CAN_WMB_ID_ID_MASK                       (0x1FFFFFFFU)
#define CAN_WMB_ID_ID_SHIFT                      (0U)
/*! ID - Received ID under Pretended Networking mode */
#define CAN_WMB_ID_ID(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_WMB_ID_ID_SHIFT)) & CAN_WMB_ID_ID_MASK)
/*! @} */

/* The count of CAN_WMB_ID */
#define CAN_WMB_ID_COUNT                         (4U)

/*! @name WMB_D03 - Wake Up Message Buffer Register for Data 0-3 */
/*! @{ */

#define CAN_WMB_D03_Data_byte_3_MASK             (0xFFU)
#define CAN_WMB_D03_Data_byte_3_SHIFT            (0U)
/*! Data_byte_3 - Received payload corresponding to the data byte 3 under Pretended Networking mode */
#define CAN_WMB_D03_Data_byte_3(x)               (((uint32_t)(((uint32_t)(x)) << CAN_WMB_D03_Data_byte_3_SHIFT)) & CAN_WMB_D03_Data_byte_3_MASK)

#define CAN_WMB_D03_Data_byte_2_MASK             (0xFF00U)
#define CAN_WMB_D03_Data_byte_2_SHIFT            (8U)
/*! Data_byte_2 - Received payload corresponding to the data byte 2 under Pretended Networking mode */
#define CAN_WMB_D03_Data_byte_2(x)               (((uint32_t)(((uint32_t)(x)) << CAN_WMB_D03_Data_byte_2_SHIFT)) & CAN_WMB_D03_Data_byte_2_MASK)

#define CAN_WMB_D03_Data_byte_1_MASK             (0xFF0000U)
#define CAN_WMB_D03_Data_byte_1_SHIFT            (16U)
/*! Data_byte_1 - Received payload corresponding to the data byte 1 under Pretended Networking mode */
#define CAN_WMB_D03_Data_byte_1(x)               (((uint32_t)(((uint32_t)(x)) << CAN_WMB_D03_Data_byte_1_SHIFT)) & CAN_WMB_D03_Data_byte_1_MASK)

#define CAN_WMB_D03_Data_byte_0_MASK             (0xFF000000U)
#define CAN_WMB_D03_Data_byte_0_SHIFT            (24U)
/*! Data_byte_0 - Received payload corresponding to the data byte 0 under Pretended Networking mode */
#define CAN_WMB_D03_Data_byte_0(x)               (((uint32_t)(((uint32_t)(x)) << CAN_WMB_D03_Data_byte_0_SHIFT)) & CAN_WMB_D03_Data_byte_0_MASK)
/*! @} */

/* The count of CAN_WMB_D03 */
#define CAN_WMB_D03_COUNT                        (4U)

/*! @name WMB_D47 - Wake Up Message Buffer Register Data 4-7 */
/*! @{ */

#define CAN_WMB_D47_Data_byte_7_MASK             (0xFFU)
#define CAN_WMB_D47_Data_byte_7_SHIFT            (0U)
/*! Data_byte_7 - Received payload corresponding to the data byte 7 under Pretended Networking mode */
#define CAN_WMB_D47_Data_byte_7(x)               (((uint32_t)(((uint32_t)(x)) << CAN_WMB_D47_Data_byte_7_SHIFT)) & CAN_WMB_D47_Data_byte_7_MASK)

#define CAN_WMB_D47_Data_byte_6_MASK             (0xFF00U)
#define CAN_WMB_D47_Data_byte_6_SHIFT            (8U)
/*! Data_byte_6 - Received payload corresponding to the data byte 6 under Pretended Networking mode */
#define CAN_WMB_D47_Data_byte_6(x)               (((uint32_t)(((uint32_t)(x)) << CAN_WMB_D47_Data_byte_6_SHIFT)) & CAN_WMB_D47_Data_byte_6_MASK)

#define CAN_WMB_D47_Data_byte_5_MASK             (0xFF0000U)
#define CAN_WMB_D47_Data_byte_5_SHIFT            (16U)
/*! Data_byte_5 - Received payload corresponding to the data byte 5 under Pretended Networking mode */
#define CAN_WMB_D47_Data_byte_5(x)               (((uint32_t)(((uint32_t)(x)) << CAN_WMB_D47_Data_byte_5_SHIFT)) & CAN_WMB_D47_Data_byte_5_MASK)

#define CAN_WMB_D47_Data_byte_4_MASK             (0xFF000000U)
#define CAN_WMB_D47_Data_byte_4_SHIFT            (24U)
/*! Data_byte_4 - Received payload corresponding to the data byte 4 under Pretended Networking mode */
#define CAN_WMB_D47_Data_byte_4(x)               (((uint32_t)(((uint32_t)(x)) << CAN_WMB_D47_Data_byte_4_SHIFT)) & CAN_WMB_D47_Data_byte_4_MASK)
/*! @} */

/* The count of CAN_WMB_D47 */
#define CAN_WMB_D47_COUNT                        (4U)

/*! @name EPRS - Enhanced CAN Bit Timing Prescalers */
/*! @{ */

#define CAN_EPRS_ENPRESDIV_MASK                  (0x3FFU)
#define CAN_EPRS_ENPRESDIV_SHIFT                 (0U)
/*! ENPRESDIV - Extended Nominal Prescaler Division Factor */
#define CAN_EPRS_ENPRESDIV(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_EPRS_ENPRESDIV_SHIFT)) & CAN_EPRS_ENPRESDIV_MASK)

#define CAN_EPRS_EDPRESDIV_MASK                  (0x3FF0000U)
#define CAN_EPRS_EDPRESDIV_SHIFT                 (16U)
/*! EDPRESDIV - Extended Data Phase Prescaler Division Factor */
#define CAN_EPRS_EDPRESDIV(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_EPRS_EDPRESDIV_SHIFT)) & CAN_EPRS_EDPRESDIV_MASK)
/*! @} */

/*! @name ENCBT - Enhanced Nominal CAN Bit Timing */
/*! @{ */

#define CAN_ENCBT_NTSEG1_MASK                    (0xFFU)
#define CAN_ENCBT_NTSEG1_SHIFT                   (0U)
/*! NTSEG1 - Nominal Time Segment 1 */
#define CAN_ENCBT_NTSEG1(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ENCBT_NTSEG1_SHIFT)) & CAN_ENCBT_NTSEG1_MASK)

#define CAN_ENCBT_NTSEG2_MASK                    (0x7F000U)
#define CAN_ENCBT_NTSEG2_SHIFT                   (12U)
/*! NTSEG2 - Nominal Time Segment 2 */
#define CAN_ENCBT_NTSEG2(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ENCBT_NTSEG2_SHIFT)) & CAN_ENCBT_NTSEG2_MASK)

#define CAN_ENCBT_NRJW_MASK                      (0x1FC00000U)
#define CAN_ENCBT_NRJW_SHIFT                     (22U)
/*! NRJW - Nominal Resynchronization Jump Width */
#define CAN_ENCBT_NRJW(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_ENCBT_NRJW_SHIFT)) & CAN_ENCBT_NRJW_MASK)
/*! @} */

/*! @name EDCBT - Enhanced Data Phase CAN bit Timing */
/*! @{ */

#define CAN_EDCBT_DTSEG1_MASK                    (0x1FU)
#define CAN_EDCBT_DTSEG1_SHIFT                   (0U)
/*! DTSEG1 - Data Phase Segment 1 */
#define CAN_EDCBT_DTSEG1(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_EDCBT_DTSEG1_SHIFT)) & CAN_EDCBT_DTSEG1_MASK)

#define CAN_EDCBT_DTSEG2_MASK                    (0xF000U)
#define CAN_EDCBT_DTSEG2_SHIFT                   (12U)
/*! DTSEG2 - Data Phase Time Segment 2 */
#define CAN_EDCBT_DTSEG2(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_EDCBT_DTSEG2_SHIFT)) & CAN_EDCBT_DTSEG2_MASK)

#define CAN_EDCBT_DRJW_MASK                      (0x3C00000U)
#define CAN_EDCBT_DRJW_SHIFT                     (22U)
/*! DRJW - Data Phase Resynchronization Jump Width */
#define CAN_EDCBT_DRJW(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_EDCBT_DRJW_SHIFT)) & CAN_EDCBT_DRJW_MASK)
/*! @} */

/*! @name ETDC - Enhanced Transceiver Delay Compensation */
/*! @{ */

#define CAN_ETDC_ETDCVAL_MASK                    (0xFFU)
#define CAN_ETDC_ETDCVAL_SHIFT                   (0U)
/*! ETDCVAL - Enhanced Transceiver Delay Compensation Value */
#define CAN_ETDC_ETDCVAL(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ETDC_ETDCVAL_SHIFT)) & CAN_ETDC_ETDCVAL_MASK)

#define CAN_ETDC_ETDCFAIL_MASK                   (0x8000U)
#define CAN_ETDC_ETDCFAIL_SHIFT                  (15U)
/*! ETDCFAIL - Transceiver Delay Compensation Fail
 *  0b0..Measured loop delay is in range.
 *  0b1..Measured loop delay is out of range.
 */
#define CAN_ETDC_ETDCFAIL(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_ETDC_ETDCFAIL_SHIFT)) & CAN_ETDC_ETDCFAIL_MASK)

#define CAN_ETDC_ETDCOFF_MASK                    (0x7F0000U)
#define CAN_ETDC_ETDCOFF_SHIFT                   (16U)
/*! ETDCOFF - Enhanced Transceiver Delay Compensation Offset */
#define CAN_ETDC_ETDCOFF(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ETDC_ETDCOFF_SHIFT)) & CAN_ETDC_ETDCOFF_MASK)

#define CAN_ETDC_TDMDIS_MASK                     (0x40000000U)
#define CAN_ETDC_TDMDIS_SHIFT                    (30U)
/*! TDMDIS - Transceiver Delay Measurement Disable
 *  0b0..TDC measurement is enabled
 *  0b1..TDC measurement is disabled
 */
#define CAN_ETDC_TDMDIS(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ETDC_TDMDIS_SHIFT)) & CAN_ETDC_TDMDIS_MASK)

#define CAN_ETDC_ETDCEN_MASK                     (0x80000000U)
#define CAN_ETDC_ETDCEN_SHIFT                    (31U)
/*! ETDCEN - Transceiver Delay Compensation Enable
 *  0b0..TDC is disabled
 *  0b1..TDC is enabled
 */
#define CAN_ETDC_ETDCEN(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ETDC_ETDCEN_SHIFT)) & CAN_ETDC_ETDCEN_MASK)
/*! @} */

/*! @name FDCTRL - CAN FD Control Register */
/*! @{ */

#define CAN_FDCTRL_TDCVAL_MASK                   (0x3FU)
#define CAN_FDCTRL_TDCVAL_SHIFT                  (0U)
/*! TDCVAL - Transceiver Delay Compensation Value */
#define CAN_FDCTRL_TDCVAL(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_TDCVAL_SHIFT)) & CAN_FDCTRL_TDCVAL_MASK)

#define CAN_FDCTRL_TDCOFF_MASK                   (0x1F00U)
#define CAN_FDCTRL_TDCOFF_SHIFT                  (8U)
/*! TDCOFF - Transceiver Delay Compensation Offset */
#define CAN_FDCTRL_TDCOFF(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_TDCOFF_SHIFT)) & CAN_FDCTRL_TDCOFF_MASK)

#define CAN_FDCTRL_TDCFAIL_MASK                  (0x4000U)
#define CAN_FDCTRL_TDCFAIL_SHIFT                 (14U)
/*! TDCFAIL - Transceiver Delay Compensation Fail
 *  0b0..Measured loop delay is in range.
 *  0b1..Measured loop delay is out of range.
 */
#define CAN_FDCTRL_TDCFAIL(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_TDCFAIL_SHIFT)) & CAN_FDCTRL_TDCFAIL_MASK)

#define CAN_FDCTRL_TDCEN_MASK                    (0x8000U)
#define CAN_FDCTRL_TDCEN_SHIFT                   (15U)
/*! TDCEN - Transceiver Delay Compensation Enable
 *  0b0..TDC is disabled
 *  0b1..TDC is enabled
 */
#define CAN_FDCTRL_TDCEN(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_TDCEN_SHIFT)) & CAN_FDCTRL_TDCEN_MASK)

#define CAN_FDCTRL_MBDSR0_MASK                   (0x30000U)
#define CAN_FDCTRL_MBDSR0_SHIFT                  (16U)
/*! MBDSR0 - Message Buffer Data Size for Region 0
 *  0b00..Selects 8 bytes per message buffer.
 *  0b01..Selects 16 bytes per message buffer.
 *  0b10..Selects 32 bytes per message buffer.
 *  0b11..Selects 64 bytes per message buffer.
 */
#define CAN_FDCTRL_MBDSR0(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_MBDSR0_SHIFT)) & CAN_FDCTRL_MBDSR0_MASK)

#define CAN_FDCTRL_FDRATE_MASK                   (0x80000000U)
#define CAN_FDCTRL_FDRATE_SHIFT                  (31U)
/*! FDRATE - Bit Rate Switch Enable
 *  0b0..Transmit a frame in nominal rate. The BRS bit in the Tx MB has no effect.
 *  0b1..Transmit a frame with bit rate switching if the BRS bit in the Tx MB is recessive.
 */
#define CAN_FDCTRL_FDRATE(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_FDRATE_SHIFT)) & CAN_FDCTRL_FDRATE_MASK)
/*! @} */

/*! @name FDCBT - CAN FD Bit Timing Register */
/*! @{ */

#define CAN_FDCBT_FPSEG2_MASK                    (0x7U)
#define CAN_FDCBT_FPSEG2_SHIFT                   (0U)
/*! FPSEG2 - Fast Phase Segment 2 */
#define CAN_FDCBT_FPSEG2(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FPSEG2_SHIFT)) & CAN_FDCBT_FPSEG2_MASK)

#define CAN_FDCBT_FPSEG1_MASK                    (0xE0U)
#define CAN_FDCBT_FPSEG1_SHIFT                   (5U)
/*! FPSEG1 - Fast Phase Segment 1 */
#define CAN_FDCBT_FPSEG1(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FPSEG1_SHIFT)) & CAN_FDCBT_FPSEG1_MASK)

#define CAN_FDCBT_FPROPSEG_MASK                  (0x7C00U)
#define CAN_FDCBT_FPROPSEG_SHIFT                 (10U)
/*! FPROPSEG - Fast Propagation Segment */
#define CAN_FDCBT_FPROPSEG(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FPROPSEG_SHIFT)) & CAN_FDCBT_FPROPSEG_MASK)

#define CAN_FDCBT_FRJW_MASK                      (0x70000U)
#define CAN_FDCBT_FRJW_SHIFT                     (16U)
/*! FRJW - Fast Resync Jump Width */
#define CAN_FDCBT_FRJW(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FRJW_SHIFT)) & CAN_FDCBT_FRJW_MASK)

#define CAN_FDCBT_FPRESDIV_MASK                  (0x3FF00000U)
#define CAN_FDCBT_FPRESDIV_SHIFT                 (20U)
/*! FPRESDIV - Fast Prescaler Division Factor */
#define CAN_FDCBT_FPRESDIV(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FPRESDIV_SHIFT)) & CAN_FDCBT_FPRESDIV_MASK)
/*! @} */

/*! @name FDCRC - CAN FD CRC Register */
/*! @{ */

#define CAN_FDCRC_FD_TXCRC_MASK                  (0x1FFFFFU)
#define CAN_FDCRC_FD_TXCRC_SHIFT                 (0U)
/*! FD_TXCRC - Extended Transmitted CRC value */
#define CAN_FDCRC_FD_TXCRC(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_FDCRC_FD_TXCRC_SHIFT)) & CAN_FDCRC_FD_TXCRC_MASK)

#define CAN_FDCRC_FD_MBCRC_MASK                  (0x7F000000U)
#define CAN_FDCRC_FD_MBCRC_SHIFT                 (24U)
/*! FD_MBCRC - CRC Mailbox Number for FD_TXCRC */
#define CAN_FDCRC_FD_MBCRC(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_FDCRC_FD_MBCRC_SHIFT)) & CAN_FDCRC_FD_MBCRC_MASK)
/*! @} */

/*! @name ERFCR - Enhanced Rx FIFO Control Register */
/*! @{ */

#define CAN_ERFCR_ERFWM_MASK                     (0x1FU)
#define CAN_ERFCR_ERFWM_SHIFT                    (0U)
/*! ERFWM - Enhanced Rx FIFO Watermark */
#define CAN_ERFCR_ERFWM(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ERFCR_ERFWM_SHIFT)) & CAN_ERFCR_ERFWM_MASK)

#define CAN_ERFCR_NFE_MASK                       (0x3F00U)
#define CAN_ERFCR_NFE_SHIFT                      (8U)
/*! NFE - Number of Enhanced Rx FIFO Filter Elements */
#define CAN_ERFCR_NFE(x)                         (((uint32_t)(((uint32_t)(x)) << CAN_ERFCR_NFE_SHIFT)) & CAN_ERFCR_NFE_MASK)

#define CAN_ERFCR_NEXIF_MASK                     (0x7F0000U)
#define CAN_ERFCR_NEXIF_SHIFT                    (16U)
/*! NEXIF - Number of Extended ID Filter Elements */
#define CAN_ERFCR_NEXIF(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ERFCR_NEXIF_SHIFT)) & CAN_ERFCR_NEXIF_MASK)

#define CAN_ERFCR_DMALW_MASK                     (0x7C000000U)
#define CAN_ERFCR_DMALW_SHIFT                    (26U)
/*! DMALW - DMA Last Word */
#define CAN_ERFCR_DMALW(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ERFCR_DMALW_SHIFT)) & CAN_ERFCR_DMALW_MASK)

#define CAN_ERFCR_ERFEN_MASK                     (0x80000000U)
#define CAN_ERFCR_ERFEN_SHIFT                    (31U)
/*! ERFEN - Enhanced Rx FIFO enable
 *  0b0..Enhanced Rx FIFO is disabled
 *  0b1..Enhanced Rx FIFO is enabled
 */
#define CAN_ERFCR_ERFEN(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ERFCR_ERFEN_SHIFT)) & CAN_ERFCR_ERFEN_MASK)
/*! @} */

/*! @name ERFIER - Enhanced Rx FIFO Interrupt Enable Register */
/*! @{ */

#define CAN_ERFIER_ERFDAIE_MASK                  (0x10000000U)
#define CAN_ERFIER_ERFDAIE_SHIFT                 (28U)
/*! ERFDAIE - Enhanced Rx FIFO Data Available Interrupt Enable
 *  0b0..Enhanced Rx FIFO Data Available interrupt is disabled
 *  0b1..Enhanced Rx FIFO Data Available interrupt is enabled
 */
#define CAN_ERFIER_ERFDAIE(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_ERFIER_ERFDAIE_SHIFT)) & CAN_ERFIER_ERFDAIE_MASK)

#define CAN_ERFIER_ERFWMIIE_MASK                 (0x20000000U)
#define CAN_ERFIER_ERFWMIIE_SHIFT                (29U)
/*! ERFWMIIE - Enhanced Rx FIFO Watermark Indication Interrupt Enable
 *  0b0..Enhanced Rx FIFO Watermark interrupt is disabled
 *  0b1..Enhanced Rx FIFO Watermark interrupt is enabled
 */
#define CAN_ERFIER_ERFWMIIE(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ERFIER_ERFWMIIE_SHIFT)) & CAN_ERFIER_ERFWMIIE_MASK)

#define CAN_ERFIER_ERFOVFIE_MASK                 (0x40000000U)
#define CAN_ERFIER_ERFOVFIE_SHIFT                (30U)
/*! ERFOVFIE - Enhanced Rx FIFO Overflow Interrupt Enable
 *  0b0..Enhanced Rx FIFO Overflow is disabled
 *  0b1..Enhanced Rx FIFO Overflow is enabled
 */
#define CAN_ERFIER_ERFOVFIE(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ERFIER_ERFOVFIE_SHIFT)) & CAN_ERFIER_ERFOVFIE_MASK)

#define CAN_ERFIER_ERFUFWIE_MASK                 (0x80000000U)
#define CAN_ERFIER_ERFUFWIE_SHIFT                (31U)
/*! ERFUFWIE - Enhanced Rx FIFO Underflow Interrupt Enable
 *  0b0..Enhanced Rx FIFO Underflow interrupt is disabled
 *  0b1..Enhanced Rx FIFO Underflow interrupt is enabled
 */
#define CAN_ERFIER_ERFUFWIE(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ERFIER_ERFUFWIE_SHIFT)) & CAN_ERFIER_ERFUFWIE_MASK)
/*! @} */

/*! @name ERFSR - Enhanced Rx FIFO Status Register */
/*! @{ */

#define CAN_ERFSR_ERFEL_MASK                     (0x3FU)
#define CAN_ERFSR_ERFEL_SHIFT                    (0U)
/*! ERFEL - Enhanced Rx FIFO Elements */
#define CAN_ERFSR_ERFEL(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFEL_SHIFT)) & CAN_ERFSR_ERFEL_MASK)

#define CAN_ERFSR_ERFF_MASK                      (0x10000U)
#define CAN_ERFSR_ERFF_SHIFT                     (16U)
/*! ERFF - Enhanced Rx FIFO full
 *  0b0..Enhanced Rx FIFO is not full
 *  0b1..Enhanced Rx FIFO is full
 */
#define CAN_ERFSR_ERFF(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFF_SHIFT)) & CAN_ERFSR_ERFF_MASK)

#define CAN_ERFSR_ERFE_MASK                      (0x20000U)
#define CAN_ERFSR_ERFE_SHIFT                     (17U)
/*! ERFE - Enhanced Rx FIFO empty
 *  0b0..Enhanced Rx FIFO is not empty
 *  0b1..Enhanced Rx FIFO is empty
 */
#define CAN_ERFSR_ERFE(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFE_SHIFT)) & CAN_ERFSR_ERFE_MASK)

#define CAN_ERFSR_ERFCLR_MASK                    (0x8000000U)
#define CAN_ERFSR_ERFCLR_SHIFT                   (27U)
/*! ERFCLR - Enhanced Rx FIFO Clear
 *  0b0..No effect
 *  0b1..Clear Enhanced Rx FIFO content
 */
#define CAN_ERFSR_ERFCLR(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFCLR_SHIFT)) & CAN_ERFSR_ERFCLR_MASK)

#define CAN_ERFSR_ERFDA_MASK                     (0x10000000U)
#define CAN_ERFSR_ERFDA_SHIFT                    (28U)
/*! ERFDA - Enhanced Rx FIFO Data Available
 *  0b0..No such occurrence
 *  0b1..There is at least one message stored in Enhanced Rx FIFO
 */
#define CAN_ERFSR_ERFDA(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFDA_SHIFT)) & CAN_ERFSR_ERFDA_MASK)

#define CAN_ERFSR_ERFWMI_MASK                    (0x20000000U)
#define CAN_ERFSR_ERFWMI_SHIFT                   (29U)
/*! ERFWMI - Enhanced Rx FIFO Watermark Indication
 *  0b0..No such occurrence
 *  0b1..The number of messages in FIFO is greater than the watermark
 */
#define CAN_ERFSR_ERFWMI(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFWMI_SHIFT)) & CAN_ERFSR_ERFWMI_MASK)

#define CAN_ERFSR_ERFOVF_MASK                    (0x40000000U)
#define CAN_ERFSR_ERFOVF_SHIFT                   (30U)
/*! ERFOVF - Enhanced Rx FIFO Overflow
 *  0b0..No such occurrence
 *  0b1..Enhanced Rx FIFO overflow
 */
#define CAN_ERFSR_ERFOVF(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFOVF_SHIFT)) & CAN_ERFSR_ERFOVF_MASK)

#define CAN_ERFSR_ERFUFW_MASK                    (0x80000000U)
#define CAN_ERFSR_ERFUFW_SHIFT                   (31U)
/*! ERFUFW - Enhanced Rx FIFO Underflow
 *  0b0..No such occurrence
 *  0b1..Enhanced Rx FIFO underflow
 */
#define CAN_ERFSR_ERFUFW(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFUFW_SHIFT)) & CAN_ERFSR_ERFUFW_MASK)
/*! @} */

/*! @name ERFFEL - Enhanced Rx FIFO Filter Element */
/*! @{ */

#define CAN_ERFFEL_FEL_MASK                      (0xFFFFFFFFU)
#define CAN_ERFFEL_FEL_SHIFT                     (0U)
/*! FEL - Filter Element Bits */
#define CAN_ERFFEL_FEL(x)                        (((uint32_t)(((uint32_t)(x)) << CAN_ERFFEL_FEL_SHIFT)) & CAN_ERFFEL_FEL_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CAN_Register_Masks */


/*!
 * @}
 */ /* end of group CAN_Peripheral_Access_Layer */


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


#endif  /* PERI_CAN_H_ */

