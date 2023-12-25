/*
 * Led_Cfg.h
 *
 *  Created on: Dec 16, 2023
 *      Author: hp
 */

#ifndef HAL_LED_LED_CFG_H_
#define HAL_LED_LED_CFG_H_

#include "C:\ITI\Workspace\Drivers\Comm\Std_Types.h"

/* Set the led ON/OFF according to its configuration Positive logic or negative logic */
#define LED_ON  STD_HIGH
#define LED_OFF STD_LOW

/* Set the LED Port */
#define LED_PORT DioConf_LED_PORT_NUM

/* Set the LED Pin Number */
#define LED_PIN_NUM DioConf_LED_CHANNEL_NUM

#endif /* HAL_LED_LED_CFG_H_ */
