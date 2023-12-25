 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.c
 *
 * Description: Source file for Port Module.
 *
 * Author: Safia Hany
 ******************************************************************************/

#include "Port.h"
#include "C:\ITI\Workspace\Drivers\MCAL\DIO\Dio_Regs.h"

static Pin_ConfigType * Port_Pin_Config = NULL_PTR;

void Port_Init( const Port_ConfigType* ConfigPtr )
{
	#ifdef POST_COMPILE
	Port_IDType *Port_Ptr = NULL_PTR;
	Port_PinType *Pin_PTR = NULL_PTR;
	uint8 *DDR_Ptr = NULL_PTR;


	Port_Pin_Config = ConfigPtr->Pin_config;
	uint8 i;
	for (i = MIN_PIN_NUM; i <= MAX_PIN_NUM ; i++)
	{
		switch(Port_Pin_Config[i].Port_Num)
		{
			case 0:	Port_Ptr = &PORTA_REG;
					Pin_PTR  = &PINA_REG;
					DDR_Ptr  = &DDRA_REG;

		        break;
			case 1:	Port_Ptr = &PORTB_REG;
					Pin_PTR  = &PINB_REG;
					DDR_Ptr  = &DDRB_REG;
		        break;
			case 2:	Port_Ptr = &PORTC_REG;
					Pin_PTR  = &PINC_REG;
					DDR_Ptr  = &DDRC_REG;
		        break;
			case 3:	Port_Ptr = &PORTD_REG;
					Pin_PTR  = &PIND_REG;
					DDR_Ptr  = &DDRD_REG;
		        break;
		}
		if (INPUT == (Port_Pin_Config[i].Pin_Dir))
		{
			CLEAR_BIT(*DDR_Ptr,Port_Pin_Config[i].Pin_Num);

			if (STD_HIGH == (Port_Pin_Config[i].PullUp))
			{
				SET_BIT(*Port_Ptr,Port_Pin_Config[i].Pin_Num);
			}
			else if (STD_LOW == (Port_Pin_Config[i].PullUp))
			{
				CLEAR_BIT(*Port_Ptr,Port_Pin_Config[i].Pin_Num);
			}
		}
		else if (OUTPUT == (Port_Pin_Config[i].Pin_Dir))
		{
			SET_BIT(*DDR_Ptr,Port_Pin_Config[i].Pin_Num);

			if (STD_HIGH == (Port_Pin_Config[i].Pin_Level))
			{
				SET_BIT(*Port_Ptr,Port_Pin_Config[i].Pin_Num);
			}
			else if (STD_LOW == (Port_Pin_Config[i].Pin_Level))
			{
				CLEAR_BIT(*Port_Ptr,Port_Pin_Config[i].Pin_Num);
			}
		}
	}
	#endif
		
	#ifdef PRE_COMPILE
		#if (NUM_OF_PORTS == 2 || NUM_OF_PORTS == 3 || NUM_OF_PORTS == 4)
		DDRA_REG =  CONCAT(PORT_A_PIN_7_DIR,PORT_A_PIN_6_DIR,PORT_A_PIN_5_DIR,PORT_A_PIN_4_DIR,PORT_A_PIN_3_DIR,PORT_A_PIN_2_DIR,PORT_A_PIN_1_DIR,PORT_A_PIN_0_DIR) ;
		PORTA_REG = CONCAT(PORT_A_PIN_7_PullUp,PORT_A_PIN_6_PullUp,PORT_A_PIN_5_PullUp,PORT_A_PIN_4_PullUp,PORT_A_PIN_3_PullUp,PORT_A_PIN_2_PullUp,PORT_A_PIN_1_PullUp,PORT_A_PIN_0_PullUp) ;
		DDRB_REG =  CONCAT(PORT_B_PIN_7_DIR,PORT_B_PIN_6_DIR,PORT_B_PIN_5_DIR,PORT_B_PIN_4_DIR,PORT_B_PIN_3_DIR,PORT_B_PIN_2_DIR,PORT_B_PIN_1_DIR,PORT_B_PIN_0_DIR) ;
		PORTB_REG = CONCAT(PORT_B_PIN_7_PullUp,PORT_B_PIN_6_PullUp,PORT_B_PIN_5_PullUp,PORT_B_PIN_4_PullUp,PORT_B_PIN_3_PullUp,PORT_B_PIN_2_PullUp,PORT_B_PIN_1_PullUp,PORT_B_PIN_0_PullUp) ;
		#endif
		
		#if (NUM_OF_PORTS == 3 || NUM_OF_PORTS == 4)
		DDRC_REG =  CONCAT(PORT_C_PIN_7_DIR,PORT_C_PIN_6_DIR,PORT_C_PIN_5_DIR,PORT_C_PIN_4_DIR,PORT_C_PIN_3_DIR,PORT_C_PIN_2_DIR,PORT_C_PIN_1_DIR,PORT_C_PIN_0_DIR) ;
		PORTC_REG = CONCAT(PORT_C_PIN_7_PullUp,PORT_C_PIN_6_PullUp,PORT_C_PIN_5_PullUp,PORT_C_PIN_4_PullUp,PORT_C_PIN_3_PullUp,PORT_C_PIN_2_PullUp,PORT_C_PIN_1_PullUp,PORT_C_PIN_0_PullUp) ;
		#endif
		
		#if (NUM_OF_PORTS == 4)
		DDRD_REG =  CONCAT(PORT_D_PIN_7_DIR,PORT_D_PIN_6_DIR,PORT_D_PIN_5_DIR,PORT_D_PIN_4_DIR,PORT_D_PIN_3_DIR,PORT_D_PIN_2_DIR,PORT_D_PIN_1_DIR,PORT_D_PIN_0_DIR) ;
		PORTD_REG = CONCAT(PORT_D_PIN_7_PullUp,PORT_D_PIN_6_PullUp,PORT_D_PIN_5_PullUp,PORT_D_PIN_4_PullUp,PORT_D_PIN_3_PullUp,PORT_D_PIN_2_PullUp,PORT_D_PIN_1_PullUp,PORT_D_PIN_0_PullUp) ;
		#endif
	#endif
}
