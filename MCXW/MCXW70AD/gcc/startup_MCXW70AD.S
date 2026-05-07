/* ------------------------------------------------------------------------- */
/*  @file:    startup_MCXW70AD.s                                             */
/*  @purpose: CMSIS Cortex-M33 Core Device Startup File                      */
/*            MCXW70AD                                                       */
/*  @version: 1.0                                                            */
/*  @date:    2026-1-9                                                       */
/*  @build:   b260507                                                        */
/* ------------------------------------------------------------------------- */
/*                                                                           */
/* Copyright 1997-2016 Freescale Semiconductor, Inc.                         */
/* Copyright 2016-2026 NXP                                                   */
/* SPDX-License-Identifier: BSD-3-Clause                                     */
/*****************************************************************************/
/* Version: GCC for ARM Embedded Processors                                  */
/*****************************************************************************/
    .syntax unified
    .arch armv8-m.main

    .section .isr_vector, "a"
    .align 2
    .globl __isr_vector
__isr_vector:
    .long   __StackTop                                      /* Top of Stack */
    .long   Reset_Handler                                   /* Reset Handler */
    .long   NMI_Handler                                     /* NMI Handler*/
    .long   HardFault_Handler                               /* Hard Fault Handler*/
    .long   MemManage_Handler                               /* MPU Fault Handler*/
    .long   BusFault_Handler                                /* Bus Fault Handler*/
    .long   UsageFault_Handler                              /* Usage Fault Handler*/
    .long   SecureFault_Handler                             /* Secure Fault Handler*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   SVC_Handler                                     /* SVCall Handler*/
    .long   DebugMon_Handler                                /* Debug Monitor Handler*/
    .long   0                                               /* Reserved*/
    .long   PendSV_Handler                                  /* PendSV Handler*/
    .long   SysTick_Handler                                 /* SysTick Handler*/

                                                            /* External Interrupts*/
    .long   CTI_IRQHandler                                  /* Cross Trigger Interface interrupt*/
    .long   CMC0_IRQHandler                                 /* Core Mode Controller interrupt*/
    .long   DMA0_CH0_IRQHandler                             /* eDMA channel 0 error or transfer complete*/
    .long   DMA0_CH1_IRQHandler                             /* eDMA channel 1 error or transfer complete*/
    .long   DMA0_CH2_IRQHandler                             /* eDMA channel 2 error or transfer complete*/
    .long   DMA0_CH3_IRQHandler                             /* eDMA channel 3 error or transfer complete*/
    .long   DMA0_CH4_IRQHandler                             /* eDMA channel 4 error or transfer complete*/
    .long   DMA0_CH5_IRQHandler                             /* eDMA channel 5 error or transfer complete*/
    .long   DMA0_CH6_IRQHandler                             /* eDMA channel 6 error or transfer complete*/
    .long   DMA0_CH7_IRQHandler                             /* eDMA channel 7 error or transfer complete*/
    .long   DMA0_CH8_IRQHandler                             /* eDMA channel 8 error or transfer complete*/
    .long   DMA0_CH9_IRQHandler                             /* eDMA channel 9 error or transfer complete*/
    .long   DMA0_CH10_IRQHandler                            /* eDMA channel 10 error or transfer complete*/
    .long   DMA0_CH11_IRQHandler                            /* eDMA channel 11 error or transfer complete*/
    .long   DMA0_CH12_IRQHandler                            /* eDMA channel 12 error or transfer complete*/
    .long   DMA0_CH13_IRQHandler                            /* eDMA channel 13 error or transfer complete*/
    .long   DMA0_CH14_IRQHandler                            /* eDMA channel 14 error or transfer complete*/
    .long   DMA0_CH15_IRQHandler                            /* eDMA channel 15 error or transfer complete*/
    .long   EWM0_IRQHandler                                 /* External Watchdog Monitor interrupt*/
    .long   MCM0_IRQHandler                                 /* Miscellaneous Control Module0 interrupt*/
    .long   MSCM0_IRQHandler                                /* Miscellaneous System Control Module interrupt*/
    .long   SYSCON0_IRQHandler                              /* System control module*/
    .long   SECCON0_IRQHandler                              /* Secure System control module*/
    .long   SPC0_IRQHandler                                 /* System Power Controller 0 interrupt*/
    .long   WUU0_IRQHandler                                 /* Wake-Up Unit 0 interrupt*/
    .long   WDOG0_IRQHandler                                /* Watchdog Timer 0 interrupt*/
    .long   WDOG1_IRQHandler                                /* Watchdog Timer 1 interrupt*/
    .long   CDOG0_IRQHandler                                /* Code watchdog 0 interrupt*/
    .long   CDOG1_IRQHandler                                /* Code watchdog 1 interrupt*/
    .long   SCG0_IRQHandler                                 /* System Clock Generator 0 interrupt*/
    .long   SFA0_IRQHandler                                 /* Signal Frequency Analyzer 0 interrupt*/
    .long   FMU0_IRQHandler                                 /* Flash Memory Unit 0 interrupt*/
    .long   SFA1_IRQHandler                                 /* SFA interrupt for FRO-200M calibration*/
    .long   DSB0_IRQHandler                                 /* Data Stream Buffer*/
    .long   TRDC0_IRQHandler                                /* Trusted Resource Domain Controller 0 interrupt*/
    .long   RTC_Alarm_IRQHandler                            /* Real Time Clock 0 alarm interrupt*/
    .long   RTC_Seconds_IRQHandler                          /* Real Time Clock 0 seconds interrupt*/
    .long   LPTMR0_IRQHandler                               /* Low-Power Timer0 interrupt*/
    .long   LPTMR1_IRQHandler                               /* Low-Power Timer1 interrupt*/
    .long   LPIT0_IRQHandler                                /* Low-Power Periodic Interrupt Timer 0 interrupt*/
    .long   TPM_0_IRQHandler                                /* Timer / PWM Module 0 interrupt*/
    .long   TPM_1_IRQHandler                                /* Timer / PWM Module 1 interrupt*/
    .long   TPM_2_IRQHandler                                /* Timer / PWM Module 2 interrupt*/
    .long   TPM_3_IRQHandler                                /* Timer / PWM Module 3 interrupt*/
    .long   TPM_4_IRQHandler                                /* Timer / PWM Module 4 interrupt*/
    .long   MU1_IRQHandler                                  /* Interrupt from MU1/DSP-V lite*/
    .long   SYSCON0_ECC_IRQHandler                          /* SRAM ECC Error interrupt*/
    .long   LPI2C0_IRQHandler                               /* Low-Power Inter Integrated Circuit 0 interrupt*/
    .long   LPI2C1_IRQHandler                               /* Low-Power Inter Integrated Circuit 1 interrupt*/
    .long   LPSPI0_IRQHandler                               /* Low-Power Serial Peripheral Interface 0 interrupt*/
    .long   LPSPI1_IRQHandler                               /* Low-Power Serial Peripheral Interface 1 interrupt*/
    .long   LPSPI2_IRQHandler                               /* Low-Power Serial Peripheral Interface 2 interrupt*/
    .long   LPUART0_IRQHandler                              /* Low-Power Universal Asynchronous Receiver/Transmitter 0 interrupt*/
    .long   LPUART1_IRQHandler                              /* Low-Power Universal Asynchronous Receiver/Transmitter 1 interrupt*/
    .long   Reserved70_IRQHandler                           /* xxx Interrupt 70*/
    .long   RF_ZIGBEE_IRQHandler                            /* Zigbee Mac controller*/
    .long   RF_Generic_IRQHandler                           /* Generic Link Layer interrupt*/
    .long   RF_BRIC_IRQHandler                              /* Baix Radio Crypto*/
    .long   RF_LCL_IRQHandler                               /* Localization control*/
    .long   RF_WOR_IRQHandler                               /* Wake on radio*/
    .long   RFMC_IRQHandler                                 /* RFMC interrupt*/
    .long   Reserved77_IRQHandler                           /* xxx Interrupt 77*/
    .long   Reserved78_IRQHandler                           /* xxx Interrupt 78*/
    .long   COEX_INT_IRQHandler                             /* COEX_INT_IRQn*/
    .long   Reserved80_IRQHandler                           /* xxx Interrupt 80*/
    .long   GPIOA_INT0_IRQHandler                           /* General Purpose Input/Output A interrupt 0*/
    .long   GPIOA_INT1_IRQHandler                           /* General Purpose Input/Output A interrupt 1*/
    .long   GPIOB_INT0_IRQHandler                           /* General Purpose Input/Output B interrupt 0*/
    .long   GPIOB_INT1_IRQHandler                           /* General Purpose Input/Output B interrupt 1*/
    .long   GPIOC_INT0_IRQHandler                           /* General Purpose Input/Output C interrupt 0*/
    .long   GPIOC_INT1_IRQHandler                           /* General Purpose Input/Output C interrupt 1*/
    .long   GPIOD_INT0_IRQHandler                           /* General Purpose Input/Output D interrupt 0*/
    .long   GPIOD_INT1_IRQHandler                           /* General Purpose Input/Output D interrupt 1*/
    .long   Reserved89_IRQHandler                           /* xxx Interrupt 89*/
    .long   Reserved90_IRQHandler                           /* xxx Interrupt 90*/
    .long   Reserved91_IRQHandler                           /* xxx Interrupt 91*/
    .long   Reserved92_IRQHandler                           /* xxx Interrupt 92*/
    .long   ADC0_IRQHandler                                 /* Analog-to-Digital Converter - General Purpose0 interrupt*/
    .long   CMP0_IRQHandler                                 /* Comparator - General Purpose0 interrupt*/
    .long   FLEXPWM0_SUBMODULE0_CMP_IRQHandler              /* PWM_CMP0: Submodule 0 compare interrupt*/
    .long   FLEXPWM0_SUBMODULE0_CAP_IRQHandler              /* PWM_CAP0: Submodule 0 input capture interrupt*/
    .long   FLEXPWM0_SUBMODULE0_RELOAD_IRQHandler           /* PWM_RELOAD0: Submodule 0 Reload interrupt*/
    .long   FLEXPWM0_SUBMODULE1_CMP_IRQHandler              /* PWM_CMP1: Submodule 1 compare interrupt*/
    .long   FLEXPWM0_SUBMODULE1_CAP_IRQHandler              /* PWM_CAP1: Submodule 1 input capture interrupt*/
    .long   FLEXPWM0_SUBMODULE1_RELOAD_IRQHandler           /* PWM_RELOAD1: Submodule 1 Reload interrupt*/
    .long   FLEXPWM0_SUBMODULE2_CMP_IRQHandler              /* PWM_CMP2: Submodule 2 compare interrupt*/
    .long   FLEXPWM0_SUBMODULE2_CAP_IRQHandler              /* PWM_CAP2: Submodule 2 input capture interrupt*/
    .long   FLEXPWM0_SUBMODULE2_RELOAD_IRQHandler           /* PWM_RELOAD2: Submodule 2 Reload interrupt*/
    .long   FLEXPWM0_RELOAD_ERROR_IRQHandler                /* PWM_RERR: Reload Error interrupt*/
    .long   FLEXPWM0_FAULT_IRQHandler                       /* PWM_FAULT: PWM fault input interrupt*/
    .long   ITRC_IRQHandler                                 /* Output of Intrusion and tamper response controller (ITRC_IRQ)*/
    .long   TDET_IRQHandler                                 /* Tamper detection interrupt*/
    .long   MU0_IRQHandler                                  /* Interrupt from MU0 to CPU0*/
    .long   INTM_IRQHandler                                 /* Error flag to show Radio interrrupt is not serviced in time*/
    .long   SGI_IRQHandler                                  /* SGI Interrupt*/
    .long   SECURE_ERR_IRQHandler                           /* Secure IP Error Interrupt*/
    .long   PKC_IRQHandler                                  /* PKC Module Error*/
    .long   TRNG0_IRQHandler                                /* TRNG Module Error*/
    .long   FLASH_Arbiter_IRQHandler                        /* Combined interrupt from Flash Arbiter */
    .long   BLE_INT0_IRQHandler                             /* BLE LL interrupt Set 0 (BLE_INT0_IRQn)*/
    .long   BLE_INT1_IRQHandler                             /* BLE LL interrupt Set 1 (BLE_INT1_IRQn)*/
    .long   BLE_INT2_IRQHandler                             /* BLE LL interrupt Set 2 (BLE_INT2_IRQn)*/
    .long   BRF_INT_IRQHandler                              /* BLE LL/ BTRFIRQ (BRF_INT_IRQn)*/
    .long   T1_INT_IRQHandler                               /* BLE LL / RTU 1 (T1_INT_IRQn)*/
    .long   T2_INT_IRQHandler                               /* BLE LL / RTU 2 (T2_INT_IRQn)*/
    .long   T3_INT_IRQHandler                               /* BLE LL / RTU 3 (T3_INT_IRQn)*/
    .long   T4_INT_IRQHandler                               /* BLE LL / RTU 4 (T4_INT_IRQn)*/
    .long   WDG1_IRQHandler                                 /* BLE LL / RTU 5 (WDG1_INT_IRQn)*/
    .long   OSC_32M_READY_IRQHandler                        /* 32M Crystal OSC ready interrupt*/
    .long   RBME_INT_IRQHandler                             /* Radio Bit Manipulation Engine (RBME_INT_IRQn)*/
    .long   RSM_INT_IRQHandler                              /* Ranging State Machine (RSM_INT_IRQn)*/
    .long   PLL_ABORT_INT_IRQHandler                        /* PLL control (PLL_ABORT_INT_IRQn)*/
    .long   DMA_LIGHT_IRQHandler                            /* DMA light*/
    .long   DefaultISR                                      /* 129*/
    .long   DefaultISR                                      /* 130*/
    .long   DefaultISR                                      /* 131*/
    .long   DefaultISR                                      /* 132*/
    .long   DefaultISR                                      /* 133*/
    .long   DefaultISR                                      /* 134*/
    .long   DefaultISR                                      /* 135*/
    .long   DefaultISR                                      /* 136*/
    .long   DefaultISR                                      /* 137*/
    .long   DefaultISR                                      /* 138*/
    .long   DefaultISR                                      /* 139*/
    .long   DefaultISR                                      /* 140*/
    .long   DefaultISR                                      /* 141*/
    .long   DefaultISR                                      /* 142*/
    .long   DefaultISR                                      /* 143*/
    .long   DefaultISR                                      /* 144*/
    .long   DefaultISR                                      /* 145*/
    .long   DefaultISR                                      /* 146*/
    .long   DefaultISR                                      /* 147*/
    .long   DefaultISR                                      /* 148*/
    .long   DefaultISR                                      /* 149*/
    .long   DefaultISR                                      /* 150*/
    .long   DefaultISR                                      /* 151*/
    .long   DefaultISR                                      /* 152*/
    .long   DefaultISR                                      /* 153*/
    .long   DefaultISR                                      /* 154*/
    .long   DefaultISR                                      /* 155*/
    .long   DefaultISR                                      /* 156*/
    .long   DefaultISR                                      /* 157*/
    .long   DefaultISR                                      /* 158*/
    .long   DefaultISR                                      /* 159*/
    .long   DefaultISR                                      /* 160*/
    .long   DefaultISR                                      /* 161*/
    .long   DefaultISR                                      /* 162*/
    .long   DefaultISR                                      /* 163*/
    .long   DefaultISR                                      /* 164*/
    .long   DefaultISR                                      /* 165*/
    .long   DefaultISR                                      /* 166*/
    .long   DefaultISR                                      /* 167*/
    .long   DefaultISR                                      /* 168*/
    .long   DefaultISR                                      /* 169*/
    .long   DefaultISR                                      /* 170*/
    .long   DefaultISR                                      /* 171*/
    .long   DefaultISR                                      /* 172*/
    .long   DefaultISR                                      /* 173*/
    .long   DefaultISR                                      /* 174*/
    .long   DefaultISR                                      /* 175*/
    .long   DefaultISR                                      /* 176*/
    .long   DefaultISR                                      /* 177*/
    .long   DefaultISR                                      /* 178*/
    .long   DefaultISR                                      /* 179*/
    .long   DefaultISR                                      /* 180*/
    .long   DefaultISR                                      /* 181*/
    .long   DefaultISR                                      /* 182*/
    .long   DefaultISR                                      /* 183*/
    .long   DefaultISR                                      /* 184*/
    .long   DefaultISR                                      /* 185*/
    .long   DefaultISR                                      /* 186*/
    .long   DefaultISR                                      /* 187*/
    .long   DefaultISR                                      /* 188*/
    .long   DefaultISR                                      /* 189*/
    .long   DefaultISR                                      /* 190*/
    .long   DefaultISR                                      /* 191*/
    .long   DefaultISR                                      /* 192*/
    .long   DefaultISR                                      /* 193*/
    .long   DefaultISR                                      /* 194*/
    .long   DefaultISR                                      /* 195*/
    .long   DefaultISR                                      /* 196*/
    .long   DefaultISR                                      /* 197*/
    .long   DefaultISR                                      /* 198*/
    .long   DefaultISR                                      /* 199*/
    .long   DefaultISR                                      /* 200*/
    .long   DefaultISR                                      /* 201*/
    .long   DefaultISR                                      /* 202*/
    .long   DefaultISR                                      /* 203*/
    .long   DefaultISR                                      /* 204*/
    .long   DefaultISR                                      /* 205*/
    .long   DefaultISR                                      /* 206*/
    .long   DefaultISR                                      /* 207*/
    .long   DefaultISR                                      /* 208*/
    .long   DefaultISR                                      /* 209*/
    .long   DefaultISR                                      /* 210*/
    .long   DefaultISR                                      /* 211*/
    .long   DefaultISR                                      /* 212*/
    .long   DefaultISR                                      /* 213*/
    .long   DefaultISR                                      /* 214*/
    .long   DefaultISR                                      /* 215*/
    .long   DefaultISR                                      /* 216*/
    .long   DefaultISR                                      /* 217*/
    .long   DefaultISR                                      /* 218*/
    .long   DefaultISR                                      /* 219*/
    .long   DefaultISR                                      /* 220*/
    .long   DefaultISR                                      /* 221*/
    .long   DefaultISR                                      /* 222*/
    .long   DefaultISR                                      /* 223*/
    .long   DefaultISR                                      /* 224*/
    .long   DefaultISR                                      /* 225*/
    .long   DefaultISR                                      /* 226*/
    .long   DefaultISR                                      /* 227*/
    .long   DefaultISR                                      /* 228*/
    .long   DefaultISR                                      /* 229*/
    .long   DefaultISR                                      /* 230*/
    .long   DefaultISR                                      /* 231*/
    .long   DefaultISR                                      /* 232*/
    .long   DefaultISR                                      /* 233*/
    .long   DefaultISR                                      /* 234*/
    .long   DefaultISR                                      /* 235*/
    .long   DefaultISR                                      /* 236*/
    .long   DefaultISR                                      /* 237*/
    .long   DefaultISR                                      /* 238*/
    .long   DefaultISR                                      /* 239*/
    .long   DefaultISR                                      /* 240*/
    .long   DefaultISR                                      /* 241*/
    .long   DefaultISR                                      /* 242*/
    .long   DefaultISR                                      /* 243*/
    .long   DefaultISR                                      /* 244*/
    .long   DefaultISR                                      /* 245*/
    .long   DefaultISR                                      /* 246*/
    .long   DefaultISR                                      /* 247*/
    .long   DefaultISR                                      /* 248*/
    .long   DefaultISR                                      /* 249*/
    .long   DefaultISR                                      /* 250*/
    .long   DefaultISR                                      /* 251*/
    .long   DefaultISR                                      /* 252*/
    .long   DefaultISR                                      /* 253*/
    .long   DefaultISR                                      /* 254*/
    .long   DefaultISR                                      /* 255*/

    .size    __isr_vector, . - __isr_vector

    .text
    .thumb

