/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_rtc.h"
#include "fsl_ipmq.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.aon_rtc"
#endif

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * brief Get RTC counter.
 *
 * param[out] ptrCounter Output the value of 40 bits RTC counter, time base is 100Hz clock.
 * param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 *                    application to match feedback to the message.
 *
 * retval kStatus_Success  Successfully read 40 bits RTC counter value.
 * retval kStatus_Fail     Fail to read 40 bits RTC counter value.
 */
status_t RTC_GetCounter(uint64_t *ptrCounter, uint8_t userData)
{
    status_t status      = kStatus_Fail;
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;
    uint8_t messagePayloadSize;
    uint64_t rtcCnt;

    rtc_get_counter_msg_t msg = {
        .counter = 0UL,
    };

    ret = IPMQ_Send1PayloadMsgThenRcv(kIPMQ_MsgOpcode_RtcGetCounter,
                                      2U,
                                      (uint32_t *)&msg,
                                      (uint32_t *)&rtcCnt,
                                      &messagePayloadSize,
                                      userData);

    if (messagePayloadSize != 2U)
    {
        status = kStatus_Fail;
    }
    else
    {
        if (ret == kIPMQ_Ret_ReceiveAck)
        {
            *ptrCounter = rtcCnt;
            status = kStatus_Success;
        }
        else
        {
            status = kStatus_Fail;
        }
    }

    return status;
}

/*!
 * brief Set RTC alarm.
 *
 * param[in] alarmID RTC alarm ID, @ref rtc_alarm_id_t.
 * param[in] time Time(40bits) in RTC when alarm will trigger, time base is 100Hz clock.
 * param[in] triggerInterrupt Trigger RTC alarm interrupt or not.
 *                            - true: Trigger RTC alarm interrupt.
 *                            - false: No interrupt when RTC alarm, may used when alarm is wakeup source.
 * param[in] repeat RTC alarm is repeat or single shot.
 *                  - true: Enable repeat alarm, only 20bits can be written to alarm in this case.
 *                          @param time is alarm interval.
 *                  - false: Enable single shot alarm. @param time is absolute alarm point.
 * param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 *                    application to match feedback to the message.
 *
 * retval kStatus_Success  Successfully set RTC alarm.
 * retval kStatus_Fail     Fail to set RTC alarm.
 */
status_t RTC_SetAlarm(rtc_alarm_id_t alarmID, uint64_t time, bool triggerInterrupt, bool repeat, uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    rtc_set_alarm_msg_t msg = {
        .time           = time,
        .repeat         = (uint8_t)repeat,
        .alarmID        = (uint8_t)alarmID,
        .alarmInterrupt = (uint8_t)triggerInterrupt,
        .reserved       = 0U,
    };

    ret = IPMQ_Send1PayloadMsgThenRcv(kIPMQ_MsgOpcode_RtcSetAlarm, 4U, (uint32_t *)&msg, NULL, NULL, userData);

    if (ret == kIPMQ_Ret_ReceiveAck)
    {
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}

/*!
 * brief Clear RTC alarm.
 *
 * param[in] alarmID RTC alarm ID, @ref rtc_alarm_id_t.
 * param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 *                    application to match feedback to the message.
 *
 * retval kStatus_Success  Successfully clear RTC alarm.
 * retval kStatus_Fail     Fail to clear RTC alarm.
 */
status_t RTC_ClearAlarm(rtc_alarm_id_t alarmID, uint8_t userData)
{
    ipmq_ret_value_t ret = kIPMQ_Ret_Error;

    rtc_clear_alarm_msg_t msg = {
        .alarmID = alarmID,
    };

    ret = IPMQ_Send1PayloadMsgThenRcv(kIPMQ_MsgOpcode_RtcClearAlarm, 1U, (uint32_t *)&msg, NULL, NULL, userData);

    if (ret == kIPMQ_Ret_ReceiveAck)
    {
        return kStatus_Success;
    }
    else
    {
        return kStatus_Fail;
    }
}
