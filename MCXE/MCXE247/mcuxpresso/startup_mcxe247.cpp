//*****************************************************************************
// MCXE247 startup code for use with MCUXpresso IDE
//
// Version : 210225
//*****************************************************************************
//
// Copyright 2016-2025 NXP
// All rights reserved.
//
// SPDX-License-Identifier: BSD-3-Clause
//*****************************************************************************

#if defined (DEBUG)
#pragma GCC push_options
#pragma GCC optimize ("Og")
#endif // (DEBUG)

#if defined (__cplusplus)
#ifdef __REDLIB__
#error Redlib does not support C++
#else
//*****************************************************************************
//
// The entry point for the C++ library startup
//
//*****************************************************************************
extern "C" {
    extern void __libc_init_array(void);
}
#endif
#endif

#define WEAK __attribute__ ((weak))
#define WEAK_AV __attribute__ ((weak, section(".after_vectors")))
#define ALIAS(f) __attribute__ ((weak, alias (#f)))

//*****************************************************************************
#if defined (__cplusplus)
extern "C" {
#endif

//*****************************************************************************
// Flash Configuration block : 16-byte flash configuration field that stores
// default protection settings (loaded on reset) and security information that
// allows the MCU to restrict access to the Flash Memory module.
// Placed at address 0x400 by the linker script.
//*****************************************************************************
__attribute__ ((used,section(".FlashConfig"))) const struct {
    unsigned int word1;
    unsigned int word2;
    unsigned int word3;
    unsigned int word4;
} Flash_Config = {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFF7DFE};
//*****************************************************************************
// Declaration of external SystemInit function
//*****************************************************************************
#if defined (__USE_CMSIS)
extern void SystemInit(void);
#endif // (__USE_CMSIS)

//*****************************************************************************
// Forward declaration of the core exception handlers.
// When the application defines a handler (with the same name), this will
// automatically take precedence over these weak definitions.
// If your application is a C++ one, then any interrupt handlers defined
// in C++ files within in your main application will need to have C linkage
// rather than C++ linkage. To do this, make sure that you are using extern "C"
// { .... } around the interrupt handler within your main application code.
//*****************************************************************************
     void ResetISR(void);
WEAK void IntDefaultHandler(void);

//*****************************************************************************
// Forward declaration of the application IRQ handlers. When the application
// defines a handler (with the same name), this will automatically take
// precedence over weak definitions below
//*****************************************************************************
WEAK void DMA0_IRQHandler(void);
WEAK void DMA1_IRQHandler(void);
WEAK void DMA2_IRQHandler(void);
WEAK void DMA3_IRQHandler(void);
WEAK void DMA4_IRQHandler(void);
WEAK void DMA5_IRQHandler(void);
WEAK void DMA6_IRQHandler(void);
WEAK void DMA7_IRQHandler(void);
WEAK void DMA8_IRQHandler(void);
WEAK void DMA9_IRQHandler(void);
WEAK void DMA10_IRQHandler(void);
WEAK void DMA11_IRQHandler(void);
WEAK void DMA12_IRQHandler(void);
WEAK void DMA13_IRQHandler(void);
WEAK void DMA14_IRQHandler(void);
WEAK void DMA15_IRQHandler(void);
WEAK void DMA_Error_IRQHandler(void);
WEAK void MCM_IRQHandler(void);
WEAK void FTFC_CMD_IRQHandler(void);
WEAK void FTFC_Read_Collision_IRQHandler(void);
WEAK void LVD_LVW_IRQHandler(void);
WEAK void FTFM_Fault_IRQHandler(void);
WEAK void WDOG_EWM_IRQHandler(void);
WEAK void RCM_IRQHandler(void);
WEAK void LPI2C0_Master_IRQHandler(void);
WEAK void LPI2C0_Slave_IRQHandler(void);
WEAK void LPSPI0_IRQHandler(void);
WEAK void LPSPI1_IRQHandler(void);
WEAK void LPSPI2_IRQHandler(void);
WEAK void LPI2C1_Master_IRQHandler(void);
WEAK void LPI2C1_Slave_IRQHandler(void);
WEAK void LPUART0_IRQHandler(void);
WEAK void Reserved48_IRQHandler(void);
WEAK void LPUART1_IRQHandler(void);
WEAK void Reserved50_IRQHandler(void);
WEAK void LPUART2_IRQHandler(void);
WEAK void Reserved52_IRQHandler(void);
WEAK void Reserved53_IRQHandler(void);
WEAK void Reserved54_IRQHandler(void);
WEAK void ADC0_IRQHandler(void);
WEAK void ADC1_IRQHandler(void);
WEAK void CMP0_IRQHandler(void);
WEAK void Reserved58_IRQHandler(void);
WEAK void Reserved59_IRQHandler(void);
WEAK void ERM_single_fault_IRQHandler(void);
WEAK void ERM_double_fault_IRQHandler(void);
WEAK void RTC_IRQHandler(void);
WEAK void RTC_Seconds_IRQHandler(void);
WEAK void LPIT0_Ch0_IRQHandler(void);
WEAK void LPIT0_Ch1_IRQHandler(void);
WEAK void LPIT0_Ch2_IRQHandler(void);
WEAK void LPIT0_Ch3_IRQHandler(void);
WEAK void PDB0_IRQHandler(void);
WEAK void Reserved69_IRQHandler(void);
WEAK void Reserved70_IRQHandler(void);
WEAK void SAI1_TX_SYNC_IRQHandler(void);
WEAK void SAI1_RX_SYNC_IRQHandler(void);
WEAK void SCG_IRQHandler(void);
WEAK void LPTMR0_IRQHandler(void);
WEAK void PORTA_IRQHandler(void);
WEAK void PORTB_IRQHandler(void);
WEAK void PORTC_IRQHandler(void);
WEAK void PORTD_IRQHandler(void);
WEAK void PORTE_IRQHandler(void);
WEAK void SWI_IRQHandler(void);
WEAK void QSPI_Ored_IRQHandler(void);
WEAK void Reserved82_IRQHandler(void);
WEAK void Reserved83_IRQHandler(void);
WEAK void PDB1_IRQHandler(void);
WEAK void FLEXIO_IRQHandler(void);
WEAK void SAI0_TX_SYNC_IRQHandler(void);
WEAK void SAI0_RX_SYNC_IRQHandler(void);
WEAK void ENET_1588_Timer_IRQHandler(void);
WEAK void ENET_Transmit_IRQHandler(void);
WEAK void ENET_Receive_IRQHandler(void);
WEAK void ENET_Error_IRQHandler(void);
WEAK void ENET_Graceful_Stop_IRQHandler(void);
WEAK void ENET_Wake_IRQHandler(void);
WEAK void CAN0_ORed_Message_Buffer_IRQHandler(void);
WEAK void CAN0_Error_IRQHandler(void);
WEAK void CAN0_Wake_Up_IRQHandler(void);
WEAK void CAN0_ORed_0_15_MB_IRQHandler(void);
WEAK void CAN0_ORed_16_31_MB_IRQHandler(void);
WEAK void Reserved99_IRQHandler(void);
WEAK void Reserved100_IRQHandler(void);
WEAK void CAN1_ORed_Message_buffer_IRQHandler(void);
WEAK void CAN1_Error_IRQHandler(void);
WEAK void Reserved103_IRQHandler(void);
WEAK void CAN1_ORed_0_15_MB_IRQHandler(void);
WEAK void CAN1_ORed_16_31_MB_IRQHandler(void);
WEAK void Reserved106_IRQHandler(void);
WEAK void Reserved107_IRQHandler(void);
WEAK void CAN2_ORed_Message_buffer_IRQHandler(void);
WEAK void CAN2_Error_IRQHandler(void);
WEAK void Reserved110_IRQHandler(void);
WEAK void CAN2_ORed_0_15_MB_IRQHandler(void);
WEAK void CAN2_ORed_16_31_MB_IRQHandler(void);
WEAK void Reserved113_IRQHandler(void);
WEAK void Reserved114_IRQHandler(void);
WEAK void FTM0_Ch0_Ch1_IRQHandler(void);
WEAK void FTM0_Ch2_Ch3_IRQHandler(void);
WEAK void FTM0_Ch4_Ch5_IRQHandler(void);
WEAK void FTM0_Ch6_Ch7_IRQHandler(void);
WEAK void FTM0_Fault_IRQHandler(void);
WEAK void FTM0_Ovf_Reload_IRQHandler(void);
WEAK void FTM1_Ch0_Ch1_IRQHandler(void);
WEAK void FTM1_Ch2_Ch3_IRQHandler(void);
WEAK void FTM1_Ch4_Ch5_IRQHandler(void);
WEAK void FTM1_Ch6_Ch7_IRQHandler(void);
WEAK void FTM1_Fault_IRQHandler(void);
WEAK void FTM1_Ovf_Reload_IRQHandler(void);
WEAK void FTM2_Ch0_Ch1_IRQHandler(void);
WEAK void FTM2_Ch2_Ch3_IRQHandler(void);
WEAK void FTM2_Ch4_Ch5_IRQHandler(void);
WEAK void FTM2_Ch6_Ch7_IRQHandler(void);
WEAK void FTM2_Fault_IRQHandler(void);
WEAK void FTM2_Ovf_Reload_IRQHandler(void);
WEAK void FTM3_Ch0_Ch1_IRQHandler(void);
WEAK void FTM3_Ch2_Ch3_IRQHandler(void);
WEAK void FTM3_Ch4_Ch5_IRQHandler(void);
WEAK void FTM3_Ch6_Ch7_IRQHandler(void);
WEAK void FTM3_Fault_IRQHandler(void);
WEAK void FTM3_Ovf_Reload_IRQHandler(void);
WEAK void FTM4_Ch0_Ch1_IRQHandler(void);
WEAK void FTM4_Ch2_Ch3_IRQHandler(void);
WEAK void FTM4_Ch4_Ch5_IRQHandler(void);
WEAK void FTM4_Ch6_Ch7_IRQHandler(void);
WEAK void FTM4_Fault_IRQHandler(void);
WEAK void FTM4_Ovf_Reload_IRQHandler(void);
WEAK void FTM5_Ch0_Ch1_IRQHandler(void);
WEAK void FTM5_Ch2_Ch3_IRQHandler(void);
WEAK void FTM5_Ch4_Ch5_IRQHandler(void);
WEAK void FTM5_Ch6_Ch7_IRQHandler(void);
WEAK void FTM5_Fault_IRQHandler(void);
WEAK void FTM5_Ovf_Reload_IRQHandler(void);
WEAK void FTM6_Ch0_Ch1_IRQHandler(void);
WEAK void FTM6_Ch2_Ch3_IRQHandler(void);
WEAK void FTM6_Ch4_Ch5_IRQHandler(void);
WEAK void FTM6_Ch6_Ch7_IRQHandler(void);
WEAK void FTM6_Fault_IRQHandler(void);
WEAK void FTM6_Ovf_Reload_IRQHandler(void);
WEAK void FTM7_Ch0_Ch1_IRQHandler(void);
WEAK void FTM7_Ch2_Ch3_IRQHandler(void);
WEAK void FTM7_Ch4_Ch5_IRQHandler(void);
WEAK void FTM7_Ch6_Ch7_IRQHandler(void);
WEAK void FTM7_Fault_IRQHandler(void);
WEAK void FTM7_Ovf_Reload_IRQHandler(void);

//*****************************************************************************
// Forward declaration of the driver IRQ handlers. These are aliased
// to the IntDefaultHandler, which is a 'forever' loop. When the driver
// defines a handler (with the same name), this will automatically take
// precedence over these weak definitions
//*****************************************************************************
void DMA0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA4_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA5_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA6_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA7_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA8_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA9_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA10_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA11_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA12_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA13_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA14_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA15_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void DMA_Error_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void MCM_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTFC_CMD_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTFC_Read_Collision_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LVD_LVW_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTFM_Fault_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void WDOG_EWM_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void RCM_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPI2C0_Master_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPI2C0_Slave_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPSPI0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPSPI1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPSPI2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPI2C1_Master_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPI2C1_Slave_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPUART0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved48_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPUART1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved50_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPUART2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved52_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved53_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved54_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ADC0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ADC1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void CMP0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved58_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved59_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ERM_single_fault_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ERM_double_fault_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void RTC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void RTC_Seconds_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPIT0_Ch0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPIT0_Ch1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPIT0_Ch2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPIT0_Ch3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void PDB0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved69_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved70_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SAI1_TX_SYNC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SAI1_RX_SYNC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SCG_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void LPTMR0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void PORTA_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void PORTB_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void PORTC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void PORTD_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void PORTE_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SWI_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void QSPI_Ored_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved82_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved83_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void PDB1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FLEXIO_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SAI0_TX_SYNC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void SAI0_RX_SYNC_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ENET_1588_Timer_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ENET_Transmit_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ENET_Receive_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ENET_Error_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ENET_Graceful_Stop_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void ENET_Wake_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void CAN0_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved99_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved100_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void CAN1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved103_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved106_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved107_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void CAN2_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved110_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved113_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void Reserved114_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM0_Ch0_Ch1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM0_Ch2_Ch3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM0_Ch4_Ch5_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM0_Ch6_Ch7_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM0_Fault_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM0_Ovf_Reload_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM1_Ch0_Ch1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM1_Ch2_Ch3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM1_Ch4_Ch5_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM1_Ch6_Ch7_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM1_Fault_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM1_Ovf_Reload_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM2_Ch0_Ch1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM2_Ch2_Ch3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM2_Ch4_Ch5_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM2_Ch6_Ch7_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM2_Fault_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM2_Ovf_Reload_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM3_Ch0_Ch1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM3_Ch2_Ch3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM3_Ch4_Ch5_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM3_Ch6_Ch7_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM3_Fault_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM3_Ovf_Reload_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM4_Ch0_Ch1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM4_Ch2_Ch3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM4_Ch4_Ch5_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM4_Ch6_Ch7_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM4_Fault_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM4_Ovf_Reload_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM5_Ch0_Ch1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM5_Ch2_Ch3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM5_Ch4_Ch5_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM5_Ch6_Ch7_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM5_Fault_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM5_Ovf_Reload_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM6_Ch0_Ch1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM6_Ch2_Ch3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM6_Ch4_Ch5_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM6_Ch6_Ch7_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM6_Fault_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM6_Ovf_Reload_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM7_Ch0_Ch1_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM7_Ch2_Ch3_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM7_Ch4_Ch5_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM7_Ch6_Ch7_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM7_Fault_DriverIRQHandler(void) ALIAS(IntDefaultHandler);
void FTM7_Ovf_Reload_DriverIRQHandler(void) ALIAS(IntDefaultHandler);

//*****************************************************************************
// The entry point for the application.
// __main() is the entry point for Redlib based applications
// main() is the entry point for Newlib based applications
//*****************************************************************************
#if defined (__REDLIB__)
extern void __main(void);
#endif
extern int main(void);

//*****************************************************************************
// External declaration for the pointer to the stack top from the Linker Script
//*****************************************************************************
extern void _vStackTop(void);
//*****************************************************************************
#if defined (__cplusplus)
} // extern "C"
#endif
//*****************************************************************************
// The vector table.
// This relies on the linker script to place at correct location in memory.
//*****************************************************************************