#if defined (__cplusplus)
#ifdef __REDLIB__
#error Redlib does not support C++
#endif
#endif
/* Reset Handler */

    .thumb_func
    .align 2
    .globl   Reset_Handler
    .weak    Reset_Handler
    .type    Reset_Handler, %function
Reset_Handler:
    cpsid   i                   /* Mask interrupts */
    .equ    VTOR, 0xE000ED08
    ldr     r0, =VTOR
    ldr     r1, =__isr_vector
    str     r1, [r0]
    ldr     r2, [r1]
    msr     msp, r2
    ldr     r0, =__StackLimit
    msr     msplim, r0

#if !defined(BYPASS_ECC_RAM_INIT)
    ldr     r0, =0x20000000
    ldr     r1, =.ram_init_sram0
    bics.w  r1, #0x10000000
    cmp     r0, r1
    bcc.n   .ram_init_done      /* Bypass ECC RAM initialization on RAM target, debugger will do the initialization */

.ram_init_sram0:                /* Initialize sram0 */
    ldr     r0, =0x20000000
    ldr     r1, =0x20010000
    ldr     r2, =0
    ldr     r3, =0
    ldr     r4, =0
    ldr     r5, =0
.loop01:
    stmia   r0!, {r2 - r5}
    cmp     r0, r1
    bcc.n   .loop01

