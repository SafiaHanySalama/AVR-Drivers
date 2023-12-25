/*
 * SSD.h
 *
 *  Created on: Dec 23, 2023
 *      Author: Ms store
 */

#ifndef HAL_SSD_SSD_H_
#define HAL_SSD_SSD_H_

void SSD_Init(void);
void SSD_setValue (uint8 SS_num, uint8 Value);
void SSD_displayValue (uint8 Value);

#endif /* HAL_SSD_SSD_H_ */