extern void (* const g_pfnVectors[])(void);
extern void * __Vectors __attribute__ ((alias ("g_pfnVectors")));

__attribute__ ((used, section(".isr_vector")))
void (* const g_pfnVectors[])(void) = {
    // Core Level - CM4
    &_vStackTop,                       // The initial stack pointer
    ResetISR,                          // The reset handler
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved

    // Chip Level - MCXE247
    DMA0_IRQHandler,                      // 16 : DMA channel 0 transfer complete
    DMA1_IRQHandler,                      // 17 : DMA channel 1 transfer complete
    DMA2_IRQHandler,                      // 18 : DMA channel 2 transfer complete
    DMA3_IRQHandler,                      // 19 : DMA channel 3 transfer complete
    DMA4_IRQHandler,                      // 20 : DMA channel 4 transfer complete
    DMA5_IRQHandler,                      // 21 : DMA channel 5 transfer complete
    DMA6_IRQHandler,                      // 22 : DMA channel 6 transfer complete
    DMA7_IRQHandler,                      // 23 : DMA channel 7 transfer complete
    DMA8_IRQHandler,                      // 24 : DMA channel 8 transfer complete
    DMA9_IRQHandler,                      // 25 : DMA channel 9 transfer complete
    DMA10_IRQHandler,                     // 26 : DMA channel 10 transfer complete
    DMA11_IRQHandler,                     // 27 : DMA channel 11 transfer complete
    DMA12_IRQHandler,                     // 28 : DMA channel 12 transfer complete
    DMA13_IRQHandler,                     // 29 : DMA channel 13 transfer complete
    DMA14_IRQHandler,                     // 30 : DMA channel 14 transfer complete
    DMA15_IRQHandler,                     // 31 : DMA channel 15 transfer complete
    DMA_Error_IRQHandler,                 // 32 : DMA error interrupt channels 0-15
    MCM_IRQHandler,                       // 33 : FPU sources
    FTFC_CMD_IRQHandler,                  // 34 : FTFC Command complete
    FTFC_Read_Collision_IRQHandler,       // 35 : FTFC Read collision
    LVD_LVW_IRQHandler,                   // 36 : PMC Low voltage detect interrupt
    FTFM_Fault_IRQHandler,                // 37 : FTFM Double bit fault detect
    WDOG_EWM_IRQHandler,                  // 38 : Interrupt request out before WDOG reset out, EWM output as interrupt
    RCM_IRQHandler,                       // 39 : RCM Asynchronous Interrupt
    LPI2C0_Master_IRQHandler,             // 40 : LPI2C0 Master Interrupt
    LPI2C0_Slave_IRQHandler,              // 41 : LPI2C0 Slave Interrupt
    LPSPI0_IRQHandler,                    // 42 : LPSPI0 Interrupt
    LPSPI1_IRQHandler,                    // 43 : LPSPI1 Interrupt
    LPSPI2_IRQHandler,                    // 44 : LPSPI2 Interrupt
    LPI2C1_Master_IRQHandler,             // 45 : LPI2C1 Master Interrupt
    LPI2C1_Slave_IRQHandler,              // 46 : LPI2C1 Slave Interrupt
    LPUART0_IRQHandler,                   // 47 : Low-Power Universal Asynchronous Receive/Transmit interrupt
    Reserved48_IRQHandler,                // 48 : Reserved interrupt
    LPUART1_IRQHandler,                   // 49 : Low-Power Universal Asynchronous Receive/Transmit interrupt
    Reserved50_IRQHandler,                // 50 : Reserved interrupt
    LPUART2_IRQHandler,                   // 51 : Low-Power Universal Asynchronous Receive/Transmit interrupt
    Reserved52_IRQHandler,                // 52 : Reserved interrupt
    Reserved53_IRQHandler,                // 53 : Reserved interrupt
    Reserved54_IRQHandler,                // 54 : Reserved interrupt
    ADC0_IRQHandler,                      // 55 : Analog-to-Digital Converter interrupt
    ADC1_IRQHandler,                      // 56 : Analog-to-Digital Converter interrupt
    CMP0_IRQHandler,                      // 57 : Comparator interrupt
    Reserved58_IRQHandler,                // 58 : Reserved interrupt
    Reserved59_IRQHandler,                // 59 : Reserved interrupt
    ERM_single_fault_IRQHandler,          // 60 : ERM single bit error correction
    ERM_double_fault_IRQHandler,          // 61 : ERM double bit error non-correctable
    RTC_IRQHandler,                       // 62 : RTC alarm interrupt
    RTC_Seconds_IRQHandler,               // 63 : RTC seconds interrupt
    LPIT0_Ch0_IRQHandler,                 // 64 : LPIT0 channel 0 overflow interrupt
    LPIT0_Ch1_IRQHandler,                 // 65 : LPIT0 channel 1 overflow interrupt
    LPIT0_Ch2_IRQHandler,                 // 66 : LPIT0 channel 2 overflow interrupt
    LPIT0_Ch3_IRQHandler,                 // 67 : LPIT0 channel 3 overflow interrupt
    PDB0_IRQHandler,                      // 68 : PDB0 interrupt
    Reserved69_IRQHandler,                // 69 : Reserved interrupt
    Reserved70_IRQHandler,                // 70 : Reserved interrupt
    SAI1_TX_SYNC_IRQHandler,              // 71 : Transmit Synchronous interupt (for interrupt controller)
    SAI1_RX_SYNC_IRQHandler,              // 72 : Transmit Synchronous interupt (for interrupt controller)
    SCG_IRQHandler,                       // 73 : SCG bus interrupt request
    LPTMR0_IRQHandler,                    // 74 : LPTIMER interrupt request
    PORTA_IRQHandler,                     // 75 : Port A pin detect interrupt
    PORTB_IRQHandler,                     // 76 : Port B pin detect interrupt
    PORTC_IRQHandler,                     // 77 : Port C pin detect interrupt
    PORTD_IRQHandler,                     // 78 : Port D pin detect interrupt
    PORTE_IRQHandler,                     // 79 : Port E pin detect interrupt
    SWI_IRQHandler,                       // 80 : Software interrupt
    QSPI_Ored_IRQHandler,                 // 81 : All interrupts ORed output
    Reserved82_IRQHandler,                // 82 : Reserved interrupt
    Reserved83_IRQHandler,                // 83 : Reserved interrupt
    PDB1_IRQHandler,                      // 84 : PDB1 interrupt
    FLEXIO_IRQHandler,                    // 85 : Software interrupt
    SAI0_TX_SYNC_IRQHandler,              // 86 : Transmit Synchronous interupt (for interrupt controller)
    SAI0_RX_SYNC_IRQHandler,              // 87 : Transmit Synchronous interupt (for interrupt controller)
    ENET_1588_Timer_IRQHandler,           // 88 : Ethernet MAC IEEE 1588 Timer Interrupt
    ENET_Transmit_IRQHandler,             // 89 : Ethernet MAC Transmit Interrupt
    ENET_Receive_IRQHandler,              // 90 : Ethernet MAC Receive Interrupt
    ENET_Error_IRQHandler,                // 91 : Ethernet MAC Error and miscelaneous Interrupt
    ENET_Graceful_Stop_IRQHandler,        // 92 : Ethernet MAC graceful stop Interrupt
    ENET_Wake_IRQHandler,                 // 93 : Ethernet MAC wake from sleep Interrupt
    CAN0_ORed_Message_Buffer_IRQHandler,  // 94 : CAN0 OR'ed interrupt
    CAN0_Error_IRQHandler,                // 95 : CAN0 Interrupt indicating that errors were detected on the CAN bus
    CAN0_Wake_Up_IRQHandler,              // 96 : CAN0 Interrupt asserted when Pretended Networking operation is enabled, and a valid message matches the selected filter criteria during Low Power mode
    CAN0_ORed_0_15_MB_IRQHandler,         // 97 : CAN0 OR'ed Message buffer (0-15)
    CAN0_ORed_16_31_MB_IRQHandler,        // 98 : CAN0 OR'ed Message buffer (16-31)
    Reserved99_IRQHandler,                // 99 : Reserved interrupt
    Reserved100_IRQHandler,               // 100: Reserved interrupt
    CAN1_ORed_Message_buffer_IRQHandler,  // 101: CAN1 OR'ed interrupt
    CAN1_Error_IRQHandler,                // 102: CAN1 Interrupt indicating that errors were detected on the CAN bus
    Reserved103_IRQHandler,               // 103: Reserved interrupt
    CAN1_ORed_0_15_MB_IRQHandler,         // 104: CAN1 OR'ed Message buffer (0-15)
    CAN1_ORed_16_31_MB_IRQHandler,        // 105: CAN1 OR'ed Message buffer (16-31)
    Reserved106_IRQHandler,               // 106: Reserved interrupt
    Reserved107_IRQHandler,               // 107: Reserved interrupt
    CAN2_ORed_Message_buffer_IRQHandler,  // 108: CAN2 OR'ed interrupt
    CAN2_Error_IRQHandler,                // 109: CAN2 Interrupt indicating that errors were detected on the CAN bus
    Reserved110_IRQHandler,               // 110: Reserved interrupt
    CAN2_ORed_0_15_MB_IRQHandler,         // 111: CAN2 OR'ed Message buffer (0-15)
    CAN2_ORed_16_31_MB_IRQHandler,        // 112: CAN2 OR'ed Message buffer (16-31)
    Reserved113_IRQHandler,               // 113: Reserved interrupt
    Reserved114_IRQHandler,               // 114: Reserved interrupt
    FTM0_Ch0_Ch1_IRQHandler,              // 115: FTM0 Channel 0 and 1 interrupt
    FTM0_Ch2_Ch3_IRQHandler,              // 116: FTM0 Channel 2 and 3 interrupt
    FTM0_Ch4_Ch5_IRQHandler,              // 117: FTM0 Channel 4 and 5 interrupt
    FTM0_Ch6_Ch7_IRQHandler,              // 118: FTM0 Channel 6 and 7 interrupt
    FTM0_Fault_IRQHandler,                // 119: FTM0 Fault interrupt
    FTM0_Ovf_Reload_IRQHandler,           // 120: FTM0 Counter overflow and Reload interrupt
    FTM1_Ch0_Ch1_IRQHandler,              // 121: FTM1 Channel 0 and 1 interrupt
    FTM1_Ch2_Ch3_IRQHandler,              // 122: FTM1 Channel 2 and 3 interrupt
    FTM1_Ch4_Ch5_IRQHandler,              // 123: FTM1 Channel 4 and 5 interrupt
    FTM1_Ch6_Ch7_IRQHandler,              // 124: FTM1 Channel 6 and 7 interrupt
    FTM1_Fault_IRQHandler,                // 125: FTM1 Fault interrupt
    FTM1_Ovf_Reload_IRQHandler,           // 126: FTM1 Counter overflow and Reload interrupt
    FTM2_Ch0_Ch1_IRQHandler,              // 127: FTM2 Channel 0 and 1 interrupt
    FTM2_Ch2_Ch3_IRQHandler,              // 128: FTM2 Channel 2 and 3 interrupt
    FTM2_Ch4_Ch5_IRQHandler,              // 129: FTM2 Channel 4 and 5 interrupt
    FTM2_Ch6_Ch7_IRQHandler,              // 130: FTM2 Channel 6 and 7 interrupt
    FTM2_Fault_IRQHandler,                // 131: FTM2 Fault interrupt
    FTM2_Ovf_Reload_IRQHandler,           // 132: FTM2 Counter overflow and Reload interrupt
    FTM3_Ch0_Ch1_IRQHandler,              // 133: FTM3 Channel 0 and 1 interrupt
    FTM3_Ch2_Ch3_IRQHandler,              // 134: FTM3 Channel 2 and 3 interrupt
    FTM3_Ch4_Ch5_IRQHandler,              // 135: FTM3 Channel 4 and 5 interrupt
    FTM3_Ch6_Ch7_IRQHandler,              // 136: FTM3 Channel 6 and 7 interrupt
    FTM3_Fault_IRQHandler,                // 137: FTM3 Fault interrupt
    FTM3_Ovf_Reload_IRQHandler,           // 138: FTM3 Counter overflow and Reload interrupt
    FTM4_Ch0_Ch1_IRQHandler,              // 139: FTM4 Channel 0 and 1 interrupt
    FTM4_Ch2_Ch3_IRQHandler,              // 140: FTM4 Channel 2 and 3 interrupt
    FTM4_Ch4_Ch5_IRQHandler,              // 141: FTM4 Channel 4 and 5 interrupt
    FTM4_Ch6_Ch7_IRQHandler,              // 142: FTM4 Channel 6 and 7 interrupt
    FTM4_Fault_IRQHandler,                // 143: FTM4 Fault interrupt
    FTM4_Ovf_Reload_IRQHandler,           // 144: FTM4 Counter overflow and Reload interrupt
    FTM5_Ch0_Ch1_IRQHandler,              // 145: FTM5 Channel 0 and 1 interrupt
    FTM5_Ch2_Ch3_IRQHandler,              // 146: FTM5 Channel 2 and 3 interrupt
    FTM5_Ch4_Ch5_IRQHandler,              // 147: FTM5 Channel 4 and 5 interrupt
    FTM5_Ch6_Ch7_IRQHandler,              // 148: FTM5 Channel 6 and 7 interrupt
    FTM5_Fault_IRQHandler,                // 149: FTM5 Fault interrupt
    FTM5_Ovf_Reload_IRQHandler,           // 150: FTM5 Counter overflow and Reload interrupt
    FTM6_Ch0_Ch1_IRQHandler,              // 151: FTM6 Channel 0 and 1 interrupt
    FTM6_Ch2_Ch3_IRQHandler,              // 152: FTM6 Channel 2 and 3 interrupt
    FTM6_Ch4_Ch5_IRQHandler,              // 153: FTM6 Channel 4 and 5 interrupt
    FTM6_Ch6_Ch7_IRQHandler,              // 154: FTM6 Channel 6 and 7 interrupt
    FTM6_Fault_IRQHandler,                // 155: FTM6 Fault interrupt
    FTM6_Ovf_Reload_IRQHandler,           // 156: FTM6 Counter overflow and Reload interrupt
    FTM7_Ch0_Ch1_IRQHandler,              // 157: FTM7 Channel 0 and 1 interrupt
    FTM7_Ch2_Ch3_IRQHandler,              // 158: FTM7 Channel 2 and 3 interrupt
    FTM7_Ch4_Ch5_IRQHandler,              // 159: FTM7 Channel 4 and 5 interrupt
    FTM7_Ch6_Ch7_IRQHandler,              // 160: FTM7 Channel 6 and 7 interrupt
    FTM7_Fault_IRQHandler,                // 161: FTM7 Fault interrupt
    FTM7_Ovf_Reload_IRQHandler,           // 162: FTM7 Counter overflow and Reload interrupt
}; /* End of g_pfnVectors */

