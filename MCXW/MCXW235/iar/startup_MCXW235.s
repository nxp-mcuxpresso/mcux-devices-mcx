; -------------------------------------------------------------------------
;  @file:    startup_MCXW235.s
;  @purpose: CMSIS Cortex-M33 Core Device Startup File
;            MCXW235
;  @version: 2.0
;  @date:    2024-10-29
;  @build:   b250520
; -------------------------------------------------------------------------
;
; Copyright 1997-2016 Freescale Semiconductor, Inc.
; Copyright 2016-2025 NXP
; SPDX-License-Identifier: BSD-3-Clause
;
; The modules in this file are included in the libraries, and may be replaced
; by any user-defined modules that define the PUBLIC symbol _program_start or
; a user defined start symbol.
; To override the cstartup defined in the library, simply add your modified
; version to the workbench project.
;
; The vector table is normally located at address 0.
; When debugging in RAM, it can be located in RAM, aligned to at least 2^6.
; The name "__vector_table" has special meaning for C-SPY:
; it is where the SP start value is found, and the NVIC vector
; table register (VTOR) is initialized to this address if != 0.
;
; Cortex-M version
;

        MODULE  ?cstartup

        ;; Forward declaration of sections.
        SECTION CSTACK:DATA:NOROOT(3)

        SECTION .intvec:CODE:NOROOT(2)

        EXTERN  __iar_program_start
        EXTERN  SystemInit
        PUBLIC  __vector_table
        PUBLIC  __vector_table_0x1c
        PUBLIC  __Vectors
        PUBLIC  __Vectors_End
        PUBLIC  __Vectors_Size

        DATA

__iar_init$$done:              ; The vector table is not needed
                      ; until after copy initialization is done

__vector_table
        DCD     sfe(CSTACK)
        DCD     Reset_Handler

        DCD     NMI_Handler                                   ;NMI Handler
        DCD     HardFault_Handler                             ;Hard Fault Handler
        DCD     MemManage_Handler                             ;MPU Fault Handler
        DCD     BusFault_Handler                              ;Bus Fault Handler
        DCD     UsageFault_Handler                            ;Usage Fault Handler
