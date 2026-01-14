; -------------------------------------------------------------------------
;  @file:    startup_MCXA567.s
;  @purpose: CMSIS Cortex-M33 Core Device Startup File
;            MCXA567
;  @version: 2.0
;  @date:    2024-10-29
;  @build:   b251124
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
        DCD     Reserved16_IRQHandler                         ;OR IRQ1 to IRQ53
        DCD     CMC_IRQHandler                                ;Core Mode Controller interrupt
        DCD     DMA0_CH0_IRQHandler                           ;DMA3_0_CH0 error or transfer complete
        DCD     DMA0_CH1_IRQHandler                           ;DMA3_0_CH1 error or transfer complete
        DCD     DMA0_CH2_IRQHandler                           ;DMA3_0_CH2 error or transfer complete
        DCD     DMA0_CH3_IRQHandler                           ;DMA3_0_CH3 error or transfer complete
        DCD     DMA0_CH4_IRQHandler                           ;DMA3_0_CH4 error or transfer complete
        DCD     DMA0_CH5_IRQHandler                           ;DMA3_0_CH5 error or transfer complete
        DCD     DMA0_CH6_IRQHandler                           ;DMA3_0_CH6 error or transfer complete
        DCD     DMA0_CH7_IRQHandler                           ;DMA3_0_CH7 error or transfer complete
        DCD     ERM0_SINGLE_BIT_IRQHandler                    ;ERM Single Bit error interrupt
        DCD     ERM0_MULTI_BIT_IRQHandler                     ;ERM Multi Bit error interrupt
        DCD     FMU0_IRQHandler                               ;Flash Management Unit interrupt
        DCD     GLIKEY0_IRQHandler                            ;GLIKEY Interrupt
        DCD     MBC0_IRQHandler                               ;MBC secure violation interrupt
        DCD     SCG0_IRQHandler                               ;System Clock Generator interrupt
        DCD     SPC0_IRQHandler                               ;System Power Controller interrupt
        DCD     TDET_IRQHandler                               ;TDET interrrupt
        DCD     WUU0_IRQHandler                               ;Wake Up Unit interrupt
        DCD     CAN0_IRQHandler                               ;Controller Area Network 0 interrupt
        DCD     CAN1_IRQHandler                               ;Controller Area Network 1 interrupt
        DCD     Reserved37_IRQHandler                         ;xxx Interrupt 37
        DCD     Reserved38_IRQHandler                         ;xxx Interrupt 38
        DCD     FLEXIO_IRQHandler                             ;Flexible Input/Output interrupt
        DCD     I3C0_IRQHandler                               ;Improved Inter Integrated Circuit interrupt 0
        DCD     I3C1_IRQHandler                               ;Improved Inter Integrated Circuit interrupt 1
        DCD     LPI2C0_IRQHandler                             ;Low-Power Inter Integrated Circuit 0 interrupt
        DCD     LPI2C1_IRQHandler                             ;Low-Power Inter Integrated Circuit 1 interrupt
        DCD     LPSPI0_IRQHandler                             ;Low-Power Serial Peripheral Interface 0 interrupt
        DCD     LPSPI1_IRQHandler                             ;Low-Power Serial Peripheral Interface 1 interrupt
        DCD     LPSPI2_IRQHandler                             ;Low-Power Serial Peripheral Interface 2 interrupt
        DCD     LPUART0_IRQHandler                            ;Low-Power Universal Asynchronous Receive/Transmit 0 interrupt
        DCD     LPUART1_IRQHandler                            ;Low-Power Universal Asynchronous Receive/Transmit 1 interrupt
        DCD     LPUART2_IRQHandler                            ;Low-Power Universal Asynchronous Receive/Transmit 2 interrupt
        DCD     LPUART3_IRQHandler                            ;Low-Power Universal Asynchronous Receive/Transmit 3 interrupt
        DCD     LPUART4_IRQHandler                            ;Low-Power Universal Asynchronous Receive/Transmit 4 interrupt
        DCD     Reserved52_IRQHandler                         ;xxx Interrupt 52
        DCD     Reserved53_IRQHandler                         ;xxx Interrupt 53
        DCD     CDOG0_IRQHandler                              ;Code Watchdog Timer 0 interrupt
        DCD     CTIMER0_IRQHandler                            ;Standard counter/timer 0 interrupt
        DCD     CTIMER1_IRQHandler                            ;Standard counter/timer 1 interrupt
        DCD     CTIMER2_IRQHandler                            ;Standard counter/timer 2 interrupt
        DCD     CTIMER3_IRQHandler                            ;Standard counter/timer 3 interrupt
        DCD     CTIMER4_IRQHandler                            ;Standard counter/timer 4 interrupt
        DCD     Reserved60_IRQHandler                         ;xxx Interrupt 60
        DCD     Reserved61_IRQHandler                         ;xxx Interrupt 61
        DCD     Reserved62_IRQHandler                         ;xxx Interrupt 62
        DCD     Reserved63_IRQHandler                         ;xxx Interrupt 63
        DCD     Reserved64_IRQHandler                         ;xxx Interrupt 64
        DCD     Reserved65_IRQHandler                         ;xxx Interrupt 65
        DCD     Reserved66_IRQHandler                         ;xxx Interrupt 66
        DCD     Reserved67_IRQHandler                         ;xxx Interrupt 67
        DCD     Reserved68_IRQHandler                         ;xxx Interrupt 68
        DCD     Reserved69_IRQHandler                         ;xxx Interrupt 69
        DCD     FREQME0_IRQHandler                            ;Frequency Measurement interrupt
        DCD     LPTMR0_IRQHandler                             ;Low Power Timer 0 interrupt
        DCD     Reserved72_IRQHandler                         ;xxx Interrupt 72
        DCD     OS_EVENT_IRQHandler                           ;OS event timer interrupt
        DCD     WAKETIMER0_IRQHandler                         ;Wake Timer Interrupt
        DCD     UTICK0_IRQHandler                             ;Micro-Tick Timer interrupt
        DCD     WWDT0_IRQHandler                              ;Windowed Watchdog Timer 0 interrupt
        DCD     WWDT1_IRQHandler                              ;Windowed Watchdog Timer 2 interrupt
        DCD     ADC0_IRQHandler                               ;Analog-to-Digital Converter 0 interrupt
        DCD     ADC1_IRQHandler                               ;Analog-to-Digital Converter 1 interrupt
        DCD     CMP0_IRQHandler                               ;Comparator 0 interrupt
        DCD     Reserved81_IRQHandler                         ;xxx Interrupt 81
        DCD     Reserved82_IRQHandler                         ;xxx Interrupt 82
        DCD     DAC0_IRQHandler                               ;Digital-to-Analog Converter 0 - General Purpose interrupt
        DCD     DAC1_IRQHandler                               ;Digital-to-Analog Converter 1 - General Purpose interrupt
        DCD     Reserved85_IRQHandler                         ;xxx Interrupt 85
        DCD     Reserved86_IRQHandler                         ;xxx Interrupt 86
        DCD     GPIO0_IRQHandler                              ;General Purpose Input/Output 0 interrupt 0
        DCD     GPIO1_IRQHandler                              ;General Purpose Input/Output 1 interrupt 0
        DCD     GPIO2_IRQHandler                              ;General Purpose Input/Output 2 interrupt 0
        DCD     GPIO3_IRQHandler                              ;General Purpose Input/Output 3 interrupt 0
        DCD     GPIO4_IRQHandler                              ;General Purpose Input/Output 4 interrupt 0
        DCD     GPIO5_IRQHandler                              ;General Purpose Input/Output 5 interrupt 0
        DCD     LPI2C2_IRQHandler                             ;Low-Power Inter Integrated Circuit 2 interrupt
        DCD     LPI2C3_IRQHandler                             ;Low-Power Inter Integrated Circuit 3 interrupt
        DCD     Reserved95_IRQHandler                         ;xxx Interrupt 95
        DCD     Reserved96_IRQHandler                         ;xxx Interrupt 96
        DCD     Reserved97_IRQHandler                         ;xxx Interrupt 97
        DCD     Reserved98_IRQHandler                         ;xxx Interrupt 98
        DCD     Reserved99_IRQHandler                         ;xxx Interrupt 99
        DCD     Reserved100_IRQHandler                        ;xxx Interrupt 100
        DCD     Reserved101_IRQHandler                        ;xxx Interrupt 101
        DCD     Reserved102_IRQHandler                        ;xxx Interrupt 102
        DCD     Reserved103_IRQHandler                        ;xxx Interrupt 103
        DCD     Reserved104_IRQHandler                        ;xxx Interrupt 104
        DCD     ESPI_IRQHandler                               ;eSPI interrupt
        DCD     ETHERNET_IRQHandler                           ;Ethernet QoS interrupt
        DCD     ETHERNET_PMT_IRQHandler                       ;Ethernet QoS power management interrupt
        DCD     Reserved108_IRQHandler                        ;xxx Interrupt 108
        DCD     TENBASET_PHY0_IRQHandler                      ;10Base-T1S interrupt
        DCD     I3C2_IRQHandler                               ;Improved Inter Integrated Circuit interrupt 2
        DCD     LPUART5_IRQHandler                            ;Low-Power Universal Asynchronous Receive/Transmit interrupt
        DCD     Reserved112_IRQHandler                        ;xxx Interrupt 112
        DCD     LPSPI3_IRQHandler                             ;Low-Power Serial Peripheral Interface 3 interrupt
        DCD     LPSPI4_IRQHandler                             ;Low-Power Serial Peripheral Interface 4 interrupt
        DCD     LPSPI5_IRQHandler                             ;Low-Power Serial Peripheral Interface 5 interrupt
        DCD     LPI2C4_IRQHandler                             ;Low-Power Inter Integrated Circuit 4 interrupt
        DCD     I3C3_IRQHandler                               ;Improved Inter Integrated Circuit interrupt 3
        DCD     Reserved118_IRQHandler                        ;xxx Interrupt 118
        DCD     USB1_HS_IRQHandler                            ;USB High Speed OTG Controller interrupt
        DCD     USB1_HS_PHY_IRQHandler                        ;USBHS DCD or USBHS Phy interrupt
        DCD     Reserved121_IRQHandler                        ;xxx Interrupt 121
        DCD     FLEXSPI0_IRQHandler                           ;Flexible Serial Peripheral Interface interrupt
        DCD     Reserved123_IRQHandler                        ;xxx Interrupt 123
        DCD     SMARTDMA_IRQHandler                           ;SmartDMA interrupt
        DCD     CDOG1_IRQHandler                              ;Code Watchdog Timer 1 interrupt
        DCD     PKC_IRQHandler                                ;PKC interrupt
        DCD     SGI_IRQHandler                                ;SGI interrupt
        DCD     SPI_FILTER_IRQHandler                         ;Reserved interrupt
        DCD     TRNG0_IRQHandler                              ;True Random Number Generator interrupt
        DCD     SECURE_ERR_IRQHandler                         ;Secure IP Error interrupt. It OR SGI, PKC, TRNG error together.
        DCD     SEC_HYPERVISOR_CALL_IRQHandler                ;AHB Secure Controller hypervisor call interrupt
        DCD     Reserved132_IRQHandler                        ;xxx Interrupt 132
        DCD     Reserved133_IRQHandler                        ;xxx Interrupt 133
        DCD     Reserved134_IRQHandler                        ;xxx Interrupt 134
        DCD     RTC_IRQHandler                                ;RTC alarm interrupt
        DCD     Reserved136_IRQHandler                        ;xxx Interrupt 136
        DCD     Reserved137_IRQHandler                        ;xxx Interrupt 137
        DCD     GDET_IRQHandler                               ;Digital Glitch Detect 0 interrupt
        DCD     EWM0_IRQHandler                               ;External Watchdog Monitor interrupt
        DCD     TSI_END_OF_SCAN_IRQHandler                    ;TSI End of Scan interrupt
        DCD     TSI_OUT_OF_SCAN_IRQHandler                    ;TSI Out of Scan interrupt
        DCD     GPIO0_1_IRQHandler                            ;General Purpose Input/Output 0 interrupt 1
        DCD     GPIO1_1_IRQHandler                            ;General Purpose Input/Output 1 interrupt 1
        DCD     GPIO2_1_IRQHandler                            ;General Purpose Input/Output 2 interrupt 1
        DCD     GPIO3_1_IRQHandler                            ;General Purpose Input/Output 3 interrupt 1
        DCD     GPIO4_1_IRQHandler                            ;General Purpose Input/Output 4 interrupt 1
        DCD     GPIO5_1_IRQHandler                            ;General Purpose Input/Output 5 interrupt 1
        DCD     Reserved148_IRQHandler                        ;xxx Interrupt 148
        DCD     ITRC0_IRQHandler                              ;Intrusion and Tamper Response Controller interrupt
        DCD     DMA0_CH8_IRQHandler                           ;DMA3_0_CH8 error or transfer complete
        DCD     DMA0_CH9_IRQHandler                           ;DMA3_0_CH9 error or transfer complete
        DCD     DMA0_CH10_IRQHandler                          ;DMA3_0_CH10 error or transfer complete
        DCD     DMA0_CH11_IRQHandler                          ;DMA3_0_CH11 error or transfer complete
        DCD     Reserved154_IRQHandler                        ;xxx Interrupt 154
        DCD     Reserved155_IRQHandler                        ;xxx Interrupt 155
        DCD     Reserved156_IRQHandler                        ;xxx Interrupt 156
        DCD     Reserved157_IRQHandler                        ;xxx Interrupt 157
        DCD     DMA1_CH0_IRQHandler                           ;DMA3_1_CH0 error or transfer complete
        DCD     DMA1_CH1_IRQHandler                           ;DMA3_1_CH1 error or transfer complete
        DCD     DMA1_CH2_IRQHandler                           ;DMA3_1_CH2 error or transfer complete
        DCD     DMA1_CH3_IRQHandler                           ;DMA3_1_CH3 error or transfer complete
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

        PUBWEAK Reserved16_IRQHandler
        PUBWEAK Reserved16_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved16_IRQHandler
        LDR     R0, =Reserved16_DriverIRQHandler
        BX      R0

        PUBWEAK CMC_IRQHandler
        PUBWEAK CMC_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CMC_IRQHandler
        LDR     R0, =CMC_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_CH0_IRQHandler
        PUBWEAK DMA0_CH0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_CH0_IRQHandler
        LDR     R0, =DMA0_CH0_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_CH1_IRQHandler
        PUBWEAK DMA0_CH1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_CH1_IRQHandler
        LDR     R0, =DMA0_CH1_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_CH2_IRQHandler
        PUBWEAK DMA0_CH2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_CH2_IRQHandler
        LDR     R0, =DMA0_CH2_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_CH3_IRQHandler
        PUBWEAK DMA0_CH3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_CH3_IRQHandler
        LDR     R0, =DMA0_CH3_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_CH4_IRQHandler
        PUBWEAK DMA0_CH4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_CH4_IRQHandler
        LDR     R0, =DMA0_CH4_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_CH5_IRQHandler
        PUBWEAK DMA0_CH5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_CH5_IRQHandler
        LDR     R0, =DMA0_CH5_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_CH6_IRQHandler
        PUBWEAK DMA0_CH6_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_CH6_IRQHandler
        LDR     R0, =DMA0_CH6_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_CH7_IRQHandler
        PUBWEAK DMA0_CH7_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_CH7_IRQHandler
        LDR     R0, =DMA0_CH7_DriverIRQHandler
        BX      R0

        PUBWEAK ERM0_SINGLE_BIT_IRQHandler
        PUBWEAK ERM0_SINGLE_BIT_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