//*****************************************************************************
// Functions to carry out the initialization of RW and BSS data sections. These
// are written as separate functions rather than being inlined within the
// ResetISR() function in order to cope with MCUs with multiple banks of
// memory.
//*****************************************************************************
__attribute__ ((section(".after_vectors.init_data")))
void data_init(unsigned int romstart, unsigned int start, unsigned int len) {
    unsigned int *pulDest = (unsigned int*) start;
    unsigned int *pulSrc = (unsigned int*) romstart;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4)
        *pulDest++ = *pulSrc++;
}

__attribute__ ((section(".after_vectors.init_bss")))
void bss_init(unsigned int start, unsigned int len) {
    unsigned int *pulDest = (unsigned int*) start;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4)
        *pulDest++ = 0;
}

//*****************************************************************************
// The following symbols are constructs generated by the linker, indicating
// the location of various points in the "Global Section Table". This table is
// created by the linker via the Code Red managed linker script mechanism. It
// contains the load address, execution address and length of each RW data
// section and the execution and length of each BSS (zero initialized) section.
//*****************************************************************************
extern unsigned int __data_section_table;
extern unsigned int __data_section_table_end;
extern unsigned int __bss_section_table;
extern unsigned int __bss_section_table_end;

//*****************************************************************************
// Reset entry point for your code.
// Sets up a simple runtime environment and initializes the C/C++
// library.
//*****************************************************************************
__attribute__ ((naked, section(".after_vectors.reset")))
void ResetISR(void) {
    // Disable interrupts
    __asm volatile ("cpsid i");

#if defined (__USE_CMSIS)
// If __USE_CMSIS defined, then call CMSIS SystemInit code
    SystemInit();

#else
    // Disable Watchdog
    // Write watchdog update key to unlock
    *((volatile unsigned int *)0x40052004) = 0xD928C520;
    // Set timeout value
    *((volatile unsigned int *)0x40052008) = 0xFFFF;
    // Now disable watchdog via control register
    volatile unsigned int *WDOG_CS = (unsigned int *) 0x40052000;
    *WDOG_CS = (*WDOG_CS & ~(1 << 7)) | (1 << 5);
#endif // (__USE_CMSIS)

    //
    // Copy the data sections from flash to SRAM.
    //
    unsigned int LoadAddr, ExeAddr, SectionLen;
    unsigned int *SectionTableAddr;

    // Load base address of Global Section Table
    SectionTableAddr = &__data_section_table;

    // Copy the data sections from flash to SRAM.
    while (SectionTableAddr < &__data_section_table_end) {
        LoadAddr = *SectionTableAddr++;
        ExeAddr = *SectionTableAddr++;
        SectionLen = *SectionTableAddr++;
        data_init(LoadAddr, ExeAddr, SectionLen);
    }

    // At this point, SectionTableAddr = &__bss_section_table;
    // Zero fill the bss segment
    while (SectionTableAddr < &__bss_section_table_end) {
        ExeAddr = *SectionTableAddr++;
        SectionLen = *SectionTableAddr++;
        bss_init(ExeAddr, SectionLen);
    }

#if !defined (__USE_CMSIS)
// Assume that if __USE_CMSIS defined, then CMSIS SystemInit code
// will enable the FPU
#if defined (__VFP_FP__) && !defined (__SOFTFP__)
    //
    // Code to enable the Cortex-M4 FPU only included
    // if appropriate build options have been selected.
    // Code taken from Section 7.1, Cortex-M4 TRM (DDI0439C)
    //
    // Read CPACR (located at address 0xE000ED88)
    // Set bits 20-23 to enable CP10 and CP11 coprocessors
    // Write back the modified value to the CPACR
    asm volatile ("LDR.W R0, =0xE000ED88\n\t"
                  "LDR R1, [R0]\n\t"
                  "ORR R1, R1, #(0xF << 20)\n\t"
                  "STR R1, [R0]");
#endif // (__VFP_FP__) && !(__SOFTFP__)
#endif // (__USE_CMSIS)

#if !defined (__USE_CMSIS)
// Assume that if __USE_CMSIS defined, then CMSIS SystemInit code
// will setup the VTOR register

    // Check to see if we are running the code from a non-zero
    // address (eg RAM, external flash), in which case we need
    // to modify the VTOR register to tell the CPU that the
    // vector table is located at a non-0x0 address.
    unsigned int * pSCB_VTOR = (unsigned int *) 0xE000ED08;
    if ((unsigned int *)g_pfnVectors!=(unsigned int *) 0x00000000) {
        *pSCB_VTOR = (unsigned int)g_pfnVectors;
    }
#endif // (__USE_CMSIS)
#if defined (__cplusplus)
    //
    // Call C++ library initialisation
    //
    __libc_init_array();
#endif

    // Reenable interrupts
    __asm volatile ("cpsie i");

#if defined (__REDLIB__)
    // Call the Redlib library, which in turn calls main()
    __main();
#else
    main();
#endif

    //
    // main() shouldn't return, but if it does, we'll just enter an infinite loop
    //
    while (1) {
        ;
    }
}

