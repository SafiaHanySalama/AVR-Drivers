 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Cfg.h
 *
 * Description: Precompile header file for Port Module.
 *
 * Author: Safia Hany

 ******************************************************************************/
#ifndef MCAL_PORT_CFG_H_
#define MCAL_PORT_CFG_H_

// Can be changed to POST_COMPILE
#define POST_COMPILE	1

/*Number of Pins*/
#define NUM_OF_PORTS	4

/* Number of configured pins*/
#define PORT_CONFIGURED_PINS                 (NUM_OF_PORTS*8U)

// Min. & Max. pin number
#define MIN_PIN_NUM                          0
#define MAX_PIN_NUM                          31

/* Configured Port ID's  */
#define PORT_A_NUM                           (Port_IDType)0 /* PORTA */
#define PORT_B_NUM                           (Port_IDType)1 /* PORTB */
#define PORT_C_NUM                           (Port_IDType)2 /* PORTC */
#define PORT_D_NUM                           (Port_IDType)3 /* PORTD */

/**************PORT A CONFIGURATION******************/

/* Configured Channel ID's */
#define PORT_A_PIN_0                        (Port_PinType)0
#define PORT_A_PIN_1                        (Port_PinType)1
#define PORT_A_PIN_2                        (Port_PinType)2
#define PORT_A_PIN_3                        (Port_PinType)3
#define PORT_A_PIN_4                        (Port_PinType)4
#define PORT_A_PIN_5                        (Port_PinType)5
#define PORT_A_PIN_6                        (Port_PinType)6
#define PORT_A_PIN_7                        (Port_PinType)7

// Pin Mode
#define PORT_A_PIN_0_MODE           DIO
#define PORT_A_PIN_1_MODE           DIO
#define PORT_A_PIN_2_MODE           DIO
#define PORT_A_PIN_3_MODE           DIO
#define PORT_A_PIN_4_MODE           DIO
#define PORT_A_PIN_5_MODE           DIO
#define PORT_A_PIN_6_MODE           DIO
#define PORT_A_PIN_7_MODE           DIO

// Pin direction
#define PORT_A_PIN_0_DIR            INPUT
#define PORT_A_PIN_1_DIR            INPUT
#define PORT_A_PIN_2_DIR            INPUT
#define PORT_A_PIN_3_DIR            INPUT
#define PORT_A_PIN_4_DIR            INPUT
#define PORT_A_PIN_5_DIR            INPUT
#define PORT_A_PIN_6_DIR            INPUT
#define PORT_A_PIN_7_DIR            INPUT

// Pin level.
#define PORT_A_PIN_0_LEVEL          STD_LOW
#define PORT_A_PIN_1_LEVEL          STD_LOW
#define PORT_A_PIN_2_LEVEL          STD_LOW
#define PORT_A_PIN_3_LEVEL          STD_LOW
#define PORT_A_PIN_4_LEVEL          STD_LOW
#define PORT_A_PIN_5_LEVEL          STD_LOW
#define PORT_A_PIN_6_LEVEL          STD_LOW
#define PORT_A_PIN_7_LEVEL          STD_LOW


// Pin PullUp.
#define PORT_A_PIN_0_PullUp         STD_LOW
#define PORT_A_PIN_1_PullUp         STD_LOW
#define PORT_A_PIN_2_PullUp         STD_LOW
#define PORT_A_PIN_3_PullUp         STD_LOW
#define PORT_A_PIN_4_PullUp         STD_LOW
#define PORT_A_PIN_5_PullUp         STD_LOW
#define PORT_A_PIN_6_PullUp         STD_LOW
#define PORT_A_PIN_7_PullUp         STD_LOW


/**************PORT B CONFIGURATION******************/
#if(NUM_OF_PORTS==2 ||NUM_OF_PORTS==3||NUM_OF_PORTS==4)

