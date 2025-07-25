/* ------------------------------------------------------------------------- */
/*  @file:    startup_MCXA144.s                                              */
/*  @purpose: CMSIS Cortex-M33 Core Device Startup File                      */
/*            MCXA144                                                        */
/*  @version: 2.0                                                            */
/*  @date:    2024-10-29                                                     */
/*  @build:   b250521                                                        */
/* ------------------------------------------------------------------------- */
/*                                                                           */
/* Copyright 1997-2016 Freescale Semiconductor, Inc.                         */
/* Copyright 2016-2025 NXP                                                   */
/* SPDX-License-Identifier: BSD-3-Clause                                     */
/*****************************************************************************/
/* Version: GCC for ARM Embedded Processors                                  */
/*****************************************************************************/
    .syntax unified
    .arch armv8-m.main
    .eabi_attribute Tag_ABI_align_preserved, 1 /*8-byte alignment */

    .section .isr_vector, "a"
    .align 2
    .globl __Vectors
__Vectors:
    .long   Image$$ARM_LIB_STACK$$ZI$$Limit                 /* Top of Stack */
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
    .long   Reserved16_IRQHandler                           /* OR IRQ1 to IRQ53*/
    .long   CMC_IRQHandler                                  /* Core Mode Controller interrupt*/
    .long   DMA_CH0_IRQHandler                              /* DMA3_0_CH0 error or transfer complete*/
    .long   DMA_CH1_IRQHandler                              /* DMA3_0_CH1 error or transfer complete*/
    .long   DMA_CH2_IRQHandler                              /* DMA3_0_CH2 error or transfer complete*/
    .long   DMA_CH3_IRQHandler                              /* DMA3_0_CH3 error or transfer complete*/
    .long   DMA_CH4_IRQHandler                              /* DMA3_0_CH4 error or transfer complete*/
    .long   DMA_CH5_IRQHandler                              /* DMA3_0_CH5 error or transfer complete*/
    .long   DMA_CH6_IRQHandler                              /* DMA3_0_CH6 error or transfer complete*/
    .long   DMA_CH7_IRQHandler                              /* DMA3_0_CH7 error or transfer complete*/
    .long   ERM0_SINGLE_BIT_IRQHandler                      /* ERM Single Bit error interrupt*/
    .long   ERM0_MULTI_BIT_IRQHandler                       /* ERM Multi Bit error interrupt*/
    .long   FMU0_IRQHandler                                 /* Flash Management Unit interrupt*/
    .long   GLIKEY0_IRQHandler                              /* GLIKEY Interrupt */
    .long   MBC0_IRQHandler                                 /* MBC secure violation interrupt*/
    .long   SCG0_IRQHandler                                 /* System Clock Generator interrupt*/
    .long   SPC0_IRQHandler                                 /* System Power Controller interrupt*/
    .long   VBAT0_IRQHandler                                /* VBAT interrupt*/
    .long   WUU0_IRQHandler                                 /* Wake Up Unit interrupt*/
    .long   CAN0_IRQHandler                                 /* Controller Area Network 0 interrupt*/
    .long   Reserved36_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved37_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved38_IRQHandler                           /* Reserved interrupt*/
    .long   FLEXIO_IRQHandler                               /* Flexible Input/Output interrupt*/
    .long   I3C0_IRQHandler                                 /* Improved Inter Integrated Circuit interrupt 0*/
    .long   Reserved41_IRQHandler                           /* Reserved interrupt*/
    .long   LPI2C0_IRQHandler                               /* Low-Power Inter Integrated Circuit interrupt*/
    .long   LPI2C1_IRQHandler                               /* Low-Power Inter Integrated Circuit interrupt*/
    .long   LPSPI0_IRQHandler                               /* Low-Power Serial Peripheral Interface interrupt*/
    .long   LPSPI1_IRQHandler                               /* Low-Power Serial Peripheral Interface interrupt*/
    .long   Reserved46_IRQHandler                           /* Reserved interrupt*/
    .long   LPUART0_IRQHandler                              /* Low-Power Universal Asynchronous Receive/Transmit interrupt*/
    .long   LPUART1_IRQHandler                              /* Low-Power Universal Asynchronous Receive/Transmit interrupt*/
    .long   LPUART2_IRQHandler                              /* Low-Power Universal Asynchronous Receive/Transmit interrupt*/
    .long   LPUART3_IRQHandler                              /* Low-Power Universal Asynchronous Receive/Transmit interrupt*/
    .long   LPUART4_IRQHandler                              /* Low-Power Universal Asynchronous Receive/Transmit interrupt*/
    .long   USB0_IRQHandler                                 /* Universal Serial Bus - Full Speed interrupt*/
    .long   Reserved53_IRQHandler                           /* Reserved interrupt*/
    .long   CDOG0_IRQHandler                                /* Code Watchdog Timer 0 interrupt*/
    .long   CTIMER0_IRQHandler                              /* Standard counter/timer 0 interrupt*/
    .long   CTIMER1_IRQHandler                              /* Standard counter/timer 1 interrupt*/
    .long   CTIMER2_IRQHandler                              /* Standard counter/timer 2 interrupt*/
    .long   CTIMER3_IRQHandler                              /* Standard counter/timer 3 interrupt*/
    .long   CTIMER4_IRQHandler                              /* Standard counter/timer 4 interrupt*/
    .long   FLEXPWM0_RELOAD_ERROR_IRQHandler                /* FlexPWM0_reload_error interrupt*/
    .long   FLEXPWM0_FAULT_IRQHandler                       /* FlexPWM0_fault interrupt*/
    .long   FLEXPWM0_SUBMODULE0_IRQHandler                  /* FlexPWM0 Submodule 0 capture/compare/reload interrupt*/
    .long   FLEXPWM0_SUBMODULE1_IRQHandler                  /* FlexPWM0 Submodule 1 capture/compare/reload interrupt*/
    .long   FLEXPWM0_SUBMODULE2_IRQHandler                  /* FlexPWM0 Submodule 2 capture/compare/reload interrupt*/
    .long   Reserved65_IRQHandler                           /* Reserved interrupt*/
    .long   QDC0_COMPARE_IRQHandler                         /* Compare*/
    .long   QDC0_HOME_IRQHandler                            /* Home*/
    .long   QDC0_WATCHDOG_IRQHandler                        /* Watchdog / Simultaneous A and B Change*/
    .long   QDC0_INDEX_IRQHandler                           /* Index / Roll Over / Roll Under*/
    .long   FREQME0_IRQHandler                              /* Frequency Measurement interrupt*/
    .long   LPTMR0_IRQHandler                               /* Low Power Timer 0 interrupt*/
    .long   Reserved72_IRQHandler                           /* Reserved interrupt*/
    .long   OS_EVENT_IRQHandler                             /* OS event timer interrupt*/
    .long   WAKETIMER0_IRQHandler                           /* Wake Timer Interrupt*/
    .long   UTICK0_IRQHandler                               /* Micro-Tick Timer interrupt*/
    .long   WWDT0_IRQHandler                                /* Windowed Watchdog Timer 0 interrupt*/
    .long   Reserved77_IRQHandler                           /* Reserved interrupt*/
    .long   ADC0_IRQHandler                                 /* Analog-to-Digital Converter interrupt*/
    .long   ADC1_IRQHandler                                 /* Analog-to-Digital Converter interrupt*/
    .long   CMP0_IRQHandler                                 /* Comparator interrupt*/
    .long   CMP1_IRQHandler                                 /* Comparator interrupt*/
    .long   Reserved82_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved83_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved84_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved85_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved86_IRQHandler                           /* Reserved interrupt*/
    .long   GPIO0_IRQHandler                                /* General Purpose Input/Output interrupt 0*/
    .long   GPIO1_IRQHandler                                /* General Purpose Input/Output interrupt 1*/
    .long   GPIO2_IRQHandler                                /* General Purpose Input/Output interrupt 2*/
    .long   GPIO3_IRQHandler                                /* General Purpose Input/Output interrupt 3*/
    .long   GPIO4_IRQHandler                                /* General Purpose Input/Output interrupt 4*/
    .long   Reserved92_IRQHandler                           /* Reserved interrupt*/
    .long   LPI2C2_IRQHandler                               /* Low-Power Inter Integrated Circuit interrupt*/
    .long   LPI2C3_IRQHandler                               /* Low-Power Inter Integrated Circuit interrupt*/
    .long   Reserved95_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved96_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved97_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved98_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved99_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved100_IRQHandler                          /* Reserved interrupt*/
    .long   Reserved101_IRQHandler                          /* Reserved interrupt*/
    .long   Reserved102_IRQHandler                          /* Reserved interrupt*/
    .long   Reserved103_IRQHandler                          /* Reserved interrupt*/
    .long   Reserved104_IRQHandler                          /* Reserved interrupt*/

    .size    __Vectors, . - __Vectors

    .text
    .thumb

