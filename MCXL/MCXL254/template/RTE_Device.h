/*
 * Copyright 2024-2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

 
#ifndef _RTE_DEVICE_H
#define _RTE_DEVICE_H

#include "pin_mux.h"

/* UART Select, LPUART0-LPUART2. */
/* User needs to provide the implementation of USARTX_GetFreq/USARTX_InitPins/USARTX_DeinitPins for the enabled USART
 * instance. */
#define RTE_USART0        0
#define RTE_USART0_DMA_EN 0
#define RTE_USART1        0
#define RTE_USART1_DMA_EN 0
#define RTE_USART2        0
#define RTE_USART2_DMA_EN 0

/* USART configuration. */
#define USART_RX_BUFFER_LEN     64
#define USART0_RX_BUFFER_ENABLE 0
#define USART1_RX_BUFFER_ENABLE 0
#define USART2_RX_BUFFER_ENABLE 0

#define RTE_USART0_PIN_INIT        LPUART0_InitPins
#define RTE_USART0_PIN_DEINIT      LPUART0_DeinitPins
#define RTE_USART0_DMA_TX_CH       1
#define RTE_USART0_DMA_TX_PERI_SEL (uint16_t) kDma0RequestLPUART0Tx
#define RTE_USART0_DMA_TX_DMA_BASE DMA0
#define RTE_USART0_DMA_RX_CH       0
#define RTE_USART0_DMA_RX_PERI_SEL (uint16_t) kDma0RequestLPUART0Rx
#define RTE_USART0_DMA_RX_DMA_BASE DMA0

#define RTE_USART1_PIN_INIT        LPUART1_InitPins
#define RTE_USART1_PIN_DEINIT      LPUART1_DeinitPins
#define RTE_USART1_DMA_TX_CH       3
#define RTE_USART1_DMA_TX_PERI_SEL (uint16_t) kDma0RequestLPUART1Tx
#define RTE_USART1_DMA_TX_DMA_BASE DMA0
#define RTE_USART1_DMA_RX_CH       2
#define RTE_USART1_DMA_RX_PERI_SEL (uint16_t) kDma0RequestLPUART1Rx
#define RTE_USART1_DMA_RX_DMA_BASE DMA0

#define RTE_USART2_PIN_INIT        AON__LPUART0_InitPins
#define RTE_USART2_PIN_DEINIT      AON__LPUART0_DeinitPins
#define RTE_USART2_DMA_TX_CH       5
#define RTE_USART2_DMA_TX_PERI_SEL (uint16_t) kDma0RequestLPUART3Tx
#define RTE_USART2_DMA_TX_DMA_BASE DMA0
#define RTE_USART2_DMA_RX_CH       4
#define RTE_USART2_DMA_RX_PERI_SEL (uint16_t) kDma0RequestLPUART3Rx
#define RTE_USART2_DMA_RX_DMA_BASE DMA0

/* I2C Select, LPI2C0 - LPI2C2*/
/* User needs to provide the implementation of I2CX_GetFreq/I2CX_InitPins/I2CX_DeinitPins for the enabled I2C instance.
 */
#define RTE_I2C0        0
#define RTE_I2C0_DMA_EN 0
#define RTE_I2C1        0
#define RTE_I2C1_DMA_EN 0
#define RTE_I2C2        0
#define RTE_I2C2_DMA_EN 0

/* LPI2C configuration. */
#define RTE_I2C0_PIN_INIT           LPI2C0_InitPins
#define RTE_I2C0_PIN_DEINIT         LPI2C0_DeinitPins
#define RTE_I2C0_DMA_TX_CH          1
#define RTE_I2C0_DMA_TX_PERI_SEL    (uint8_t) kDma0RequestLPI2C0Tx
#define RTE_I2C0_DMA_TX_DMA_BASE    DMA0
#define RTE_I2C0_DMA_RX_CH          0
#define RTE_I2C0_DMA_RX_PERI_SEL    (uint8_t) kDma0RequestLPI2C0Rx
#define RTE_I2C0_DMA_RX_DMA_BASE    DMA0