//*****************************************************************************
// Default core exception handlers. Override the ones here by defining your own
// handler routines in your application code.
//*****************************************************************************
//*****************************************************************************
// Processor ends up here if an unexpected interrupt occurs or a specific
// handler is not present in the application code.
//*****************************************************************************
WEAK_AV void IntDefaultHandler(void)
{ while(1) {}
}

//*****************************************************************************
// Default application exception handlers. Override the ones here by defining
// your own handler routines in your application code. These routines call
// driver exception handlers or IntDefaultHandler() if no driver exception
// handler is included.
//*****************************************************************************
WEAK void DMA0_IRQHandler(void)
{   DMA0_DriverIRQHandler();
}

WEAK void DMA1_IRQHandler(void)
{   DMA1_DriverIRQHandler();
}

WEAK void DMA2_IRQHandler(void)
{   DMA2_DriverIRQHandler();
}

WEAK void DMA3_IRQHandler(void)
{   DMA3_DriverIRQHandler();
}

WEAK void DMA4_IRQHandler(void)
{   DMA4_DriverIRQHandler();
}

WEAK void DMA5_IRQHandler(void)
{   DMA5_DriverIRQHandler();
}

WEAK void DMA6_IRQHandler(void)
{   DMA6_DriverIRQHandler();
}

