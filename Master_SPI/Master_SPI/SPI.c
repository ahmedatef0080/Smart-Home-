/*
 * SPI.c
 *
 * Created: 10/7/2020 8:02:37 PM
 *  Author: Ahmed Atef
 */ 




#include "SPI.h"

void SPI_Init_Master(void)
{
	DIO_SetPinDirection  (DIO_PORTB , DIO_PIN4 ,  DIO_PIN_OUT) ;
	DIO_SetPinDirection  (DIO_PORTB , DIO_PIN5 ,  DIO_PIN_OUT) ;
	DIO_SetPinDirection  (DIO_PORTB , DIO_PIN6 ,  DIO_PIN_IN ) ;
	DIO_SetPinDirection  (DIO_PORTB , DIO_PIN7 ,  DIO_PIN_OUT) ;
	
	
	
	SPI-> SPCR.SPR0 =1;
	SPI-> SPCR.SPR1 =1;
	SPI-> SPCR.MSTR =1;
	SPI-> SPCR.SPE = 1;
	//SPI-> SPCR.SPIE =1;
	//SPI-> SPSR.SPIF =1;
	
	//SREG|=0xff; // enable global interrupts
	
	
}


void SPI_Init_Slave(void)
{
	DIO_SetPinDirection ( DIO_PORTB , DIO_PIN4 ,  DIO_PIN_IN) ;
	DIO_SetPinDirection ( DIO_PORTB , DIO_PIN5 ,  DIO_PIN_IN) ;
	DIO_SetPinDirection ( DIO_PORTB , DIO_PIN6 ,  DIO_PIN_OUT) ;
	DIO_SetPinDirection ( DIO_PORTB , DIO_PIN7 ,  DIO_PIN_IN) ;

SPI->SPCR.SPE  = 1;
}


void SPI_Transmit(uint8 Transmit_data)
{	
	SPI->SPDR = Transmit_data; 
	
	while(GET_BIT(SPI->SPSR , 7)  ==  0);
	
}



uint8 SPI_Recive(void)
{
	
	 uint8 Recive_data= 0;

	Recive_data= SPI->SPDR ; 
	
	return Recive_data;
}



void SPI_Init_Transmition(void)
{
	DIO_SetPinValue( DIO_PORTB , DIO_PIN4 ,  DIO_PIN_LOW);
}

void SPI_Terminate_Transmition(void)
{
	DIO_SetPinValue( DIO_PORTB , DIO_PIN4 ,  DIO_PIN_HIGH);

}





/*
ISR(SPI_STC_vect)
{
Recive_data= SPI->SPDR ;

return Recive_data;
}


 #include <avr/interrupt.h>
*/