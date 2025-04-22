/*
** ###################################################################
**     Processors:          MCXA345VLH
**                          MCXA345VLL
**                          MCXA345VLQ
**                          MCXA345VPN
**                          MCXA346VLH
**                          MCXA346VLL
**                          MCXA346VLQ
**                          MCXA346VPN
**
**     Version:             rev. 1.0, 2024-11-21
**     Build:               b250417
**
**     Abstract:
**         CMSIS Peripheral Access Layer for FMC
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2024-11-21)
**         Initial version based on Rev1 RM
**
** ###################################################################
*/

/*!
 * @file PERI_FMC.h
 * @version 1.0
 * @date 2024-11-21
 * @brief CMSIS Peripheral Access Layer for FMC
 *
 * CMSIS Peripheral Access Layer for FMC
 */

#if !defined(PERI_FMC_H_)
#define PERI_FMC_H_                              /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MCXA345VLH) || defined(CPU_MCXA345VLL) || defined(CPU_MCXA345VLQ) || defined(CPU_MCXA345VPN))
#include "MCXA345_COMMON.h"
#elif (defined(CPU_MCXA346VLH) || defined(CPU_MCXA346VLL) || defined(CPU_MCXA346VLQ) || defined(CPU_MCXA346VPN))
#include "MCXA346_COMMON.h"
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
   -- FMC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FMC_Peripheral_Access_Layer FMC Peripheral Access Layer
 * @{
 */

/** FMC - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[32];
  __IO uint32_t REMAP;                             /**< Data Remap, offset: 0x20 */
} FMC_Type;

/* ----------------------------------------------------------------------------
   -- FMC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FMC_Register_Masks FMC Register Masks
 * @{
 */

/*! @name REMAP - Data Remap */
/*! @{ */

#define FMC_REMAP_REMAPLK_MASK                   (0x1U)
#define FMC_REMAP_REMAPLK_SHIFT                  (0U)
/*! REMAPLK - Remap Lock Enable
 *  0b0..Lock disabled: can write to REMAP
 *  0b1..Lock enabled: cannot write to REMAP
 */
#define FMC_REMAP_REMAPLK(x)                     (((uint32_t)(((uint32_t)(x)) << FMC_REMAP_REMAPLK_SHIFT)) & FMC_REMAP_REMAPLK_MASK)

#define FMC_REMAP_LIM_MASK                       (0x7F0000U)
#define FMC_REMAP_LIM_SHIFT                      (16U)
/*! LIM - LIM Remapping Address */
#define FMC_REMAP_LIM(x)                         (((uint32_t)(((uint32_t)(x)) << FMC_REMAP_LIM_SHIFT)) & FMC_REMAP_LIM_MASK)

#define FMC_REMAP_LIMDP_MASK                     (0x7F000000U)
#define FMC_REMAP_LIMDP_SHIFT                    (24U)
/*! LIMDP - LIMDP Remapping Address */
#define FMC_REMAP_LIMDP(x)                       (((uint32_t)(((uint32_t)(x)) << FMC_REMAP_LIMDP_SHIFT)) & FMC_REMAP_LIMDP_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group FMC_Register_Masks */


/*!
 * @}
 */ /* end of group FMC_Peripheral_Access_Layer */


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


#endif  /* PERI_FMC_H_ */

