/*
** ###################################################################
**     Processors:          MCXW236BIHNAR
**                          MCXW236BIUKAR
**
**     Compilers:           GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**                          MCUXpresso Compiler
**
**     Reference manual:    MCXW23x User manual Rev.0.1  1 September 2022
**     Version:             rev. 1.0, 2022-03-08
**     Build:               b241118
**
**     Abstract:
**         Provides a system configuration function and a global variable that
**         contains the system frequency. It configures the device and initializes
**         the oscillator (PLL) that is part of the microcontroller device.
**
**     Copyright 2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2024 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2022-03-08)
**         Initial version based on v0.1UM
**
** ###################################################################
*/

/*!
 * @file MCXW236B
 * @version 1.0
 * @date 2022-03-08
 * @brief Device specific configuration file for MCXW236B (implementation file)
 *
 * Provides a system configuration function and a global variable that contains
 * the system frequency. It configures the device and initializes the oscillator
 * (PLL) that is part of the microcontroller device.
 */

#include <stdint.h>
#include "fsl_device_registers.h"
#include "fsl_common.h"
#include "fsl_clock.h"

#ifndef NDEBUG
#ifdef SDK_DEBUGCONSOLE
#include "fsl_debug_console.h"
#endif
#endif

/* ----------------------------------------------------------------------------
   -- Core clock
   ---------------------------------------------------------------------------- */

uint32_t SystemCoreClock = DEFAULT_SYSTEM_CLOCK;

/* ----------------------------------------------------------------------------
   -- SystemInit()
   ---------------------------------------------------------------------------- */

__attribute__ ((weak)) void SystemInit (void)
{
#if ((__FPU_PRESENT == 1) && (__FPU_USED == 1))
    SCB->CPACR |= ((3UL << 10 * 2) | (3UL << 11 * 2)); /* set CP10, CP11 Full Access in Secure mode */
#if defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
    SCB_NS->CPACR |= ((3UL << 10 * 2) | (3UL << 11 * 2)); /* set CP10, CP11 Full Access in Non-secure mode */
#endif                                                    /* (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U) */
#endif                                                    /* ((__FPU_PRESENT == 1) && (__FPU_USED == 1)) */

    SCB->CPACR |= ((3UL << 0 * 2) | (3UL << 1 * 2)); /* set CP0, CP1 Full Access in Secure mode (enable PowerQuad) */
#if defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
    SCB_NS->CPACR |= ((3UL << 0 * 2) | (3UL << 1 * 2)); /* set CP0, CP1 Full Access in Normal mode (enable PowerQuad) */
#endif                                                  /* (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U) */

    SCB->NSACR |= ((3UL << 0) | (3UL << 10)); /* enable CP0, CP1, CP10, CP11 Non-secure Access */

#if defined(__MCUXPRESSO)
    extern void (*const g_pfnVectors[])(void);
    SCB->VTOR = (uint32_t)&g_pfnVectors;
#else
    extern void *__Vectors;
    SCB->VTOR = (uint32_t)&__Vectors;
#endif
    SYSCON->TRACECLKDIV = 0;
/* Optionally enable RAM banks that may be off by default at reset */
#if !defined(DONT_ENABLE_DISABLED_RAMBANKS)
    SYSCON->AHBCLKCTRLSET[0] = SYSCON_AHBCLKCTRL0_SRAM_CTRL1_MASK | SYSCON_AHBCLKCTRL0_SRAM_CTRL2_MASK;
#endif

#if defined(SUPPORT_MASTER_CONNECTION) || defined(SUPPORT_SLAVE_CONNECTION)
    /* Make sure BLE link layer interrupts have highest priority in the system (prerequisite of the system). */
    for (int irq = 0; irq <= WAKE_PAD_IRQn; irq++)
    {
        if (irq == BLE_LL_IRQn || irq == BLE_SLP_TMR_IRQn)
        {
            NVIC_SetPriority(irq, NVIC_LL_IRQ_PRIORITY);
        }
        else
        {
            NVIC_SetPriority(irq, NVIC_DEFAULT_PRIORITY);
        }
    }
#endif

    SystemInitHook();
}

/* ----------------------------------------------------------------------------
   -- SystemCoreClockUpdate()
   ---------------------------------------------------------------------------- */

void SystemCoreClockUpdate(void)
{
    SystemCoreClock = CLOCK_GetFreq(kCLOCK_CoreSysClk);
}

/* ----------------------------------------------------------------------------
   -- SystemInitHook()
   ---------------------------------------------------------------------------- */

__attribute__((weak)) void SystemInitHook(void)
{
    /* Void implementation of the weak function. */
}

/* ----------------------------------------------------------------------------
   -- __assert_equal_func()
   ---------------------------------------------------------------------------- */
#ifndef NDEBUG
void __assert_equal_func(uint32_t a, uint32_t b)
{
#ifdef SDK_DEBUGCONSOLE
#if SDK_DEBUGCONSOLE == DEBUGCONSOLE_DISABLE
    PRINTF("ASSERT_EQUAL ERROR: %ld==%ld\n", a, b);
#else
    (void)PRINTF("ASSERT_EQUAL ERROR: %ld==%ld\n", a, b);
#endif
#endif
}
#endif