#define PORT_B_PIN_0                        (Port_PinType)0
#define PORT_B_PIN_1                        (Port_PinType)1
#define PORT_B_PIN_2                        (Port_PinType)2
#define PORT_B_PIN_3                        (Port_PinType)3
#define PORT_B_PIN_4                        (Port_PinType)4
#define PORT_B_PIN_5                        (Port_PinType)5
#define PORT_B_PIN_6                        (Port_PinType)6
#define PORT_B_PIN_7                        (Port_PinType)7

#define PORT_B_PIN_0_MODE           DIO
#define PORT_B_PIN_1_MODE           DIO
#define PORT_B_PIN_2_MODE           DIO
#define PORT_B_PIN_3_MODE           DIO
#define PORT_B_PIN_4_MODE           DIO
#define PORT_B_PIN_5_MODE           DIO
#define PORT_B_PIN_6_MODE           DIO
#define PORT_B_PIN_7_MODE           DIO

#define PORT_B_PIN_0_DIR            OUTPUT
#define PORT_B_PIN_1_DIR            OUTPUT
#define PORT_B_PIN_2_DIR            OUTPUT
#define PORT_B_PIN_3_DIR            OUTPUT
#define PORT_B_PIN_4_DIR            OUTPUT
#define PORT_B_PIN_5_DIR            OUTPUT
#define PORT_B_PIN_6_DIR            OUTPUT
#define PORT_B_PIN_7_DIR            INPUT

#define PORT_B_PIN_0_LEVEL          STD_LOW
#define PORT_B_PIN_1_LEVEL          STD_LOW
#define PORT_B_PIN_2_LEVEL          STD_LOW
#define PORT_B_PIN_3_LEVEL          STD_LOW
#define PORT_B_PIN_4_LEVEL          STD_LOW
#define PORT_B_PIN_5_LEVEL          STD_LOW
#define PORT_B_PIN_6_LEVEL          STD_LOW
#define PORT_B_PIN_7_LEVEL          STD_LOW

#define PORT_B_PIN_0_PullUp         STD_LOW
#define PORT_B_PIN_1_PullUp         STD_LOW
#define PORT_B_PIN_2_PullUp         STD_LOW
#define PORT_B_PIN_3_PullUp         STD_LOW
#define PORT_B_PIN_4_PullUp         STD_LOW
#define PORT_B_PIN_5_PullUp         STD_LOW
#define PORT_B_PIN_6_PullUp         STD_LOW
#define PORT_B_PIN_7_PullUp         STD_LOW

#endif

/**************PORT C CONFIGURATION******************/
#if(NUM_OF_PORTS==3||NUM_OF_PORTS==4)

#define PORT_C_PIN_0                        (Port_PinType)0
#define PORT_C_PIN_1                        (Port_PinType)1
#define PORT_C_PIN_2                        (Port_PinType)2
#define PORT_C_PIN_3                        (Port_PinType)3
#define PORT_C_PIN_4                        (Port_PinType)4
#define PORT_C_PIN_5                        (Port_PinType)5
#define PORT_C_PIN_6                        (Port_PinType)6
#define PORT_C_PIN_7                        (Port_PinType)7

#define PORT_C_PIN_0_MODE           DIO
#define PORT_C_PIN_1_MODE           DIO
#define PORT_C_PIN_2_MODE           DIO
#define PORT_C_PIN_3_MODE           DIO
#define PORT_C_PIN_4_MODE           DIO
#define PORT_C_PIN_5_MODE           DIO
#define PORT_C_PIN_6_MODE           DIO
#define PORT_C_PIN_7_MODE           DIO

#define PORT_C_PIN_0_DIR            OUTPUT	// LED1_PIN_NUM
#define PORT_C_PIN_1_DIR            INPUT	// BUTTON_PIN_NUM
#define PORT_C_PIN_2_DIR            INPUT
#define PORT_C_PIN_3_DIR            INPUT
#define PORT_C_PIN_4_DIR            INPUT
#define PORT_C_PIN_5_DIR            INPUT
#define PORT_C_PIN_6_DIR            INPUT
#define PORT_C_PIN_7_DIR            INPUT

