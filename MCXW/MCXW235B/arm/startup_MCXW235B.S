/* ------------------------------------------------------------------------- */
/*  @file:    startup_MCXW235B.s                                             */
/*  @purpose: CMSIS Cortex-M33 Core Device Startup File                      */
/*            MCXW235B                                                       */
/*  @version: 1.0                                                            */
/*  @date:    2022-3-8                                                       */
/*  @build:   b241118                                                        */
/* ------------------------------------------------------------------------- */
/*                                                                           */
/* Copyright 1997-2016 Freescale Semiconductor, Inc.                         */
/* Copyright 2016-2024 NXP                                                   */
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
    .long   WDT_BOD_IRQHandler                              /* Windowed watchdog timer, Brownout detect, Flash interrupt*/
    .long   DMA0_IRQHandler                                 /* DMA0 controller*/
    .long   GINT0_IRQHandler                                /* GPIO group 0*/
    .long   Reserved19_IRQHandler                           /* Reserved interrupt*/
    .long   PIN_INT0_IRQHandler                             /* Pin interrupt 0 or pattern match engine slice 0*/
    .long   PIN_INT1_IRQHandler                             /* Pin interrupt 1or pattern match engine slice 1*/
    .long   PIN_INT2_IRQHandler                             /* Pin interrupt 2 or pattern match engine slice 2*/
    .long   PIN_INT3_IRQHandler                             /* Pin interrupt 3 or pattern match engine slice 3*/
    .long   UTICK0_IRQHandler                               /* Micro-tick Timer*/
    .long   MRT0_IRQHandler                                 /* Multi-rate timer*/
    .long   CTIMER0_IRQHandler                              /* Standard counter/timer CTIMER0*/
    .long   CTIMER1_IRQHandler                              /* Standard counter/timer CTIMER1*/
    .long   SCT0_IRQHandler                                 /* SCTimer/PWM*/
    .long   CTIMER3_IRQHandler                              /* Standard counter/timer CTIMER3*/
    .long   FLEXCOMM0_IRQHandler                            /* Flexcomm Interface 0 (USART, SPI, I2C, FLEXCOMM)*/
    .long   FLEXCOMM1_IRQHandler                            /* Flexcomm Interface 1 (USART, SPI, I2C, FLEXCOMM)*/
    .long   FLEXCOMM2_IRQHandler                            /* Flexcomm Interface 2 (USART, SPI, I2C, FLEXCOMM)*/
    .long   Reserved33_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved34_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved35_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved36_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved37_IRQHandler                           /* Reserved interrupt*/
    .long   BLE_LL_IRQHandler                               /* BLE Link Layer interrupt*/
    .long   BLE_SLP_TMR_IRQHandler                          /* BLE Sleep Timer interrupt*/
    .long   WDT_IRQHandler                                  /* Windowed Watchdog interrupt*/
    .long   Reserved41_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved42_IRQHandler                           /* Reserved interrupt*/
    .long   BOD1_IRQHandler                                 /* Brown-out detector 1 interrupt*/
    .long   BOD2_IRQHandler                                 /* Brown-out detector 2 interrupt*/
    .long   RTC_IRQHandler                                  /* RTC alarm and wake-up interrupts*/
    .long   Reserved46_IRQHandler                           /* Reserved interrupt*/
    .long   WAKE_DSLP_IRQHandler                            /* Wakeup from deepsleep interrupt*/
    .long   PIN_INT4_IRQHandler                             /* Pin interrupt 4 or pattern match engine slice 4 int*/
    .long   PIN_INT5_IRQHandler                             /* Pin interrupt 5 or pattern match engine slice 5 int*/
    .long   PIN_INT6_IRQHandler                             /* Pin interrupt 6 or pattern match engine slice 6 int*/
    .long   PIN_INT7_IRQHandler                             /* Pin interrupt 7 or pattern match engine slice 7 int*/
    .long   CTIMER2_IRQHandler                              /* Standard counter/timer CTIMER2*/
    .long   CTIMER4_IRQHandler                              /* Standard counter/timer CTIMER4*/
    .long   OS_EVENT_IRQHandler                             /* OS_EVENT_TIMER and OS_EVENT_WAKEUP interrupts*/
    .long   SPIFI_IRQHandler                                /* QuadSPI Flash interface interrupt*/
    .long   Reserved56_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved57_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved58_IRQHandler                           /* Reserved interrupt*/
    .long   FLASH_CCIF_IRQHandler                           /* Flash command complete interrupt*/
    .long   FLASH_DFIF_IRQHandler                           /* Flash ECC double-bit error detect interrupt*/
    .long   Reserved61_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved62_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved63_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved64_IRQHandler                           /* Reserved interrupt*/
    .long   SEC_HYPERVISOR_CALL_IRQHandler                  /* SEC_HYPERVISOR_CALL interrupt*/
    .long   SEC_GPIO_INT0_IRQ0_IRQHandler                   /* SEC_GPIO_INT0_IRQ0 interrupt*/
    .long   SEC_GPIO_INT0_IRQ1_IRQHandler                   /* SEC_GPIO_INT0_IRQ1 interrupt*/
    .long   PLU_IRQHandler                                  /* PLU interrupt*/
    .long   SEC_VIO_IRQHandler                              /* SEC_VIO interrupt*/
    .long   HASHCRYPT_IRQHandler                            /* SHA interrupt*/
    .long   CASPER_IRQHandler                               /* CASPER interrupt*/
    .long   PUF_IRQHandler                                  /* PUF interrupt*/
    .long   TRNG_IRQHandler                                 /* TRNG interrupt*/
    .long   DMA1_IRQHandler                                 /* DMA1 interrupt*/
    .long   Reserved75_IRQHandler                           /* Reserved interrupt*/
    .long   CDOG_IRQHandler                                 /* CDOG interrupt*/
    .long   Reserved77_IRQHandler                           /* Reserved interrupt*/
    .long   Reserved78_IRQHandler                           /* Reserved interrupt*/
    .long   WAKE_PAD_IRQHandler                             /* Wakeup from pin interrupt*/

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
    .weak WDT_BOD_IRQHandler
    .type WDT_BOD_IRQHandler, %function
