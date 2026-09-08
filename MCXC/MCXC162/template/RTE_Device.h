/*
 * Copyright 2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _RTE_DEVICE_H
#define _RTE_DEVICE_H

#include "pin_mux.h"

/* USART Select, LPUART0 - LPUART3. */
/* User needs to provide the implementation of LPUARTX_GetFreq/LPUARTX_InitPins/LPUARTX_DeinitPins for the enabled
 * LPUART instance. */
#define RTE_USART0        0
#define RTE_USART0_DMA_EN 0
#define RTE_USART1        0
#define RTE_USART1_DMA_EN 0
#define RTE_USART2        0
#define RTE_USART2_DMA_EN 0
#define RTE_USART3        0
#define RTE_USART3_DMA_EN 0

/* USART configuration. */
#define USART_RX_BUFFER_LEN     64
#define USART0_RX_BUFFER_ENABLE 0
#define USART1_RX_BUFFER_ENABLE 0
#define USART2_RX_BUFFER_ENABLE 0
#define USART3_RX_BUFFER_ENABLE 0

#define RTE_USART0_PIN_INIT        LPUART0_InitPins
#define RTE_USART0_PIN_DEINIT      LPUART0_DeinitPins
#define RTE_USART0_DMA_TX_CH       1
#define RTE_USART0_DMA_TX_DMA_BASE DMA0
#define RTE_USART0_DMA_RX_CH       0
#define RTE_USART0_DMA_RX_DMA_BASE DMA0

#define RTE_USART1_PIN_INIT        LPUART1_InitPins
#define RTE_USART1_PIN_DEINIT      LPUART1_DeinitPins
#define RTE_USART1_DMA_TX_CH       3
#define RTE_USART1_DMA_TX_DMA_BASE DMA0
#define RTE_USART1_DMA_RX_CH       2
#define RTE_USART1_DMA_RX_DMA_BASE DMA0

#define RTE_USART2_PIN_INIT        LPUART2_InitPins
#define RTE_USART2_PIN_DEINIT      LPUART2_DeinitPins
#define RTE_USART2_DMA_TX_CH       5
#define RTE_USART2_DMA_TX_DMA_BASE DMA0
#define RTE_USART2_DMA_RX_CH       4
#define RTE_USART2_DMA_RX_DMA_BASE DMA0

#define RTE_USART3_PIN_INIT        LPUART3_InitPins
#define RTE_USART3_PIN_DEINIT      LPUART3_DeinitPins
#define RTE_USART3_DMA_TX_CH       7
#define RTE_USART3_DMA_TX_DMA_BASE DMA0
#define RTE_USART3_DMA_RX_CH       6
#define RTE_USART3_DMA_RX_DMA_BASE DMA0

/* I2C Select, LPI2C0 */
/* User needs to provide the implementation of LPI2CX_GetFreq/LPI2CX_InitPins/LPI2CX_DeinitPins for the enabled
 * LPI2C instance. */
#define RTE_I2C0        0
#define RTE_I2C0_DMA_EN 0

/* I2C configuration */
#define RTE_I2C0_PIN_INIT        LPI2C0_InitPins
#define RTE_I2C0_PIN_DEINIT      LPI2C0_DeinitPins
#define RTE_I2C0_Master_DMA_BASE DMA0
#define RTE_I2C0_Master_DMA_CH   0

/* SPI select, LPSPI0.*/
/* User needs to provide the implementation of LPSPIX_GetFreq/LPSPIX_InitPins/LPSPIX_DeinitPins for the enabled
 * LPSPI instance. */
#define RTE_SPI0        0
#define RTE_SPI0_DMA_EN 0

/* SPI configuration. */
#define RTE_SPI0_PIN_INIT        LPSPI0_InitPins
#define RTE_SPI0_PIN_DEINIT      LPSPI0_DeinitPins
#define RTE_SPI0_DMA_TX_CH       1
#define RTE_SPI0_DMA_TX_DMA_BASE DMA0
#define RTE_SPI0_DMA_RX_CH       0
#define RTE_SPI0_DMA_RX_DMA_BASE DMA0

#endif /* _RTE_DEVICE_H */
