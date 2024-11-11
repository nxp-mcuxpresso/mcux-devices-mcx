/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_aon_gpio.h"
#include "fsl_ipmq.h"
#include "fsl_aon_common.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.aon_gpio"
#endif

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
/* gpio init message */
typedef struct
{
    uint8_t pin_num;
    uint8_t dir;            /*!< aon_gpio_pin_direction_t */
    uint8_t val;
    uint8_t interrupt_id;   /*!< aon_gpio_interrupt_selection_t */
    uint32_t interrupt_cfg; /*!< aon_gpio_interrupt_config_t */
} aon_gpio_msg_init;

/* gpio set message */
typedef struct
{
    uint8_t pin_num;
    uint8_t val;
    uint8_t reserved[2];
} aon_gpio_msg_set;

/* gpio get message */
typedef struct
{
    uint8_t pin_num;
    uint8_t reserved[3];
} aon_gpio_msg_get;

/*******************************************************************************
 * Code
 ******************************************************************************/

/**
 * brief Config GPIO pin
 *
 * Initializes AON GPIO and configures pins, including interrupt, direction,
 * initial logic level, and associates AON GPIO interrupt with IPMQ interrupt.
 *
 * param[in] pin GPIO pin number.
 * param[in] dir GPIO pin direction.
 * param[in] val GPIO pin output logic level (0 or 1)
 * param[in] id GPIO pin interrupt id.
 * param[in] int_cfg gpio interrupt config.
 * retval kStatus_Fail     Fail to init gpio.
 */