WEAK void DMA7_IRQHandler(void)
{   DMA7_DriverIRQHandler();
}

WEAK void DMA8_IRQHandler(void)
{   DMA8_DriverIRQHandler();
}

WEAK void DMA9_IRQHandler(void)
{   DMA9_DriverIRQHandler();
}

WEAK void DMA10_IRQHandler(void)
{   DMA10_DriverIRQHandler();
}

WEAK void DMA11_IRQHandler(void)
{   DMA11_DriverIRQHandler();
}

WEAK void DMA12_IRQHandler(void)
{   DMA12_DriverIRQHandler();
}

WEAK void DMA13_IRQHandler(void)
{   DMA13_DriverIRQHandler();
}

WEAK void DMA14_IRQHandler(void)
{   DMA14_DriverIRQHandler();
}

WEAK void DMA15_IRQHandler(void)
{   DMA15_DriverIRQHandler();
}

WEAK void DMA_Error_IRQHandler(void)
{   DMA_Error_DriverIRQHandler();
}

WEAK void MCM_IRQHandler(void)
{   MCM_DriverIRQHandler();
}

WEAK void FTFC_CMD_IRQHandler(void)
{   FTFC_CMD_DriverIRQHandler();
}

WEAK void FTFC_Read_Collision_IRQHandler(void)
{   FTFC_Read_Collision_DriverIRQHandler();
}

