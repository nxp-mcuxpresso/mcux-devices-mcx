/* ------------------------------------------------------------------------- */
/*  @file:    startup_MCXA287.s                                              */
/*  @purpose: CMSIS Cortex-M33 Core Device Startup File                      */
/*            MCXA287                                                        */
/*  @version: 2.0                                                            */
/*  @date:    2024-10-29                                                     */
/*  @build:   b251124                                                        */
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

    .section .isr_vector, "a"
    .align 2
    .globl __Vectors
__Vectors:
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
    .long   Reserved16_IRQHandler                           /* OR IRQ1 to IRQ53*/
    .long   CMC_IRQHandler                                  /* Core Mode Controller interrupt*/
    .long   DMA0_CH0_IRQHandler                             /* DMA3_0_CH0 error or transfer complete*/
    .long   DMA0_CH1_IRQHandler                             /* DMA3_0_CH1 error or transfer complete*/
    .long   DMA0_CH2_IRQHandler                             /* DMA3_0_CH2 error or transfer complete*/
    .long   DMA0_CH3_IRQHandler                             /* DMA3_0_CH3 error or transfer complete*/
    .long   DMA0_CH4_IRQHandler                             /* DMA3_0_CH4 error or transfer complete*/
    .long   DMA0_CH5_IRQHandler                             /* DMA3_0_CH5 error or transfer complete*/
    .long   DMA0_CH6_IRQHandler                             /* DMA3_0_CH6 error or transfer complete*/
    .long   DMA0_CH7_IRQHandler                             /* DMA3_0_CH7 error or transfer complete*/
    .long   ERM0_SINGLE_BIT_IRQHandler                      /* ERM Single Bit error interrupt*/
    .long   ERM0_MULTI_BIT_IRQHandler                       /* ERM Multi Bit error interrupt*/
    .long   FMU0_IRQHandler                                 /* Flash Management Unit interrupt*/
    .long   GLIKEY0_IRQHandler                              /* GLIKEY Interrupt */
    .long   MBC0_IRQHandler                                 /* MBC secure violation interrupt*/
    .long   SCG0_IRQHandler                                 /* System Clock Generator interrupt*/
    .long   SPC0_IRQHandler                                 /* System Power Controller interrupt*/
    .long   TDET_IRQHandler                                 /* TDET interrrupt*/
    .long   WUU0_IRQHandler                                 /* Wake Up Unit interrupt*/
    .long   CAN0_IRQHandler                                 /* Controller Area Network 0 interrupt*/
    .long   CAN1_IRQHandler                                 /* Controller Area Network 1 interrupt*/
    .long   Reserved37_IRQHandler                           /* xxx Interrupt 37*/
    .long   Reserved38_IRQHandler                           /* xxx Interrupt 38*/
    .long   FLEXIO_IRQHandler                               /* Flexible Input/Output interrupt*/
    .long   I3C0_IRQHandler                                 /* Improved Inter Integrated Circuit interrupt 0*/
    .long   I3C1_IRQHandler                                 /* Improved Inter Integrated Circuit interrupt 1*/
    .long   LPI2C0_IRQHandler                               /* Low-Power Inter Integrated Circuit 0 interrupt*/
    .long   LPI2C1_IRQHandler                               /* Low-Power Inter Integrated Circuit 1 interrupt*/
    .long   LPSPI0_IRQHandler                               /* Low-Power Serial Peripheral Interface 0 interrupt*/
    .long   LPSPI1_IRQHandler                               /* Low-Power Serial Peripheral Interface 1 interrupt*/
    .long   LPSPI2_IRQHandler                               /* Low-Power Serial Peripheral Interface 2 interrupt*/
    .long   LPUART0_IRQHandler                              /* Low-Power Universal Asynchronous Receive/Transmit 0 interrupt*/
    .long   LPUART1_IRQHandler                              /* Low-Power Universal Asynchronous Receive/Transmit 1 interrupt*/
    .long   LPUART2_IRQHandler                              /* Low-Power Universal Asynchronous Receive/Transmit 2 interrupt*/
    .long   LPUART3_IRQHandler                              /* Low-Power Universal Asynchronous Receive/Transmit 3 interrupt*/
    .long   LPUART4_IRQHandler                              /* Low-Power Universal Asynchronous Receive/Transmit 4 interrupt*/
    .long   Reserved52_IRQHandler                           /* xxx Interrupt 52*/
    .long   Reserved53_IRQHandler                           /* xxx Interrupt 53*/
    .long   CDOG0_IRQHandler                                /* Code Watchdog Timer 0 interrupt*/
    .long   CTIMER0_IRQHandler                              /* Standard counter/timer 0 interrupt*/
    .long   CTIMER1_IRQHandler                              /* Standard counter/timer 1 interrupt*/
    .long   CTIMER2_IRQHandler                              /* Standard counter/timer 2 interrupt*/
    .long   CTIMER3_IRQHandler                              /* Standard counter/timer 3 interrupt*/
    .long   CTIMER4_IRQHandler                              /* Standard counter/timer 4 interrupt*/
    .long   Reserved60_IRQHandler                           /* xxx Interrupt 60*/
    .long   Reserved61_IRQHandler                           /* xxx Interrupt 61*/
    .long   Reserved62_IRQHandler                           /* xxx Interrupt 62*/
    .long   Reserved63_IRQHandler                           /* xxx Interrupt 63*/
    .long   Reserved64_IRQHandler                           /* xxx Interrupt 64*/
    .long   Reserved65_IRQHandler                           /* xxx Interrupt 65*/
    .long   Reserved66_IRQHandler                           /* xxx Interrupt 66*/
    .long   Reserved67_IRQHandler                           /* xxx Interrupt 67*/
    .long   Reserved68_IRQHandler                           /* xxx Interrupt 68*/
    .long   Reserved69_IRQHandler                           /* xxx Interrupt 69*/
    .long   FREQME0_IRQHandler                              /* Frequency Measurement interrupt*/
    .long   LPTMR0_IRQHandler                               /* Low Power Timer 0 interrupt*/
    .long   Reserved72_IRQHandler                           /* xxx Interrupt 72*/
    .long   OS_EVENT_IRQHandler                             /* OS event timer interrupt*/
    .long   WAKETIMER0_IRQHandler                           /* Wake Timer Interrupt*/
    .long   UTICK0_IRQHandler                               /* Micro-Tick Timer interrupt*/
    .long   WWDT0_IRQHandler                                /* Windowed Watchdog Timer 0 interrupt*/
    .long   WWDT1_IRQHandler                                /* Windowed Watchdog Timer 2 interrupt*/
    .long   ADC0_IRQHandler                                 /* Analog-to-Digital Converter 0 interrupt*/
    .long   ADC1_IRQHandler                                 /* Analog-to-Digital Converter 1 interrupt*/
    .long   CMP0_IRQHandler                                 /* Comparator 0 interrupt*/
    .long   Reserved81_IRQHandler                           /* xxx Interrupt 81*/
    .long   Reserved82_IRQHandler                           /* xxx Interrupt 82*/
    .long   DAC0_IRQHandler                                 /* Digital-to-Analog Converter 0 - General Purpose interrupt*/
    .long   DAC1_IRQHandler                                 /* Digital-to-Analog Converter 1 - General Purpose interrupt*/
    .long   Reserved85_IRQHandler                           /* xxx Interrupt 85*/
    .long   Reserved86_IRQHandler                           /* xxx Interrupt 86*/
    .long   GPIO0_IRQHandler                                /* General Purpose Input/Output 0 interrupt 0*/
    .long   GPIO1_IRQHandler                                /* General Purpose Input/Output 1 interrupt 0*/
    .long   GPIO2_IRQHandler                                /* General Purpose Input/Output 2 interrupt 0*/
    .long   GPIO3_IRQHandler                                /* General Purpose Input/Output 3 interrupt 0*/
    .long   GPIO4_IRQHandler                                /* General Purpose Input/Output 4 interrupt 0*/
    .long   GPIO5_IRQHandler                                /* General Purpose Input/Output 5 interrupt 0*/
    .long   LPI2C2_IRQHandler                               /* Low-Power Inter Integrated Circuit 2 interrupt*/
    .long   LPI2C3_IRQHandler                               /* Low-Power Inter Integrated Circuit 3 interrupt*/
    .long   Reserved95_IRQHandler                           /* xxx Interrupt 95*/
    .long   Reserved96_IRQHandler                           /* xxx Interrupt 96*/
    .long   Reserved97_IRQHandler                           /* xxx Interrupt 97*/
    .long   Reserved98_IRQHandler                           /* xxx Interrupt 98*/
    .long   Reserved99_IRQHandler                           /* xxx Interrupt 99*/
    .long   Reserved100_IRQHandler                          /* xxx Interrupt 100*/
    .long   Reserved101_IRQHandler                          /* xxx Interrupt 101*/
    .long   Reserved102_IRQHandler                          /* xxx Interrupt 102*/
    .long   Reserved103_IRQHandler                          /* xxx Interrupt 103*/
    .long   Reserved104_IRQHandler                          /* xxx Interrupt 104*/
    .long   ESPI_IRQHandler                                 /* eSPI interrupt*/
    .long   ETHERNET_IRQHandler                             /* Ethernet QoS interrupt*/
    .long   ETHERNET_PMT_IRQHandler                         /* Ethernet QoS power management interrupt*/
    .long   Reserved108_IRQHandler                          /* xxx Interrupt 108*/
    .long   TENBASET_PHY0_IRQHandler                        /* 10Base-T1S interrupt*/
    .long   I3C2_IRQHandler                                 /* Improved Inter Integrated Circuit interrupt 2*/
    .long   LPUART5_IRQHandler                              /* Low-Power Universal Asynchronous Receive/Transmit interrupt*/
    .long   Reserved112_IRQHandler                          /* xxx Interrupt 112*/
    .long   LPSPI3_IRQHandler                               /* Low-Power Serial Peripheral Interface 3 interrupt*/
    .long   LPSPI4_IRQHandler                               /* Low-Power Serial Peripheral Interface 4 interrupt*/
    .long   LPSPI5_IRQHandler                               /* Low-Power Serial Peripheral Interface 5 interrupt*/
    .long   LPI2C4_IRQHandler                               /* Low-Power Inter Integrated Circuit 4 interrupt*/
    .long   I3C3_IRQHandler                                 /* Improved Inter Integrated Circuit interrupt 3*/
    .long   Reserved118_IRQHandler                          /* xxx Interrupt 118*/
    .long   USB1_HS_IRQHandler                              /* USB High Speed OTG Controller interrupt */
    .long   USB1_HS_PHY_IRQHandler                          /* USBHS DCD or USBHS Phy interrupt*/
    .long   Reserved121_IRQHandler                          /* xxx Interrupt 121*/
    .long   FLEXSPI0_IRQHandler                             /* Flexible Serial Peripheral Interface interrupt*/
    .long   Reserved123_IRQHandler                          /* xxx Interrupt 123*/
    .long   SMARTDMA_IRQHandler                             /* SmartDMA interrupt*/
    .long   CDOG1_IRQHandler                                /* Code Watchdog Timer 1 interrupt*/
    .long   PKC_IRQHandler                                  /* PKC interrupt*/
    .long   SGI_IRQHandler                                  /* SGI interrupt*/
    .long   SPI_FILTER_IRQHandler                           /* Reserved interrupt*/
    .long   TRNG0_IRQHandler                                /* True Random Number Generator interrupt*/
    .long   SECURE_ERR_IRQHandler                           /* Secure IP Error interrupt. It OR SGI, PKC, TRNG error together. */
    .long   SEC_HYPERVISOR_CALL_IRQHandler                  /* AHB Secure Controller hypervisor call interrupt*/
    .long   Reserved132_IRQHandler                          /* xxx Interrupt 132*/
    .long   Reserved133_IRQHandler                          /* xxx Interrupt 133*/
    .long   Reserved134_IRQHandler                          /* xxx Interrupt 134*/
    .long   RTC_IRQHandler                                  /* RTC alarm interrupt*/
    .long   Reserved136_IRQHandler                          /* xxx Interrupt 136*/
    .long   Reserved137_IRQHandler                          /* xxx Interrupt 137*/
    .long   GDET_IRQHandler                                 /* Digital Glitch Detect 0 interrupt */
    .long   EWM0_IRQHandler                                 /* External Watchdog Monitor interrupt*/
    .long   TSI_END_OF_SCAN_IRQHandler                      /* TSI End of Scan interrupt*/
    .long   TSI_OUT_OF_SCAN_IRQHandler                      /* TSI Out of Scan interrupt*/
    .long   GPIO0_1_IRQHandler                              /* General Purpose Input/Output 0 interrupt 1*/
    .long   GPIO1_1_IRQHandler                              /* General Purpose Input/Output 1 interrupt 1*/
    .long   GPIO2_1_IRQHandler                              /* General Purpose Input/Output 2 interrupt 1*/
    .long   GPIO3_1_IRQHandler                              /* General Purpose Input/Output 3 interrupt 1*/
    .long   GPIO4_1_IRQHandler                              /* General Purpose Input/Output 4 interrupt 1*/
    .long   GPIO5_1_IRQHandler                              /* General Purpose Input/Output 5 interrupt 1*/
    .long   Reserved148_IRQHandler                          /* xxx Interrupt 148*/
    .long   ITRC0_IRQHandler                                /* Intrusion and Tamper Response Controller interrupt*/
    .long   DMA0_CH8_IRQHandler                             /* DMA3_0_CH8 error or transfer complete*/
    .long   DMA0_CH9_IRQHandler                             /* DMA3_0_CH9 error or transfer complete*/
    .long   DMA0_CH10_IRQHandler                            /* DMA3_0_CH10 error or transfer complete*/
    .long   DMA0_CH11_IRQHandler                            /* DMA3_0_CH11 error or transfer complete*/
    .long   Reserved154_IRQHandler                          /* xxx Interrupt 154*/
    .long   Reserved155_IRQHandler                          /* xxx Interrupt 155*/
    .long   Reserved156_IRQHandler                          /* xxx Interrupt 156*/
    .long   Reserved157_IRQHandler                          /* xxx Interrupt 157*/
    .long   DMA1_CH0_IRQHandler                             /* DMA3_1_CH0 error or transfer complete*/
    .long   DMA1_CH1_IRQHandler                             /* DMA3_1_CH1 error or transfer complete*/
    .long   DMA1_CH2_IRQHandler                             /* DMA3_1_CH2 error or transfer complete*/
    .long   DMA1_CH3_IRQHandler                             /* DMA3_1_CH3 error or transfer complete*/

    .size   __Vectors, . - __Vectors

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
    cpsid   i               /* Mask interrupts */
    .equ    VTOR, 0xE000ED08
    ldr     r0, =VTOR
    ldr     r1, =__Vectors
    str     r1, [r0]
    ldr     r2, [r1]
    msr     msp, r2
    ldr     r0, =__StackLimit
    msr     msplim, r0
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