.ram_init_done:
#endif

#ifndef __NO_SYSTEM_INIT
    ldr   r0,=SystemInit
    blx   r0
#endif
/*     Loop to copy data from read only memory to RAM. The ranges
 *      of copy from/to are specified by following symbols evaluated in
 *      linker script.
 *      __etext: End of code section, i.e., begin of data sections to copy from.
 *      __data_start__/__data_end__: RAM address range that data should be
 *      copied to. Both must be aligned to 4 bytes boundary.  */

    ldr    r1, =__etext
    ldr    r2, =__data_start__
    ldr    r3, =__data_end__

#ifdef __PERFORMANCE_IMPLEMENTATION
/* Here are two copies of loop implementations. First one favors performance
 * and the second one favors code size. Default uses the second one.
 * Define macro "__PERFORMANCE_IMPLEMENTATION" in project to use the first one */
    subs    r3, r2
    ble    .LC1
.LC0:
    subs    r3, #4
    ldr    r0, [r1, r3]
    str    r0, [r2, r3]
    bgt    .LC0
.LC1:
#else  /* code size implemenation */
.LC0:
    cmp     r2, r3
    ittt    lt
    ldrlt   r0, [r1], #4
    strlt   r0, [r2], #4
    blt    .LC0
#endif

#ifdef __STARTUP_CLEAR_BSS
/*     This part of work usually is done in C library startup code. Otherwise,
 *     define this macro to enable it in this startup.
 *
 *     Loop to zero out BSS section, which uses following symbols
 *     in linker script:
 *      __bss_start__: start of BSS section. Must align to 4
 *      __bss_end__: end of BSS section. Must align to 4
 */
    ldr r1, =__bss_start__
    ldr r2, =__bss_end__

    movs    r0, 0
