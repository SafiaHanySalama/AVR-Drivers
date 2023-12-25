/******************************************************************************
 *
 * Module: Led
 *
 * File Name: Led.c
 *
 * Description: Source file for Led Module.
 *
 * Author: Safia
 ******************************************************************************/
#include "C:\ITI\Workspace\Drivers\MCAL\PORT\Port.h"
#include "C:\ITI\Workspace\Drivers\MCAL\DIO\Dio.h"
#include "Led_Cfg.h"

void LED_Init()
{
	Port_Init(&Port_Configuration);
	Dio_Init(&Dio_Configuration);
	LED_setOff();
}

uint8 LED_getState(void)
{
	uint8 state = Dio_ReadChannel(DioConf_LED_CHANNEL_ID_INDEX);
	return state;
}
void LED_setOn(void)
{
	Dio_WriteChannel(DioConf_LED_CHANNEL_ID_INDEX,LED_ON); // LED ON
}
void LED_setOff(void)
{
	Dio_WriteChannel(DioConf_LED_CHANNEL_ID_INDEX,LED_OFF); // LED OFF
}
void LED_toggle(void)
{
	Dio_LevelType state = Dio_FlipChannel(DioConf_LED_CHANNEL_ID_INDEX);
}

