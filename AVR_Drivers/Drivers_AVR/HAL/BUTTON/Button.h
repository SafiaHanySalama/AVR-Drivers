/*
 * Button.h
 *
 *  Created on: Dec 16, 2023
 *      Author: hp
 */

#ifndef HAL_BUTTON_BUTTON_H_
#define HAL_BUTTON_BUTTON_H_

void BUTTON_Init();

/* Description: Read the Button state Pressed/NOT Pressed */
uint8 BUTTON_getState(void);


#endif /* HAL_BUTTON_BUTTON_H_ */