#if 1
/* Here are two copies of loop implemenations. First one favors code size
 * and the second one favors performance. Default uses the first one.
 * Change to "#if 0" to use the second one */
.LC0:
    cmp     r2, r3
    ittt    lt
    ldrlt   r0, [r1], #4
    strlt   r0, [r2], #4
    blt    .LC0
#else
    subs    r3, r2
    ble    .LC1
.LC0:
    subs    r3, #4
    ldr    r0, [r1, r3]
    str    r0, [r2, r3]
    bgt    .LC0
.LC1:
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

/* Add stack / heap initializaiton */
    movs    r0, 0
    ldr     r1, =__HeapBase
    ldr     r2, =__HeapLimit
.LC3:
    cmp     r1, r2
    itt     lt
    strlt   r0, [r1], #4
    blt     .LC3

    ldr     r1, =__StackLimit
    ldr     r2, =__StackTop
.LC4:
    cmp     r1, r2
    itt     lt
    strlt   r0, [r1], #4
    blt     .LC4

/*End of stack / heap initializaiton */
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
    .weak DMA0_CH0_IRQHandler
    .type DMA0_CH0_IRQHandler, %function
DMA0_CH0_IRQHandler:
    ldr   r0,=DMA0_CH0_DriverIRQHandler
    bx    r0
    .size DMA0_CH0_IRQHandler, . - DMA0_CH0_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH1_IRQHandler
    .type DMA0_CH1_IRQHandler, %function
