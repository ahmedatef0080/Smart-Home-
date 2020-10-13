/*
 * SPI_Second_Driver.c
 *
 * Created: 10/7/2020 7:52:27 PM
 * Author : Ahmed Atef
 */ 

#include "SPI.h"
#include "LED.h"

#define F_CPU 4000000
#include <util/delay.h>

int main(void)
{
	uint8 Recivie_data = 0  ; // variable to recive data 
	uint8 Transfer_data = 0 ; // send a dummy byte to Master from slave 
	
	 LED0_Init();


	 LED1_Init();
	 
	 



	
	

	SPI_Init_Slave();

	
    while (1) 
    {
		Recivie_data = SPI_Transmit_and_Recive(Transfer_data); // send a dummy byte to Master and  recived data from master and add the data to variable Recivie_data 
		
		
	
		
		if(Recivie_data == '1')
		{
				 LED0_ON();

		}
		
		else if(Recivie_data == '2')
		{
				 LED0_OFF();

			
		}
		else if (Recivie_data == '3')
		{
			LED1_ON();
		}
		else if  (Recivie_data== '4')
		{
			LED1_OFF();
		}
		
				

    }

}