WDT_BOD_IRQHandler:
    ldr   r0,=WDT_BOD_DriverIRQHandler
    bx    r0
    .size WDT_BOD_IRQHandler, . - WDT_BOD_IRQHandler

    .align 1
    .thumb_func
    .weak DMA0_IRQHandler
    .type DMA0_IRQHandler, %function
DMA0_IRQHandler:
    ldr   r0,=DMA0_DriverIRQHandler
    bx    r0
    .size DMA0_IRQHandler, . - DMA0_IRQHandler

    .align 1
    .thumb_func
    .weak GINT0_IRQHandler
    .type GINT0_IRQHandler, %function
GINT0_IRQHandler:
    ldr   r0,=GINT0_DriverIRQHandler
    bx    r0
    .size GINT0_IRQHandler, . - GINT0_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved19_IRQHandler
    .type Reserved19_IRQHandler, %function
Reserved19_IRQHandler:
    ldr   r0,=Reserved19_DriverIRQHandler
    bx    r0
    .size Reserved19_IRQHandler, . - Reserved19_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT0_IRQHandler
    .type PIN_INT0_IRQHandler, %function
PIN_INT0_IRQHandler:
    ldr   r0,=PIN_INT0_DriverIRQHandler
    bx    r0
    .size PIN_INT0_IRQHandler, . - PIN_INT0_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT1_IRQHandler
    .type PIN_INT1_IRQHandler, %function
PIN_INT1_IRQHandler:
    ldr   r0,=PIN_INT1_DriverIRQHandler
    bx    r0
    .size PIN_INT1_IRQHandler, . - PIN_INT1_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT2_IRQHandler
    .type PIN_INT2_IRQHandler, %function
PIN_INT2_IRQHandler:
    ldr   r0,=PIN_INT2_DriverIRQHandler
    bx    r0
    .size PIN_INT2_IRQHandler, . - PIN_INT2_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT3_IRQHandler
    .type PIN_INT3_IRQHandler, %function
PIN_INT3_IRQHandler:
    ldr   r0,=PIN_INT3_DriverIRQHandler
    bx    r0
    .size PIN_INT3_IRQHandler, . - PIN_INT3_IRQHandler

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
    .weak MRT0_IRQHandler
    .type MRT0_IRQHandler, %function