.LC2:
    cmp     r1, r2
    itt    lt
    strlt   r0, [r1], #4
    blt    .LC2
#endif /* __STARTUP_CLEAR_BSS */

    cpsie   i               /* Unmask interrupts */
#ifndef __START
#ifdef __REDLIB__
#define __START __main
#else
#define __START _start
#endif
#endif
#ifndef __ATOLLIC__
    ldr   r0,=__START
    blx   r0
#else
    ldr   r0,=__libc_init_array
    blx   r0
    ldr   r0,=main
    bx    r0
#endif
    .pool
    .size Reset_Handler, . - Reset_Handler

    .align  1
    .thumb_func
    .weak DefaultISR
    .type DefaultISR, %function
DefaultISR:
    b DefaultISR
    .size DefaultISR, . - DefaultISR

    .align 1
    .thumb_func
    .weak NMI_Handler
    .type NMI_Handler, %function
NMI_Handler:
    ldr   r0,=NMI_Handler
    bx    r0
    .size NMI_Handler, . - NMI_Handler

    .align 1
    .thumb_func
    .weak HardFault_Handler
    .type HardFault_Handler, %function
HardFault_Handler:
    ldr   r0,=HardFault_Handler
    bx    r0
    .size HardFault_Handler, . - HardFault_Handler

    .align 1
    .thumb_func
    .weak SVC_Handler
    .type SVC_Handler, %function