DMA0_CH1_IRQHandler:
    ldr   r0,=DMA0_CH1_DriverIRQHandler
    bx    r0
    .size DMA0_CH1_IRQHandler, . - DMA0_CH1_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH2_IRQHandler
    .type DMA0_CH2_IRQHandler, %function
DMA0_CH2_IRQHandler:
    ldr   r0,=DMA0_CH2_DriverIRQHandler
    bx    r0
    .size DMA0_CH2_IRQHandler, . - DMA0_CH2_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH3_IRQHandler
    .type DMA0_CH3_IRQHandler, %function
DMA0_CH3_IRQHandler:
    ldr   r0,=DMA0_CH3_DriverIRQHandler
    bx    r0
    .size DMA0_CH3_IRQHandler, . - DMA0_CH3_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH4_IRQHandler
    .type DMA0_CH4_IRQHandler, %function
DMA0_CH4_IRQHandler:
    ldr   r0,=DMA0_CH4_DriverIRQHandler
    bx    r0
    .size DMA0_CH4_IRQHandler, . - DMA0_CH4_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH5_IRQHandler
    .type DMA0_CH5_IRQHandler, %function
DMA0_CH5_IRQHandler:
    ldr   r0,=DMA0_CH5_DriverIRQHandler
    bx    r0
    .size DMA0_CH5_IRQHandler, . - DMA0_CH5_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH6_IRQHandler
    .type DMA0_CH6_IRQHandler, %function
DMA0_CH6_IRQHandler:
    ldr   r0,=DMA0_CH6_DriverIRQHandler
    bx    r0
    .size DMA0_CH6_IRQHandler, . - DMA0_CH6_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH7_IRQHandler
    .type DMA0_CH7_IRQHandler, %function
DMA0_CH7_IRQHandler:
    ldr   r0,=DMA0_CH7_DriverIRQHandler
    bx    r0
    .size DMA0_CH7_IRQHandler, . - DMA0_CH7_IRQHandler

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
    .weak TDET_IRQHandler
    .type TDET_IRQHandler, %function
