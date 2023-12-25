/*
 * Led.h
 *
 *  Created on: Dec 16, 2023
 *      Author: hp
 */

#ifndef HAL_LED_LED_H_
#define HAL_LED_LED_H_

void LED_Init();

/* Description: Set the LED state to ON */
void LED_setOn(void);

/* Description: Set the LED state to OFF */
void LED_setOff(void);

/*Description: Toggle the LED state */
void LED_toggle(void);

uint8 LED_getState(void);

#endif /* HAL_LED_LED_H_ */