SVC_Handler:
    ldr   r0,=SVC_Handler
    bx    r0
    .size SVC_Handler, . - SVC_Handler

    .align 1
    .thumb_func
    .weak PendSV_Handler
    .type PendSV_Handler, %function
PendSV_Handler:
    ldr   r0,=PendSV_Handler
    bx    r0
    .size PendSV_Handler, . - PendSV_Handler

    .align 1
    .thumb_func
    .weak SysTick_Handler
    .type SysTick_Handler, %function
SysTick_Handler:
    ldr   r0,=SysTick_Handler
    bx    r0
    .size SysTick_Handler, . - SysTick_Handler

    .align 1
    .thumb_func
    .weak DMA0_CH0_IRQHandler
    .type DMA0_CH0_IRQHandler, %function
DMA0_CH0_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH0_IRQHandler, . - DMA0_CH0_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH1_IRQHandler
    .type DMA0_CH1_IRQHandler, %function
DMA0_CH1_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH1_IRQHandler, . - DMA0_CH1_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH2_IRQHandler
    .type DMA0_CH2_IRQHandler, %function
DMA0_CH2_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH2_IRQHandler, . - DMA0_CH2_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH3_IRQHandler
    .type DMA0_CH3_IRQHandler, %function
DMA0_CH3_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH3_IRQHandler, . - DMA0_CH3_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH4_IRQHandler
    .type DMA0_CH4_IRQHandler, %function