__vector_table_0x1c
        DCD     SecureFault_Handler                           ;Secure Fault Handler
        DCD     0                                             ;Reserved
        DCD     0                                             ;Reserved
        DCD     0                                             ;Reserved
        DCD     SVC_Handler                                   ;SVCall Handler
        DCD     DebugMon_Handler                              ;Debug Monitor Handler
        DCD     0                                             ;Reserved
        DCD     PendSV_Handler                                ;PendSV Handler
        DCD     SysTick_Handler                               ;SysTick Handler

                                                              ;External Interrupts
        DCD     WDT_BOD_IRQHandler                            ;Windowed watchdog timer, Brownout detect, Flash interrupt
        DCD     DMA0_IRQHandler                               ;DMA0 controller
        DCD     GINT0_IRQHandler                              ;GPIO group 0
        DCD     Reserved19_IRQHandler                         ;Reserved interrupt
        DCD     PIN_INT0_IRQHandler                           ;Pin interrupt 0 or pattern match engine slice 0
        DCD     PIN_INT1_IRQHandler                           ;Pin interrupt 1or pattern match engine slice 1
        DCD     PIN_INT2_IRQHandler                           ;Pin interrupt 2 or pattern match engine slice 2
        DCD     PIN_INT3_IRQHandler                           ;Pin interrupt 3 or pattern match engine slice 3
        DCD     UTICK0_IRQHandler                             ;Micro-tick Timer
        DCD     MRT0_IRQHandler                               ;Multi-rate timer
        DCD     CTIMER0_IRQHandler                            ;Standard counter/timer CTIMER0
        DCD     CTIMER1_IRQHandler                            ;Standard counter/timer CTIMER1
        DCD     SCT0_IRQHandler                               ;SCTimer/PWM
        DCD     CTIMER3_IRQHandler                            ;Standard counter/timer CTIMER3
        DCD     FLEXCOMM0_IRQHandler                          ;Flexcomm Interface 0 (USART, SPI, I2C, FLEXCOMM)
        DCD     FLEXCOMM1_IRQHandler                          ;Flexcomm Interface 1 (USART, SPI, I2C, FLEXCOMM)
        DCD     FLEXCOMM2_IRQHandler                          ;Flexcomm Interface 2 (USART, SPI, I2C, FLEXCOMM)
        DCD     Reserved33_IRQHandler                         ;Reserved interrupt
        DCD     Reserved34_IRQHandler                         ;Reserved interrupt
        DCD     Reserved35_IRQHandler                         ;Reserved interrupt
        DCD     Reserved36_IRQHandler                         ;Reserved interrupt
        DCD     Reserved37_IRQHandler                         ;Reserved interrupt
        DCD     BLE_LL_IRQHandler                             ;BLE Link Layer interrupt
        DCD     BLE_SLP_TMR_IRQHandler                        ;BLE Sleep Timer interrupt
        DCD     WDT_IRQHandler                                ;Windowed Watchdog interrupt
        DCD     Reserved41_IRQHandler                         ;Reserved interrupt
        DCD     Reserved42_IRQHandler                         ;Reserved interrupt
        DCD     BOD1_IRQHandler                               ;Brown-out detector 1 interrupt
        DCD     BOD2_IRQHandler                               ;Brown-out detector 2 interrupt
        DCD     RTC_IRQHandler                                ;RTC alarm and wake-up interrupts
        DCD     Reserved46_IRQHandler                         ;Reserved interrupt
        DCD     WAKE_DSLP_IRQHandler                          ;Wakeup from deepsleep interrupt
        DCD     PIN_INT4_IRQHandler                           ;Pin interrupt 4 or pattern match engine slice 4 int
        DCD     PIN_INT5_IRQHandler                           ;Pin interrupt 5 or pattern match engine slice 5 int
        DCD     PIN_INT6_IRQHandler                           ;Pin interrupt 6 or pattern match engine slice 6 int
        DCD     PIN_INT7_IRQHandler                           ;Pin interrupt 7 or pattern match engine slice 7 int
        DCD     CTIMER2_IRQHandler                            ;Standard counter/timer CTIMER2
        DCD     CTIMER4_IRQHandler                            ;Standard counter/timer CTIMER4
        DCD     OS_EVENT_IRQHandler                           ;OS_EVENT_TIMER and OS_EVENT_WAKEUP interrupts
        DCD     SPIFI_IRQHandler                              ;QuadSPI Flash interface interrupt
        DCD     Reserved56_IRQHandler                         ;Reserved interrupt
        DCD     Reserved57_IRQHandler                         ;Reserved interrupt
        DCD     Reserved58_IRQHandler                         ;Reserved interrupt
        DCD     FLASH_CCIF_IRQHandler                         ;Flash command complete interrupt
        DCD     FLASH_DFIF_IRQHandler                         ;Flash ECC double-bit error detect interrupt
        DCD     Reserved61_IRQHandler                         ;Reserved interrupt
        DCD     Reserved62_IRQHandler                         ;Reserved interrupt
        DCD     Reserved63_IRQHandler                         ;Reserved interrupt
        DCD     Reserved64_IRQHandler                         ;Reserved interrupt
        DCD     SEC_HYPERVISOR_CALL_IRQHandler                ;SEC_HYPERVISOR_CALL interrupt
        DCD     SEC_GPIO_INT0_IRQ0_IRQHandler                 ;SEC_GPIO_INT0_IRQ0 interrupt
        DCD     SEC_GPIO_INT0_IRQ1_IRQHandler                 ;SEC_GPIO_INT0_IRQ1 interrupt
        DCD     PLU_IRQHandler                                ;PLU interrupt
        DCD     SEC_VIO_IRQHandler                            ;SEC_VIO interrupt
        DCD     HASHCRYPT_IRQHandler                          ;SHA interrupt
        DCD     CASPER_IRQHandler                             ;CASPER interrupt
        DCD     PUF_IRQHandler                                ;PUF interrupt
        DCD     TRNG_IRQHandler                               ;TRNG interrupt
        DCD     DMA1_IRQHandler                               ;DMA1 interrupt
        DCD     Reserved75_IRQHandler                         ;Reserved interrupt
        DCD     CDOG_IRQHandler                               ;CDOG interrupt
        DCD     Reserved77_IRQHandler                         ;Reserved interrupt
        DCD     Reserved78_IRQHandler                         ;Reserved interrupt
        DCD     WAKE_PAD_IRQHandler                           ;Wakeup from pin interrupt