TDET_IRQHandler:
    ldr   r0,=TDET_DriverIRQHandler
    bx    r0
    .size TDET_IRQHandler, . - TDET_IRQHandler

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
    .weak CAN1_IRQHandler
    .type CAN1_IRQHandler, %function
CAN1_IRQHandler:
    ldr   r0,=CAN1_DriverIRQHandler
    bx    r0
    .size CAN1_IRQHandler, . - CAN1_IRQHandler

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
    .weak I3C1_IRQHandler
    .type I3C1_IRQHandler, %function
I3C1_IRQHandler:
    ldr   r0,=I3C1_DriverIRQHandler
    bx    r0
    .size I3C1_IRQHandler, . - I3C1_IRQHandler

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
    .weak Reserved52_IRQHandler
    .type Reserved52_IRQHandler, %function
Reserved52_IRQHandler:
    ldr   r0,=Reserved52_DriverIRQHandler
    bx    r0
    .size Reserved52_IRQHandler, . - Reserved52_IRQHandler

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
    .weak Reserved60_IRQHandler
    .type Reserved60_IRQHandler, %function
Reserved60_IRQHandler:
    ldr   r0,=Reserved60_DriverIRQHandler
    bx    r0
    .size Reserved60_IRQHandler, . - Reserved60_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved61_IRQHandler
    .type Reserved61_IRQHandler, %function
Reserved61_IRQHandler:
    ldr   r0,=Reserved61_DriverIRQHandler
    bx    r0
    .size Reserved61_IRQHandler, . - Reserved61_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved62_IRQHandler
    .type Reserved62_IRQHandler, %function
Reserved62_IRQHandler:
    ldr   r0,=Reserved62_DriverIRQHandler
    bx    r0
    .size Reserved62_IRQHandler, . - Reserved62_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved63_IRQHandler
    .type Reserved63_IRQHandler, %function
Reserved63_IRQHandler:
    ldr   r0,=Reserved63_DriverIRQHandler
    bx    r0
    .size Reserved63_IRQHandler, . - Reserved63_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved64_IRQHandler
    .type Reserved64_IRQHandler, %function
Reserved64_IRQHandler:
    ldr   r0,=Reserved64_DriverIRQHandler
    bx    r0
    .size Reserved64_IRQHandler, . - Reserved64_IRQHandler

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
    .weak Reserved66_IRQHandler
    .type Reserved66_IRQHandler, %function
Reserved66_IRQHandler:
    ldr   r0,=Reserved66_DriverIRQHandler
    bx    r0
    .size Reserved66_IRQHandler, . - Reserved66_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved67_IRQHandler
    .type Reserved67_IRQHandler, %function
Reserved67_IRQHandler:
    ldr   r0,=Reserved67_DriverIRQHandler
    bx    r0
    .size Reserved67_IRQHandler, . - Reserved67_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved68_IRQHandler
    .type Reserved68_IRQHandler, %function
Reserved68_IRQHandler:
    ldr   r0,=Reserved68_DriverIRQHandler
    bx    r0
    .size Reserved68_IRQHandler, . - Reserved68_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved69_IRQHandler
    .type Reserved69_IRQHandler, %function
Reserved69_IRQHandler:
    ldr   r0,=Reserved69_DriverIRQHandler
    bx    r0
    .size Reserved69_IRQHandler, . - Reserved69_IRQHandler

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
    .weak WWDT1_IRQHandler
    .type WWDT1_IRQHandler, %function
WWDT1_IRQHandler:
    ldr   r0,=WWDT1_DriverIRQHandler
    bx    r0
    .size WWDT1_IRQHandler, . - WWDT1_IRQHandler

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
    .weak Reserved81_IRQHandler
    .type Reserved81_IRQHandler, %function
Reserved81_IRQHandler:
    ldr   r0,=Reserved81_DriverIRQHandler
    bx    r0
    .size Reserved81_IRQHandler, . - Reserved81_IRQHandler

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
    .weak DAC0_IRQHandler
    .type DAC0_IRQHandler, %function
DAC0_IRQHandler:
    ldr   r0,=DAC0_DriverIRQHandler
    bx    r0
    .size DAC0_IRQHandler, . - DAC0_IRQHandler

    .align 1
    .thumb_func
    .weak DAC1_IRQHandler
    .type DAC1_IRQHandler, %function
DAC1_IRQHandler:
    ldr   r0,=DAC1_DriverIRQHandler
    bx    r0
    .size DAC1_IRQHandler, . - DAC1_IRQHandler

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
    .weak GPIO5_IRQHandler
    .type GPIO5_IRQHandler, %function
GPIO5_IRQHandler:
    ldr   r0,=GPIO5_DriverIRQHandler
    bx    r0
    .size GPIO5_IRQHandler, . - GPIO5_IRQHandler

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

    .align 1
    .thumb_func
    .weak ESPI_IRQHandler
    .type ESPI_IRQHandler, %function
ESPI_IRQHandler:
    ldr   r0,=ESPI_DriverIRQHandler
    bx    r0
    .size ESPI_IRQHandler, . - ESPI_IRQHandler

    .align 1
    .thumb_func
    .weak ETHERNET_IRQHandler
    .type ETHERNET_IRQHandler, %function
ETHERNET_IRQHandler:
    ldr   r0,=ETHERNET_DriverIRQHandler
    bx    r0
    .size ETHERNET_IRQHandler, . - ETHERNET_IRQHandler

    .align 1
    .thumb_func
    .weak ETHERNET_PMT_IRQHandler
    .type ETHERNET_PMT_IRQHandler, %function
ETHERNET_PMT_IRQHandler:
    ldr   r0,=ETHERNET_PMT_DriverIRQHandler
    bx    r0
    .size ETHERNET_PMT_IRQHandler, . - ETHERNET_PMT_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved108_IRQHandler
    .type Reserved108_IRQHandler, %function
