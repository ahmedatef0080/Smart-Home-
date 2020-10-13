/*
 * SPI_Second_Driver.c
 *
 * Created: 10/7/2020 7:52:27 PM
 * Author : Ahmed Atef
 */ 

#include "SPI.h"
#include "UART.h"
#include "LED.h"

#define F_CPU 16000000
#include <util/delay.h>

int main(void)
{
	uint8 Recive_data = 0  ; // variable to transmit data 
	 uint8 Recive_data_SPI = 0 ; // recived dummy byte 
	
	
	
	
	UART_Init();

	SPI_Init_Master();
	SPI_Init_Transmition();
	_delay_ms(1000);	
	
   
    while (1) 
    {
		Recive_data = UART_Recive_Byte(); // recived data from HC-05 and store it in data variable 
		
		
		
		
		
		
		if(Recive_data)
		{
			SPI_Transmit(Recive_data);
			Recive_data_SPI = SPI_Recive();
						
		}
				

    }
	_delay_ms(1000);

}