MRT0_IRQHandler:
    ldr   r0,=MRT0_DriverIRQHandler
    bx    r0
    .size MRT0_IRQHandler, . - MRT0_IRQHandler

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
    .weak SCT0_IRQHandler
    .type SCT0_IRQHandler, %function
SCT0_IRQHandler:
    ldr   r0,=SCT0_DriverIRQHandler
    bx    r0
    .size SCT0_IRQHandler, . - SCT0_IRQHandler

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
    .weak FLEXCOMM0_IRQHandler
    .type FLEXCOMM0_IRQHandler, %function
FLEXCOMM0_IRQHandler:
    ldr   r0,=FLEXCOMM0_DriverIRQHandler
    bx    r0
    .size FLEXCOMM0_IRQHandler, . - FLEXCOMM0_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM1_IRQHandler
    .type FLEXCOMM1_IRQHandler, %function
FLEXCOMM1_IRQHandler:
    ldr   r0,=FLEXCOMM1_DriverIRQHandler
    bx    r0
    .size FLEXCOMM1_IRQHandler, . - FLEXCOMM1_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXCOMM2_IRQHandler
    .type FLEXCOMM2_IRQHandler, %function
FLEXCOMM2_IRQHandler:
    ldr   r0,=FLEXCOMM2_DriverIRQHandler
    bx    r0
    .size FLEXCOMM2_IRQHandler, . - FLEXCOMM2_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved33_IRQHandler
    .type Reserved33_IRQHandler, %function
Reserved33_IRQHandler:
    ldr   r0,=Reserved33_DriverIRQHandler
    bx    r0
    .size Reserved33_IRQHandler, . - Reserved33_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved34_IRQHandler
    .type Reserved34_IRQHandler, %function
Reserved34_IRQHandler:
    ldr   r0,=Reserved34_DriverIRQHandler
    bx    r0
    .size Reserved34_IRQHandler, . - Reserved34_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved35_IRQHandler
    .type Reserved35_IRQHandler, %function
Reserved35_IRQHandler:
    ldr   r0,=Reserved35_DriverIRQHandler
    bx    r0
    .size Reserved35_IRQHandler, . - Reserved35_IRQHandler

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
    .weak BLE_LL_IRQHandler
    .type BLE_LL_IRQHandler, %function
BLE_LL_IRQHandler:
    ldr   r0,=BLE_LL_DriverIRQHandler
    bx    r0
    .size BLE_LL_IRQHandler, . - BLE_LL_IRQHandler

    .align 1
    .thumb_func
    .weak BLE_SLP_TMR_IRQHandler
    .type BLE_SLP_TMR_IRQHandler, %function
BLE_SLP_TMR_IRQHandler:
    ldr   r0,=BLE_SLP_TMR_DriverIRQHandler
    bx    r0
    .size BLE_SLP_TMR_IRQHandler, . - BLE_SLP_TMR_IRQHandler

    .align 1
    .thumb_func
    .weak WDT_IRQHandler
    .type WDT_IRQHandler, %function
WDT_IRQHandler:
    ldr   r0,=WDT_DriverIRQHandler
    bx    r0
    .size WDT_IRQHandler, . - WDT_IRQHandler

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
    .weak Reserved42_IRQHandler
    .type Reserved42_IRQHandler, %function
Reserved42_IRQHandler:
    ldr   r0,=Reserved42_DriverIRQHandler
    bx    r0
    .size Reserved42_IRQHandler, . - Reserved42_IRQHandler

    .align 1
    .thumb_func
    .weak BOD1_IRQHandler
    .type BOD1_IRQHandler, %function
BOD1_IRQHandler:
    ldr   r0,=BOD1_DriverIRQHandler
    bx    r0
    .size BOD1_IRQHandler, . - BOD1_IRQHandler

    .align 1
    .thumb_func
    .weak BOD2_IRQHandler
    .type BOD2_IRQHandler, %function
BOD2_IRQHandler:
    ldr   r0,=BOD2_DriverIRQHandler
    bx    r0
    .size BOD2_IRQHandler, . - BOD2_IRQHandler

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
    .weak Reserved46_IRQHandler
    .type Reserved46_IRQHandler, %function
Reserved46_IRQHandler:
    ldr   r0,=Reserved46_DriverIRQHandler
    bx    r0
    .size Reserved46_IRQHandler, . - Reserved46_IRQHandler

    .align 1
    .thumb_func
    .weak WAKE_DSLP_IRQHandler
    .type WAKE_DSLP_IRQHandler, %function