#define PORT_C_PIN_0_LEVEL          STD_HIGH	// LED_PIN_NUM
#define PORT_C_PIN_1_LEVEL          STD_LOW	// BUTTON_PIN_NUM
#define PORT_C_PIN_2_LEVEL          STD_LOW
#define PORT_C_PIN_3_LEVEL          STD_LOW
#define PORT_C_PIN_4_LEVEL          STD_LOW
#define PORT_C_PIN_5_LEVEL          STD_LOW
#define PORT_C_PIN_6_LEVEL          STD_LOW
#define PORT_C_PIN_7_LEVEL          STD_LOW

#define PORT_C_PIN_0_PullUp         STD_LOW	//LED1_PIN_NUM
#define PORT_C_PIN_1_PullUp         STD_LOW
#define PORT_C_PIN_2_PullUp         STD_LOW
#define PORT_C_PIN_3_PullUp         STD_LOW
#define PORT_C_PIN_4_PullUp         STD_LOW
#define PORT_C_PIN_5_PullUp         STD_LOW
#define PORT_C_PIN_6_PullUp         STD_LOW
#define PORT_C_PIN_7_PullUp         STD_LOW

#endif

/**************PORT D CONFIGURATION******************/
#if(NUM_OF_PORTS==4)

#define PORT_D_PIN_0                        (Port_PinType)0
#define PORT_D_PIN_1                        (Port_PinType)1
#define PORT_D_PIN_2                        (Port_PinType)2
#define PORT_D_PIN_3                        (Port_PinType)3
#define PORT_D_PIN_4                        (Port_PinType)4
#define PORT_D_PIN_5                        (Port_PinType)5
#define PORT_D_PIN_6                        (Port_PinType)6
#define PORT_D_PIN_7                        (Port_PinType)7

#define PORT_D_PIN_0_MODE           DIO
#define PORT_D_PIN_1_MODE           DIO
#define PORT_D_PIN_2_MODE           DIO
#define PORT_D_PIN_3_MODE           DIO
#define PORT_D_PIN_4_MODE           DIO
#define PORT_D_PIN_5_MODE           DIO
#define PORT_D_PIN_6_MODE           DIO
#define PORT_D_PIN_7_MODE           DIO

#define PORT_D_PIN_0_DIR            INPUT	// BUTTON_PIN_NUM
#define PORT_D_PIN_1_DIR            INPUT
#define PORT_D_PIN_2_DIR            INPUT
#define PORT_D_PIN_3_DIR            INPUT
#define PORT_D_PIN_4_DIR            INPUT
#define PORT_D_PIN_5_DIR            INPUT
#define PORT_D_PIN_6_DIR            INPUT
#define PORT_D_PIN_7_DIR            INPUT


#define PORT_D_PIN_0_LEVEL          STD_LOW	// BUTTON_PIN_NUM
#define PORT_D_PIN_1_LEVEL          STD_LOW
#define PORT_D_PIN_2_LEVEL          STD_LOW
#define PORT_D_PIN_3_LEVEL          STD_LOW
#define PORT_D_PIN_4_LEVEL          STD_LOW
#define PORT_D_PIN_5_LEVEL          STD_LOW
#define PORT_D_PIN_6_LEVEL          STD_LOW
#define PORT_D_PIN_7_LEVEL          STD_LOW

#define PORT_D_PIN_0_PullUp         STD_HIGH	// BUTTON_PIN_NUM
#define PORT_D_PIN_1_PullUp         STD_LOW
#define PORT_D_PIN_2_PullUp         STD_LOW
#define PORT_D_PIN_3_PullUp         STD_LOW
#define PORT_D_PIN_4_PullUp         STD_LOW
#define PORT_D_PIN_5_PullUp         STD_LOW
#define PORT_D_PIN_6_PullUp         STD_LOW
#define PORT_D_PIN_7_PullUp         STD_LOW

#endif
// Mode ID
#define DIO                 (Port_PinModeType)0
#define ADC                 (Port_PinModeType)1
#define PWM                 (Port_PinModeType)2
#define GPT                 (Port_PinModeType)3



#endif /* MCAL_PORT_CFG_H_ */
