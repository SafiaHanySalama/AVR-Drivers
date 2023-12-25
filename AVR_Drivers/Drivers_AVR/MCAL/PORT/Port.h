 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for Port Module.
 *
 * Author: Safia Hany
 ******************************************************************************/

#ifndef MCAL_PORT_H_
#define MCAL_PORT_H_


#include "C:\ITI\Workspace\Drivers\Comm\bit_math.h"
#include "C:\ITI\Workspace\Drivers\Comm\Std_Types.h"
#include "Port_Cfg.h"

#define BINARY_HELPER(p7,p6,p5,p4,p3,p2,p1,p0) ((p7 << 7) | (p6 << 6) | (p5 << 5) | (p4 << 4) | (p3 << 3) | (p2 << 2) | (p1 << 1) | (p0))
#define CONCAT_HELPER(p7,p6,p5,p4,p3,p2,p1,p0) BINARY_HELPER(p7,p6,p5,p4,p3,p2,p1,p0)
#define CONCAT(p7,p6,p5,p4,p3,p2,p1,p0)	CONCAT_HELPER(p7,p6,p5,p4,p3,p2,p1,p0)

/*Data type for the symbolic name of a port pin*/
typedef uint8 Port_PinType;

/*Possible directions of a port pin*/
typedef enum {
	 PORT_PIN_IN, PORT_PIN_OUT
 } Port_PinDirectionType;

/*Different port pin modes*/
typedef uint8 Port_PinModeType;

/* Type definition for Port_ID used by the Port APIs */
typedef uint8 Port_IDType;

/* Pin config structure*/
typedef struct {
	// Number of the port.
	 Port_IDType Port_Num;
	// Number of the pin.
	 Port_PinType Pin_Num;
	// Direction of the pin.
	 Port_PinDirectionType Pin_Dir;
	// Pin level value.
	uint8 Pin_Level;
	// Pin pullup resistor.
	uint8 PullUp;
	// Mode of a given pin. (for future)
	Port_PinModeType Pin_Mode;
 } Pin_ConfigType;

 /*Type of the external data structure containing the initialization data for this module*/
typedef struct {
	 Pin_ConfigType Pin_config[PORT_CONFIGURED_PINS];

 } Port_ConfigType;

 /*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/
/* Function for Initializes the Port Driver module*/
void Port_Init( const Port_ConfigType* ConfigPtr );

/*Add function to set the mode of the pin (DIO / PWM / etc.)*/

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/
extern const Port_ConfigType Port_Configuration;


#endif /* MCAL_PORT_H_ */
