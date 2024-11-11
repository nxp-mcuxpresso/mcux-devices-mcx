/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _FSL_AON_GPIO_H_
#define _FSL_AON_GPIO_H_

#include "fsl_common.h"
#include "fsl_aon_common.h"

/*!
 * @addtogroup aon_gpio
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @name Driver version */
/*! @{ */
/*! @brief AON GPIO driver version. */
#define FSL_AON_GPIO_DRIVER_VERSION (MAKE_VERSION(2, 0, 0))
/*! @} */

/*! @brief AON GPIO version information. */
typedef struct _aon_gpio_version_info
{
    uint16_t feature; /*!< Feature Specification Number. */
    uint8_t minor;    /*!< Minor Version Number. */
    uint8_t major;    /*!< Major Version Number. */
} aon_gpio_version_info_t;
/*! @brief Configures the interrupt generation condition. */
typedef enum _aon_gpio_interrupt_config
{
    kAON_GPIO_InterruptStatusFlagDisabled   = 0x0U,  /*!< Interrupt status flag is disabled. */
    kAON_GPIO_DMARisingEdge                 = 0x1U,  /*!< ISF flag and DMA request on rising edge. */
    kAON_GPIO_DMAFallingEdge                = 0x2U,  /*!< ISF flag and DMA request on falling edge. */
    kAON_GPIO_DMAEitherEdge                 = 0x3U,  /*!< ISF flag and DMA request on either edge. */
    kAON_GPIO_FlagRisingEdge                = 0x05U, /*!< Flag sets on rising edge. */
    kAON_GPIO_FlagFallingEdge               = 0x06U, /*!< Flag sets on falling edge. */
    kAON_GPIO_FlagEitherEdge                = 0x07U, /*!< Flag sets on either edge. */
    kAON_GPIO_InterruptLogicZero            = 0x8U,  /*!< Interrupt when logic zero. */
    kAON_GPIO_InterruptRisingEdge           = 0x9U,  /*!< Interrupt on rising edge. */
    kAON_GPIO_InterruptFallingEdge          = 0xAU,  /*!< Interrupt on falling edge. */
    kAON_GPIO_InterruptEitherEdge           = 0xBU,  /*!< Interrupt on either edge. */
    kAON_GPIO_InterruptLogicOne             = 0xCU,  /*!< Interrupt when logic one. */
    kAON_GPIO_ActiveHighTriggerOutputEnable = 0xDU,  /*!< Enable active high-trigger output. */
    kAON_GPIO_ActiveLowTriggerOutputEnable  = 0xEU,  /*!< Enable active low-trigger output. */
} aon_gpio_interrupt_config_t;

/*! @brief GPIO direction definition */
typedef enum _aon_gpio_pin_direction
{
    kAON_GPIO_DigitalInput  = 0U, /*!< Set current pin as digital input*/
    kAON_GPIO_DigitalOutput = 1U, /*!< Set current pin as digital output*/
} aon_gpio_pin_direction_t;

/*! @brief Configures the selection of interrupt request/trigger. */
typedef enum _aon_gpio_interrupt_selection
{
    kAON_GPIO_Interruptnone = 0x0U, /*!< No interrupt request/trigger selected. */
    kAON_GPIO_InterruptA    = 0x1U, /*!< InterruptA request/trigger selected.  */
    kAON_GPIO_InterruptB    = 0x2U, /*!< InterruptB request/trigger selected.  */
} aon_gpio_interrupt_selection_t;