status_t AON_GPIO_PinConfig(uint8_t pin,
                        aon_gpio_pin_direction_t dir,
                        uint8_t val,
                        aon_gpio_interrupt_selection_t id,
                        aon_gpio_interrupt_config_t int_cfg,
                        uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;
    aon_gpio_msg_init msg;

    msg.pin_num       = pin;
    msg.dir           = (uint8_t)dir;
    msg.val           = val;
    msg.interrupt_id  = (uint8_t)id;
    msg.interrupt_cfg = (uint32_t)int_cfg;
    
    switch(id)
    {
        case kAON_GPIO_Interruptnone:
            break;
        case kAON_GPIO_InterruptA:
            IPMQ_EnableMsgGeneralPurposeInterrupts(kMU_GeneralPurposeInterrupt11);
            break;
        case kAON_GPIO_InterruptB:
            IPMQ_EnableMsgGeneralPurposeInterrupts(kMU_GeneralPurposeInterrupt12);
            break;
        default:
            assert(false);
            break;
    }

    ret = IPMQ_Send1PayloadMsgThenRcv(kIPMQ_MsgOpcode_GpioInit, 2U, (uint32_t *)&msg, NULL, 0U, userData);

    if (ret == kIPMQ_Ret_ReceiveAck)
    {
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}

/**
 * brief Set GPIO pin output logic level
 *
 * param[in] pin GPIO pin number (0-8)
 * param[in] val GPIO pin output logic level (0 or 1)
 * retval kStatus_Fail     Fail to set GPIO pin output logic level
 */
status_t AON_GPIO_PinWrite(uint8_t pin, uint8_t val, uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;
    
    aon_gpio_msg_set msg;
    msg.pin_num = pin;
    msg.val     = val;

    ret = IPMQ_Send1PayloadMsgThenRcv(kIPMQ_MsgOpcode_GpioSet, 1U, (uint32_t *)&msg, NULL, 0U, userData);

    if (ret == kIPMQ_Ret_ReceiveAck)
    {
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}

/**
 * brief Read value of GPIO pin
 *
 * param[in] pin GPIO pin number
 * param[out] val GPIO pin input logic level (0 or 1)
 * retval kStatus_Fail     Fail to read value of GPIO pin
 */
status_t AON_GPIO_PinRead(uint8_t pin, uint32_t *val_ptr, uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;
    uint8_t messagePayloadSize;
    uint64_t gpioVal;
    aon_gpio_msg_get msg;
    msg.pin_num = pin;

    ret = IPMQ_Send1PayloadMsgThenRcv(kIPMQ_MsgOpcode_GpioGet, 1U, (uint32_t *)&msg, 
                                      (uint32_t *)&gpioVal, &messagePayloadSize, userData);

    if (ret == kIPMQ_Ret_ReceiveAck)
    {
        *val_ptr = gpioVal;
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}

/**
 * brief Deinitializes AON GPIO.
 *
 * Disable IPMQ and GPIO related interrupts and GPIO clock.
 *
 * param[in] pin GPIO pin number.
 * retval kStatus_Fail     Fail to deinitialize AON GPIO
 */
status_t AON_GPIO_Deinit(uint8_t userData)
{
    status_t ret;

    /* Disable AON GPIO related IPMQ interrupt. */
    IPMQ_DisableMsgGeneralPurposeInterrupts(kMU_GeneralPurposeInterrupt11);
    IPMQ_DisableMsgGeneralPurposeInterrupts(kMU_GeneralPurposeInterrupt12);
    
    /* Disable gpio clock */
    ret = Aon_RegReadModifyWrite((uint32_t)(&(AON_CGU->PER_CLK_EN)), CGU_PER_CLK_EN_GPIO_CLK_EN_SHIFT, 1U, 0U, userData);

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
 * brief Get AON GPIO version information.
 *
 * param[out] info AON GPIO version information
 * param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * retval kStatus_Fail     Fail to read value of GPIO version information
 */
status_t AON_GPIO_GetVersionInfo(aon_gpio_version_info_t *info, uint8_t userData)
{
    uint32_t verid;
    status_t ret;

    ret = Aon_RegRead((uint32_t)(&(GPIO2->VERID)), &verid, userData);

    if(ret == kStatus_AonCommon_RegReadSuccess)
    {
        info->feature = (uint16_t)verid;
        info->minor   = (uint8_t)(verid >> GPIO_VERID_MINOR_SHIFT);
        info->major   = (uint8_t)(verid >> GPIO_VERID_MAJOR_SHIFT);
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}


/*!
 * brief Read the AON GPIO interrupt status flags.
 *
 * param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * param[out] flags The current GPIO's interrupt status flag.
 *                 '1' means the related pin's flag is set, '0' means the related pin's flag not set.
 *                  For example, the return value 0x00010001 means the pin 0 and 17 have the interrupt pending.
 * retval kStatus_Fail     Fail to read value of GPIO interrupt flags
 */
status_t AON_GPIO_GpioGetInterruptFlags(uint32_t *flags, uint8_t userData)
{
    status_t ret;
    uint32_t isfr;

    ret = Aon_RegRead((uint32_t)(&(GPIO2->ISFR[1])), &isfr, userData);

    if(ret == kStatus_AonCommon_RegReadSuccess)
    {
        *flags = isfr;
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}

/*!
 * brief Clears GPIO pin interrupt status flags.
 *
 * param[in] mask GPIO pin number macro
 * param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * retval kStatus_Fail     Fail to clear interrupt flags
 */
status_t AON_GPIO_GpioClearInterruptFlags(uint32_t mask, uint8_t userData)
{
    status_t ret;

    ret = Aon_RegClearBits((uint32_t)(&(GPIO2->ISFR[0])), mask, userData);

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
 * brief Read individual pin's interrupt status flag.
 *
 * param[in] pin GPIO specific pin number.
 * param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * param[out] flag The current selected pin's interrupt status flag.
 * retval kStatus_Fail     Fail to read value of GPIO interrupt flag
 */
status_t AON_GPIO_PinGetInterruptFlag(uint32_t pin, uint8_t *flag, uint8_t userData)
{
    status_t ret;
    uint32_t icr;

    ret = Aon_RegRead((uint32_t)(&(GPIO2->ICR[pin])), &icr, userData);

    if(ret == kStatus_AonCommon_RegReadSuccess)
    {
        *flag = (uint8_t)((icr & GPIO_ICR_ISF_MASK) >> GPIO_ICR_ISF_SHIFT);
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}

/*!
 * brief Clear GPIO individual pin's interrupt status flag.
 *
 * param[in] pin GPIO specific pin number.
 * param[in] userData User data send with the message, return with the ACK/NACK feedback, can be used by application.
 * retval kStatus_Fail     Fail to clear interrupt flag
 */
status_t AON_GPIO_PinClearInterruptFlag(uint32_t pin, uint8_t userData)
{
    status_t ret;

    ret = (Aon_RegSetBits((uint32_t)(&(GPIO2->ICR[pin])), GPIO_ICR_ISF(1U), userData));

    if(ret == kStatus_AonCommon_RegReadModifyWriteSuccess)
    {
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }

}