ERM0_SINGLE_BIT_IRQHandler
        LDR     R0, =ERM0_SINGLE_BIT_DriverIRQHandler
        BX      R0

        PUBWEAK ERM0_MULTI_BIT_IRQHandler
        PUBWEAK ERM0_MULTI_BIT_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
ERM0_MULTI_BIT_IRQHandler
        LDR     R0, =ERM0_MULTI_BIT_DriverIRQHandler
        BX      R0

        PUBWEAK FMU0_IRQHandler
        PUBWEAK FMU0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
FMU0_IRQHandler
        LDR     R0, =FMU0_DriverIRQHandler
        BX      R0

        PUBWEAK GLIKEY0_IRQHandler
        PUBWEAK GLIKEY0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GLIKEY0_IRQHandler
        LDR     R0, =GLIKEY0_DriverIRQHandler
        BX      R0

        PUBWEAK MBC0_IRQHandler
        PUBWEAK MBC0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
MBC0_IRQHandler
        LDR     R0, =MBC0_DriverIRQHandler
        BX      R0

        PUBWEAK SCG0_IRQHandler
        PUBWEAK SCG0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SCG0_IRQHandler
        LDR     R0, =SCG0_DriverIRQHandler
        BX      R0

        PUBWEAK SPC0_IRQHandler
        PUBWEAK SPC0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SPC0_IRQHandler
        LDR     R0, =SPC0_DriverIRQHandler
        BX      R0

        PUBWEAK TDET_IRQHandler
        PUBWEAK TDET_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
