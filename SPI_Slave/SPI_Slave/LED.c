/*
 * LED.c
 *
 * Created: 07/08/2020 07:03:13 م
 *  Author: Ali
 */ 


#include "LED.h"


/****************************** LED ININT ***********************/


void LED0_Init(void)
{
	DIO_SetPinDirection(DIO_PORTD, DIO_PIN4 , DIO_PIN_OUT);
	
}

void LED1_Init(void)
{
	
	DIO_SetPinDirection(DIO_PORTD, DIO_PIN3 , DIO_PIN_OUT);

}



/***************************** LED ON **********************************/

void LED0_ON(void)
{
	DIO_SetPinValue(DIO_PORTD, DIO_PIN4 ,  DIO_PIN_HIGH);
}

void LED1_ON(void)
{
	DIO_SetPinValue(DIO_PORTD, DIO_PIN3 ,  DIO_PIN_HIGH);
}


/*************************** LED OFF ************************************/


void LED0_OFF(void)
{
	DIO_SetPinValue(DIO_PORTD, DIO_PIN4 ,  DIO_PIN_LOW);
}


void LED1_OFF(void)
{
	DIO_SetPinValue(DIO_PORTD, DIO_PIN3 ,  DIO_PIN_LOW);

}


/*************************** LED Toggle  ************************************/

void LED0_Toggle(void)
{
	DIO_TogglePin(DIO_PORTD, DIO_PIN4);
}



void LED1_Toggle(void)
{
		DIO_TogglePin(DIO_PORTD, DIO_PIN3);

	
}