DMA0_CH4_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH4_IRQHandler, . - DMA0_CH4_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH5_IRQHandler
    .type DMA0_CH5_IRQHandler, %function
DMA0_CH5_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH5_IRQHandler, . - DMA0_CH5_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH6_IRQHandler
    .type DMA0_CH6_IRQHandler, %function
DMA0_CH6_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH6_IRQHandler, . - DMA0_CH6_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH7_IRQHandler
    .type DMA0_CH7_IRQHandler, %function
DMA0_CH7_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH7_IRQHandler, . - DMA0_CH7_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH8_IRQHandler
    .type DMA0_CH8_IRQHandler, %function
DMA0_CH8_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH8_IRQHandler, . - DMA0_CH8_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH9_IRQHandler
    .type DMA0_CH9_IRQHandler, %function
DMA0_CH9_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH9_IRQHandler, . - DMA0_CH9_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH10_IRQHandler
    .type DMA0_CH10_IRQHandler, %function
DMA0_CH10_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH10_IRQHandler, . - DMA0_CH10_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH11_IRQHandler
    .type DMA0_CH11_IRQHandler, %function
DMA0_CH11_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH11_IRQHandler, . - DMA0_CH11_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH12_IRQHandler
    .type DMA0_CH12_IRQHandler, %function
DMA0_CH12_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH12_IRQHandler, . - DMA0_CH12_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH13_IRQHandler
    .type DMA0_CH13_IRQHandler, %function
DMA0_CH13_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH13_IRQHandler, . - DMA0_CH13_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH14_IRQHandler
    .type DMA0_CH14_IRQHandler, %function
DMA0_CH14_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH14_IRQHandler, . - DMA0_CH14_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH15_IRQHandler
    .type DMA0_CH15_IRQHandler, %function
DMA0_CH15_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_CH15_IRQHandler, . - DMA0_CH15_IRQHandler

    .align 1
    .thumb_func
    .weak SFA0_IRQHandler
    .type SFA0_IRQHandler, %function