TDET_IRQHandler
        LDR     R0, =TDET_DriverIRQHandler
        BX      R0

        PUBWEAK WUU0_IRQHandler
        PUBWEAK WUU0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
WUU0_IRQHandler
        LDR     R0, =WUU0_DriverIRQHandler
        BX      R0

        PUBWEAK CAN0_IRQHandler
        PUBWEAK CAN0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CAN0_IRQHandler
        LDR     R0, =CAN0_DriverIRQHandler
        BX      R0

        PUBWEAK CAN1_IRQHandler
        PUBWEAK CAN1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CAN1_IRQHandler
        LDR     R0, =CAN1_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved37_IRQHandler
        PUBWEAK Reserved37_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved37_IRQHandler
        LDR     R0, =Reserved37_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved38_IRQHandler
        PUBWEAK Reserved38_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved38_IRQHandler
        LDR     R0, =Reserved38_DriverIRQHandler
        BX      R0

        PUBWEAK FLEXIO_IRQHandler
        PUBWEAK FLEXIO_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
FLEXIO_IRQHandler
        LDR     R0, =FLEXIO_DriverIRQHandler
        BX      R0

        PUBWEAK I3C0_IRQHandler
        PUBWEAK I3C0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
I3C0_IRQHandler
        LDR     R0, =I3C0_DriverIRQHandler
        BX      R0

        PUBWEAK I3C1_IRQHandler
        PUBWEAK I3C1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