WEAK void LVD_LVW_IRQHandler(void)
{   LVD_LVW_DriverIRQHandler();
}

WEAK void FTFM_Fault_IRQHandler(void)
{   FTFM_Fault_DriverIRQHandler();
}

WEAK void WDOG_EWM_IRQHandler(void)
{   WDOG_EWM_DriverIRQHandler();
}

WEAK void RCM_IRQHandler(void)
{   RCM_DriverIRQHandler();
}

WEAK void LPI2C0_Master_IRQHandler(void)
{   LPI2C0_Master_DriverIRQHandler();
}

WEAK void LPI2C0_Slave_IRQHandler(void)
{   LPI2C0_Slave_DriverIRQHandler();
}

WEAK void LPSPI0_IRQHandler(void)
{   LPSPI0_DriverIRQHandler();
}

WEAK void LPSPI1_IRQHandler(void)
{   LPSPI1_DriverIRQHandler();
}

WEAK void LPSPI2_IRQHandler(void)
{   LPSPI2_DriverIRQHandler();
}

WEAK void LPI2C1_Master_IRQHandler(void)
{   LPI2C1_Master_DriverIRQHandler();
}

WEAK void LPI2C1_Slave_IRQHandler(void)
{   LPI2C1_Slave_DriverIRQHandler();
}

WEAK void LPUART0_IRQHandler(void)
{   LPUART0_DriverIRQHandler();
}

WEAK void Reserved48_IRQHandler(void)
{   Reserved48_DriverIRQHandler();
}

WEAK void LPUART1_IRQHandler(void)
{   LPUART1_DriverIRQHandler();
}

WEAK void Reserved50_IRQHandler(void)
{   Reserved50_DriverIRQHandler();
}

WEAK void LPUART2_IRQHandler(void)
{   LPUART2_DriverIRQHandler();
}

WEAK void Reserved52_IRQHandler(void)
{   Reserved52_DriverIRQHandler();
}

WEAK void Reserved53_IRQHandler(void)
{   Reserved53_DriverIRQHandler();
}

WEAK void Reserved54_IRQHandler(void)
{   Reserved54_DriverIRQHandler();
}

WEAK void ADC0_IRQHandler(void)
{   ADC0_DriverIRQHandler();
}

WEAK void ADC1_IRQHandler(void)
{   ADC1_DriverIRQHandler();
}

WEAK void CMP0_IRQHandler(void)
{   CMP0_DriverIRQHandler();
}