SFA0_IRQHandler:
    ldr   r0,=SFA0_DriverIRQHandler
    bx    r0
    .size SFA0_IRQHandler, . - SFA0_IRQHandler

    .align 1
    .thumb_func
    .weak SFA1_IRQHandler
    .type SFA1_IRQHandler, %function
SFA1_IRQHandler:
    ldr   r0,=SFA1_DriverIRQHandler
    bx    r0
    .size SFA1_IRQHandler, . - SFA1_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C0_IRQHandler
    .type LPI2C0_IRQHandler, %function
LPI2C0_IRQHandler:
    ldr   r1,=LPI2C_DriverIRQHandler
    ldr   r0,=0x0
    bx    r1
    .size LPI2C0_IRQHandler, . - LPI2C0_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C1_IRQHandler
    .type LPI2C1_IRQHandler, %function
LPI2C1_IRQHandler:
    ldr   r1,=LPI2C_DriverIRQHandler
    ldr   r0,=0x1
    bx    r1
    .size LPI2C1_IRQHandler, . - LPI2C1_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI0_IRQHandler
    .type LPSPI0_IRQHandler, %function
LPSPI0_IRQHandler:
    ldr   r0,=LPSPI0_DriverIRQHandler
    bx    r0
    .size LPSPI0_IRQHandler, . - LPSPI0_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI1_IRQHandler
    .type LPSPI1_IRQHandler, %function
LPSPI1_IRQHandler:
    ldr   r0,=LPSPI1_DriverIRQHandler
    bx    r0
    .size LPSPI1_IRQHandler, . - LPSPI1_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI2_IRQHandler
    .type LPSPI2_IRQHandler, %function
LPSPI2_IRQHandler:
    ldr   r0,=LPSPI2_DriverIRQHandler
    bx    r0
    .size LPSPI2_IRQHandler, . - LPSPI2_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART0_IRQHandler
    .type LPUART0_IRQHandler, %function
LPUART0_IRQHandler:
    ldr   r1,=LPUART_DriverIRQHandler
    ldr   r0,=0x0
    bx    r1
    .size LPUART0_IRQHandler, . - LPUART0_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART1_IRQHandler
    .type LPUART1_IRQHandler, %function
LPUART1_IRQHandler:
    ldr   r1,=LPUART_DriverIRQHandler
    ldr   r0,=0x1
    bx    r1
    .size LPUART1_IRQHandler, . - LPUART1_IRQHandler

    .align 1
    .thumb_func
    .weak ITRC_IRQHandler
    .type ITRC_IRQHandler, %function
ITRC_IRQHandler:
    ldr   r0,=ITRC_DriverIRQHandler
    bx    r0
    .size ITRC_IRQHandler, . - ITRC_IRQHandler

    .align 1
    .thumb_func
    .weak DMA_LIGHT_IRQHandler
    .type DMA_LIGHT_IRQHandler, %function
DMA_LIGHT_IRQHandler:
    ldr   r0,=DMA_LIGHT_DriverIRQHandler
    bx    r0
    .size DMA_LIGHT_IRQHandler, . - DMA_LIGHT_IRQHandler


/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro def_irq_handler  handler_name
    .weak \handler_name
    .set  \handler_name, DefaultISR
    .endm