I3C1_IRQHandler
        LDR     R0, =I3C1_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C0_IRQHandler
        PUBWEAK LPI2C0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C0_IRQHandler
        LDR     R0, =LPI2C0_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C1_IRQHandler
        PUBWEAK LPI2C1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C1_IRQHandler
        LDR     R0, =LPI2C1_DriverIRQHandler
        BX      R0

        PUBWEAK LPSPI0_IRQHandler
        PUBWEAK LPSPI0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI0_IRQHandler
        LDR     R0, =LPSPI0_DriverIRQHandler
        BX      R0

        PUBWEAK LPSPI1_IRQHandler
        PUBWEAK LPSPI1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI1_IRQHandler
        LDR     R0, =LPSPI1_DriverIRQHandler
        BX      R0

        PUBWEAK LPSPI2_IRQHandler
        PUBWEAK LPSPI2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI2_IRQHandler
        LDR     R0, =LPSPI2_DriverIRQHandler
        BX      R0

        PUBWEAK LPUART0_IRQHandler
        PUBWEAK LPUART0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART0_IRQHandler
        LDR     R0, =LPUART0_DriverIRQHandler
        BX      R0

        PUBWEAK LPUART1_IRQHandler
        PUBWEAK LPUART1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART1_IRQHandler
        LDR     R0, =LPUART1_DriverIRQHandler
        BX      R0

        PUBWEAK LPUART2_IRQHandler
        PUBWEAK LPUART2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART2_IRQHandler
        LDR     R0, =LPUART2_DriverIRQHandler
        BX      R0

        PUBWEAK LPUART3_IRQHandler
        PUBWEAK LPUART3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART3_IRQHandler
        LDR     R0, =LPUART3_DriverIRQHandler
        BX      R0

        PUBWEAK LPUART4_IRQHandler
        PUBWEAK LPUART4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART4_IRQHandler
        LDR     R0, =LPUART4_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved52_IRQHandler
        PUBWEAK Reserved52_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved52_IRQHandler
        LDR     R0, =Reserved52_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved53_IRQHandler
        PUBWEAK Reserved53_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved53_IRQHandler
        LDR     R0, =Reserved53_DriverIRQHandler
        BX      R0

        PUBWEAK CDOG0_IRQHandler
        PUBWEAK CDOG0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CDOG0_IRQHandler
        LDR     R0, =CDOG0_DriverIRQHandler
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

        PUBWEAK CTIMER2_IRQHandler
        PUBWEAK CTIMER2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CTIMER2_IRQHandler
        LDR     R0, =CTIMER2_DriverIRQHandler
        BX      R0

        PUBWEAK CTIMER3_IRQHandler
        PUBWEAK CTIMER3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CTIMER3_IRQHandler
        LDR     R0, =CTIMER3_DriverIRQHandler
        BX      R0

        PUBWEAK CTIMER4_IRQHandler
        PUBWEAK CTIMER4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CTIMER4_IRQHandler
        LDR     R0, =CTIMER4_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved60_IRQHandler
        PUBWEAK Reserved60_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved60_IRQHandler
        LDR     R0, =Reserved60_DriverIRQHandler
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

        PUBWEAK Reserved65_IRQHandler
        PUBWEAK Reserved65_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved65_IRQHandler
        LDR     R0, =Reserved65_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved66_IRQHandler
        PUBWEAK Reserved66_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved66_IRQHandler
        LDR     R0, =Reserved66_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved67_IRQHandler
        PUBWEAK Reserved67_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved67_IRQHandler
        LDR     R0, =Reserved67_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved68_IRQHandler
        PUBWEAK Reserved68_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved68_IRQHandler
        LDR     R0, =Reserved68_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved69_IRQHandler
        PUBWEAK Reserved69_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved69_IRQHandler
        LDR     R0, =Reserved69_DriverIRQHandler
        BX      R0

        PUBWEAK FREQME0_IRQHandler
        PUBWEAK FREQME0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