__Vectors_End

__Vectors       EQU   __vector_table
__Vectors_Size  EQU   __Vectors_End - __Vectors


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
;; Default interrupt handlers.
;;
        THUMB

        PUBWEAK Reset_Handler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reset_Handler
        CPSID   I               ; Mask interrupts
        LDR     R0, =0xE000ED08
        LDR     R1, =__vector_table
        STR     R1, [R0]
        LDR     R2, [R1]
        MSR     MSP, R2
        LDR     R0, =sfb(CSTACK)
        MSR     MSPLIM, R0
        CPSIE   I               ; Unmask interrupts
        LDR     R0, =SystemInit
        BLX     R0
        LDR     R0, =__iar_program_start
        BX      R0

        PUBWEAK NMI_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
NMI_Handler
        B .

        PUBWEAK HardFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
HardFault_Handler
        B .

        PUBWEAK MemManage_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
MemManage_Handler
        B .

        PUBWEAK BusFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
BusFault_Handler
        B .

        PUBWEAK UsageFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
UsageFault_Handler
        B .

        PUBWEAK SecureFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SecureFault_Handler
        B .

        PUBWEAK SVC_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SVC_Handler
        B .

        PUBWEAK DebugMon_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
DebugMon_Handler
        B .

        PUBWEAK PendSV_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
PendSV_Handler
        B .

        PUBWEAK SysTick_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SysTick_Handler
        B .

        PUBWEAK WDT_BOD_IRQHandler
        PUBWEAK WDT_BOD_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
WDT_BOD_IRQHandler
        LDR     R0, =WDT_BOD_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_IRQHandler
        PUBWEAK DMA0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_IRQHandler
        LDR     R0, =DMA0_DriverIRQHandler
        BX      R0

        PUBWEAK GINT0_IRQHandler
        PUBWEAK GINT0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GINT0_IRQHandler
        LDR     R0, =GINT0_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved19_IRQHandler
        PUBWEAK Reserved19_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved19_IRQHandler
        LDR     R0, =Reserved19_DriverIRQHandler
        BX      R0

        PUBWEAK PIN_INT0_IRQHandler
        PUBWEAK PIN_INT0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
PIN_INT0_IRQHandler
        LDR     R0, =PIN_INT0_DriverIRQHandler
        BX      R0

        PUBWEAK PIN_INT1_IRQHandler
        PUBWEAK PIN_INT1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
PIN_INT1_IRQHandler
        LDR     R0, =PIN_INT1_DriverIRQHandler
        BX      R0

        PUBWEAK PIN_INT2_IRQHandler
        PUBWEAK PIN_INT2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
PIN_INT2_IRQHandler
        LDR     R0, =PIN_INT2_DriverIRQHandler
        BX      R0

        PUBWEAK PIN_INT3_IRQHandler
        PUBWEAK PIN_INT3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
PIN_INT3_IRQHandler
        LDR     R0, =PIN_INT3_DriverIRQHandler
        BX      R0

        PUBWEAK UTICK0_IRQHandler
        PUBWEAK UTICK0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
UTICK0_IRQHandler
        LDR     R0, =UTICK0_DriverIRQHandler
        BX      R0

        PUBWEAK MRT0_IRQHandler
        PUBWEAK MRT0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
MRT0_IRQHandler
        LDR     R0, =MRT0_DriverIRQHandler
        BX      R0

        PUBWEAK CTIMER0_IRQHandler
        PUBWEAK CTIMER0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CTIMER0_IRQHandler
        LDR     R0, =CTIMER0_DriverIRQHandler
        BX      R0

        PUBWEAK CTIMER1_IRQHandler
        PUBWEAK CTIMER1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CTIMER1_IRQHandler
        LDR     R0, =CTIMER1_DriverIRQHandler
        BX      R0

        PUBWEAK SCT0_IRQHandler
        PUBWEAK SCT0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SCT0_IRQHandler
        LDR     R0, =SCT0_DriverIRQHandler
        BX      R0

        PUBWEAK CTIMER3_IRQHandler
        PUBWEAK CTIMER3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CTIMER3_IRQHandler
        LDR     R0, =CTIMER3_DriverIRQHandler
        BX      R0

        PUBWEAK FLEXCOMM0_IRQHandler
        PUBWEAK FLEXCOMM0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