/* Exception Handlers */
    def_irq_handler    MemManage_Handler
    def_irq_handler    BusFault_Handler
    def_irq_handler    UsageFault_Handler
    def_irq_handler    SecureFault_Handler
    def_irq_handler    DebugMon_Handler
    def_irq_handler    CTI_IRQHandler
    def_irq_handler    CMC0_IRQHandler
    def_irq_handler    DMA0_DriverIRQHandler
    def_irq_handler    EWM0_IRQHandler
    def_irq_handler    MCM0_IRQHandler
    def_irq_handler    MSCM0_IRQHandler
    def_irq_handler    SYSCON0_IRQHandler
    def_irq_handler    SECCON0_IRQHandler
    def_irq_handler    SPC0_IRQHandler
    def_irq_handler    WUU0_IRQHandler
    def_irq_handler    WDOG0_IRQHandler
    def_irq_handler    WDOG1_IRQHandler
    def_irq_handler    CDOG0_IRQHandler
    def_irq_handler    CDOG1_IRQHandler
    def_irq_handler    SCG0_IRQHandler
    def_irq_handler    SFA0_DriverIRQHandler
    def_irq_handler    FMU0_IRQHandler
    def_irq_handler    SFA1_DriverIRQHandler
    def_irq_handler    DSB0_IRQHandler
    def_irq_handler    TRDC0_IRQHandler
    def_irq_handler    RTC_Alarm_IRQHandler
    def_irq_handler    RTC_Seconds_IRQHandler
    def_irq_handler    LPTMR0_IRQHandler
    def_irq_handler    LPTMR1_IRQHandler
    def_irq_handler    LPIT0_IRQHandler
    def_irq_handler    TPM_0_IRQHandler
    def_irq_handler    TPM_1_IRQHandler
    def_irq_handler    TPM_2_IRQHandler
    def_irq_handler    TPM_3_IRQHandler
    def_irq_handler    TPM_4_IRQHandler
    def_irq_handler    MU1_IRQHandler
    def_irq_handler    SYSCON0_ECC_IRQHandler
    def_irq_handler    LPI2C_DriverIRQHandler
    def_irq_handler    LPSPI0_DriverIRQHandler
    def_irq_handler    LPSPI1_DriverIRQHandler
    def_irq_handler    LPSPI2_DriverIRQHandler
    def_irq_handler    LPUART_DriverIRQHandler
    def_irq_handler    Reserved70_IRQHandler
    def_irq_handler    RF_ZIGBEE_IRQHandler
    def_irq_handler    RF_Generic_IRQHandler
    def_irq_handler    RF_BRIC_IRQHandler
    def_irq_handler    RF_LCL_IRQHandler
    def_irq_handler    RF_WOR_IRQHandler
    def_irq_handler    RFMC_IRQHandler
    def_irq_handler    Reserved77_IRQHandler
    def_irq_handler    Reserved78_IRQHandler
    def_irq_handler    COEX_INT_IRQHandler
    def_irq_handler    Reserved80_IRQHandler
    def_irq_handler    GPIOA_INT0_IRQHandler
    def_irq_handler    GPIOA_INT1_IRQHandler
    def_irq_handler    GPIOB_INT0_IRQHandler
    def_irq_handler    GPIOB_INT1_IRQHandler
    def_irq_handler    GPIOC_INT0_IRQHandler
    def_irq_handler    GPIOC_INT1_IRQHandler
    def_irq_handler    GPIOD_INT0_IRQHandler
    def_irq_handler    GPIOD_INT1_IRQHandler
    def_irq_handler    Reserved89_IRQHandler
    def_irq_handler    Reserved90_IRQHandler
    def_irq_handler    Reserved91_IRQHandler
    def_irq_handler    Reserved92_IRQHandler
    def_irq_handler    ADC0_IRQHandler
    def_irq_handler    CMP0_IRQHandler
    def_irq_handler    FLEXPWM0_SUBMODULE0_CMP_IRQHandler
    def_irq_handler    FLEXPWM0_SUBMODULE0_CAP_IRQHandler
    def_irq_handler    FLEXPWM0_SUBMODULE0_RELOAD_IRQHandler
    def_irq_handler    FLEXPWM0_SUBMODULE1_CMP_IRQHandler
    def_irq_handler    FLEXPWM0_SUBMODULE1_CAP_IRQHandler
    def_irq_handler    FLEXPWM0_SUBMODULE1_RELOAD_IRQHandler
    def_irq_handler    FLEXPWM0_SUBMODULE2_CMP_IRQHandler
    def_irq_handler    FLEXPWM0_SUBMODULE2_CAP_IRQHandler
    def_irq_handler    FLEXPWM0_SUBMODULE2_RELOAD_IRQHandler
    def_irq_handler    FLEXPWM0_RELOAD_ERROR_IRQHandler
    def_irq_handler    FLEXPWM0_FAULT_IRQHandler
    def_irq_handler    ITRC_DriverIRQHandler
    def_irq_handler    TDET_IRQHandler
    def_irq_handler    MU0_IRQHandler
    def_irq_handler    INTM_IRQHandler
    def_irq_handler    SGI_IRQHandler
    def_irq_handler    SECURE_ERR_IRQHandler
    def_irq_handler    PKC_IRQHandler
    def_irq_handler    TRNG0_IRQHandler
    def_irq_handler    FLASH_Arbiter_IRQHandler
    def_irq_handler    BLE_INT0_IRQHandler
    def_irq_handler    BLE_INT1_IRQHandler
    def_irq_handler    BLE_INT2_IRQHandler
    def_irq_handler    BRF_INT_IRQHandler
    def_irq_handler    T1_INT_IRQHandler
    def_irq_handler    T2_INT_IRQHandler
    def_irq_handler    T3_INT_IRQHandler
    def_irq_handler    T4_INT_IRQHandler
    def_irq_handler    WDG1_IRQHandler
    def_irq_handler    OSC_32M_READY_IRQHandler
    def_irq_handler    RBME_INT_IRQHandler
    def_irq_handler    RSM_INT_IRQHandler
    def_irq_handler    PLL_ABORT_INT_IRQHandler
    def_irq_handler    DMA_LIGHT_DriverIRQHandler

    .end