WAKE_DSLP_IRQHandler:
    ldr   r0,=WAKE_DSLP_DriverIRQHandler
    bx    r0
    .size WAKE_DSLP_IRQHandler, . - WAKE_DSLP_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT4_IRQHandler
    .type PIN_INT4_IRQHandler, %function
PIN_INT4_IRQHandler:
    ldr   r0,=PIN_INT4_DriverIRQHandler
    bx    r0
    .size PIN_INT4_IRQHandler, . - PIN_INT4_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT5_IRQHandler
    .type PIN_INT5_IRQHandler, %function
PIN_INT5_IRQHandler:
    ldr   r0,=PIN_INT5_DriverIRQHandler
    bx    r0
    .size PIN_INT5_IRQHandler, . - PIN_INT5_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT6_IRQHandler
    .type PIN_INT6_IRQHandler, %function
PIN_INT6_IRQHandler:
    ldr   r0,=PIN_INT6_DriverIRQHandler
    bx    r0
    .size PIN_INT6_IRQHandler, . - PIN_INT6_IRQHandler

    .align 1
    .thumb_func
    .weak PIN_INT7_IRQHandler
    .type PIN_INT7_IRQHandler, %function
PIN_INT7_IRQHandler:
    ldr   r0,=PIN_INT7_DriverIRQHandler
    bx    r0
    .size PIN_INT7_IRQHandler, . - PIN_INT7_IRQHandler

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
    .weak CTIMER4_IRQHandler
    .type CTIMER4_IRQHandler, %function
CTIMER4_IRQHandler:
    ldr   r0,=CTIMER4_DriverIRQHandler
    bx    r0
    .size CTIMER4_IRQHandler, . - CTIMER4_IRQHandler

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
    .weak SPIFI_IRQHandler
    .type SPIFI_IRQHandler, %function
SPIFI_IRQHandler:
    ldr   r0,=SPIFI_DriverIRQHandler
    bx    r0
    .size SPIFI_IRQHandler, . - SPIFI_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved56_IRQHandler
    .type Reserved56_IRQHandler, %function
Reserved56_IRQHandler:
    ldr   r0,=Reserved56_DriverIRQHandler
    bx    r0
    .size Reserved56_IRQHandler, . - Reserved56_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved57_IRQHandler
    .type Reserved57_IRQHandler, %function
Reserved57_IRQHandler:
    ldr   r0,=Reserved57_DriverIRQHandler
    bx    r0
    .size Reserved57_IRQHandler, . - Reserved57_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved58_IRQHandler
    .type Reserved58_IRQHandler, %function
Reserved58_IRQHandler:
    ldr   r0,=Reserved58_DriverIRQHandler
    bx    r0
    .size Reserved58_IRQHandler, . - Reserved58_IRQHandler

    .align 1
    .thumb_func
    .weak FLASH_CCIF_IRQHandler
    .type FLASH_CCIF_IRQHandler, %function
FLASH_CCIF_IRQHandler:
    ldr   r0,=FLASH_CCIF_DriverIRQHandler
    bx    r0
    .size FLASH_CCIF_IRQHandler, . - FLASH_CCIF_IRQHandler

    .align 1
    .thumb_func
    .weak FLASH_DFIF_IRQHandler
    .type FLASH_DFIF_IRQHandler, %function
FLASH_DFIF_IRQHandler:
    ldr   r0,=FLASH_DFIF_DriverIRQHandler
    bx    r0
    .size FLASH_DFIF_IRQHandler, . - FLASH_DFIF_IRQHandler

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
    .weak SEC_HYPERVISOR_CALL_IRQHandler
    .type SEC_HYPERVISOR_CALL_IRQHandler, %function
SEC_HYPERVISOR_CALL_IRQHandler:
    ldr   r0,=SEC_HYPERVISOR_CALL_DriverIRQHandler
    bx    r0
    .size SEC_HYPERVISOR_CALL_IRQHandler, . - SEC_HYPERVISOR_CALL_IRQHandler

    .align 1
    .thumb_func
    .weak SEC_GPIO_INT0_IRQ0_IRQHandler
    .type SEC_GPIO_INT0_IRQ0_IRQHandler, %function