/* Reset Handler */

    .thumb_func
    .align 2
    .weak    Reset_Handler
    .type    Reset_Handler, %function
Reset_Handler:
    cpsid   i               /* Mask interrupts */
    .equ    VTOR, 0xE000ED08
    ldr     r0, =VTOR
    ldr     r1, =__Vectors
    str     r1, [r0]
    ldr     r2, [r1]
    msr     msp, r2
    ldr     r0, =Image$$ARM_LIB_STACK$$ZI$$Base
    msr     msplim, r0
    ldr     r0,=SystemInit
    blx     r0
    cpsie   i               /* Unmask interrupts */
    ldr     r0,=__main
    bx      r0

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
    .weak Reserved16_IRQHandler
    .type Reserved16_IRQHandler, %function
Reserved16_IRQHandler:
    ldr   r0,=Reserved16_DriverIRQHandler
    bx    r0
    .size Reserved16_IRQHandler, . - Reserved16_IRQHandler

    .align 1
    .thumb_func
    .weak CMC_IRQHandler
    .type CMC_IRQHandler, %function
CMC_IRQHandler:
    ldr   r0,=CMC_DriverIRQHandler
    bx    r0
    .size CMC_IRQHandler, . - CMC_IRQHandler

    .align 1
    .thumb_func
    .weak DMA_CH0_IRQHandler
    .type DMA_CH0_IRQHandler, %function
