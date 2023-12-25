/******************************************************************************
 *
 * Module: Button
 *
 * File Name: Button.c
 *
 * Description: Source file for Led Module.
 *
 * Author: Safia Hany
 ******************************************************************************/
#include "C:\ITI\Workspace\Drivers\MCAL\PORT\Port.h"
#include "C:\ITI\Workspace\Drivers\MCAL\DIO\Dio.h"
#include "Button_Cfg.h"

void BUTTON_Init()
{
	Port_Init(&Port_Configuration);
	Dio_Init(&Dio_Configuration);
	LED_setOff();
}

/*******************************************************************************************************************/
uint8 BUTTON_getState(void)
{
	uint8 state = Dio_ReadChannel(DioConf_BUTTON_CHANNEL_ID_INDEX);
	return state;
}

/*******************************************************************************************************************/
