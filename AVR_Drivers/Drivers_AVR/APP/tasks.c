/*
 * tasks.c
 *
 *  Created on: Dec 14, 2023
 *      Author: hp
 */
#include "tasks.h"
#include "../HAL/SSD/SSD.h"
#include "../HAL/LED/Led.h"
#include "../HAL/BUTTON/Button.h"

/* Task Called Once to initialize all the Modules */
void Init_Task1(void)
{
	LED_Init();
	BUTTON_Init();
}

void Init_Task2(void)
{
	SSD_Init();

}

void blinking_task()
{

	static uint8 button_previous_state = BUTTON_RELEASED;
	static uint8 button_current_state  = BUTTON_RELEASED;
	uint8 led_current_state;

	led_current_state = LED_getState(); //Read the Led state
	button_current_state = BUTTON_getState(); //Read the button state

		/* Only Toggle the led in case the current state of the switch is pressed
		 * and the previous state is released */
	if((button_current_state == BUTTON_PRESSED) && (button_previous_state == BUTTON_RELEASED))
	{
		if (led_current_state == LED_ON)
			LED_setOff();
		else
			LED_setOn();
	}
	/*	else if ((button_current_state == BUTTON_RELEASED) && (button_previous_state = BUTTON_PRESSED))
		{
			LED_toggle();
		}*/
	button_previous_state = button_current_state;
}
void ss_task1()
{
	SSD_displayValue(5);
}
void ss_task2()
{
	static uint8 button_previous_state = BUTTON_RELEASED;
		static uint8 button_current_state  = BUTTON_RELEASED;
		uint8 led_current_state;

		button_current_state = BUTTON_getState(); //Read the button state
		static uint8 tick=0;

			/* Only Toggle the led in case the current state of the switch is pressed
			 * and the previous state is released */
		if((button_current_state == BUTTON_PRESSED) && (button_previous_state == BUTTON_RELEASED))
		{
			tick++;
		}
		if (tick>9) tick=0;
		SSD_displayValue(tick);
		button_previous_state = button_current_state;
}
