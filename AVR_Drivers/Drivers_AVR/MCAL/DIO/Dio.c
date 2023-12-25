 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio.c
 *
 * Description: Source file for Dio Module.
 *
 * Author: Safia Hany
 ******************************************************************************/

#include "Dio.h"
#include "Dio_Regs.h"

static Dio_ConfigChannel * Dio_PortChannels = NULL_PTR;

void Dio_Init(const Dio_ConfigType * ConfigPtr)
{
	Dio_PortChannels = ConfigPtr->Channels;
}
void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level)
{
	Dio_PortLevelType * Port_Ptr = NULL_PTR;
	/* Point to the correct PORT register according to the Port Id stored in the Port_Num member */
	switch(Dio_PortChannels[ChannelId].Port_Num)
	{
		case 0:	Port_Ptr = &PORTA_REG;
			break;
		case 1:	Port_Ptr = &PORTB_REG;
			break;
		case 2:	Port_Ptr = &PORTC_REG;
			break;
		case 3:	Port_Ptr = &PORTD_REG;
			break;
	}
	if(Level == STD_HIGH)
	{
		/* Write Logic High */
		SET_BIT(*Port_Ptr,Dio_PortChannels[ChannelId].Ch_Num);
	}
	else if(Level == STD_LOW)
	{
		/* Write Logic Low */
		CLEAR_BIT(*Port_Ptr,Dio_PortChannels[ChannelId].Ch_Num);
	}
}
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
	Dio_PortLevelType * PIN_Ptr = NULL_PTR;
	Dio_LevelType output = STD_LOW;
	switch(Dio_PortChannels[ChannelId].Port_Num)
	{
		case 0:	PIN_Ptr = &PINA_REG;
		break;
		case 1:	PIN_Ptr = &PINB_REG;
		break;
		case 2:	PIN_Ptr = &PINC_REG;
		break;
		case 3:	PIN_Ptr = &PIND_REG;
		break;
	}
		/* Read the required channel */
	if(GET_BIT(*PIN_Ptr,Dio_PortChannels[ChannelId].Ch_Num)==1)
	{
		output = STD_HIGH;
	}
	else
	{
		output = STD_LOW;
	}
	return output;
}

Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId)
{
	/*In case of error return something else */
	Dio_PortLevelType * Port_Ptr = NULL_PTR;
	Dio_PortLevelType * PIN_Ptr = NULL_PTR;
	Dio_LevelType output = STD_LOW;
	switch(Dio_PortChannels[ChannelId].Port_Num)
	{
	case 0:	Port_Ptr = &PORTA_REG;
			PIN_Ptr  = &PINA_REG;
	break;
	case 1:	Port_Ptr = &PORTB_REG;
			PIN_Ptr  = &PINB_REG;
	break;
	case 2:	Port_Ptr = &PORTC_REG;
			PIN_Ptr  = &PINC_REG;
	break;
	case 3:	Port_Ptr = &PORTD_REG;
			PIN_Ptr  = &PIND_REG;
	break;
	}
	/* Read the required channel and write the required level */
	if(GET_BIT(*PIN_Ptr,Dio_PortChannels[ChannelId].Ch_Num)==1)
	{
		CLEAR_BIT(*Port_Ptr,Dio_PortChannels[ChannelId].Ch_Num);
		output = STD_LOW;
	}
	else
	{
		SET_BIT(*Port_Ptr,Dio_PortChannels[ChannelId].Ch_Num);
		output = STD_HIGH;
	}
	return output;
}