SEC_GPIO_INT0_IRQ0_IRQHandler:
    ldr   r0,=SEC_GPIO_INT0_IRQ0_DriverIRQHandler
    bx    r0
    .size SEC_GPIO_INT0_IRQ0_IRQHandler, . - SEC_GPIO_INT0_IRQ0_IRQHandler

    .align 1
    .thumb_func
    .weak SEC_GPIO_INT0_IRQ1_IRQHandler
    .type SEC_GPIO_INT0_IRQ1_IRQHandler, %function
SEC_GPIO_INT0_IRQ1_IRQHandler:
    ldr   r0,=SEC_GPIO_INT0_IRQ1_DriverIRQHandler
    bx    r0
    .size SEC_GPIO_INT0_IRQ1_IRQHandler, . - SEC_GPIO_INT0_IRQ1_IRQHandler

    .align 1
    .thumb_func
    .weak PLU_IRQHandler
    .type PLU_IRQHandler, %function
PLU_IRQHandler:
    ldr   r0,=PLU_DriverIRQHandler
    bx    r0
    .size PLU_IRQHandler, . - PLU_IRQHandler

    .align 1
    .thumb_func
    .weak SEC_VIO_IRQHandler
    .type SEC_VIO_IRQHandler, %function
SEC_VIO_IRQHandler:
    ldr   r0,=SEC_VIO_DriverIRQHandler
    bx    r0
    .size SEC_VIO_IRQHandler, . - SEC_VIO_IRQHandler

    .align 1
    .thumb_func
    .weak HASHCRYPT_IRQHandler
    .type HASHCRYPT_IRQHandler, %function
HASHCRYPT_IRQHandler:
    ldr   r0,=HASHCRYPT_DriverIRQHandler
    bx    r0
    .size HASHCRYPT_IRQHandler, . - HASHCRYPT_IRQHandler

    .align 1
    .thumb_func
    .weak CASPER_IRQHandler
    .type CASPER_IRQHandler, %function
CASPER_IRQHandler:
    ldr   r0,=CASPER_DriverIRQHandler
    bx    r0
    .size CASPER_IRQHandler, . - CASPER_IRQHandler

    .align 1
    .thumb_func
    .weak PUF_IRQHandler
    .type PUF_IRQHandler, %function
PUF_IRQHandler:
    ldr   r0,=PUF_DriverIRQHandler
    bx    r0
    .size PUF_IRQHandler, . - PUF_IRQHandler

    .align 1
    .thumb_func
    .weak TRNG_IRQHandler
    .type TRNG_IRQHandler, %function
TRNG_IRQHandler:
    ldr   r0,=TRNG_DriverIRQHandler
    bx    r0
    .size TRNG_IRQHandler, . - TRNG_IRQHandler

    .align 1
    .thumb_func
    .weak DMA1_IRQHandler
    .type DMA1_IRQHandler, %function
DMA1_IRQHandler:
    ldr   r0,=DMA1_DriverIRQHandler
    bx    r0
    .size DMA1_IRQHandler, . - DMA1_IRQHandler

    .align 1
    .thumb_func
    .weak Reserved75_IRQHandler
    .type Reserved75_IRQHandler, %function
Reserved75_IRQHandler:
    ldr   r0,=Reserved75_DriverIRQHandler
    bx    r0
    .size Reserved75_IRQHandler, . - Reserved75_IRQHandler

    .align 1
    .thumb_func
    .weak CDOG_IRQHandler
    .type CDOG_IRQHandler, %function
CDOG_IRQHandler:
    ldr   r0,=CDOG_DriverIRQHandler
    bx    r0
    .size CDOG_IRQHandler, . - CDOG_IRQHandler

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
    .weak Reserved78_IRQHandler
    .type Reserved78_IRQHandler, %function
Reserved78_IRQHandler:
    ldr   r0,=Reserved78_DriverIRQHandler
    bx    r0
    .size Reserved78_IRQHandler, . - Reserved78_IRQHandler

    .align 1
    .thumb_func
    .weak WAKE_PAD_IRQHandler
    .type WAKE_PAD_IRQHandler, %function