DMA_CH0_IRQHandler:
    ldr   r0,=DMA_CH0_DriverIRQHandler
    bx    r0
    .size DMA_CH0_IRQHandler, . - DMA_CH0_IRQHandler

    .align 1
    .thumb_func
    .weak DMA_CH1_IRQHandler
    .type DMA_CH1_IRQHandler, %function
DMA_CH1_IRQHandler:
    ldr   r0,=DMA_CH1_DriverIRQHandler
    bx    r0
    .size DMA_CH1_IRQHandler, . - DMA_CH1_IRQHandler

    .align 1
    .thumb_func
    .weak DMA_CH2_IRQHandler
    .type DMA_CH2_IRQHandler, %function
DMA_CH2_IRQHandler:
    ldr   r0,=DMA_CH2_DriverIRQHandler
    bx    r0
    .size DMA_CH2_IRQHandler, . - DMA_CH2_IRQHandler

    .align 1
    .thumb_func
    .weak DMA_CH3_IRQHandler
    .type DMA_CH3_IRQHandler, %function
DMA_CH3_IRQHandler:
    ldr   r0,=DMA_CH3_DriverIRQHandler
    bx    r0
    .size DMA_CH3_IRQHandler, . - DMA_CH3_IRQHandler

    .align 1
    .thumb_func
    .weak DMA_CH4_IRQHandler
    .type DMA_CH4_IRQHandler, %function
DMA_CH4_IRQHandler:
    ldr   r0,=DMA_CH4_DriverIRQHandler
    bx    r0
    .size DMA_CH4_IRQHandler, . - DMA_CH4_IRQHandler

    .align 1
    .thumb_func
    .weak DMA_CH5_IRQHandler
    .type DMA_CH5_IRQHandler, %function
DMA_CH5_IRQHandler:
    ldr   r0,=DMA_CH5_DriverIRQHandler
    bx    r0
    .size DMA_CH5_IRQHandler, . - DMA_CH5_IRQHandler

    .align 1
    .thumb_func
    .weak DMA_CH6_IRQHandler
    .type DMA_CH6_IRQHandler, %function
DMA_CH6_IRQHandler:
    ldr   r0,=DMA_CH6_DriverIRQHandler
    bx    r0
    .size DMA_CH6_IRQHandler, . - DMA_CH6_IRQHandler

    .align 1
    .thumb_func
    .weak DMA_CH7_IRQHandler
    .type DMA_CH7_IRQHandler, %function
DMA_CH7_IRQHandler:
    ldr   r0,=DMA_CH7_DriverIRQHandler
    bx    r0
    .size DMA_CH7_IRQHandler, . - DMA_CH7_IRQHandler

    .align 1
    .thumb_func
    .weak ERM0_SINGLE_BIT_IRQHandler
    .type ERM0_SINGLE_BIT_IRQHandler, %function
ERM0_SINGLE_BIT_IRQHandler:
    ldr   r0,=ERM0_SINGLE_BIT_DriverIRQHandler
    bx    r0
    .size ERM0_SINGLE_BIT_IRQHandler, . - ERM0_SINGLE_BIT_IRQHandler

    .align 1
    .thumb_func
    .weak ERM0_MULTI_BIT_IRQHandler
    .type ERM0_MULTI_BIT_IRQHandler, %function
ERM0_MULTI_BIT_IRQHandler:
    ldr   r0,=ERM0_MULTI_BIT_DriverIRQHandler
    bx    r0
    .size ERM0_MULTI_BIT_IRQHandler, . - ERM0_MULTI_BIT_IRQHandler

    .align 1
    .thumb_func
    .weak FMU0_IRQHandler
    .type FMU0_IRQHandler, %function
FMU0_IRQHandler:
    ldr   r0,=FMU0_DriverIRQHandler
    bx    r0
    .size FMU0_IRQHandler, . - FMU0_IRQHandler

    .align 1
    .thumb_func
    .weak GLIKEY0_IRQHandler
    .type GLIKEY0_IRQHandler, %function
GLIKEY0_IRQHandler:
    ldr   r0,=GLIKEY0_DriverIRQHandler
    bx    r0
    .size GLIKEY0_IRQHandler, . - GLIKEY0_IRQHandler

    .align 1
    .thumb_func
    .weak MBC0_IRQHandler
    .type MBC0_IRQHandler, %function
MBC0_IRQHandler:
    ldr   r0,=MBC0_DriverIRQHandler
    bx    r0
    .size MBC0_IRQHandler, . - MBC0_IRQHandler

    .align 1
    .thumb_func
    .weak SCG0_IRQHandler
    .type SCG0_IRQHandler, %function
SCG0_IRQHandler:
    ldr   r0,=SCG0_DriverIRQHandler
    bx    r0
    .size SCG0_IRQHandler, . - SCG0_IRQHandler

    .align 1
    .thumb_func
    .weak SPC0_IRQHandler
    .type SPC0_IRQHandler, %function
SPC0_IRQHandler:
    ldr   r0,=SPC0_DriverIRQHandler
    bx    r0
    .size SPC0_IRQHandler, . - SPC0_IRQHandler

    .align 1
    .thumb_func
    .weak VBAT0_IRQHandler
    .type VBAT0_IRQHandler, %function