FLEXCOMM0_IRQHandler
        LDR     R0, =FLEXCOMM0_DriverIRQHandler
        BX      R0

        PUBWEAK FLEXCOMM1_IRQHandler
        PUBWEAK FLEXCOMM1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
FLEXCOMM1_IRQHandler
        LDR     R0, =FLEXCOMM1_DriverIRQHandler
        BX      R0

        PUBWEAK FLEXCOMM2_IRQHandler
        PUBWEAK FLEXCOMM2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
FLEXCOMM2_IRQHandler
        LDR     R0, =FLEXCOMM2_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved33_IRQHandler
        PUBWEAK Reserved33_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved33_IRQHandler
        LDR     R0, =Reserved33_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved34_IRQHandler
        PUBWEAK Reserved34_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved34_IRQHandler
        LDR     R0, =Reserved34_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved35_IRQHandler
        PUBWEAK Reserved35_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved35_IRQHandler
        LDR     R0, =Reserved35_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved36_IRQHandler
        PUBWEAK Reserved36_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved36_IRQHandler
        LDR     R0, =Reserved36_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved37_IRQHandler
        PUBWEAK Reserved37_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved37_IRQHandler
        LDR     R0, =Reserved37_DriverIRQHandler
        BX      R0

        PUBWEAK BLE_LL_IRQHandler
        PUBWEAK BLE_LL_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
BLE_LL_IRQHandler
        LDR     R0, =BLE_LL_DriverIRQHandler
        BX      R0

        PUBWEAK BLE_SLP_TMR_IRQHandler
        PUBWEAK BLE_SLP_TMR_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
BLE_SLP_TMR_IRQHandler
        LDR     R0, =BLE_SLP_TMR_DriverIRQHandler
        BX      R0

        PUBWEAK WDT_IRQHandler
        PUBWEAK WDT_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
WDT_IRQHandler
        LDR     R0, =WDT_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved41_IRQHandler
        PUBWEAK Reserved41_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved41_IRQHandler
        LDR     R0, =Reserved41_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved42_IRQHandler
        PUBWEAK Reserved42_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved42_IRQHandler
        LDR     R0, =Reserved42_DriverIRQHandler
        BX      R0

        PUBWEAK BOD1_IRQHandler
        PUBWEAK BOD1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
BOD1_IRQHandler
        LDR     R0, =BOD1_DriverIRQHandler
        BX      R0

        PUBWEAK BOD2_IRQHandler
        PUBWEAK BOD2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
BOD2_IRQHandler
        LDR     R0, =BOD2_DriverIRQHandler
        BX      R0

        PUBWEAK RTC_IRQHandler
        PUBWEAK RTC_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
RTC_IRQHandler
        LDR     R0, =RTC_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved46_IRQHandler
        PUBWEAK Reserved46_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved46_IRQHandler
        LDR     R0, =Reserved46_DriverIRQHandler
        BX      R0

        PUBWEAK WAKE_DSLP_IRQHandler
        PUBWEAK WAKE_DSLP_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
WAKE_DSLP_IRQHandler
        LDR     R0, =WAKE_DSLP_DriverIRQHandler
        BX      R0

        PUBWEAK PIN_INT4_IRQHandler
        PUBWEAK PIN_INT4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
PIN_INT4_IRQHandler
        LDR     R0, =PIN_INT4_DriverIRQHandler
        BX      R0

        PUBWEAK PIN_INT5_IRQHandler
        PUBWEAK PIN_INT5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
PIN_INT5_IRQHandler
        LDR     R0, =PIN_INT5_DriverIRQHandler
        BX      R0

        PUBWEAK PIN_INT6_IRQHandler
        PUBWEAK PIN_INT6_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
PIN_INT6_IRQHandler
        LDR     R0, =PIN_INT6_DriverIRQHandler
        BX      R0

        PUBWEAK PIN_INT7_IRQHandler
        PUBWEAK PIN_INT7_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
