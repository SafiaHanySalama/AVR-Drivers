 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_cfg.c
 *
 * Description: Post Build Configuration Source file for Dio Module.
 *
 * Author: Safia Hany
 ******************************************************************************/

#include "Dio.h"

/* PB structure used with Dio_Init API */
const Dio_ConfigType Dio_Configuration ={
                                    DioConf_LED_PORT_NUM,DioConf_LED_CHANNEL_NUM,
									DioConf_BUTTON_PORT_NUM,DioConf_BUTTON_CHANNEL_NUM,
									DioConf_SSD1_PIN0_PORT,DioConf_SSD1_PIN0,
									DioConf_SSD1_PIN1_PORT,DioConf_SSD1_PIN1,
									DioConf_SSD1_PIN2_PORT,DioConf_SSD1_PIN2,
									DioConf_SSD1_PIN3_PORT,DioConf_SSD1_PIN3,
									DioConf_SSD1_PIN4_PORT,DioConf_SSD1_PIN4,
									DioConf_SSD1_PIN5_PORT,DioConf_SSD1_PIN5,
									DioConf_SSD1_PIN6_PORT,DioConf_SSD1_PIN6

								   };
