 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for Dio Module.
 *
 * Author: Mohamed Tarek
 ******************************************************************************/

#ifndef MCAL_DIO_DIO_CFG_H_
#define MCAL_DIO_DIO_CFG_H_

/* Number of the configured Dio Channels */
#define DIO_CONFIGURED_CHANNLES             (9)

/* Channel Index in the array of structures in Dio_Cfg.c */
#define DioConf_LED_CHANNEL_ID_INDEX        (uint8)0x00
#define DioConf_BUTTON_CHANNEL_ID_INDEX     (uint8)0x01

#define DioConf_SSD1_PIN0_ID				(uint8)(0x02) /* PINx_ID */
#define DioConf_SSD1_PIN1_ID				(uint8)(0x03) /* PINx_ID */
#define DioConf_SSD1_PIN2_ID				(uint8)(0x04) /* PINx_ID */
#define DioConf_SSD1_PIN3_ID				(uint8)(0x05) /* PINx_ID */
#define DioConf_SSD1_PIN4_ID				(uint8)(0x06) /* PINx_ID */
#define DioConf_SSD1_PIN5_ID				(uint8)(0x07) /* PINx_ID */
#define DioConf_SSD1_PIN6_ID				(uint8)(0x08) /* PINx_ID */

/* DIO Configured Port ID's  PORT_A_NUM*/
#define DioConf_LED_PORT_NUM                (Dio_PortType)(2) /* PORTC */
#define DioConf_BUTTON_PORT_NUM             (Dio_PortType)(2) /* PORTC */

/* DIO Configured Port ID's  for 1st SSD*/

#define DioConf_SSD1_PIN0_PORT				(Dio_PortType)(1) /* PORTB */
#define DioConf_SSD1_PIN1_PORT				(Dio_PortType)(1) /* PORTB */
#define DioConf_SSD1_PIN2_PORT				(Dio_PortType)(1) /* PORTB */
#define DioConf_SSD1_PIN3_PORT				(Dio_PortType)(1) /* PORTB */
#define DioConf_SSD1_PIN4_PORT				(Dio_PortType)(1) /* PORTB */
#define DioConf_SSD1_PIN5_PORT				(Dio_PortType)(1) /* PORTB */
#define DioConf_SSD1_PIN6_PORT				(Dio_PortType)(1) /* PORTB */


/* DIO Configured Channel ID's */
#define DioConf_LED_CHANNEL_NUM             (Dio_ChannelType)(0) /* Pin 1 in PORTC */
#define DioConf_BUTTON_CHANNEL_NUM          (Dio_ChannelType)(1) /* Pin 2 in PORTC */

#define DioConf_SSD1_PIN0				(Dio_ChannelType)(0) /* PORTB */
#define DioConf_SSD1_PIN1				(Dio_ChannelType)(1) /* PORTB */
#define DioConf_SSD1_PIN2				(Dio_ChannelType)(2) /* PORTB */
#define DioConf_SSD1_PIN3				(Dio_ChannelType)(3) /* PORTB */
#define DioConf_SSD1_PIN4				(Dio_ChannelType)(4) /* PORTB */
#define DioConf_SSD1_PIN5				(Dio_ChannelType)(5) /* PORTB */
#define DioConf_SSD1_PIN6				(Dio_ChannelType)(6) /* PORTB */


#endif /* MCAL_DIO_DIO_CFG_H_ */