/*! @} */

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @addtogroup aon_gpio_driver
 * @{
 */

/*! @name AON GPIO Configuration */
/*! @{ */

/**
 * @brief Config GPIO pin
 *
 * Initializes AON GPIO and configures pins, including interrupt, direction,
 * initial logic level, and associates AON GPIO interrupt with IPMQ interrupt.
 *
 * @param[in] pin GPIO pin number
 * @param[in] dir GPIO pin direction
 * @param[in] val GPIO pin output logic level (0 or 1)
 * @param[in] id GPIO pin interrupt id.
 * @param[in] int_cfg gpio interrupt config
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 *
 * @retval kStatus_Fail     Fail to init gpio.
 */
status_t AON_GPIO_PinConfig(uint8_t pin,
                        aon_gpio_pin_direction_t dir,
                        uint8_t val,
                        aon_gpio_interrupt_selection_t id,
                        aon_gpio_interrupt_config_t int_cfg,
                        uint8_t userData);

/**
 * @brief Set GPIO pin output logic level
 *
 * @param[in] pin GPIO pin number (0-8)
 * @param[in] val GPIO pin output logic level (0 or 1)
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * @retval kStatus_Fail     Fail to set GPIO pin output logic level
 */
status_t AON_GPIO_PinWrite(uint8_t pin, uint8_t val, uint8_t userData);

/**
 * @brief Read value of GPIO pin
 *
 * @param[in] pin GPIO pin number (0-8)
 * @param[out] val GPIO pin input logic level (0 or 1)
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * @retval kStatus_Fail     Fail to read value of GPIO pin
 */
status_t AON_GPIO_PinRead(uint8_t pin, uint32_t *val_ptr, uint8_t userData);

/**
 * @brief Deinitializes AON GPIO.
 *
 * Disable IPMQ and GPIO related interrupts and GPIO clock.
 *
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * @retval kStatus_Fail     Fail to deinitialize AON GPIO
 */
status_t AON_GPIO_Deinit(uint8_t userData);

/*!
 * @brief Get AON GPIO version information.
 *
 * @param[out] info AON GPIO version information
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * @retval kStatus_Fail     Fail to read value of GPIO version information
 */
status_t AON_GPIO_GetVersionInfo(aon_gpio_version_info_t *info, uint8_t userData);

/*!
 * @brief Read the AON GPIO interrupt status flags.
 *
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * @param[out] flags The current GPIO's interrupt status flag.
 *                   '1' means the related pin's flag is set, '0' means the related pin's flag not set.
 *                    For example, the return value 0x00010001 means the pin 0 and 17 have the interrupt pending.
 * @retval kStatus_Fail     Fail to read value of GPIO interrupt flags
 */
status_t AON_GPIO_GpioGetInterruptFlags(uint32_t *flags, uint8_t userData);

/*!
 * @brief Clears GPIO pin interrupt status flags.
 *
 * @param[in] mask GPIO pin number macro
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * @retval kStatus_Fail     Fail to clear interrupt flags
 */
status_t AON_GPIO_GpioClearInterruptFlags(uint32_t mask, uint8_t userData);

/*!
 * @brief Read individual pin's interrupt status flag.
 *
 * @param[in] pin GPIO specific pin number.
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * @param[out] flag The current selected pin's interrupt status flag.
 * @retval kStatus_Fail     Fail to read value of GPIO interrupt flag
 */
status_t AON_GPIO_PinGetInterruptFlag(uint32_t pin, uint8_t *flag, uint8_t userData);

/*!
 * @brief Clear GPIO individual pin's interrupt status flag.
 *
 * @param[in] pin GPIO specific pin number.
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * @retval kStatus_Fail     Fail to clear interrupt flag
 */
status_t AON_GPIO_PinClearInterruptFlag(uint32_t pin, uint8_t userData);

/*!
 * @brief Reverses the current output logic of the multiple AON GPIO pins.
 *
 * @param[in] mask GPIO pin number macro
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * @retval kStatus_Fail     Fail to toggle GPIO pins
 */
static inline status_t AON_GPIO_PortToggle(uint32_t mask, uint8_t userData)
{
    status_t ret;

    ret = Aon_RegSetBits((uint32_t)(&(GPIO2->PTOR)), mask, userData);

    if(ret == kStatus_AonCommon_RegReadModifyWriteSuccess)
    {
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}

/*!
 * @brief Sets the output level of the multiple AON GPIO pins to the logic 0.
 *
 * @param[in] mask GPIO pin number macro
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * @retval kStatus_Fail     Fail to clear GPIO pin
 */
static inline status_t AON_GPIO_PortClear(uint32_t mask, uint8_t userData)
{
    status_t ret;

    ret = Aon_RegSetBits((uint32_t)(&(GPIO2->PCOR)), mask, userData);

    if(ret == kStatus_AonCommon_RegReadModifyWriteSuccess)
    {
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}

/*!
 * @brief Enable port input.
 *
 * @param[in] mask GPIO pin number macro
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * @retval kStatus_Fail     Fail to enable port input
 */
static inline status_t AON_GPIO_PortInputEnable(uint32_t mask, uint8_t userData)
{
    status_t ret;

    ret = Aon_RegSetBits((uint32_t)(&(GPIO2->PIDR)), mask, userData);

    if(ret == kStatus_AonCommon_RegReadModifyWriteSuccess)
    {
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}

/*!
 * @brief Disable port input.
 *
 * @param[in] mask GPIO pin number macro
 * @param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * @retval kStatus_Fail     Fail to disable port input
 */
static inline status_t AON_GPIO_PortInputDisable(uint32_t mask, uint8_t userData)
{
    status_t ret;

    ret = Aon_RegClearBits((uint32_t)(&(GPIO2->PIDR)), mask, userData);

    if(ret == kStatus_AonCommon_RegReadModifyWriteSuccess)
    {
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}

/*!
 * @brief Configures the gpio pin interrupt/DMA request.
 *
 * @param base    GPIO peripheral base pointer.
 * @param pin     GPIO pin number.
 * @param config  GPIO pin interrupt configuration @aon_gpio_interrupt_config_t.
 */
static inline status_t AON_GPIO_SetPinInterruptConfig(uint32_t pin, aon_gpio_interrupt_config_t config, uint8_t userData)
{
    status_t ret;

    ret = Aon_RegReadModifyWrite((uint32_t)(&(GPIO2->ICR[pin])), 0, 
                                 GPIO_ICR_IRQC_MASK, GPIO_ICR_IRQC(config), userData);

    if(ret == kStatus_AonCommon_RegReadModifyWriteSuccess)
    {
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */

#endif /* _FSL_AON_GPIO_H_*/