#define RTE_I2C1_PIN_INIT           LPI2C1_InitPins
#define RTE_I2C1_PIN_DEINIT         LPI2C1_DeinitPins
#define RTE_I2C1_DMA_TX_CH          3
#define RTE_I2C1_DMA_TX_PERI_SEL    (uint8_t) kDma0RequestLPI2C1Tx
#define RTE_I2C1_DMA_TX_DMA_BASE    DMA0
#define RTE_I2C1_DMA_RX_CH          2
#define RTE_I2C1_DMA_RX_PERI_SEL    (uint8_t) kDma0RequestLPI2C1Rx
#define RTE_I2C1_DMA_RX_DMA_BASE    DMA0

#define RTE_I2C2_PIN_INIT           LPI2C2_InitPins
#define RTE_I2C2_PIN_DEINIT         LPI2C2_DeinitPins
#define RTE_I2C2_DMA_TX_CH          5
#define RTE_I2C2_DMA_TX_PERI_SEL    (uint8_t) kDma0RequestLPI2C2Tx
#define RTE_I2C2_DMA_TX_DMA_BASE    DMA0
#define RTE_I2C2_DMA_RX_CH          4
#define RTE_I2C2_DMA_RX_PERI_SEL    (uint8_t) kDma0RequestLPI2C2Rx
#define RTE_I2C2_DMA_RX_DMA_BASE    DMA0

/* SPI select, LPSPI0 - LPSPI2.*/
/* User needs to provide the implementation of SPIX_GetFreq/SPIX_InitPins/SPIX_DeinitPins for the enabled SPI instance.
 */
#define RTE_SPI0        0
#define RTE_SPI0_DMA_EN 0
#define RTE_SPI1        0
#define RTE_SPI1_DMA_EN 0

/* SPI configuration. */
#define RTE_SPI0_PCS_TO_SCK_DELAY       1000
#define RTE_SPI0_SCK_TO_PSC_DELAY       1000
#define RTE_SPI0_BETWEEN_TRANSFER_DELAY 1000
#define RTE_SPI0_MASTER_PCS_PIN_SEL     (kLPSPI_MasterPcs3)
#define RTE_SPI0_SLAVE_PCS_PIN_SEL      (kLPSPI_SlavePcs3)
#define RTE_SPI0_PIN_INIT               LPSPI0_InitPins
#define RTE_SPI0_PIN_DEINIT             LPSPI0_DeinitPins
#define RTE_SPI0_DMA_TX_CH              1
#define RTE_SPI0_DMA_TX_PERI_SEL        (uint8_t) kDma0RequestLPSPI0Tx
#define RTE_SPI0_DMA_TX_DMA_BASE        DMA0
#define RTE_SPI0_DMA_RX_CH              0
#define RTE_SPI0_DMA_RX_PERI_SEL        (uint8_t) kDma0RequestLPSPI0Rx
#define RTE_SPI0_DMA_RX_DMA_BASE        DMA0

#define RTE_SPI1_PCS_TO_SCK_DELAY       1000
#define RTE_SPI1_SCK_TO_PSC_DELAY       1000
#define RTE_SPI1_BETWEEN_TRANSFER_DELAY 1000
#define RTE_SPI1_MASTER_PCS_PIN_SEL     (kLPSPI_MasterPcs3)
#define RTE_SPI1_SLAVE_PCS_PIN_SEL      (kLPSPI_SlavePcs3)
#define RTE_SPI1_PIN_INIT               LPSPI1_InitPins
#define RTE_SPI1_PIN_DEINIT             LPSPI1_DeinitPins
#define RTE_SPI1_DMA_TX_CH              3
#define RTE_SPI1_DMA_TX_PERI_SEL        (uint8_t) kDma0RequestLPSPI1Tx
#define RTE_SPI1_DMA_TX_DMA_BASE        DMA0
#define RTE_SPI1_DMA_RX_CH              2
#define RTE_SPI1_DMA_RX_PERI_SEL        (uint8_t) kDma0RequestLPSPI1Rx
#define RTE_SPI1_DMA_RX_DMA_BASE        DMA0

#endif /* _RTE_DEVICE_H */