VBAT0_IRQHandler:
    ldr   r0,=VBAT0_DriverIRQHandler
    bx    r0
    .size VBAT0_IRQHandler, . - VBAT0_IRQHandler

    .align 1
    .thumb_func
    .weak WUU0_IRQHandler
    .type WUU0_IRQHandler, %function
WUU0_IRQHandler:
    ldr   r0,=WUU0_DriverIRQHandler
    bx    r0
    .size WUU0_IRQHandler, . - WUU0_IRQHandler

    .align 1
    .thumb_func
    .weak CAN0_IRQHandler
    .type CAN0_IRQHandler, %function
CAN0_IRQHandler:
    ldr   r0,=CAN0_DriverIRQHandler
    bx    r0
    .size CAN0_IRQHandler, . - CAN0_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved36_IRQHandler
    .type Reserved36_IRQHandler, %function
Reserved36_IRQHandler:
    ldr   r0,=Reserved36_DriverIRQHandler
    bx    r0
    .size Reserved36_IRQHandler, . - Reserved36_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved37_IRQHandler
    .type Reserved37_IRQHandler, %function
Reserved37_IRQHandler:
    ldr   r0,=Reserved37_DriverIRQHandler
    bx    r0
    .size Reserved37_IRQHandler, . - Reserved37_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved38_IRQHandler
    .type Reserved38_IRQHandler, %function
Reserved38_IRQHandler:
    ldr   r0,=Reserved38_DriverIRQHandler
    bx    r0
    .size Reserved38_IRQHandler, . - Reserved38_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXIO_IRQHandler
    .type FLEXIO_IRQHandler, %function
FLEXIO_IRQHandler:
    ldr   r0,=FLEXIO_DriverIRQHandler
    bx    r0
    .size FLEXIO_IRQHandler, . - FLEXIO_IRQHandler

    .align 1
    .thumb_func
    .weak I3C0_IRQHandler
    .type I3C0_IRQHandler, %function
I3C0_IRQHandler:
    ldr   r0,=I3C0_DriverIRQHandler
    bx    r0
    .size I3C0_IRQHandler, . - I3C0_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved41_IRQHandler
    .type Reserved41_IRQHandler, %function
Reserved41_IRQHandler:
    ldr   r0,=Reserved41_DriverIRQHandler
    bx    r0
    .size Reserved41_IRQHandler, . - Reserved41_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C0_IRQHandler
    .type LPI2C0_IRQHandler, %function
LPI2C0_IRQHandler:
    ldr   r0,=LPI2C0_DriverIRQHandler
    bx    r0
    .size LPI2C0_IRQHandler, . - LPI2C0_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C1_IRQHandler
    .type LPI2C1_IRQHandler, %function
LPI2C1_IRQHandler:
    ldr   r0,=LPI2C1_DriverIRQHandler
    bx    r0
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
    .weak Reserved46_IRQHandler
    .type Reserved46_IRQHandler, %function
Reserved46_IRQHandler:
    ldr   r0,=Reserved46_DriverIRQHandler
    bx    r0
    .size Reserved46_IRQHandler, . - Reserved46_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART0_IRQHandler
    .type LPUART0_IRQHandler, %function
LPUART0_IRQHandler:
    ldr   r0,=LPUART0_DriverIRQHandler
    bx    r0
    .size LPUART0_IRQHandler, . - LPUART0_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART1_IRQHandler
    .type LPUART1_IRQHandler, %function
LPUART1_IRQHandler:
    ldr   r0,=LPUART1_DriverIRQHandler
    bx    r0
    .size LPUART1_IRQHandler, . - LPUART1_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART2_IRQHandler
    .type LPUART2_IRQHandler, %function
LPUART2_IRQHandler:
    ldr   r0,=LPUART2_DriverIRQHandler
    bx    r0
    .size LPUART2_IRQHandler, . - LPUART2_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART3_IRQHandler
    .type LPUART3_IRQHandler, %function
LPUART3_IRQHandler:
    ldr   r0,=LPUART3_DriverIRQHandler
    bx    r0
    .size LPUART3_IRQHandler, . - LPUART3_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART4_IRQHandler
    .type LPUART4_IRQHandler, %function
LPUART4_IRQHandler:
    ldr   r0,=LPUART4_DriverIRQHandler
    bx    r0
    .size LPUART4_IRQHandler, . - LPUART4_IRQHandler

    .align 1
    .thumb_func
    .weak USB0_IRQHandler
    .type USB0_IRQHandler, %function
USB0_IRQHandler:
    ldr   r0,=USB0_DriverIRQHandler
    bx    r0
    .size USB0_IRQHandler, . - USB0_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved53_IRQHandler
    .type Reserved53_IRQHandler, %function
Reserved53_IRQHandler:
    ldr   r0,=Reserved53_DriverIRQHandler
    bx    r0
    .size Reserved53_IRQHandler, . - Reserved53_IRQHandler

    .align 1
    .thumb_func
    .weak CDOG0_IRQHandler
    .type CDOG0_IRQHandler, %function
CDOG0_IRQHandler:
    ldr   r0,=CDOG0_DriverIRQHandler
    bx    r0
    .size CDOG0_IRQHandler, . - CDOG0_IRQHandler

    .align 1
    .thumb_func
    .weak CTIMER0_IRQHandler
    .type CTIMER0_IRQHandler, %function