Reserved108_IRQHandler:
    ldr   r0,=Reserved108_DriverIRQHandler
    bx    r0
    .size Reserved108_IRQHandler, . - Reserved108_IRQHandler

    .align 1
    .thumb_func
    .weak TENBASET_PHY0_IRQHandler
    .type TENBASET_PHY0_IRQHandler, %function
TENBASET_PHY0_IRQHandler:
    ldr   r0,=TENBASET_PHY0_DriverIRQHandler
    bx    r0
    .size TENBASET_PHY0_IRQHandler, . - TENBASET_PHY0_IRQHandler

    .align 1
    .thumb_func
    .weak I3C2_IRQHandler
    .type I3C2_IRQHandler, %function
I3C2_IRQHandler:
    ldr   r0,=I3C2_DriverIRQHandler
    bx    r0
    .size I3C2_IRQHandler, . - I3C2_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART5_IRQHandler
    .type LPUART5_IRQHandler, %function
LPUART5_IRQHandler:
    ldr   r0,=LPUART5_DriverIRQHandler
    bx    r0
    .size LPUART5_IRQHandler, . - LPUART5_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved112_IRQHandler
    .type Reserved112_IRQHandler, %function
Reserved112_IRQHandler:
    ldr   r0,=Reserved112_DriverIRQHandler
    bx    r0
    .size Reserved112_IRQHandler, . - Reserved112_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI3_IRQHandler
    .type LPSPI3_IRQHandler, %function
LPSPI3_IRQHandler:
    ldr   r0,=LPSPI3_DriverIRQHandler
    bx    r0
    .size LPSPI3_IRQHandler, . - LPSPI3_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI4_IRQHandler
    .type LPSPI4_IRQHandler, %function
LPSPI4_IRQHandler:
    ldr   r0,=LPSPI4_DriverIRQHandler
    bx    r0
    .size LPSPI4_IRQHandler, . - LPSPI4_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI5_IRQHandler
    .type LPSPI5_IRQHandler, %function
LPSPI5_IRQHandler:
    ldr   r0,=LPSPI5_DriverIRQHandler
    bx    r0
    .size LPSPI5_IRQHandler, . - LPSPI5_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C4_IRQHandler
    .type LPI2C4_IRQHandler, %function
LPI2C4_IRQHandler:
    ldr   r0,=LPI2C4_DriverIRQHandler
    bx    r0
    .size LPI2C4_IRQHandler, . - LPI2C4_IRQHandler

    .align 1
    .thumb_func
    .weak I3C3_IRQHandler
    .type I3C3_IRQHandler, %function
I3C3_IRQHandler:
    ldr   r0,=I3C3_DriverIRQHandler
    bx    r0
    .size I3C3_IRQHandler, . - I3C3_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved118_IRQHandler
    .type Reserved118_IRQHandler, %function
Reserved118_IRQHandler:
    ldr   r0,=Reserved118_DriverIRQHandler
    bx    r0
    .size Reserved118_IRQHandler, . - Reserved118_IRQHandler

    .align 1
    .thumb_func
    .weak USB1_HS_IRQHandler
    .type USB1_HS_IRQHandler, %function
USB1_HS_IRQHandler:
    ldr   r0,=USB1_HS_DriverIRQHandler
    bx    r0
    .size USB1_HS_IRQHandler, . - USB1_HS_IRQHandler

    .align 1
    .thumb_func
    .weak USB1_HS_PHY_IRQHandler
    .type USB1_HS_PHY_IRQHandler, %function
USB1_HS_PHY_IRQHandler:
    ldr   r0,=USB1_HS_PHY_DriverIRQHandler
    bx    r0
    .size USB1_HS_PHY_IRQHandler, . - USB1_HS_PHY_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved121_IRQHandler
    .type Reserved121_IRQHandler, %function
Reserved121_IRQHandler:
    ldr   r0,=Reserved121_DriverIRQHandler
    bx    r0
    .size Reserved121_IRQHandler, . - Reserved121_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXSPI0_IRQHandler
    .type FLEXSPI0_IRQHandler, %function
FLEXSPI0_IRQHandler:
    ldr   r0,=FLEXSPI0_DriverIRQHandler
    bx    r0
    .size FLEXSPI0_IRQHandler, . - FLEXSPI0_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved123_IRQHandler
    .type Reserved123_IRQHandler, %function
Reserved123_IRQHandler:
    ldr   r0,=Reserved123_DriverIRQHandler
    bx    r0
    .size Reserved123_IRQHandler, . - Reserved123_IRQHandler

    .align 1
    .thumb_func
    .weak SMARTDMA_IRQHandler
    .type SMARTDMA_IRQHandler, %function
SMARTDMA_IRQHandler:
    ldr   r0,=SMARTDMA_DriverIRQHandler
    bx    r0
    .size SMARTDMA_IRQHandler, . - SMARTDMA_IRQHandler

    .align 1
    .thumb_func
    .weak CDOG1_IRQHandler
    .type CDOG1_IRQHandler, %function
CDOG1_IRQHandler:
    ldr   r0,=CDOG1_DriverIRQHandler
    bx    r0
    .size CDOG1_IRQHandler, . - CDOG1_IRQHandler

    .align 1
    .thumb_func
    .weak PKC_IRQHandler
    .type PKC_IRQHandler, %function
PKC_IRQHandler:
    ldr   r0,=PKC_DriverIRQHandler
    bx    r0
    .size PKC_IRQHandler, . - PKC_IRQHandler

    .align 1
    .thumb_func
    .weak SGI_IRQHandler
    .type SGI_IRQHandler, %function
SGI_IRQHandler:
    ldr   r0,=SGI_DriverIRQHandler
    bx    r0
    .size SGI_IRQHandler, . - SGI_IRQHandler

    .align 1
    .thumb_func
    .weak SPI_FILTER_IRQHandler
    .type SPI_FILTER_IRQHandler, %function
SPI_FILTER_IRQHandler:
    ldr   r0,=SPI_FILTER_DriverIRQHandler
    bx    r0
    .size SPI_FILTER_IRQHandler, . - SPI_FILTER_IRQHandler

    .align 1
    .thumb_func
    .weak TRNG0_IRQHandler
    .type TRNG0_IRQHandler, %function
