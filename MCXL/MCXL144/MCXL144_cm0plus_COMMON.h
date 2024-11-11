/*
** ###################################################################
**     Processors:          MCXL144VLH_cm0plus
**                          MCXL144VPJ_cm0plus
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
**         CMSIS Peripheral Access Layer for MCXL144_cm0plus
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
 * @file MCXL144_cm0plus_COMMON.h
 * @version 1.0
 * @date 2023-01-09
 * @brief CMSIS Peripheral Access Layer for MCXL144_cm0plus
 *
 * CMSIS Peripheral Access Layer for MCXL144_cm0plus
 */

#if !defined(MCXL144_CM0PLUS_COMMON_H_)
#define MCXL144_CM0PLUS_COMMON_H_                /**< Symbol preventing repeated inclusion */

/** Memory map major version (memory maps with equal major version number are
 * compatible) */
#define MCU_MEM_MAP_VERSION 0x0100U
/** Memory map minor version */
#define MCU_MEM_MAP_VERSION_MINOR 0x0000U

/* CGU - Peripheral instance base addresses */
/** Peripheral AON_CGU base address */
#define AON_CGU_BASE                            (0x40001000u)
/** Peripheral AON_CGU base pointer */
#define AON_CGU                                 ((CGU_Type *)AON_CGU_BASE)

/* GPIO - Peripheral instance base addresses */
/** Peripheral GPIO2 base address */
#define GPIO2_BASE                               (0x40100000u)
/** Peripheral GPIO2 base pointer */
#define GPIO2                                    ((GPIO_Type *)GPIO2_BASE)

/* INLINE_DLL - Peripheral instance base addresses */
/** Peripheral AON_Inline_DLL base address */
#define AON_Inline_DLL_BASE                     (0x40005000u)
/** Peripheral AON_Inline_DLL base pointer */
#define AON_Inline_DLL                          ((INLINE_DLL_Type *)AON_Inline_DLL_BASE)

/* LPACMP - Peripheral instance base addresses */
/** Peripheral AON_LPACMP base address */
#define AON_LPACMP_BASE                         (0x40003000u)
/** Peripheral AON_LPACMP base pointer */
#define AON_LPACMP                              ((LPACMP_Type *)AON_LPACMP_BASE)

/* LPI2C - Peripheral instance base addresses */
/** Peripheral AON_LPI2C1 base address */
#define AON_LPI2C1_BASE                         (0x40080000u)
/** Peripheral AON_LPI2C1 base pointer */
#define AON_LPI2C1                              ((LPI2C_Type *)AON_LPI2C1_BASE)

/* LPUART - Peripheral instance base addresses */
/** Peripheral AON_LPUART3 base address */
#define AON_LPUART3_BASE                        (0x40082000u)
/** Peripheral AON_LPUART3 base pointer */
#define AON_LPUART3                             ((LPUART_Type *)AON_LPUART3_BASE)

/* PMIC - Peripheral instance base addresses */
/** Peripheral AON_PMIC base address */
#define AON_PMIC_BASE                           (0x40000000u)
/** Peripheral AON_PMIC base pointer */
#define AON_PMIC                                ((PMIC_Type *)AON_PMIC_BASE)

/* PORT - Peripheral instance base addresses */
/** Peripheral AON_PORT2 base address */
#define AON_PORT2_BASE                          (0x40085000u)
/** Peripheral AON_PORT2 base pointer */
#define AON_PORT2                               ((PORT_Type *)AON_PORT2_BASE)

/* RTC - Peripheral instance base addresses */
/** Peripheral AON_RTC_AON base address */
#define AON_RTC_AON_BASE                        (0x40002000u)
/** Peripheral AON_RTC_AON base pointer */
#define AON_RTC_AON                             ((RTC_Type *)AON_RTC_AON_BASE)

/* SMM - Peripheral instance base addresses */
/** Peripheral AON_SMM base address */
#define AON_SMM_BASE                            (0x40002000u)
/** Peripheral AON_SMM base pointer */
#define AON_SMM                                 ((SMM_Type *)AON_SMM_BASE)

/* SNS - Peripheral instance base addresses */
/** Peripheral AON_SNS base address */
#define AON_SNS_BASE                            (0x40004000u)
/** Peripheral AON_SNS base pointer */
#define AON_SNS                                 ((SNS_Type *)AON_SNS_BASE)

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


#endif  /* MCXL144_CM0PLUS_COMMON_H_ */