CTIMER0_IRQHandler:
    ldr   r0,=CTIMER0_DriverIRQHandler
    bx    r0
    .size CTIMER0_IRQHandler, . - CTIMER0_IRQHandler

    .align 1
    .thumb_func
    .weak CTIMER1_IRQHandler
    .type CTIMER1_IRQHandler, %function
CTIMER1_IRQHandler:
    ldr   r0,=CTIMER1_DriverIRQHandler
    bx    r0
    .size CTIMER1_IRQHandler, . - CTIMER1_IRQHandler

    .align 1
    .thumb_func
    .weak CTIMER2_IRQHandler
    .type CTIMER2_IRQHandler, %function
CTIMER2_IRQHandler:
    ldr   r0,=CTIMER2_DriverIRQHandler
    bx    r0
    .size CTIMER2_IRQHandler, . - CTIMER2_IRQHandler

    .align 1
    .thumb_func
    .weak CTIMER3_IRQHandler
    .type CTIMER3_IRQHandler, %function
CTIMER3_IRQHandler:
    ldr   r0,=CTIMER3_DriverIRQHandler
    bx    r0
    .size CTIMER3_IRQHandler, . - CTIMER3_IRQHandler

    .align 1
    .thumb_func
    .weak CTIMER4_IRQHandler
    .type CTIMER4_IRQHandler, %function
CTIMER4_IRQHandler:
    ldr   r0,=CTIMER4_DriverIRQHandler
    bx    r0
    .size CTIMER4_IRQHandler, . - CTIMER4_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXPWM0_RELOAD_ERROR_IRQHandler
    .type FLEXPWM0_RELOAD_ERROR_IRQHandler, %function
FLEXPWM0_RELOAD_ERROR_IRQHandler:
    ldr   r0,=FLEXPWM0_RELOAD_ERROR_DriverIRQHandler
    bx    r0
    .size FLEXPWM0_RELOAD_ERROR_IRQHandler, . - FLEXPWM0_RELOAD_ERROR_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXPWM0_FAULT_IRQHandler
    .type FLEXPWM0_FAULT_IRQHandler, %function
FLEXPWM0_FAULT_IRQHandler:
    ldr   r0,=FLEXPWM0_FAULT_DriverIRQHandler
    bx    r0
    .size FLEXPWM0_FAULT_IRQHandler, . - FLEXPWM0_FAULT_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXPWM0_SUBMODULE0_IRQHandler
    .type FLEXPWM0_SUBMODULE0_IRQHandler, %function
FLEXPWM0_SUBMODULE0_IRQHandler:
    ldr   r0,=FLEXPWM0_SUBMODULE0_DriverIRQHandler
    bx    r0
    .size FLEXPWM0_SUBMODULE0_IRQHandler, . - FLEXPWM0_SUBMODULE0_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXPWM0_SUBMODULE1_IRQHandler
    .type FLEXPWM0_SUBMODULE1_IRQHandler, %function
FLEXPWM0_SUBMODULE1_IRQHandler:
    ldr   r0,=FLEXPWM0_SUBMODULE1_DriverIRQHandler
    bx    r0
    .size FLEXPWM0_SUBMODULE1_IRQHandler, . - FLEXPWM0_SUBMODULE1_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXPWM0_SUBMODULE2_IRQHandler
    .type FLEXPWM0_SUBMODULE2_IRQHandler, %function
FLEXPWM0_SUBMODULE2_IRQHandler:
    ldr   r0,=FLEXPWM0_SUBMODULE2_DriverIRQHandler
    bx    r0
    .size FLEXPWM0_SUBMODULE2_IRQHandler, . - FLEXPWM0_SUBMODULE2_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved65_IRQHandler
    .type Reserved65_IRQHandler, %function
Reserved65_IRQHandler:
    ldr   r0,=Reserved65_DriverIRQHandler
    bx    r0
    .size Reserved65_IRQHandler, . - Reserved65_IRQHandler

    .align 1
    .thumb_func
    .weak QDC0_COMPARE_IRQHandler
    .type QDC0_COMPARE_IRQHandler, %function
QDC0_COMPARE_IRQHandler:
    ldr   r0,=QDC0_COMPARE_DriverIRQHandler
    bx    r0
    .size QDC0_COMPARE_IRQHandler, . - QDC0_COMPARE_IRQHandler

    .align 1
    .thumb_func
    .weak QDC0_HOME_IRQHandler
    .type QDC0_HOME_IRQHandler, %function
QDC0_HOME_IRQHandler:
    ldr   r0,=QDC0_HOME_DriverIRQHandler
    bx    r0
    .size QDC0_HOME_IRQHandler, . - QDC0_HOME_IRQHandler

    .align 1
    .thumb_func
    .weak QDC0_WATCHDOG_IRQHandler
    .type QDC0_WATCHDOG_IRQHandler, %function
QDC0_WATCHDOG_IRQHandler:
    ldr   r0,=QDC0_WATCHDOG_DriverIRQHandler
    bx    r0
    .size QDC0_WATCHDOG_IRQHandler, . - QDC0_WATCHDOG_IRQHandler

    .align 1
    .thumb_func
    .weak QDC0_INDEX_IRQHandler
    .type QDC0_INDEX_IRQHandler, %function