TRNG0_IRQHandler:
    ldr   r0,=TRNG0_DriverIRQHandler
    bx    r0
    .size TRNG0_IRQHandler, . - TRNG0_IRQHandler

    .align 1
    .thumb_func
    .weak SECURE_ERR_IRQHandler
    .type SECURE_ERR_IRQHandler, %function
SECURE_ERR_IRQHandler:
    ldr   r0,=SECURE_ERR_DriverIRQHandler
    bx    r0
    .size SECURE_ERR_IRQHandler, . - SECURE_ERR_IRQHandler

    .align 1
    .thumb_func
    .weak SEC_HYPERVISOR_CALL_IRQHandler
    .type SEC_HYPERVISOR_CALL_IRQHandler, %function
SEC_HYPERVISOR_CALL_IRQHandler:
    ldr   r0,=SEC_HYPERVISOR_CALL_DriverIRQHandler
    bx    r0
    .size SEC_HYPERVISOR_CALL_IRQHandler, . - SEC_HYPERVISOR_CALL_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved132_IRQHandler
    .type Reserved132_IRQHandler, %function
Reserved132_IRQHandler:
    ldr   r0,=Reserved132_DriverIRQHandler
    bx    r0
    .size Reserved132_IRQHandler, . - Reserved132_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved133_IRQHandler
    .type Reserved133_IRQHandler, %function
Reserved133_IRQHandler:
    ldr   r0,=Reserved133_DriverIRQHandler
    bx    r0
    .size Reserved133_IRQHandler, . - Reserved133_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved134_IRQHandler
    .type Reserved134_IRQHandler, %function
Reserved134_IRQHandler:
    ldr   r0,=Reserved134_DriverIRQHandler
    bx    r0
    .size Reserved134_IRQHandler, . - Reserved134_IRQHandler

    .align 1
    .thumb_func
    .weak RTC_IRQHandler
    .type RTC_IRQHandler, %function
RTC_IRQHandler:
    ldr   r0,=RTC_DriverIRQHandler
    bx    r0
    .size RTC_IRQHandler, . - RTC_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved136_IRQHandler
    .type Reserved136_IRQHandler, %function
Reserved136_IRQHandler:
    ldr   r0,=Reserved136_DriverIRQHandler
    bx    r0
    .size Reserved136_IRQHandler, . - Reserved136_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved137_IRQHandler
    .type Reserved137_IRQHandler, %function
Reserved137_IRQHandler:
    ldr   r0,=Reserved137_DriverIRQHandler
    bx    r0
    .size Reserved137_IRQHandler, . - Reserved137_IRQHandler

    .align 1
    .thumb_func
    .weak GDET_IRQHandler
    .type GDET_IRQHandler, %function
GDET_IRQHandler:
    ldr   r0,=GDET_DriverIRQHandler
    bx    r0
    .size GDET_IRQHandler, . - GDET_IRQHandler

    .align 1
    .thumb_func
    .weak EWM0_IRQHandler
    .type EWM0_IRQHandler, %function
EWM0_IRQHandler:
    ldr   r0,=EWM0_DriverIRQHandler
    bx    r0
    .size EWM0_IRQHandler, . - EWM0_IRQHandler

    .align 1
    .thumb_func
    .weak TSI_END_OF_SCAN_IRQHandler
    .type TSI_END_OF_SCAN_IRQHandler, %function
TSI_END_OF_SCAN_IRQHandler:
    ldr   r0,=TSI_END_OF_SCAN_DriverIRQHandler
    bx    r0
    .size TSI_END_OF_SCAN_IRQHandler, . - TSI_END_OF_SCAN_IRQHandler

    .align 1
    .thumb_func
    .weak TSI_OUT_OF_SCAN_IRQHandler
    .type TSI_OUT_OF_SCAN_IRQHandler, %function
TSI_OUT_OF_SCAN_IRQHandler:
    ldr   r0,=TSI_OUT_OF_SCAN_DriverIRQHandler
    bx    r0
    .size TSI_OUT_OF_SCAN_IRQHandler, . - TSI_OUT_OF_SCAN_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO0_1_IRQHandler
    .type GPIO0_1_IRQHandler, %function
GPIO0_1_IRQHandler:
    ldr   r0,=GPIO0_1_DriverIRQHandler
    bx    r0
    .size GPIO0_1_IRQHandler, . - GPIO0_1_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO1_1_IRQHandler
    .type GPIO1_1_IRQHandler, %function
GPIO1_1_IRQHandler:
    ldr   r0,=GPIO1_1_DriverIRQHandler
    bx    r0
    .size GPIO1_1_IRQHandler, . - GPIO1_1_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO2_1_IRQHandler
    .type GPIO2_1_IRQHandler, %function
GPIO2_1_IRQHandler:
    ldr   r0,=GPIO2_1_DriverIRQHandler
    bx    r0
    .size GPIO2_1_IRQHandler, . - GPIO2_1_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO3_1_IRQHandler
    .type GPIO3_1_IRQHandler, %function
GPIO3_1_IRQHandler:
    ldr   r0,=GPIO3_1_DriverIRQHandler
    bx    r0
    .size GPIO3_1_IRQHandler, . - GPIO3_1_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO4_1_IRQHandler
    .type GPIO4_1_IRQHandler, %function
GPIO4_1_IRQHandler:
    ldr   r0,=GPIO4_1_DriverIRQHandler
    bx    r0
    .size GPIO4_1_IRQHandler, . - GPIO4_1_IRQHandler

    .align 1
    .thumb_func
    .weak GPIO5_1_IRQHandler
    .type GPIO5_1_IRQHandler, %function
GPIO5_1_IRQHandler:
    ldr   r0,=GPIO5_1_DriverIRQHandler
    bx    r0
    .size GPIO5_1_IRQHandler, . - GPIO5_1_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved148_IRQHandler
    .type Reserved148_IRQHandler, %function
Reserved148_IRQHandler:
    ldr   r0,=Reserved148_DriverIRQHandler
    bx    r0
    .size Reserved148_IRQHandler, . - Reserved148_IRQHandler

    .align 1
    .thumb_func
    .weak ITRC0_IRQHandler
    .type ITRC0_IRQHandler, %function
