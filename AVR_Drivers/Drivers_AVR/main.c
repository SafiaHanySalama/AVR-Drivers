/*
 * main.c
 *
 *  Created on: Dec 14, 2023
 *      Author: hp
 */
#include "C:\ITI\Workspace\Drivers\APP\task.h"

//#define TASK1
#define TASK_SSD
int main(void)
{
#ifdef TASK1
	Init_Task1();
	while(1)
	{

		blinking_task();
	}
#endif
#ifdef TASK_SSD
	Init_Task2();
	while(1)
	{
		ss_task2();
	}
#endif
	return 0;

}