FREQME0_IRQHandler
        LDR     R0, =FREQME0_DriverIRQHandler
        BX      R0

        PUBWEAK LPTMR0_IRQHandler
        PUBWEAK LPTMR0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPTMR0_IRQHandler
        LDR     R0, =LPTMR0_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved72_IRQHandler
        PUBWEAK Reserved72_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved72_IRQHandler
        LDR     R0, =Reserved72_DriverIRQHandler
        BX      R0

        PUBWEAK OS_EVENT_IRQHandler
        PUBWEAK OS_EVENT_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
OS_EVENT_IRQHandler
        LDR     R0, =OS_EVENT_DriverIRQHandler
        BX      R0

        PUBWEAK WAKETIMER0_IRQHandler
        PUBWEAK WAKETIMER0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
WAKETIMER0_IRQHandler
        LDR     R0, =WAKETIMER0_DriverIRQHandler
        BX      R0

        PUBWEAK UTICK0_IRQHandler
        PUBWEAK UTICK0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
UTICK0_IRQHandler
        LDR     R0, =UTICK0_DriverIRQHandler
        BX      R0

        PUBWEAK WWDT0_IRQHandler
        PUBWEAK WWDT0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
WWDT0_IRQHandler
        LDR     R0, =WWDT0_DriverIRQHandler
        BX      R0

        PUBWEAK WWDT1_IRQHandler
        PUBWEAK WWDT1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
WWDT1_IRQHandler
        LDR     R0, =WWDT1_DriverIRQHandler
        BX      R0

        PUBWEAK ADC0_IRQHandler
        PUBWEAK ADC0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
ADC0_IRQHandler
        LDR     R0, =ADC0_DriverIRQHandler
        BX      R0

        PUBWEAK ADC1_IRQHandler
        PUBWEAK ADC1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
ADC1_IRQHandler
        LDR     R0, =ADC1_DriverIRQHandler
        BX      R0

        PUBWEAK CMP0_IRQHandler
        PUBWEAK CMP0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CMP0_IRQHandler
        LDR     R0, =CMP0_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved81_IRQHandler
        PUBWEAK Reserved81_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved81_IRQHandler
        LDR     R0, =Reserved81_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved82_IRQHandler
        PUBWEAK Reserved82_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved82_IRQHandler
        LDR     R0, =Reserved82_DriverIRQHandler
        BX      R0

        PUBWEAK DAC0_IRQHandler
        PUBWEAK DAC0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DAC0_IRQHandler
        LDR     R0, =DAC0_DriverIRQHandler
        BX      R0

        PUBWEAK DAC1_IRQHandler
        PUBWEAK DAC1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DAC1_IRQHandler
        LDR     R0, =DAC1_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved85_IRQHandler
        PUBWEAK Reserved85_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved85_IRQHandler
        LDR     R0, =Reserved85_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved86_IRQHandler
        PUBWEAK Reserved86_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved86_IRQHandler
        LDR     R0, =Reserved86_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO0_IRQHandler
        PUBWEAK GPIO0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GPIO0_IRQHandler
        LDR     R0, =GPIO0_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO1_IRQHandler
        PUBWEAK GPIO1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GPIO1_IRQHandler
        LDR     R0, =GPIO1_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO2_IRQHandler
        PUBWEAK GPIO2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GPIO2_IRQHandler
        LDR     R0, =GPIO2_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO3_IRQHandler
        PUBWEAK GPIO3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GPIO3_IRQHandler
        LDR     R0, =GPIO3_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO4_IRQHandler
        PUBWEAK GPIO4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GPIO4_IRQHandler
        LDR     R0, =GPIO4_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO5_IRQHandler
        PUBWEAK GPIO5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GPIO5_IRQHandler
        LDR     R0, =GPIO5_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C2_IRQHandler
        PUBWEAK LPI2C2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C2_IRQHandler
        LDR     R0, =LPI2C2_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C3_IRQHandler
        PUBWEAK LPI2C3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C3_IRQHandler
        LDR     R0, =LPI2C3_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved95_IRQHandler
        PUBWEAK Reserved95_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved95_IRQHandler
        LDR     R0, =Reserved95_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved96_IRQHandler
        PUBWEAK Reserved96_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved96_IRQHandler
        LDR     R0, =Reserved96_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved97_IRQHandler
        PUBWEAK Reserved97_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved97_IRQHandler
        LDR     R0, =Reserved97_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved98_IRQHandler
        PUBWEAK Reserved98_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved98_IRQHandler
        LDR     R0, =Reserved98_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved99_IRQHandler
        PUBWEAK Reserved99_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved99_IRQHandler
        LDR     R0, =Reserved99_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved100_IRQHandler
        PUBWEAK Reserved100_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved100_IRQHandler
        LDR     R0, =Reserved100_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved101_IRQHandler
        PUBWEAK Reserved101_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved101_IRQHandler
        LDR     R0, =Reserved101_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved102_IRQHandler
        PUBWEAK Reserved102_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved102_IRQHandler
        LDR     R0, =Reserved102_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved103_IRQHandler
        PUBWEAK Reserved103_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved103_IRQHandler
        LDR     R0, =Reserved103_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved104_IRQHandler
        PUBWEAK Reserved104_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved104_IRQHandler
        LDR     R0, =Reserved104_DriverIRQHandler
        BX      R0

        PUBWEAK ESPI_IRQHandler
        PUBWEAK ESPI_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
