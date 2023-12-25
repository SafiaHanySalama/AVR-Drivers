/*
 * SSD.c
 *
 *  Created on: Dec 23, 2023
 *      Author: Ms store
 */

#include "C:\ITI\Workspace\Drivers\MCAL\PORT\Port.h"
#include "../../MCAL/DIO/Dio.h"
#include "../../MCAL/PORT/Port_Cfg.h"
#include "SSD_Config.h"
#include "../../MCAL/DIO/Dio_Regs.h"

//static Pin_ConfigType * Port_Pin_Config = NULL_PTR;
uint8 arr[10] = {[0]=0x3F,[1]=0x06,[2]=0x5B,[3]=0x4F,[4]=0x66,[5]=0x6D,[6]=0x7D,[7]=0x07,[8]=0x7F,[9]=0x6F};
void SSD_Init()
{
	//uint8 *DDR_Ptr = NULL_PTR;
	//uint8 *Port_Ptr = NULL_PTR;
	Port_Init(&Port_Configuration);
	Dio_Init(&Dio_Configuration);
	/*If port.cfg.h has a problem in its configuration rewrite it as output
	for(uint8 sev=0;sev<NO_OF_SSD*8;sev++)
	{

		switch(Port_Pin_Config[5].Port_Num)
		{
		case 0:
			DDR_Ptr  = &DDRA_REG;
			Port_Ptr = &PORTA_REG;
			break;
		case 1:
			DDR_Ptr  = &DDRB_REG;
			Port_Ptr = &PORTB_REG;
			break;
		case 2:
			DDR_Ptr  = &DDRC_REG;
			Port_Ptr = &PORTC_REG;
			break;
		case 3:
			DDR_Ptr  = &DDRD_REG;
			Port_Ptr = &PORTD_REG;
			break;
		}
		SET_BIT(*DDR_Ptr,Port_Pin_Config[5].Pin_Num);
	}
	If port.cfg.h has a problem in its configuration rewrite it as
	  Pull up or down dependent on common cathode or anode
	//pullup case
	SET_BIT(*Port_Ptr,Port_Pin_Config[5].Pin_Num);*/
}

void SSD_setValue (uint8 SS_num, uint8 Value)
{
	char led_val[7];
	if (Value >9 || Value< 0)	{}
	else{
		for(uint8 i =0;i<8;i++)
		{
			led_val[i] = GET_BIT(arr[Value],i);
		}
		if (SS_num == 0){
			Dio_WriteChannel(DioConf_SSD1_PIN0_ID,led_val[0]);
			Dio_WriteChannel(DioConf_SSD1_PIN1_ID,led_val[1]);
			Dio_WriteChannel(DioConf_SSD1_PIN2_ID,led_val[2]);
			Dio_WriteChannel(DioConf_SSD1_PIN3_ID,led_val[3]);
			Dio_WriteChannel(DioConf_SSD1_PIN4_ID,led_val[4]);
			Dio_WriteChannel(DioConf_SSD1_PIN5_ID,led_val[5]);
			Dio_WriteChannel(DioConf_SSD1_PIN6_ID,led_val[6]);
	}
	}

}
void SSD_displayValue (uint8 Value)
{
	uint8 temp = Value;
	uint8  digits_counter = 0;
	uint8 sev_counter = 1;
	do
	{
		digits_counter++;
		temp = Value/10;
	}while(temp!=0);

	if(digits_counter > NO_OF_SSD){}
	else
	{
		for (sev_counter=1;sev_counter<=digits_counter;sev_counter++)
		{
			temp = Value%(10 * sev_counter );
			SSD_setValue (sev_counter, temp);
		}
	}

}
