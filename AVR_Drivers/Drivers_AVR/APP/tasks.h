/*
 * task.h
 *
 *  Created on: Dec 21, 2023
 *      Author: hp
 */

#ifndef APP_TASKS_H_
#define APP_TASKS_H_

#include "C:\ITI\Workspace\Drivers\MCAL\PORT\Port.h"
#include "C:\ITI\Workspace\Drivers\MCAL\DIO\Dio.h"
#include "C:\ITI\Workspace\Drivers\HAL\BUTTON\Button_Cfg.h"
#include "C:\ITI\Workspace\Drivers\HAL\BUTTON\Button.h"
#include "C:\ITI\Workspace\Drivers\HAL\LED\Led.h"
#include "C:\ITI\Workspace\Drivers\HAL\LED\Led_Cfg.h"

void Init_Task1(void);
void Init_Task2(void);
void blinking_task();
void ss_task1();
void ss_task2();



#endif /* APP_TASKS_H_ */