ESPI_IRQHandler
        LDR     R0, =ESPI_DriverIRQHandler
        BX      R0

        PUBWEAK ETHERNET_IRQHandler
        PUBWEAK ETHERNET_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
ETHERNET_IRQHandler
        LDR     R0, =ETHERNET_DriverIRQHandler
        BX      R0

        PUBWEAK ETHERNET_PMT_IRQHandler
        PUBWEAK ETHERNET_PMT_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
ETHERNET_PMT_IRQHandler
        LDR     R0, =ETHERNET_PMT_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved108_IRQHandler
        PUBWEAK Reserved108_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved108_IRQHandler
        LDR     R0, =Reserved108_DriverIRQHandler
        BX      R0

        PUBWEAK TENBASET_PHY0_IRQHandler
        PUBWEAK TENBASET_PHY0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
TENBASET_PHY0_IRQHandler
        LDR     R0, =TENBASET_PHY0_DriverIRQHandler
        BX      R0

        PUBWEAK I3C2_IRQHandler
        PUBWEAK I3C2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
I3C2_IRQHandler
        LDR     R0, =I3C2_DriverIRQHandler
        BX      R0

        PUBWEAK LPUART5_IRQHandler
        PUBWEAK LPUART5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART5_IRQHandler
        LDR     R0, =LPUART5_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved112_IRQHandler
        PUBWEAK Reserved112_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved112_IRQHandler
        LDR     R0, =Reserved112_DriverIRQHandler
        BX      R0

        PUBWEAK LPSPI3_IRQHandler
        PUBWEAK LPSPI3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI3_IRQHandler
        LDR     R0, =LPSPI3_DriverIRQHandler
        BX      R0

        PUBWEAK LPSPI4_IRQHandler
        PUBWEAK LPSPI4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI4_IRQHandler
        LDR     R0, =LPSPI4_DriverIRQHandler
        BX      R0

        PUBWEAK LPSPI5_IRQHandler
        PUBWEAK LPSPI5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI5_IRQHandler
        LDR     R0, =LPSPI5_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C4_IRQHandler
        PUBWEAK LPI2C4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C4_IRQHandler
        LDR     R0, =LPI2C4_DriverIRQHandler
        BX      R0

        PUBWEAK I3C3_IRQHandler
        PUBWEAK I3C3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
I3C3_IRQHandler
        LDR     R0, =I3C3_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved118_IRQHandler
        PUBWEAK Reserved118_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved118_IRQHandler
        LDR     R0, =Reserved118_DriverIRQHandler
        BX      R0

        PUBWEAK USB1_HS_IRQHandler
        PUBWEAK USB1_HS_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
USB1_HS_IRQHandler
        LDR     R0, =USB1_HS_DriverIRQHandler
        BX      R0

        PUBWEAK USB1_HS_PHY_IRQHandler
        PUBWEAK USB1_HS_PHY_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
USB1_HS_PHY_IRQHandler
        LDR     R0, =USB1_HS_PHY_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved121_IRQHandler
        PUBWEAK Reserved121_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved121_IRQHandler
        LDR     R0, =Reserved121_DriverIRQHandler
        BX      R0

        PUBWEAK FLEXSPI0_IRQHandler
        PUBWEAK FLEXSPI0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
FLEXSPI0_IRQHandler
        LDR     R0, =FLEXSPI0_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved123_IRQHandler
        PUBWEAK Reserved123_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved123_IRQHandler
        LDR     R0, =Reserved123_DriverIRQHandler
        BX      R0

        PUBWEAK SMARTDMA_IRQHandler
        PUBWEAK SMARTDMA_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SMARTDMA_IRQHandler
        LDR     R0, =SMARTDMA_DriverIRQHandler
        BX      R0

        PUBWEAK CDOG1_IRQHandler
        PUBWEAK CDOG1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CDOG1_IRQHandler
        LDR     R0, =CDOG1_DriverIRQHandler
        BX      R0

        PUBWEAK PKC_IRQHandler
        PUBWEAK PKC_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
PKC_IRQHandler
        LDR     R0, =PKC_DriverIRQHandler
        BX      R0

        PUBWEAK SGI_IRQHandler
        PUBWEAK SGI_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SGI_IRQHandler
        LDR     R0, =SGI_DriverIRQHandler
        BX      R0

        PUBWEAK SPI_FILTER_IRQHandler
        PUBWEAK SPI_FILTER_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SPI_FILTER_IRQHandler
        LDR     R0, =SPI_FILTER_DriverIRQHandler
        BX      R0

        PUBWEAK TRNG0_IRQHandler
        PUBWEAK TRNG0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
TRNG0_IRQHandler
        LDR     R0, =TRNG0_DriverIRQHandler
        BX      R0

        PUBWEAK SECURE_ERR_IRQHandler
        PUBWEAK SECURE_ERR_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SECURE_ERR_IRQHandler
        LDR     R0, =SECURE_ERR_DriverIRQHandler
        BX      R0

        PUBWEAK SEC_HYPERVISOR_CALL_IRQHandler
        PUBWEAK SEC_HYPERVISOR_CALL_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SEC_HYPERVISOR_CALL_IRQHandler
        LDR     R0, =SEC_HYPERVISOR_CALL_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved132_IRQHandler
        PUBWEAK Reserved132_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved132_IRQHandler
        LDR     R0, =Reserved132_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved133_IRQHandler
        PUBWEAK Reserved133_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved133_IRQHandler
        LDR     R0, =Reserved133_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved134_IRQHandler
        PUBWEAK Reserved134_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved134_IRQHandler
        LDR     R0, =Reserved134_DriverIRQHandler
        BX      R0

        PUBWEAK RTC_IRQHandler
        PUBWEAK RTC_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
