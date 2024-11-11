/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef _FSL_RTC_H
#define _FSL_RTC_H

#include "fsl_common.h"

/*!
 * @addtogroup rtc
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/*! @name Driver version */
/*@{*/
/*! @brief RTC driver version 2.0.0 */
#define FSL_RTC_DRIVER_VERSION (MAKE_VERSION(2, 0, 0))
/*@}*/

/*! @brief RTC alarm ID */
typedef enum _rtc_alarm_id
{
    kRTC_Alarm_0 = 0U,      /*!< RTC alartm 0 */
    kRTC_Alarm_1,           /*!< RTC alartm 1 */
} rtc_alarm_id_t;

/*! @brief RTC get counter message */
typedef struct _rtc_get_counter_msg
{
    uint64_t counter;       /*!< RTC 40 bit counter */
} rtc_get_counter_msg_t;

/*! @brief RTC set alarm configuration message */
typedef struct _rtc_set_alarm_msg
{
    uint64_t time;          /*!< RTC 40 bit counter */
    uint8_t repeat;         /*!< 1 repeat, 0 single */
    uint8_t alarmID;        /*!< 0: RTC alartm 0
                                 1: RTC alartm 1
                                 @ref rtc_alarm_id_t */
    uint8_t alarmInterrupt; /*!< 1: Trigger interrupt when RTC alarm.
                                 0: No interrupt when RTC alarm, may used when alarm is wakeup source. */
    uint8_t reserved;       /*!< Reserved value */
} rtc_set_alarm_msg_t;

/*! @brief RTC clear alarm message */
typedef struct _rtc_clear_alarm_msg
{
    uint32_t alarmID;       /*!< 0: RTC alartm 0
                                 1: RTC alartm 1
                                 @ref rtc_alarm_id_t */
} rtc_clear_alarm_msg_t;

#define RTC_ALARM0_INT (kMU_GeneralPurposeInterrupt3)   /*!< RTC alartm 0 interrupt mask macro. */
#define RTC_ALARM1_INT (kMU_GeneralPurposeInterrupt4)   /*!< RTC alartm 1 interrupt mask macro. */

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * API
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Get RTC counter.
 *
 * @param[out] ptrCounter Output the value of 40 bits RTC counter, time base is 100Hz clock.
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 *                     application to match feedback to the message.
 *
 * @retval kStatus_Success  Successfully read 40 bits RTC counter value.
 * @retval kStatus_Fail     Fail to read 40 bits RTC counter value.
 */
status_t RTC_GetCounter(uint64_t *ptrCounter, uint8_t userData);

/*!
 * @brief Set RTC alarm.
 *
 * @param[in] alarmID RTC alarm ID, @ref rtc_alarm_id_t.
 * @param[in] time Time(40bits) in RTC when alarm will trigger, time base is 100Hz clock.
 * @param[in] triggerInterrupt Trigger RTC alarm interrupt or not.
 *                             - true: Trigger RTC alarm interrupt.
 *                             - false: No interrupt when RTC alarm, may used when alarm is wakeup source.
 * @param[in] repeat RTC alarm is repeat or single shot.
 *                   - true: Enable repeat alarm, only 20bits can be written to alarm in this case.
 *                           @param time is alarm interval.
 *                   - false: Enable single shot alarm. @param time is absolute alarm point.
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 *                     application to match feedback to the message.
 *
 * @retval kStatus_Success  Successfully set RTC alarm.
 * @retval kStatus_Fail     Fail to set RTC alarm.
 */
status_t RTC_SetAlarm(rtc_alarm_id_t alarmID, uint64_t time, bool triggerInterrupt, bool repeat, uint8_t userData);

/*!
 * @brief Clear RTC alarm.
 *
 * @param[in] alarmID RTC alarm ID, @ref rtc_alarm_id_t.
 * @param[in] userData User data sent with the message, returned with the ACK/NACK feedback. Can be used by the
 *                     application to match feedback to the message.
 *
 * @retval kStatus_Success  Successfully clear RTC alarm.
 * @retval kStatus_Fail     Fail to clear RTC alarm.
 */
status_t RTC_ClearAlarm(rtc_alarm_id_t alarmID, uint8_t userData);

#if defined(__cplusplus)
}
#endif

/*! @} */

#endif /* _FSL_RTC_H */