ITRC0_IRQHandler:
    ldr   r0,=ITRC0_DriverIRQHandler
    bx    r0
    .size ITRC0_IRQHandler, . - ITRC0_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH8_IRQHandler
    .type DMA0_CH8_IRQHandler, %function
DMA0_CH8_IRQHandler:
    ldr   r0,=DMA0_CH8_DriverIRQHandler
    bx    r0
    .size DMA0_CH8_IRQHandler, . - DMA0_CH8_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH9_IRQHandler
    .type DMA0_CH9_IRQHandler, %function
DMA0_CH9_IRQHandler:
    ldr   r0,=DMA0_CH9_DriverIRQHandler
    bx    r0
    .size DMA0_CH9_IRQHandler, . - DMA0_CH9_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH10_IRQHandler
    .type DMA0_CH10_IRQHandler, %function
DMA0_CH10_IRQHandler:
    ldr   r0,=DMA0_CH10_DriverIRQHandler
    bx    r0
    .size DMA0_CH10_IRQHandler, . - DMA0_CH10_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_CH11_IRQHandler
    .type DMA0_CH11_IRQHandler, %function
DMA0_CH11_IRQHandler:
    ldr   r0,=DMA0_CH11_DriverIRQHandler
    bx    r0
    .size DMA0_CH11_IRQHandler, . - DMA0_CH11_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved154_IRQHandler
    .type Reserved154_IRQHandler, %function
Reserved154_IRQHandler:
    ldr   r0,=Reserved154_DriverIRQHandler
    bx    r0
    .size Reserved154_IRQHandler, . - Reserved154_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved155_IRQHandler
    .type Reserved155_IRQHandler, %function
Reserved155_IRQHandler:
    ldr   r0,=Reserved155_DriverIRQHandler
    bx    r0
    .size Reserved155_IRQHandler, . - Reserved155_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved156_IRQHandler
    .type Reserved156_IRQHandler, %function
Reserved156_IRQHandler:
    ldr   r0,=Reserved156_DriverIRQHandler
    bx    r0
    .size Reserved156_IRQHandler, . - Reserved156_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved157_IRQHandler
    .type Reserved157_IRQHandler, %function
Reserved157_IRQHandler:
    ldr   r0,=Reserved157_DriverIRQHandler
    bx    r0
    .size Reserved157_IRQHandler, . - Reserved157_IRQHandler

    .align 1
    .thumb_func
    .weak DMA1_CH0_IRQHandler
    .type DMA1_CH0_IRQHandler, %function
DMA1_CH0_IRQHandler:
    ldr   r0,=DMA1_CH0_DriverIRQHandler
    bx    r0
    .size DMA1_CH0_IRQHandler, . - DMA1_CH0_IRQHandler

    .align 1
    .thumb_func
    .weak DMA1_CH1_IRQHandler
    .type DMA1_CH1_IRQHandler, %function
DMA1_CH1_IRQHandler:
    ldr   r0,=DMA1_CH1_DriverIRQHandler
    bx    r0
    .size DMA1_CH1_IRQHandler, . - DMA1_CH1_IRQHandler

    .align 1
    .thumb_func
    .weak DMA1_CH2_IRQHandler
    .type DMA1_CH2_IRQHandler, %function
DMA1_CH2_IRQHandler:
    ldr   r0,=DMA1_CH2_DriverIRQHandler
    bx    r0
    .size DMA1_CH2_IRQHandler, . - DMA1_CH2_IRQHandler

    .align 1
    .thumb_func
    .weak DMA1_CH3_IRQHandler
    .type DMA1_CH3_IRQHandler, %function