RTC_IRQHandler
        LDR     R0, =RTC_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved136_IRQHandler
        PUBWEAK Reserved136_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved136_IRQHandler
        LDR     R0, =Reserved136_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved137_IRQHandler
        PUBWEAK Reserved137_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved137_IRQHandler
        LDR     R0, =Reserved137_DriverIRQHandler
        BX      R0

        PUBWEAK GDET_IRQHandler
        PUBWEAK GDET_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GDET_IRQHandler
        LDR     R0, =GDET_DriverIRQHandler
        BX      R0

        PUBWEAK EWM0_IRQHandler
        PUBWEAK EWM0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
EWM0_IRQHandler
        LDR     R0, =EWM0_DriverIRQHandler
        BX      R0

        PUBWEAK TSI_END_OF_SCAN_IRQHandler
        PUBWEAK TSI_END_OF_SCAN_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
TSI_END_OF_SCAN_IRQHandler
        LDR     R0, =TSI_END_OF_SCAN_DriverIRQHandler
        BX      R0

        PUBWEAK TSI_OUT_OF_SCAN_IRQHandler
        PUBWEAK TSI_OUT_OF_SCAN_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
TSI_OUT_OF_SCAN_IRQHandler
        LDR     R0, =TSI_OUT_OF_SCAN_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO0_1_IRQHandler
        PUBWEAK GPIO0_1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GPIO0_1_IRQHandler
        LDR     R0, =GPIO0_1_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO1_1_IRQHandler
        PUBWEAK GPIO1_1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GPIO1_1_IRQHandler
        LDR     R0, =GPIO1_1_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO2_1_IRQHandler
        PUBWEAK GPIO2_1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GPIO2_1_IRQHandler
        LDR     R0, =GPIO2_1_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO3_1_IRQHandler
        PUBWEAK GPIO3_1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GPIO3_1_IRQHandler
        LDR     R0, =GPIO3_1_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO4_1_IRQHandler
        PUBWEAK GPIO4_1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GPIO4_1_IRQHandler
        LDR     R0, =GPIO4_1_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO5_1_IRQHandler
        PUBWEAK GPIO5_1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
GPIO5_1_IRQHandler
        LDR     R0, =GPIO5_1_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved148_IRQHandler
        PUBWEAK Reserved148_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved148_IRQHandler
        LDR     R0, =Reserved148_DriverIRQHandler
        BX      R0

        PUBWEAK ITRC0_IRQHandler
        PUBWEAK ITRC0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
ITRC0_IRQHandler
        LDR     R0, =ITRC0_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_CH8_IRQHandler
        PUBWEAK DMA0_CH8_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_CH8_IRQHandler
        LDR     R0, =DMA0_CH8_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_CH9_IRQHandler
        PUBWEAK DMA0_CH9_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_CH9_IRQHandler
        LDR     R0, =DMA0_CH9_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_CH10_IRQHandler
        PUBWEAK DMA0_CH10_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_CH10_IRQHandler
        LDR     R0, =DMA0_CH10_DriverIRQHandler
        BX      R0

        PUBWEAK DMA0_CH11_IRQHandler
        PUBWEAK DMA0_CH11_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA0_CH11_IRQHandler
        LDR     R0, =DMA0_CH11_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved154_IRQHandler
        PUBWEAK Reserved154_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved154_IRQHandler
        LDR     R0, =Reserved154_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved155_IRQHandler
        PUBWEAK Reserved155_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved155_IRQHandler
        LDR     R0, =Reserved155_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved156_IRQHandler
        PUBWEAK Reserved156_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved156_IRQHandler
        LDR     R0, =Reserved156_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved157_IRQHandler
        PUBWEAK Reserved157_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reserved157_IRQHandler
        LDR     R0, =Reserved157_DriverIRQHandler
        BX      R0

        PUBWEAK DMA1_CH0_IRQHandler
        PUBWEAK DMA1_CH0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA1_CH0_IRQHandler
        LDR     R0, =DMA1_CH0_DriverIRQHandler
        BX      R0

        PUBWEAK DMA1_CH1_IRQHandler
        PUBWEAK DMA1_CH1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA1_CH1_IRQHandler
        LDR     R0, =DMA1_CH1_DriverIRQHandler
        BX      R0

        PUBWEAK DMA1_CH2_IRQHandler
        PUBWEAK DMA1_CH2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA1_CH2_IRQHandler
        LDR     R0, =DMA1_CH2_DriverIRQHandler
        BX      R0

        PUBWEAK DMA1_CH3_IRQHandler
        PUBWEAK DMA1_CH3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA1_CH3_IRQHandler
        LDR     R0, =DMA1_CH3_DriverIRQHandler
        BX      R0