QDC0_INDEX_IRQHandler:
    ldr   r0,=QDC0_INDEX_DriverIRQHandler
    bx    r0
    .size QDC0_INDEX_IRQHandler, . - QDC0_INDEX_IRQHandler

    .align 1
    .thumb_func
    .weak FREQME0_IRQHandler
    .type FREQME0_IRQHandler, %function
FREQME0_IRQHandler:
    ldr   r0,=FREQME0_DriverIRQHandler
    bx    r0
    .size FREQME0_IRQHandler, . - FREQME0_IRQHandler

    .align 1
    .thumb_func
    .weak LPTMR0_IRQHandler
    .type LPTMR0_IRQHandler, %function
LPTMR0_IRQHandler:
    ldr   r0,=LPTMR0_DriverIRQHandler
    bx    r0
    .size LPTMR0_IRQHandler, . - LPTMR0_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved72_IRQHandler
    .type Reserved72_IRQHandler, %function
Reserved72_IRQHandler:
    ldr   r0,=Reserved72_DriverIRQHandler
    bx    r0
    .size Reserved72_IRQHandler, . - Reserved72_IRQHandler

    .align 1
    .thumb_func
    .weak OS_EVENT_IRQHandler
    .type OS_EVENT_IRQHandler, %function
OS_EVENT_IRQHandler:
    ldr   r0,=OS_EVENT_DriverIRQHandler
    bx    r0
    .size OS_EVENT_IRQHandler, . - OS_EVENT_IRQHandler

    .align 1
    .thumb_func
    .weak WAKETIMER0_IRQHandler
    .type WAKETIMER0_IRQHandler, %function
WAKETIMER0_IRQHandler:
    ldr   r0,=WAKETIMER0_DriverIRQHandler
    bx    r0
    .size WAKETIMER0_IRQHandler, . - WAKETIMER0_IRQHandler

    .align 1
    .thumb_func
    .weak UTICK0_IRQHandler
    .type UTICK0_IRQHandler, %function
UTICK0_IRQHandler:
    ldr   r0,=UTICK0_DriverIRQHandler
    bx    r0
    .size UTICK0_IRQHandler, . - UTICK0_IRQHandler

    .align 1
    .thumb_func
    .weak WWDT0_IRQHandler
    .type WWDT0_IRQHandler, %function
WWDT0_IRQHandler:
    ldr   r0,=WWDT0_DriverIRQHandler
    bx    r0
    .size WWDT0_IRQHandler, . - WWDT0_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved77_IRQHandler
    .type Reserved77_IRQHandler, %function
Reserved77_IRQHandler:
    ldr   r0,=Reserved77_DriverIRQHandler
    bx    r0
    .size Reserved77_IRQHandler, . - Reserved77_IRQHandler

    .align 1
    .thumb_func
    .weak ADC0_IRQHandler
    .type ADC0_IRQHandler, %function
ADC0_IRQHandler:
    ldr   r0,=ADC0_DriverIRQHandler
    bx    r0
    .size ADC0_IRQHandler, . - ADC0_IRQHandler

    .align 1
    .thumb_func
    .weak ADC1_IRQHandler
    .type ADC1_IRQHandler, %function
ADC1_IRQHandler:
    ldr   r0,=ADC1_DriverIRQHandler
    bx    r0
    .size ADC1_IRQHandler, . - ADC1_IRQHandler

    .align 1
    .thumb_func
    .weak CMP0_IRQHandler
    .type CMP0_IRQHandler, %function
CMP0_IRQHandler:
    ldr   r0,=CMP0_DriverIRQHandler
    bx    r0
    .size CMP0_IRQHandler, . - CMP0_IRQHandler

    .align 1
    .thumb_func
    .weak CMP1_IRQHandler
    .type CMP1_IRQHandler, %function
CMP1_IRQHandler:
    ldr   r0,=CMP1_DriverIRQHandler
    bx    r0
    .size CMP1_IRQHandler, . - CMP1_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved82_IRQHandler
    .type Reserved82_IRQHandler, %function
Reserved82_IRQHandler:
    ldr   r0,=Reserved82_DriverIRQHandler
    bx    r0
    .size Reserved82_IRQHandler, . - Reserved82_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved83_IRQHandler
    .type Reserved83_IRQHandler, %function
Reserved83_IRQHandler:
    ldr   r0,=Reserved83_DriverIRQHandler
    bx    r0
    .size Reserved83_IRQHandler, . - Reserved83_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved84_IRQHandler
    .type Reserved84_IRQHandler, %function
Reserved84_IRQHandler:
    ldr   r0,=Reserved84_DriverIRQHandler
    bx    r0
    .size Reserved84_IRQHandler, . - Reserved84_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved85_IRQHandler
    .type Reserved85_IRQHandler, %function
Reserved85_IRQHandler:
    ldr   r0,=Reserved85_DriverIRQHandler
    bx    r0
    .size Reserved85_IRQHandler, . - Reserved85_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved86_IRQHandler
    .type Reserved86_IRQHandler, %function
Reserved86_IRQHandler:
    ldr   r0,=Reserved86_DriverIRQHandler
    bx    r0
    .size Reserved86_IRQHandler, . - Reserved86_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO0_IRQHandler
    .type GPIO0_IRQHandler, %function