PIN_INT7_IRQHandler
        LDR     R0, =PIN_INT7_DriverIRQHandler
        BX      R0

        PUBWEAK CTIMER2_IRQHandler
        PUBWEAK CTIMER2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CTIMER2_IRQHandler
        LDR     R0, =CTIMER2_DriverIRQHandler
        BX      R0

        PUBWEAK CTIMER4_IRQHandler
        PUBWEAK CTIMER4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CTIMER4_IRQHandler
        LDR     R0, =CTIMER4_DriverIRQHandler
        BX      R0

        PUBWEAK OS_EVENT_IRQHandler
        PUBWEAK OS_EVENT_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
OS_EVENT_IRQHandler
        LDR     R0, =OS_EVENT_DriverIRQHandler
        BX      R0

        PUBWEAK SPIFI_IRQHandler
        PUBWEAK SPIFI_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SPIFI_IRQHandler
        LDR     R0, =SPIFI_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved56_IRQHandler
        PUBWEAK Reserved56_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved56_IRQHandler
        LDR     R0, =Reserved56_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved57_IRQHandler
        PUBWEAK Reserved57_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved57_IRQHandler
        LDR     R0, =Reserved57_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved58_IRQHandler
        PUBWEAK Reserved58_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved58_IRQHandler
        LDR     R0, =Reserved58_DriverIRQHandler
        BX      R0

        PUBWEAK FLASH_CCIF_IRQHandler
        PUBWEAK FLASH_CCIF_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
FLASH_CCIF_IRQHandler
        LDR     R0, =FLASH_CCIF_DriverIRQHandler
        BX      R0

        PUBWEAK FLASH_DFIF_IRQHandler
        PUBWEAK FLASH_DFIF_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
FLASH_DFIF_IRQHandler
        LDR     R0, =FLASH_DFIF_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved61_IRQHandler
        PUBWEAK Reserved61_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved61_IRQHandler
        LDR     R0, =Reserved61_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved62_IRQHandler
        PUBWEAK Reserved62_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved62_IRQHandler
        LDR     R0, =Reserved62_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved63_IRQHandler
        PUBWEAK Reserved63_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved63_IRQHandler
        LDR     R0, =Reserved63_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved64_IRQHandler
        PUBWEAK Reserved64_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved64_IRQHandler
        LDR     R0, =Reserved64_DriverIRQHandler
        BX      R0

        PUBWEAK SEC_HYPERVISOR_CALL_IRQHandler
        PUBWEAK SEC_HYPERVISOR_CALL_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SEC_HYPERVISOR_CALL_IRQHandler
        LDR     R0, =SEC_HYPERVISOR_CALL_DriverIRQHandler
        BX      R0

        PUBWEAK SEC_GPIO_INT0_IRQ0_IRQHandler
        PUBWEAK SEC_GPIO_INT0_IRQ0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SEC_GPIO_INT0_IRQ0_IRQHandler
        LDR     R0, =SEC_GPIO_INT0_IRQ0_DriverIRQHandler
        BX      R0

        PUBWEAK SEC_GPIO_INT0_IRQ1_IRQHandler
        PUBWEAK SEC_GPIO_INT0_IRQ1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SEC_GPIO_INT0_IRQ1_IRQHandler
        LDR     R0, =SEC_GPIO_INT0_IRQ1_DriverIRQHandler
        BX      R0

        PUBWEAK PLU_IRQHandler
        PUBWEAK PLU_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
PLU_IRQHandler
        LDR     R0, =PLU_DriverIRQHandler
        BX      R0

        PUBWEAK SEC_VIO_IRQHandler
        PUBWEAK SEC_VIO_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SEC_VIO_IRQHandler
        LDR     R0, =SEC_VIO_DriverIRQHandler
        BX      R0

        PUBWEAK HASHCRYPT_IRQHandler
        PUBWEAK HASHCRYPT_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
HASHCRYPT_IRQHandler
        LDR     R0, =HASHCRYPT_DriverIRQHandler
        BX      R0

        PUBWEAK CASPER_IRQHandler
        PUBWEAK CASPER_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CASPER_IRQHandler
        LDR     R0, =CASPER_DriverIRQHandler
        BX      R0

        PUBWEAK PUF_IRQHandler
        PUBWEAK PUF_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
