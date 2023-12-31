 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio.h
 *
 * Description: Header file for Dio Module.
 *
 * Author: Safia Hany
 ******************************************************************************/

#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_

#include "C:\ITI\Workspace\Drivers\Comm\bit_math.h"
#include "C:\ITI\Workspace\Drivers\Comm\Std_Types.h"
#include "Dio_Cfg.h"

/* Type definition for Dio_ChannelType used by the DIO APIs */
typedef uint8 Dio_ChannelType;

/* Type definition for Dio_PortType used by the DIO APIs */
typedef uint8 Dio_PortType;

/* Type definition for Dio_LevelType used by the DIO APIs */
typedef uint8 Dio_LevelType;

/* Type definition for Dio_PortLevelType used by the DIO APIs */
typedef uint8 Dio_PortLevelType;


typedef struct
{
	/* Member contains the ID of the Port that this channel belongs to */
	Dio_PortType Port_Num;
	/* Member contains the ID of the Channel*/
	Dio_ChannelType Ch_Num;
}Dio_ConfigChannel;

/* Data Structure required for initializing the Dio Driver */
typedef struct
{
	Dio_ConfigChannel Channels[DIO_CONFIGURED_CHANNLES];
} Dio_ConfigType;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

/* Function for DIO Initialization API */
void Dio_Init(const Dio_ConfigType * ConfigPtr);

/* Function for DIO read Channel API */
Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId);

/* Function for DIO write Channel API */
void Dio_WritePort(Dio_PortType PortId, Dio_PortLevelType Level);

/* Function for DIO read Port API */
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);

/* Function for DIO write Port API */
void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level);



/* Function for DIO flip channel API */
Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId);

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Extern PB structures to be used by Dio and other modules */
extern const Dio_ConfigType Dio_Configuration;

#endif /* MCAL_DIO_DIO_H_ */