Reserved16_DriverIRQHandler
CMC_DriverIRQHandler
DMA0_CH0_DriverIRQHandler
DMA0_CH1_DriverIRQHandler
DMA0_CH2_DriverIRQHandler
DMA0_CH3_DriverIRQHandler
DMA0_CH4_DriverIRQHandler
DMA0_CH5_DriverIRQHandler
DMA0_CH6_DriverIRQHandler
DMA0_CH7_DriverIRQHandler
ERM0_SINGLE_BIT_DriverIRQHandler
ERM0_MULTI_BIT_DriverIRQHandler
FMU0_DriverIRQHandler
GLIKEY0_DriverIRQHandler
MBC0_DriverIRQHandler
SCG0_DriverIRQHandler
SPC0_DriverIRQHandler
TDET_DriverIRQHandler
WUU0_DriverIRQHandler
CAN0_DriverIRQHandler
CAN1_DriverIRQHandler
Reserved37_DriverIRQHandler
Reserved38_DriverIRQHandler
FLEXIO_DriverIRQHandler
I3C0_DriverIRQHandler
I3C1_DriverIRQHandler
LPI2C0_DriverIRQHandler
LPI2C1_DriverIRQHandler
LPSPI0_DriverIRQHandler
LPSPI1_DriverIRQHandler
LPSPI2_DriverIRQHandler
LPUART0_DriverIRQHandler
LPUART1_DriverIRQHandler
LPUART2_DriverIRQHandler
LPUART3_DriverIRQHandler
LPUART4_DriverIRQHandler
Reserved52_DriverIRQHandler
Reserved53_DriverIRQHandler
CDOG0_DriverIRQHandler
CTIMER0_DriverIRQHandler
CTIMER1_DriverIRQHandler
CTIMER2_DriverIRQHandler
CTIMER3_DriverIRQHandler
CTIMER4_DriverIRQHandler
Reserved60_DriverIRQHandler
Reserved61_DriverIRQHandler
Reserved62_DriverIRQHandler
Reserved63_DriverIRQHandler
Reserved64_DriverIRQHandler
Reserved65_DriverIRQHandler
Reserved66_DriverIRQHandler
Reserved67_DriverIRQHandler
Reserved68_DriverIRQHandler
Reserved69_DriverIRQHandler
FREQME0_DriverIRQHandler
LPTMR0_DriverIRQHandler
Reserved72_DriverIRQHandler
OS_EVENT_DriverIRQHandler
WAKETIMER0_DriverIRQHandler
UTICK0_DriverIRQHandler
WWDT0_DriverIRQHandler
WWDT1_DriverIRQHandler
ADC0_DriverIRQHandler
ADC1_DriverIRQHandler
CMP0_DriverIRQHandler
Reserved81_DriverIRQHandler
Reserved82_DriverIRQHandler
DAC0_DriverIRQHandler
DAC1_DriverIRQHandler
Reserved85_DriverIRQHandler
Reserved86_DriverIRQHandler
GPIO0_DriverIRQHandler
GPIO1_DriverIRQHandler
GPIO2_DriverIRQHandler
GPIO3_DriverIRQHandler
GPIO4_DriverIRQHandler
GPIO5_DriverIRQHandler
LPI2C2_DriverIRQHandler
LPI2C3_DriverIRQHandler
Reserved95_DriverIRQHandler
Reserved96_DriverIRQHandler
Reserved97_DriverIRQHandler
Reserved98_DriverIRQHandler
Reserved99_DriverIRQHandler
Reserved100_DriverIRQHandler
Reserved101_DriverIRQHandler
Reserved102_DriverIRQHandler
Reserved103_DriverIRQHandler
Reserved104_DriverIRQHandler
ESPI_DriverIRQHandler
ETHERNET_DriverIRQHandler
ETHERNET_PMT_DriverIRQHandler
Reserved108_DriverIRQHandler
TENBASET_PHY0_DriverIRQHandler
I3C2_DriverIRQHandler
LPUART5_DriverIRQHandler
Reserved112_DriverIRQHandler
LPSPI3_DriverIRQHandler
LPSPI4_DriverIRQHandler
LPSPI5_DriverIRQHandler
LPI2C4_DriverIRQHandler
I3C3_DriverIRQHandler
Reserved118_DriverIRQHandler
USB1_HS_DriverIRQHandler
USB1_HS_PHY_DriverIRQHandler
Reserved121_DriverIRQHandler
FLEXSPI0_DriverIRQHandler
Reserved123_DriverIRQHandler
SMARTDMA_DriverIRQHandler
CDOG1_DriverIRQHandler
PKC_DriverIRQHandler
SGI_DriverIRQHandler
SPI_FILTER_DriverIRQHandler
TRNG0_DriverIRQHandler
SECURE_ERR_DriverIRQHandler
SEC_HYPERVISOR_CALL_DriverIRQHandler
Reserved132_DriverIRQHandler
Reserved133_DriverIRQHandler
Reserved134_DriverIRQHandler
RTC_DriverIRQHandler
Reserved136_DriverIRQHandler
Reserved137_DriverIRQHandler
GDET_DriverIRQHandler
EWM0_DriverIRQHandler
TSI_END_OF_SCAN_DriverIRQHandler
TSI_OUT_OF_SCAN_DriverIRQHandler
GPIO0_1_DriverIRQHandler
GPIO1_1_DriverIRQHandler
GPIO2_1_DriverIRQHandler
GPIO3_1_DriverIRQHandler
GPIO4_1_DriverIRQHandler
GPIO5_1_DriverIRQHandler
Reserved148_DriverIRQHandler
ITRC0_DriverIRQHandler
DMA0_CH8_DriverIRQHandler
DMA0_CH9_DriverIRQHandler
DMA0_CH10_DriverIRQHandler
DMA0_CH11_DriverIRQHandler
Reserved154_DriverIRQHandler
Reserved155_DriverIRQHandler
Reserved156_DriverIRQHandler
Reserved157_DriverIRQHandler
DMA1_CH0_DriverIRQHandler
DMA1_CH1_DriverIRQHandler
DMA1_CH2_DriverIRQHandler
DMA1_CH3_DriverIRQHandler
DefaultISR
        B .

        END