PUF_IRQHandler
        LDR     R0, =PUF_DriverIRQHandler
        BX      R0

        PUBWEAK TRNG_IRQHandler
        PUBWEAK TRNG_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
TRNG_IRQHandler
        LDR     R0, =TRNG_DriverIRQHandler
        BX      R0

        PUBWEAK DMA1_IRQHandler
        PUBWEAK DMA1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA1_IRQHandler
        LDR     R0, =DMA1_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved75_IRQHandler
        PUBWEAK Reserved75_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved75_IRQHandler
        LDR     R0, =Reserved75_DriverIRQHandler
        BX      R0

        PUBWEAK CDOG_IRQHandler
        PUBWEAK CDOG_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CDOG_IRQHandler
        LDR     R0, =CDOG_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved77_IRQHandler
        PUBWEAK Reserved77_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved77_IRQHandler
        LDR     R0, =Reserved77_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved78_IRQHandler
        PUBWEAK Reserved78_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved78_IRQHandler
        LDR     R0, =Reserved78_DriverIRQHandler
        BX      R0

        PUBWEAK WAKE_PAD_IRQHandler
        PUBWEAK WAKE_PAD_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
WAKE_PAD_IRQHandler
        LDR     R0, =WAKE_PAD_DriverIRQHandler
        BX      R0

WDT_BOD_DriverIRQHandler
DMA0_DriverIRQHandler
GINT0_DriverIRQHandler
Reserved19_DriverIRQHandler
PIN_INT0_DriverIRQHandler
PIN_INT1_DriverIRQHandler
PIN_INT2_DriverIRQHandler
PIN_INT3_DriverIRQHandler
UTICK0_DriverIRQHandler
MRT0_DriverIRQHandler
CTIMER0_DriverIRQHandler
CTIMER1_DriverIRQHandler
SCT0_DriverIRQHandler
CTIMER3_DriverIRQHandler
FLEXCOMM0_DriverIRQHandler
FLEXCOMM1_DriverIRQHandler
FLEXCOMM2_DriverIRQHandler
Reserved33_DriverIRQHandler
Reserved34_DriverIRQHandler
Reserved35_DriverIRQHandler
Reserved36_DriverIRQHandler
Reserved37_DriverIRQHandler
BLE_LL_DriverIRQHandler
BLE_SLP_TMR_DriverIRQHandler
WDT_DriverIRQHandler
Reserved41_DriverIRQHandler
Reserved42_DriverIRQHandler
BOD1_DriverIRQHandler
BOD2_DriverIRQHandler
RTC_DriverIRQHandler
Reserved46_DriverIRQHandler
WAKE_DSLP_DriverIRQHandler
PIN_INT4_DriverIRQHandler
PIN_INT5_DriverIRQHandler
PIN_INT6_DriverIRQHandler
PIN_INT7_DriverIRQHandler
CTIMER2_DriverIRQHandler
CTIMER4_DriverIRQHandler
OS_EVENT_DriverIRQHandler
SPIFI_DriverIRQHandler
Reserved56_DriverIRQHandler
Reserved57_DriverIRQHandler
Reserved58_DriverIRQHandler
FLASH_CCIF_DriverIRQHandler
FLASH_DFIF_DriverIRQHandler
Reserved61_DriverIRQHandler
Reserved62_DriverIRQHandler
Reserved63_DriverIRQHandler
Reserved64_DriverIRQHandler
SEC_HYPERVISOR_CALL_DriverIRQHandler
SEC_GPIO_INT0_IRQ0_DriverIRQHandler
SEC_GPIO_INT0_IRQ1_DriverIRQHandler
PLU_DriverIRQHandler
SEC_VIO_DriverIRQHandler
HASHCRYPT_DriverIRQHandler
CASPER_DriverIRQHandler
PUF_DriverIRQHandler
TRNG_DriverIRQHandler
DMA1_DriverIRQHandler
Reserved75_DriverIRQHandler
CDOG_DriverIRQHandler
Reserved77_DriverIRQHandler
Reserved78_DriverIRQHandler
WAKE_PAD_DriverIRQHandler
DefaultISR
        B .

        END