GPIO0_IRQHandler:
    ldr   r0,=GPIO0_DriverIRQHandler
    bx    r0
    .size GPIO0_IRQHandler, . - GPIO0_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO1_IRQHandler
    .type GPIO1_IRQHandler, %function
GPIO1_IRQHandler:
    ldr   r0,=GPIO1_DriverIRQHandler
    bx    r0
    .size GPIO1_IRQHandler, . - GPIO1_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO2_IRQHandler
    .type GPIO2_IRQHandler, %function
GPIO2_IRQHandler:
    ldr   r0,=GPIO2_DriverIRQHandler
    bx    r0
    .size GPIO2_IRQHandler, . - GPIO2_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO3_IRQHandler
    .type GPIO3_IRQHandler, %function
GPIO3_IRQHandler:
    ldr   r0,=GPIO3_DriverIRQHandler
    bx    r0
    .size GPIO3_IRQHandler, . - GPIO3_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO4_IRQHandler
    .type GPIO4_IRQHandler, %function
GPIO4_IRQHandler:
    ldr   r0,=GPIO4_DriverIRQHandler
    bx    r0
    .size GPIO4_IRQHandler, . - GPIO4_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved92_IRQHandler
    .type Reserved92_IRQHandler, %function
Reserved92_IRQHandler:
    ldr   r0,=Reserved92_DriverIRQHandler
    bx    r0
    .size Reserved92_IRQHandler, . - Reserved92_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C2_IRQHandler
    .type LPI2C2_IRQHandler, %function
LPI2C2_IRQHandler:
    ldr   r0,=LPI2C2_DriverIRQHandler
    bx    r0
    .size LPI2C2_IRQHandler, . - LPI2C2_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C3_IRQHandler
    .type LPI2C3_IRQHandler, %function
LPI2C3_IRQHandler:
    ldr   r0,=LPI2C3_DriverIRQHandler
    bx    r0
    .size LPI2C3_IRQHandler, . - LPI2C3_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved95_IRQHandler
    .type Reserved95_IRQHandler, %function
Reserved95_IRQHandler:
    ldr   r0,=Reserved95_DriverIRQHandler
    bx    r0
    .size Reserved95_IRQHandler, . - Reserved95_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved96_IRQHandler
    .type Reserved96_IRQHandler, %function
Reserved96_IRQHandler:
    ldr   r0,=Reserved96_DriverIRQHandler
    bx    r0
    .size Reserved96_IRQHandler, . - Reserved96_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved97_IRQHandler
    .type Reserved97_IRQHandler, %function
Reserved97_IRQHandler:
    ldr   r0,=Reserved97_DriverIRQHandler
    bx    r0
    .size Reserved97_IRQHandler, . - Reserved97_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved98_IRQHandler
    .type Reserved98_IRQHandler, %function
Reserved98_IRQHandler:
    ldr   r0,=Reserved98_DriverIRQHandler
    bx    r0
    .size Reserved98_IRQHandler, . - Reserved98_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved99_IRQHandler
    .type Reserved99_IRQHandler, %function
Reserved99_IRQHandler:
    ldr   r0,=Reserved99_DriverIRQHandler
    bx    r0
    .size Reserved99_IRQHandler, . - Reserved99_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved100_IRQHandler
    .type Reserved100_IRQHandler, %function
Reserved100_IRQHandler:
    ldr   r0,=Reserved100_DriverIRQHandler
    bx    r0
    .size Reserved100_IRQHandler, . - Reserved100_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved101_IRQHandler
    .type Reserved101_IRQHandler, %function
Reserved101_IRQHandler:
    ldr   r0,=Reserved101_DriverIRQHandler
    bx    r0
    .size Reserved101_IRQHandler, . - Reserved101_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved102_IRQHandler
    .type Reserved102_IRQHandler, %function
Reserved102_IRQHandler:
    ldr   r0,=Reserved102_DriverIRQHandler
    bx    r0
    .size Reserved102_IRQHandler, . - Reserved102_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved103_IRQHandler
    .type Reserved103_IRQHandler, %function
Reserved103_IRQHandler:
    ldr   r0,=Reserved103_DriverIRQHandler
    bx    r0
    .size Reserved103_IRQHandler, . - Reserved103_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved104_IRQHandler
    .type Reserved104_IRQHandler, %function