WEAK void Reserved58_IRQHandler(void)
{   Reserved58_DriverIRQHandler();
}

WEAK void Reserved59_IRQHandler(void)
{   Reserved59_DriverIRQHandler();
}

WEAK void ERM_single_fault_IRQHandler(void)
{   ERM_single_fault_DriverIRQHandler();
}

WEAK void ERM_double_fault_IRQHandler(void)
{   ERM_double_fault_DriverIRQHandler();
}

WEAK void RTC_IRQHandler(void)
{   RTC_DriverIRQHandler();
}

WEAK void RTC_Seconds_IRQHandler(void)
{   RTC_Seconds_DriverIRQHandler();
}

WEAK void LPIT0_Ch0_IRQHandler(void)
{   LPIT0_Ch0_DriverIRQHandler();
}

WEAK void LPIT0_Ch1_IRQHandler(void)
{   LPIT0_Ch1_DriverIRQHandler();
}

WEAK void LPIT0_Ch2_IRQHandler(void)
{   LPIT0_Ch2_DriverIRQHandler();
}

WEAK void LPIT0_Ch3_IRQHandler(void)
{   LPIT0_Ch3_DriverIRQHandler();
}

WEAK void PDB0_IRQHandler(void)
{   PDB0_DriverIRQHandler();
}

WEAK void Reserved69_IRQHandler(void)
{   Reserved69_DriverIRQHandler();
}

WEAK void Reserved70_IRQHandler(void)
{   Reserved70_DriverIRQHandler();
}

WEAK void SAI1_TX_SYNC_IRQHandler(void)
{   SAI1_TX_SYNC_DriverIRQHandler();
}

WEAK void SAI1_RX_SYNC_IRQHandler(void)
{   SAI1_RX_SYNC_DriverIRQHandler();
}

WEAK void SCG_IRQHandler(void)
{   SCG_DriverIRQHandler();
}

WEAK void LPTMR0_IRQHandler(void)
{   LPTMR0_DriverIRQHandler();
}

WEAK void PORTA_IRQHandler(void)
{   PORTA_DriverIRQHandler();
}

WEAK void PORTB_IRQHandler(void)
{   PORTB_DriverIRQHandler();
}

WEAK void PORTC_IRQHandler(void)
{   PORTC_DriverIRQHandler();
}

WEAK void PORTD_IRQHandler(void)
{   PORTD_DriverIRQHandler();
}

WEAK void PORTE_IRQHandler(void)
{   PORTE_DriverIRQHandler();
}

WEAK void SWI_IRQHandler(void)
{   SWI_DriverIRQHandler();
}

WEAK void QSPI_Ored_IRQHandler(void)
{   QSPI_Ored_DriverIRQHandler();
}

WEAK void Reserved82_IRQHandler(void)
{   Reserved82_DriverIRQHandler();
}

WEAK void Reserved83_IRQHandler(void)
{   Reserved83_DriverIRQHandler();
}

WEAK void PDB1_IRQHandler(void)
{   PDB1_DriverIRQHandler();
}

WEAK void FLEXIO_IRQHandler(void)
{   FLEXIO_DriverIRQHandler();
}

WEAK void SAI0_TX_SYNC_IRQHandler(void)
{   SAI0_TX_SYNC_DriverIRQHandler();
}

WEAK void SAI0_RX_SYNC_IRQHandler(void)
{   SAI0_RX_SYNC_DriverIRQHandler();
}

WEAK void ENET_1588_Timer_IRQHandler(void)
{   ENET_1588_Timer_DriverIRQHandler();
}

WEAK void ENET_Transmit_IRQHandler(void)
{   ENET_Transmit_DriverIRQHandler();
}

WEAK void ENET_Receive_IRQHandler(void)
{   ENET_Receive_DriverIRQHandler();
}

WEAK void ENET_Error_IRQHandler(void)
{   ENET_Error_DriverIRQHandler();
}

WEAK void ENET_Graceful_Stop_IRQHandler(void)
{   ENET_Graceful_Stop_DriverIRQHandler();
}

WEAK void ENET_Wake_IRQHandler(void)
{   ENET_Wake_DriverIRQHandler();
}

WEAK void CAN0_ORed_Message_Buffer_IRQHandler(void)
{   CAN0_DriverIRQHandler();
}

WEAK void CAN0_Error_IRQHandler(void)
{   CAN0_DriverIRQHandler();
}

WEAK void CAN0_Wake_Up_IRQHandler(void)
{   CAN0_DriverIRQHandler();
}

WEAK void CAN0_ORed_0_15_MB_IRQHandler(void)
{   CAN0_DriverIRQHandler();
}

WEAK void CAN0_ORed_16_31_MB_IRQHandler(void)
{   CAN0_DriverIRQHandler();
}

WEAK void Reserved99_IRQHandler(void)
{   Reserved99_DriverIRQHandler();
}

WEAK void Reserved100_IRQHandler(void)
{   Reserved100_DriverIRQHandler();
}

WEAK void CAN1_ORed_Message_buffer_IRQHandler(void)
{   CAN1_DriverIRQHandler();
}

WEAK void CAN1_Error_IRQHandler(void)
{   CAN1_DriverIRQHandler();
}

WEAK void Reserved103_IRQHandler(void)
{   Reserved103_DriverIRQHandler();
}

WEAK void CAN1_ORed_0_15_MB_IRQHandler(void)
{   CAN1_DriverIRQHandler();
}

WEAK void CAN1_ORed_16_31_MB_IRQHandler(void)
{   CAN1_DriverIRQHandler();
}

WEAK void Reserved106_IRQHandler(void)
{   Reserved106_DriverIRQHandler();
}

WEAK void Reserved107_IRQHandler(void)
{   Reserved107_DriverIRQHandler();
}

WEAK void CAN2_ORed_Message_buffer_IRQHandler(void)
{   CAN2_DriverIRQHandler();
}

WEAK void CAN2_Error_IRQHandler(void)
{   CAN2_DriverIRQHandler();
}

WEAK void Reserved110_IRQHandler(void)
{   Reserved110_DriverIRQHandler();
}

WEAK void CAN2_ORed_0_15_MB_IRQHandler(void)
{   CAN2_DriverIRQHandler();
}

WEAK void CAN2_ORed_16_31_MB_IRQHandler(void)
{   CAN2_DriverIRQHandler();
}

WEAK void Reserved113_IRQHandler(void)
{   Reserved113_DriverIRQHandler();
}

WEAK void Reserved114_IRQHandler(void)
{   Reserved114_DriverIRQHandler();
}

WEAK void FTM0_Ch0_Ch1_IRQHandler(void)
{   FTM0_Ch0_Ch1_DriverIRQHandler();
}

WEAK void FTM0_Ch2_Ch3_IRQHandler(void)
{   FTM0_Ch2_Ch3_DriverIRQHandler();
}