DMA1_CH3_IRQHandler:
    ldr   r0,=DMA1_CH3_DriverIRQHandler
    bx    r0
    .size DMA1_CH3_IRQHandler, . - DMA1_CH3_IRQHandler


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
    def_irq_handler    DMA0_CH0_DriverIRQHandler
    def_irq_handler    DMA0_CH1_DriverIRQHandler
    def_irq_handler    DMA0_CH2_DriverIRQHandler
    def_irq_handler    DMA0_CH3_DriverIRQHandler
    def_irq_handler    DMA0_CH4_DriverIRQHandler
    def_irq_handler    DMA0_CH5_DriverIRQHandler
    def_irq_handler    DMA0_CH6_DriverIRQHandler
    def_irq_handler    DMA0_CH7_DriverIRQHandler
    def_irq_handler    ERM0_SINGLE_BIT_DriverIRQHandler
    def_irq_handler    ERM0_MULTI_BIT_DriverIRQHandler
    def_irq_handler    FMU0_DriverIRQHandler
    def_irq_handler    GLIKEY0_DriverIRQHandler
    def_irq_handler    MBC0_DriverIRQHandler
    def_irq_handler    SCG0_DriverIRQHandler
    def_irq_handler    SPC0_DriverIRQHandler
    def_irq_handler    TDET_DriverIRQHandler
    def_irq_handler    WUU0_DriverIRQHandler
    def_irq_handler    CAN0_DriverIRQHandler
    def_irq_handler    CAN1_DriverIRQHandler
    def_irq_handler    Reserved37_DriverIRQHandler
    def_irq_handler    Reserved38_DriverIRQHandler
    def_irq_handler    FLEXIO_DriverIRQHandler
    def_irq_handler    I3C0_DriverIRQHandler
    def_irq_handler    I3C1_DriverIRQHandler
    def_irq_handler    LPI2C0_DriverIRQHandler
    def_irq_handler    LPI2C1_DriverIRQHandler
    def_irq_handler    LPSPI0_DriverIRQHandler
    def_irq_handler    LPSPI1_DriverIRQHandler
    def_irq_handler    LPSPI2_DriverIRQHandler
    def_irq_handler    LPUART0_DriverIRQHandler
    def_irq_handler    LPUART1_DriverIRQHandler
    def_irq_handler    LPUART2_DriverIRQHandler
    def_irq_handler    LPUART3_DriverIRQHandler
    def_irq_handler    LPUART4_DriverIRQHandler
    def_irq_handler    Reserved52_DriverIRQHandler
    def_irq_handler    Reserved53_DriverIRQHandler
    def_irq_handler    CDOG0_DriverIRQHandler
    def_irq_handler    CTIMER0_DriverIRQHandler
    def_irq_handler    CTIMER1_DriverIRQHandler
    def_irq_handler    CTIMER2_DriverIRQHandler
    def_irq_handler    CTIMER3_DriverIRQHandler
    def_irq_handler    CTIMER4_DriverIRQHandler
    def_irq_handler    Reserved60_DriverIRQHandler
    def_irq_handler    Reserved61_DriverIRQHandler
    def_irq_handler    Reserved62_DriverIRQHandler
    def_irq_handler    Reserved63_DriverIRQHandler
    def_irq_handler    Reserved64_DriverIRQHandler
    def_irq_handler    Reserved65_DriverIRQHandler
    def_irq_handler    Reserved66_DriverIRQHandler
    def_irq_handler    Reserved67_DriverIRQHandler
    def_irq_handler    Reserved68_DriverIRQHandler
    def_irq_handler    Reserved69_DriverIRQHandler
    def_irq_handler    FREQME0_DriverIRQHandler
    def_irq_handler    LPTMR0_DriverIRQHandler
    def_irq_handler    Reserved72_DriverIRQHandler
    def_irq_handler    OS_EVENT_DriverIRQHandler
    def_irq_handler    WAKETIMER0_DriverIRQHandler
    def_irq_handler    UTICK0_DriverIRQHandler
    def_irq_handler    WWDT0_DriverIRQHandler
    def_irq_handler    WWDT1_DriverIRQHandler
    def_irq_handler    ADC0_DriverIRQHandler
    def_irq_handler    ADC1_DriverIRQHandler
    def_irq_handler    CMP0_DriverIRQHandler
    def_irq_handler    Reserved81_DriverIRQHandler
    def_irq_handler    Reserved82_DriverIRQHandler
    def_irq_handler    DAC0_DriverIRQHandler
    def_irq_handler    DAC1_DriverIRQHandler
    def_irq_handler    Reserved85_DriverIRQHandler
    def_irq_handler    Reserved86_DriverIRQHandler
    def_irq_handler    GPIO0_DriverIRQHandler
    def_irq_handler    GPIO1_DriverIRQHandler
    def_irq_handler    GPIO2_DriverIRQHandler
    def_irq_handler    GPIO3_DriverIRQHandler
    def_irq_handler    GPIO4_DriverIRQHandler
    def_irq_handler    GPIO5_DriverIRQHandler
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
    def_irq_handler    ESPI_DriverIRQHandler
    def_irq_handler    ETHERNET_DriverIRQHandler
    def_irq_handler    ETHERNET_PMT_DriverIRQHandler
    def_irq_handler    Reserved108_DriverIRQHandler
    def_irq_handler    TENBASET_PHY0_DriverIRQHandler
    def_irq_handler    I3C2_DriverIRQHandler
    def_irq_handler    LPUART5_DriverIRQHandler
    def_irq_handler    Reserved112_DriverIRQHandler
    def_irq_handler    LPSPI3_DriverIRQHandler
    def_irq_handler    LPSPI4_DriverIRQHandler
    def_irq_handler    LPSPI5_DriverIRQHandler
    def_irq_handler    LPI2C4_DriverIRQHandler
    def_irq_handler    I3C3_DriverIRQHandler
    def_irq_handler    Reserved118_DriverIRQHandler
    def_irq_handler    USB1_HS_DriverIRQHandler
    def_irq_handler    USB1_HS_PHY_DriverIRQHandler
    def_irq_handler    Reserved121_DriverIRQHandler
    def_irq_handler    FLEXSPI0_DriverIRQHandler
    def_irq_handler    Reserved123_DriverIRQHandler
    def_irq_handler    SMARTDMA_DriverIRQHandler
    def_irq_handler    CDOG1_DriverIRQHandler
    def_irq_handler    PKC_DriverIRQHandler
    def_irq_handler    SGI_DriverIRQHandler
    def_irq_handler    SPI_FILTER_DriverIRQHandler
    def_irq_handler    TRNG0_DriverIRQHandler
    def_irq_handler    SECURE_ERR_DriverIRQHandler
    def_irq_handler    SEC_HYPERVISOR_CALL_DriverIRQHandler
    def_irq_handler    Reserved132_DriverIRQHandler
    def_irq_handler    Reserved133_DriverIRQHandler
    def_irq_handler    Reserved134_DriverIRQHandler
    def_irq_handler    RTC_DriverIRQHandler
    def_irq_handler    Reserved136_DriverIRQHandler
    def_irq_handler    Reserved137_DriverIRQHandler
    def_irq_handler    GDET_DriverIRQHandler
    def_irq_handler    EWM0_DriverIRQHandler
    def_irq_handler    TSI_END_OF_SCAN_DriverIRQHandler
    def_irq_handler    TSI_OUT_OF_SCAN_DriverIRQHandler
    def_irq_handler    GPIO0_1_DriverIRQHandler
    def_irq_handler    GPIO1_1_DriverIRQHandler
    def_irq_handler    GPIO2_1_DriverIRQHandler
    def_irq_handler    GPIO3_1_DriverIRQHandler
    def_irq_handler    GPIO4_1_DriverIRQHandler
    def_irq_handler    GPIO5_1_DriverIRQHandler
    def_irq_handler    Reserved148_DriverIRQHandler
    def_irq_handler    ITRC0_DriverIRQHandler
    def_irq_handler    DMA0_CH8_DriverIRQHandler
    def_irq_handler    DMA0_CH9_DriverIRQHandler
    def_irq_handler    DMA0_CH10_DriverIRQHandler
    def_irq_handler    DMA0_CH11_DriverIRQHandler
    def_irq_handler    Reserved154_DriverIRQHandler
    def_irq_handler    Reserved155_DriverIRQHandler
    def_irq_handler    Reserved156_DriverIRQHandler
    def_irq_handler    Reserved157_DriverIRQHandler
    def_irq_handler    DMA1_CH0_DriverIRQHandler
    def_irq_handler    DMA1_CH1_DriverIRQHandler
    def_irq_handler    DMA1_CH2_DriverIRQHandler
    def_irq_handler    DMA1_CH3_DriverIRQHandler

    .end
