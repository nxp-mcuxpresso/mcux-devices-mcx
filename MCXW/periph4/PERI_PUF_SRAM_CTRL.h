/*
** ###################################################################
**     Processors:          MCXW235BIHNAR
**                          MCXW235BIUKAR
**                          MCXW236AIHNAR
**                          MCXW236AIUKAR
**                          MCXW236BIHNAR
**                          MCXW236BIUKAR
**
**     Version:             rev. 2.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         CMSIS Peripheral Access Layer for PUF_SRAM_CTRL
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2022-03-08)
**         Initial version based on v0.1UM
**     - rev. 2.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_PUF_SRAM_CTRL.h
 * @version 2.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for PUF_SRAM_CTRL
 *
 * CMSIS Peripheral Access Layer for PUF_SRAM_CTRL
 */

#if !defined(PERI_PUF_SRAM_CTRL_H_)
#define PERI_PUF_SRAM_CTRL_H_                    /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MCXW235BIHNAR) || defined(CPU_MCXW235BIUKAR))
#include "MCXW235_COMMON.h"
#elif (defined(CPU_MCXW236AIHNAR) || defined(CPU_MCXW236AIUKAR) || defined(CPU_MCXW236BIHNAR) || defined(CPU_MCXW236BIUKAR))
#include "MCXW236_COMMON.h"
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
   -- PUF_SRAM_CTRL Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PUF_SRAM_CTRL_Peripheral_Access_Layer PUF_SRAM_CTRL Peripheral Access Layer
 * @{
 */

/** PUF_SRAM_CTRL - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[768];
  __IO uint32_t CFG;                               /**< Configuration Register, offset: 0x300 */
  __I  uint32_t STATUS;                            /**< Status Register, offset: 0x304 */
       uint8_t RESERVED_1[208];
  __O  uint32_t INT_CLR_ENABLE;                    /**< Interrupt Enable Clear Register, offset: 0x3D8 */
  __O  uint32_t INT_SET_ENABLE;                    /**< Interrupt Enable Set Register, offset: 0x3DC */
  __I  uint32_t INT_STATUS;                        /**< Interrupt Status Register, offset: 0x3E0 */
  __I  uint32_t INT_ENABLE;                        /**< Interrupt Enable Register, offset: 0x3E4 */
  __O  uint32_t INT_CLR_STATUS;                    /**< Interrupt Status Clear Register, offset: 0x3E8 */
  __O  uint32_t INT_SET_STATUS;                    /**< Interrupt Status set, offset: 0x3EC */
} PUF_SRAM_CTRL_Type;

/* ----------------------------------------------------------------------------
   -- PUF_SRAM_CTRL Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PUF_SRAM_CTRL_Register_Masks PUF_SRAM_CTRL Register Masks
 * @{
 */

/*! @name CFG - Configuration Register */
/*! @{ */

#define PUF_SRAM_CTRL_CFG_ENABLE_MASK            (0x1U)
#define PUF_SRAM_CTRL_CFG_ENABLE_SHIFT           (0U)
/*! enable - PUF SRAM Controller activation */
#define PUF_SRAM_CTRL_CFG_ENABLE(x)              (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_CFG_ENABLE_SHIFT)) & PUF_SRAM_CTRL_CFG_ENABLE_MASK)

#define PUF_SRAM_CTRL_CFG_CKGATING_MASK          (0x4U)
#define PUF_SRAM_CTRL_CFG_CKGATING_SHIFT         (2U)
/*! ckgating - PUF SRAM Clock Gating control */
#define PUF_SRAM_CTRL_CFG_CKGATING(x)            (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_CFG_CKGATING_SHIFT)) & PUF_SRAM_CTRL_CFG_CKGATING_MASK)
/*! @} */

/*! @name STATUS - Status Register */
/*! @{ */

#define PUF_SRAM_CTRL_STATUS_READY_MASK          (0x1U)
#define PUF_SRAM_CTRL_STATUS_READY_SHIFT         (0U)
/*! READY - PUF SRAM Controller State */
#define PUF_SRAM_CTRL_STATUS_READY(x)            (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_STATUS_READY_SHIFT)) & PUF_SRAM_CTRL_STATUS_READY_MASK)
/*! @} */

/*! @name INT_CLR_ENABLE - Interrupt Enable Clear Register */
/*! @{ */

#define PUF_SRAM_CTRL_INT_CLR_ENABLE_READY_MASK  (0x1U)
#define PUF_SRAM_CTRL_INT_CLR_ENABLE_READY_SHIFT (0U)
/*! READY - READY Interrupt Enable clear */
#define PUF_SRAM_CTRL_INT_CLR_ENABLE_READY(x)    (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_INT_CLR_ENABLE_READY_SHIFT)) & PUF_SRAM_CTRL_INT_CLR_ENABLE_READY_MASK)

#define PUF_SRAM_CTRL_INT_CLR_ENABLE_APB_ERR_MASK (0x2U)
#define PUF_SRAM_CTRL_INT_CLR_ENABLE_APB_ERR_SHIFT (1U)
/*! APB_ERR - APB_ERR Interrupt Enable clear */
#define PUF_SRAM_CTRL_INT_CLR_ENABLE_APB_ERR(x)  (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_INT_CLR_ENABLE_APB_ERR_SHIFT)) & PUF_SRAM_CTRL_INT_CLR_ENABLE_APB_ERR_MASK)
/*! @} */

/*! @name INT_SET_ENABLE - Interrupt Enable Set Register */
/*! @{ */