WAKE_PAD_IRQHandler:
    ldr   r0,=WAKE_PAD_DriverIRQHandler
    bx    r0
    .size WAKE_PAD_IRQHandler, . - WAKE_PAD_IRQHandler


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
    def_irq_handler    WDT_BOD_DriverIRQHandler
    def_irq_handler    DMA0_DriverIRQHandler
    def_irq_handler    GINT0_DriverIRQHandler
    def_irq_handler    Reserved19_DriverIRQHandler
    def_irq_handler    PIN_INT0_DriverIRQHandler
    def_irq_handler    PIN_INT1_DriverIRQHandler
    def_irq_handler    PIN_INT2_DriverIRQHandler
    def_irq_handler    PIN_INT3_DriverIRQHandler
    def_irq_handler    UTICK0_DriverIRQHandler
    def_irq_handler    MRT0_DriverIRQHandler
    def_irq_handler    CTIMER0_DriverIRQHandler
    def_irq_handler    CTIMER1_DriverIRQHandler
    def_irq_handler    SCT0_DriverIRQHandler
    def_irq_handler    CTIMER3_DriverIRQHandler
    def_irq_handler    FLEXCOMM0_DriverIRQHandler
    def_irq_handler    FLEXCOMM1_DriverIRQHandler
    def_irq_handler    FLEXCOMM2_DriverIRQHandler
    def_irq_handler    Reserved33_DriverIRQHandler
    def_irq_handler    Reserved34_DriverIRQHandler
    def_irq_handler    Reserved35_DriverIRQHandler
    def_irq_handler    Reserved36_DriverIRQHandler
    def_irq_handler    Reserved37_DriverIRQHandler
    def_irq_handler    BLE_LL_DriverIRQHandler
    def_irq_handler    BLE_SLP_TMR_DriverIRQHandler
    def_irq_handler    WDT_DriverIRQHandler
    def_irq_handler    Reserved41_DriverIRQHandler
    def_irq_handler    Reserved42_DriverIRQHandler
    def_irq_handler    BOD1_DriverIRQHandler
    def_irq_handler    BOD2_DriverIRQHandler
    def_irq_handler    RTC_DriverIRQHandler
    def_irq_handler    Reserved46_DriverIRQHandler
    def_irq_handler    WAKE_DSLP_DriverIRQHandler
    def_irq_handler    PIN_INT4_DriverIRQHandler
    def_irq_handler    PIN_INT5_DriverIRQHandler
    def_irq_handler    PIN_INT6_DriverIRQHandler
    def_irq_handler    PIN_INT7_DriverIRQHandler
    def_irq_handler    CTIMER2_DriverIRQHandler
    def_irq_handler    CTIMER4_DriverIRQHandler
    def_irq_handler    OS_EVENT_DriverIRQHandler
    def_irq_handler    SPIFI_DriverIRQHandler
    def_irq_handler    Reserved56_DriverIRQHandler
    def_irq_handler    Reserved57_DriverIRQHandler
    def_irq_handler    Reserved58_DriverIRQHandler
    def_irq_handler    FLASH_CCIF_DriverIRQHandler
    def_irq_handler    FLASH_DFIF_DriverIRQHandler
    def_irq_handler    Reserved61_DriverIRQHandler
    def_irq_handler    Reserved62_DriverIRQHandler
    def_irq_handler    Reserved63_DriverIRQHandler
    def_irq_handler    Reserved64_DriverIRQHandler
    def_irq_handler    SEC_HYPERVISOR_CALL_DriverIRQHandler
    def_irq_handler    SEC_GPIO_INT0_IRQ0_DriverIRQHandler
    def_irq_handler    SEC_GPIO_INT0_IRQ1_DriverIRQHandler
    def_irq_handler    PLU_DriverIRQHandler
    def_irq_handler    SEC_VIO_DriverIRQHandler
    def_irq_handler    HASHCRYPT_DriverIRQHandler
    def_irq_handler    CASPER_DriverIRQHandler
    def_irq_handler    PUF_DriverIRQHandler
    def_irq_handler    TRNG_DriverIRQHandler
    def_irq_handler    DMA1_DriverIRQHandler
    def_irq_handler    Reserved75_DriverIRQHandler
    def_irq_handler    CDOG_DriverIRQHandler
    def_irq_handler    Reserved77_DriverIRQHandler
    def_irq_handler    Reserved78_DriverIRQHandler
    def_irq_handler    WAKE_PAD_DriverIRQHandler

    .end
