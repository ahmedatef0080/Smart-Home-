/*
 * LED.h
 *
 * Created: 07/08/2020 07:03:26 م
 *  Author: Ali
 */ 


#ifndef LED_H_
#define LED_H_

#include "DIO.h"


/****************************** LED ININT ***********************/
void LED0_Init(void);


void LED1_Init(void);





/***************************** LED ON **********************************/
void LED0_ON(void);


void LED1_ON(void);



/*************************** LED OFF ************************************/

void LED0_OFF(void);


void LED1_OFF(void);


/*************************** LED Toggle  ************************************/



void LED1_Toggle(void);


void LED0_Toggle(void);



#endif /* LED_H_ */