#define PUF_SRAM_CTRL_INT_SET_ENABLE_READY_MASK  (0x1U)
#define PUF_SRAM_CTRL_INT_SET_ENABLE_READY_SHIFT (0U)
/*! READY - READY Interrupt Enable set */
#define PUF_SRAM_CTRL_INT_SET_ENABLE_READY(x)    (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_INT_SET_ENABLE_READY_SHIFT)) & PUF_SRAM_CTRL_INT_SET_ENABLE_READY_MASK)

#define PUF_SRAM_CTRL_INT_SET_ENABLE_APB_ERR_MASK (0x2U)
#define PUF_SRAM_CTRL_INT_SET_ENABLE_APB_ERR_SHIFT (1U)
/*! APB_ERR - APB_ERR Interrupt Enable set */
#define PUF_SRAM_CTRL_INT_SET_ENABLE_APB_ERR(x)  (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_INT_SET_ENABLE_APB_ERR_SHIFT)) & PUF_SRAM_CTRL_INT_SET_ENABLE_APB_ERR_MASK)
/*! @} */

/*! @name INT_STATUS - Interrupt Status Register */
/*! @{ */

#define PUF_SRAM_CTRL_INT_STATUS_READY_MASK      (0x1U)
#define PUF_SRAM_CTRL_INT_STATUS_READY_SHIFT     (0U)
/*! READY - READY Interrupt Status */
#define PUF_SRAM_CTRL_INT_STATUS_READY(x)        (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_INT_STATUS_READY_SHIFT)) & PUF_SRAM_CTRL_INT_STATUS_READY_MASK)

#define PUF_SRAM_CTRL_INT_STATUS_APB_ERR_MASK    (0x2U)
#define PUF_SRAM_CTRL_INT_STATUS_APB_ERR_SHIFT   (1U)
/*! APB_ERR - APB_ERR Interrupt Status */
#define PUF_SRAM_CTRL_INT_STATUS_APB_ERR(x)      (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_INT_STATUS_APB_ERR_SHIFT)) & PUF_SRAM_CTRL_INT_STATUS_APB_ERR_MASK)
/*! @} */

/*! @name INT_ENABLE - Interrupt Enable Register */
/*! @{ */

#define PUF_SRAM_CTRL_INT_ENABLE_READY_MASK      (0x1U)
#define PUF_SRAM_CTRL_INT_ENABLE_READY_SHIFT     (0U)
/*! READY - READY Interrupt Enable */
#define PUF_SRAM_CTRL_INT_ENABLE_READY(x)        (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_INT_ENABLE_READY_SHIFT)) & PUF_SRAM_CTRL_INT_ENABLE_READY_MASK)

#define PUF_SRAM_CTRL_INT_ENABLE_APB_ERR_MASK    (0x2U)
#define PUF_SRAM_CTRL_INT_ENABLE_APB_ERR_SHIFT   (1U)
/*! APB_ERR - APB_ERR Interrupt Enable */
#define PUF_SRAM_CTRL_INT_ENABLE_APB_ERR(x)      (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_INT_ENABLE_APB_ERR_SHIFT)) & PUF_SRAM_CTRL_INT_ENABLE_APB_ERR_MASK)
/*! @} */

/*! @name INT_CLR_STATUS - Interrupt Status Clear Register */
/*! @{ */

#define PUF_SRAM_CTRL_INT_CLR_STATUS_READY_MASK  (0x1U)
#define PUF_SRAM_CTRL_INT_CLR_STATUS_READY_SHIFT (0U)
/*! READY - READY Interrupt Status clear */
#define PUF_SRAM_CTRL_INT_CLR_STATUS_READY(x)    (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_INT_CLR_STATUS_READY_SHIFT)) & PUF_SRAM_CTRL_INT_CLR_STATUS_READY_MASK)

#define PUF_SRAM_CTRL_INT_CLR_STATUS_APB_ERR_MASK (0x2U)
#define PUF_SRAM_CTRL_INT_CLR_STATUS_APB_ERR_SHIFT (1U)
/*! APB_ERR - APB_ERR Interrupt Status Clear */
#define PUF_SRAM_CTRL_INT_CLR_STATUS_APB_ERR(x)  (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_INT_CLR_STATUS_APB_ERR_SHIFT)) & PUF_SRAM_CTRL_INT_CLR_STATUS_APB_ERR_MASK)
/*! @} */

/*! @name INT_SET_STATUS - Interrupt Status set */
/*! @{ */

#define PUF_SRAM_CTRL_INT_SET_STATUS_READY_MASK  (0x1U)
#define PUF_SRAM_CTRL_INT_SET_STATUS_READY_SHIFT (0U)
/*! READY - READY Interrupt Status set */
#define PUF_SRAM_CTRL_INT_SET_STATUS_READY(x)    (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_INT_SET_STATUS_READY_SHIFT)) & PUF_SRAM_CTRL_INT_SET_STATUS_READY_MASK)

#define PUF_SRAM_CTRL_INT_SET_STATUS_APB_ERR_MASK (0x2U)
#define PUF_SRAM_CTRL_INT_SET_STATUS_APB_ERR_SHIFT (1U)
/*! APB_ERR - APB_ERR Interrupt Status Set */
#define PUF_SRAM_CTRL_INT_SET_STATUS_APB_ERR(x)  (((uint32_t)(((uint32_t)(x)) << PUF_SRAM_CTRL_INT_SET_STATUS_APB_ERR_SHIFT)) & PUF_SRAM_CTRL_INT_SET_STATUS_APB_ERR_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group PUF_SRAM_CTRL_Register_Masks */


/*!
 * @}
 */ /* end of group PUF_SRAM_CTRL_Peripheral_Access_Layer */


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


#endif  /* PERI_PUF_SRAM_CTRL_H_ */

