/*
 * Copyright 2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _RTE_DEVICE_H
#define _RTE_DEVICE_H

#include "pin_mux.h"

/* USART Select. */
/* Select LPUART0. */
/* User needs to provide the implementation of LPUARTX_GetFreq/LPUARTX_InitPins/LPUARTX_DeinitPins for the enabled
 * LPUART instance. */
#define RTE_USART0        0
#define RTE_USART0_DMA_EN 0

/* UART configuration. */
#define USART_RX_BUFFER_LEN     64
#define USART0_RX_BUFFER_ENABLE 0

#define RTE_USART0_PIN_INIT           LPUART0_InitPins
#define RTE_USART0_PIN_DEINIT         LPUART0_DeinitPins
#define RTE_USART0_DMA_TX_CH          0
#define RTE_USART0_DMA_TX_PERI_SEL    (uint8_t) kDmaRequestMux0LPUART0Tx
#define RTE_USART0_DMA_TX_DMAMUX_BASE DMAMUX0
#define RTE_USART0_DMA_TX_DMA_BASE    DMA0
#define RTE_USART0_DMA_RX_CH          1
#define RTE_USART0_DMA_RX_PERI_SEL    (uint8_t) kDmaRequestMux0LPUART0Rx
#define RTE_USART0_DMA_RX_DMAMUX_BASE DMAMUX0
#define RTE_USART0_DMA_RX_DMA_BASE    DMA0

/* I2C Select, I2C0. */
/* User needs to provide the implementation of I2CX_GetFreq/I2CX_InitPins/I2CX_DeinitPins for the enabled I2C
 * instance. */
#define RTE_I2C0        0
#define RTE_I2C0_DMA_EN 0

/* I2C configuration. */
#define RTE_I2C0_PIN_INIT           I2C0_InitPins
#define RTE_I2C0_PIN_DEINIT         I2C0_DeinitPins
#define RTE_I2C0_DMA_TX_CH          1
#define RTE_I2C0_DMA_TX_PERI_SEL    (uint8_t) kDmaRequestMux0I2C0
#define RTE_I2C0_DMA_TX_DMAMUX_BASE DMAMUX0
#define RTE_I2C0_DMA_TX_DMA_BASE    DMA0
#define RTE_I2C0_DMA_RX_CH          0
#define RTE_I2C0_DMA_RX_PERI_SEL    (uint8_t) kDmaRequestMux0I2C0
#define RTE_I2C0_DMA_RX_DMAMUX_BASE DMAMUX0
#define RTE_I2C0_DMA_RX_DMA_BASE    DMA0

/* SPI Select, SPI0. */
/* User needs to provide the implementation of SPIX_GetFreq/SPIX_InitPins/SPIX_DeinitPins for the enabled SPI
 * instance. */
#define RTE_SPI0        0
#define RTE_SPI0_DMA_EN 0

/* SPI configuration. */
#define RTE_SPI0_PIN_INIT               SPI0_InitPins
#define RTE_SPI0_PIN_DEINIT             SPI0_DeinitPins
#define RTE_SPI0_DMA_TX_CH              1
#define RTE_SPI0_DMA_TX_PERI_SEL        (uint8_t) kDmaRequestMux0SPI0Tx
#define RTE_SPI0_DMA_TX_DMAMUX_BASE     DMAMUX0
#define RTE_SPI0_DMA_TX_DMA_BASE        DMA0
#define RTE_SPI0_DMA_RX_CH              0
#define RTE_SPI0_DMA_RX_PERI_SEL        (uint8_t) kDmaRequestMux0SPI0Rx
#define RTE_SPI0_DMA_RX_DMAMUX_BASE     DMAMUX0
#define RTE_SPI0_DMA_RX_DMA_BASE        DMA0

#endif /* _RTE_DEVICE_H */
