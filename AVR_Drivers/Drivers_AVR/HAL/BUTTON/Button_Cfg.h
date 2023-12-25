/*
 * Button_Cfg.h
 *
 *  Created on: Dec 16, 2023
 *      Author: hp
 */

#ifndef HAL_BUTTON_BUTTON_CFG_H_
#define HAL_BUTTON_BUTTON_CFG_H_

#include "C:\ITI\Workspace\Drivers\Comm\Std_Types.h"

/* Button State according to its configuration PULL UP/Down */
#define BUTTON_PRESSED  STD_HIGH
#define BUTTON_RELEASED STD_LOW

/* Set the Button Port */
#define BUTTON_PORT DioConf_BUTTON_PORT_NUM

/* Set the Button Pin Number */
#define BUTTON_PIN_NUM DioConf_BUTTON_CHANNEL_NUM


#endif /* HAL_BUTTON_BUTTON_CFG_H_ */