WEAK void FTM0_Ch4_Ch5_IRQHandler(void)
{   FTM0_Ch4_Ch5_DriverIRQHandler();
}

WEAK void FTM0_Ch6_Ch7_IRQHandler(void)
{   FTM0_Ch6_Ch7_DriverIRQHandler();
}

WEAK void FTM0_Fault_IRQHandler(void)
{   FTM0_Fault_DriverIRQHandler();
}

WEAK void FTM0_Ovf_Reload_IRQHandler(void)
{   FTM0_Ovf_Reload_DriverIRQHandler();
}

WEAK void FTM1_Ch0_Ch1_IRQHandler(void)
{   FTM1_Ch0_Ch1_DriverIRQHandler();
}

WEAK void FTM1_Ch2_Ch3_IRQHandler(void)
{   FTM1_Ch2_Ch3_DriverIRQHandler();
}

WEAK void FTM1_Ch4_Ch5_IRQHandler(void)
{   FTM1_Ch4_Ch5_DriverIRQHandler();
}

WEAK void FTM1_Ch6_Ch7_IRQHandler(void)
{   FTM1_Ch6_Ch7_DriverIRQHandler();
}

WEAK void FTM1_Fault_IRQHandler(void)
{   FTM1_Fault_DriverIRQHandler();
}

WEAK void FTM1_Ovf_Reload_IRQHandler(void)
{   FTM1_Ovf_Reload_DriverIRQHandler();
}

WEAK void FTM2_Ch0_Ch1_IRQHandler(void)
{   FTM2_Ch0_Ch1_DriverIRQHandler();
}

WEAK void FTM2_Ch2_Ch3_IRQHandler(void)
{   FTM2_Ch2_Ch3_DriverIRQHandler();
}

WEAK void FTM2_Ch4_Ch5_IRQHandler(void)
{   FTM2_Ch4_Ch5_DriverIRQHandler();
}

WEAK void FTM2_Ch6_Ch7_IRQHandler(void)
{   FTM2_Ch6_Ch7_DriverIRQHandler();
}

WEAK void FTM2_Fault_IRQHandler(void)
{   FTM2_Fault_DriverIRQHandler();
}

WEAK void FTM2_Ovf_Reload_IRQHandler(void)
{   FTM2_Ovf_Reload_DriverIRQHandler();
}

WEAK void FTM3_Ch0_Ch1_IRQHandler(void)
{   FTM3_Ch0_Ch1_DriverIRQHandler();
}

WEAK void FTM3_Ch2_Ch3_IRQHandler(void)
{   FTM3_Ch2_Ch3_DriverIRQHandler();
}

WEAK void FTM3_Ch4_Ch5_IRQHandler(void)
{   FTM3_Ch4_Ch5_DriverIRQHandler();
}

WEAK void FTM3_Ch6_Ch7_IRQHandler(void)
{   FTM3_Ch6_Ch7_DriverIRQHandler();
}

WEAK void FTM3_Fault_IRQHandler(void)
{   FTM3_Fault_DriverIRQHandler();
}

WEAK void FTM3_Ovf_Reload_IRQHandler(void)
{   FTM3_Ovf_Reload_DriverIRQHandler();
}

WEAK void FTM4_Ch0_Ch1_IRQHandler(void)
{   FTM4_Ch0_Ch1_DriverIRQHandler();
}

WEAK void FTM4_Ch2_Ch3_IRQHandler(void)
{   FTM4_Ch2_Ch3_DriverIRQHandler();
}

WEAK void FTM4_Ch4_Ch5_IRQHandler(void)
{   FTM4_Ch4_Ch5_DriverIRQHandler();
}

WEAK void FTM4_Ch6_Ch7_IRQHandler(void)
{   FTM4_Ch6_Ch7_DriverIRQHandler();
}

WEAK void FTM4_Fault_IRQHandler(void)
{   FTM4_Fault_DriverIRQHandler();
}

WEAK void FTM4_Ovf_Reload_IRQHandler(void)
{   FTM4_Ovf_Reload_DriverIRQHandler();
}

WEAK void FTM5_Ch0_Ch1_IRQHandler(void)
{   FTM5_Ch0_Ch1_DriverIRQHandler();
}

WEAK void FTM5_Ch2_Ch3_IRQHandler(void)
{   FTM5_Ch2_Ch3_DriverIRQHandler();
}

WEAK void FTM5_Ch4_Ch5_IRQHandler(void)
{   FTM5_Ch4_Ch5_DriverIRQHandler();
}

WEAK void FTM5_Ch6_Ch7_IRQHandler(void)
{   FTM5_Ch6_Ch7_DriverIRQHandler();
}

WEAK void FTM5_Fault_IRQHandler(void)
{   FTM5_Fault_DriverIRQHandler();
}

WEAK void FTM5_Ovf_Reload_IRQHandler(void)
{   FTM5_Ovf_Reload_DriverIRQHandler();
}

WEAK void FTM6_Ch0_Ch1_IRQHandler(void)
{   FTM6_Ch0_Ch1_DriverIRQHandler();
}

WEAK void FTM6_Ch2_Ch3_IRQHandler(void)
{   FTM6_Ch2_Ch3_DriverIRQHandler();
}

WEAK void FTM6_Ch4_Ch5_IRQHandler(void)
{   FTM6_Ch4_Ch5_DriverIRQHandler();
}

WEAK void FTM6_Ch6_Ch7_IRQHandler(void)
{   FTM6_Ch6_Ch7_DriverIRQHandler();
}

WEAK void FTM6_Fault_IRQHandler(void)
{   FTM6_Fault_DriverIRQHandler();
}

WEAK void FTM6_Ovf_Reload_IRQHandler(void)
{   FTM6_Ovf_Reload_DriverIRQHandler();
}

WEAK void FTM7_Ch0_Ch1_IRQHandler(void)
{   FTM7_Ch0_Ch1_DriverIRQHandler();
}

WEAK void FTM7_Ch2_Ch3_IRQHandler(void)
{   FTM7_Ch2_Ch3_DriverIRQHandler();
}

WEAK void FTM7_Ch4_Ch5_IRQHandler(void)
{   FTM7_Ch4_Ch5_DriverIRQHandler();
}

WEAK void FTM7_Ch6_Ch7_IRQHandler(void)
{   FTM7_Ch6_Ch7_DriverIRQHandler();
}

WEAK void FTM7_Fault_IRQHandler(void)
{   FTM7_Fault_DriverIRQHandler();
}

WEAK void FTM7_Ovf_Reload_IRQHandler(void)
{   FTM7_Ovf_Reload_DriverIRQHandler();
}

//*****************************************************************************

#if defined (DEBUG)
#pragma GCC pop_options
#endif // (DEBUG)