Reserved104_IRQHandler:
    ldr   r0,=Reserved104_DriverIRQHandler
    bx    r0
    .size Reserved104_IRQHandler, . - Reserved104_IRQHandler


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
    def_irq_handler    Reserved16_DriverIRQHandler
    def_irq_handler    CMC_DriverIRQHandler
    def_irq_handler    DMA_CH0_DriverIRQHandler
    def_irq_handler    DMA_CH1_DriverIRQHandler
    def_irq_handler    DMA_CH2_DriverIRQHandler
    def_irq_handler    DMA_CH3_DriverIRQHandler
    def_irq_handler    DMA_CH4_DriverIRQHandler
    def_irq_handler    DMA_CH5_DriverIRQHandler
    def_irq_handler    DMA_CH6_DriverIRQHandler
    def_irq_handler    DMA_CH7_DriverIRQHandler
    def_irq_handler    ERM0_SINGLE_BIT_DriverIRQHandler
    def_irq_handler    ERM0_MULTI_BIT_DriverIRQHandler
    def_irq_handler    FMU0_DriverIRQHandler
    def_irq_handler    GLIKEY0_DriverIRQHandler
    def_irq_handler    MBC0_DriverIRQHandler
    def_irq_handler    SCG0_DriverIRQHandler
    def_irq_handler    SPC0_DriverIRQHandler
    def_irq_handler    VBAT0_DriverIRQHandler
    def_irq_handler    WUU0_DriverIRQHandler
    def_irq_handler    CAN0_DriverIRQHandler
    def_irq_handler    Reserved36_DriverIRQHandler
    def_irq_handler    Reserved37_DriverIRQHandler
    def_irq_handler    Reserved38_DriverIRQHandler
    def_irq_handler    FLEXIO_DriverIRQHandler
    def_irq_handler    I3C0_DriverIRQHandler
    def_irq_handler    Reserved41_DriverIRQHandler
    def_irq_handler    LPI2C0_DriverIRQHandler
    def_irq_handler    LPI2C1_DriverIRQHandler
    def_irq_handler    LPSPI0_DriverIRQHandler
    def_irq_handler    LPSPI1_DriverIRQHandler
    def_irq_handler    Reserved46_DriverIRQHandler
    def_irq_handler    LPUART0_DriverIRQHandler
    def_irq_handler    LPUART1_DriverIRQHandler
    def_irq_handler    LPUART2_DriverIRQHandler
    def_irq_handler    LPUART3_DriverIRQHandler
    def_irq_handler    LPUART4_DriverIRQHandler
    def_irq_handler    USB0_DriverIRQHandler
    def_irq_handler    Reserved53_DriverIRQHandler
    def_irq_handler    CDOG0_DriverIRQHandler
    def_irq_handler    CTIMER0_DriverIRQHandler
    def_irq_handler    CTIMER1_DriverIRQHandler
    def_irq_handler    CTIMER2_DriverIRQHandler
    def_irq_handler    CTIMER3_DriverIRQHandler
    def_irq_handler    CTIMER4_DriverIRQHandler
    def_irq_handler    FLEXPWM0_RELOAD_ERROR_DriverIRQHandler
    def_irq_handler    FLEXPWM0_FAULT_DriverIRQHandler
    def_irq_handler    FLEXPWM0_SUBMODULE0_DriverIRQHandler
    def_irq_handler    FLEXPWM0_SUBMODULE1_DriverIRQHandler
    def_irq_handler    FLEXPWM0_SUBMODULE2_DriverIRQHandler
    def_irq_handler    Reserved65_DriverIRQHandler
    def_irq_handler    QDC0_COMPARE_DriverIRQHandler
    def_irq_handler    QDC0_HOME_DriverIRQHandler
    def_irq_handler    QDC0_WATCHDOG_DriverIRQHandler
    def_irq_handler    QDC0_INDEX_DriverIRQHandler
    def_irq_handler    FREQME0_DriverIRQHandler
    def_irq_handler    LPTMR0_DriverIRQHandler
    def_irq_handler    Reserved72_DriverIRQHandler
    def_irq_handler    OS_EVENT_DriverIRQHandler
    def_irq_handler    WAKETIMER0_DriverIRQHandler
    def_irq_handler    UTICK0_DriverIRQHandler
    def_irq_handler    WWDT0_DriverIRQHandler
    def_irq_handler    Reserved77_DriverIRQHandler
    def_irq_handler    ADC0_DriverIRQHandler
    def_irq_handler    ADC1_DriverIRQHandler
    def_irq_handler    CMP0_DriverIRQHandler
    def_irq_handler    CMP1_DriverIRQHandler
    def_irq_handler    Reserved82_DriverIRQHandler
    def_irq_handler    Reserved83_DriverIRQHandler
    def_irq_handler    Reserved84_DriverIRQHandler
    def_irq_handler    Reserved85_DriverIRQHandler
    def_irq_handler    Reserved86_DriverIRQHandler
    def_irq_handler    GPIO0_DriverIRQHandler
    def_irq_handler    GPIO1_DriverIRQHandler
    def_irq_handler    GPIO2_DriverIRQHandler
    def_irq_handler    GPIO3_DriverIRQHandler
    def_irq_handler    GPIO4_DriverIRQHandler
    def_irq_handler    Reserved92_DriverIRQHandler
    def_irq_handler    LPI2C2_DriverIRQHandler
    def_irq_handler    LPI2C3_DriverIRQHandler
    def_irq_handler    Reserved95_DriverIRQHandler
    def_irq_handler    Reserved96_DriverIRQHandler
    def_irq_handler    Reserved97_DriverIRQHandler
    def_irq_handler    Reserved98_DriverIRQHandler
    def_irq_handler    Reserved99_DriverIRQHandler
    def_irq_handler    Reserved100_DriverIRQHandler
    def_irq_handler    Reserved101_DriverIRQHandler
    def_irq_handler    Reserved102_DriverIRQHandler
    def_irq_handler    Reserved103_DriverIRQHandler
    def_irq_handler    Reserved104_DriverIRQHandler

    .end
