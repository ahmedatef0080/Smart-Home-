﻿/*
 * ATmega_Registers.h
 *
 * Created: 25/07/2020 06:28:44 م
 *  Author: Ali
 */ 


#ifndef ATMEGA_REGISTERS_H_
#define ATMEGA_REGISTERS_H_

#include "STD.h"

/*********************************  DIO  ********************************/

#define   DDRA    (*(volatile uint8*)(0x3A))
#define   PORTA   (*(volatile uint8*)(0x3B))
#define   PINA    (*(volatile uint8*)(0x39))

#define   DDRB    (*(volatile uint8*)(0x37))
#define   PORTB   (*(volatile uint8*)(0x38))
#define   PINB    (*(volatile uint8*)(0x36))

#define   DDRC    (*(volatile uint8*)(0x34))
#define   PORTC   (*(volatile uint8*)(0x35))
#define   PINC    (*(volatile uint8*)(0x33))

#define  PORTD    (*(volatile uint8*)(0x32))
#define  PIND     (*(volatile uint8*)(0x30))
#define  DDRD     (*(volatile uint8*)(0x31))

/******************************************* Interrupt *************************/
#define SREG              (*(volatile uint8 *)(0x5F))
#define GICR              (*(volatile uint8 *)(0x5B))
#define GIFR              (*(volatile uint8 *)(0x5A))
#define MCUCR             (*(volatile uint8 *)(0x55))
#define MCUCSR            (*(volatile uint8 * )0x54))

/*************************************  ADC_REGESTER   *****************************************/
#define ADMUX       (*(volatile uint8 *)(0x27))
#define ADCSRA      (*(volatile uint8 *)(0X26))
#define ADCH        (*(volatile uint8 *)(0X25))
#define ADCL        (*(volatile uint8 *)(0X24))
#define SFIOR       (*(volatile uint8 *)(0X50))
#define ADC_ADjust  (*(volatile uint16 *)(0X24))



/************************************************* Timer 0 ****************************************/

#define TCNT0          (*(volatile uint8 *)(0x52))
#define TCCR0          (*(volatile uint8 *)(0x53))
#define OCR0           (*(volatile uint8 *)(0x5C))
#define TIMSK          (*(volatile uint8 *)(0x59))



/******************************************** tIMER 1 *****************************/

 
#define TCNT1A       (*(volatile uint8 *)(0x4F))
#define TCCR1B       (*(volatile uint8 *)(0x4E))
#define OCR1A        (*(volatile uint16 *)(0x4A))
#define ICR1         (*(volatile uint16 *)(0x46))  




/***************************************** Timer 2 *****************************/
#define TCCR2      (*(volatile uint8 *)(0x45))
#define  OCR2      (*(volatile uint8 * )(0x43))

 

/********************************************** UART ****************************/
#define UDR                       (*(volatile uint8 *)(0x2C))
#define UCSRA                     (*(volatile uint8 *)(0x2B))
#define UCSRB                     (*(volatile uint8 *)(0x2A))
#define UCSRC                     (*(volatile uint8 *)(0x40))
#define UBRRH                     (*(volatile uint8 *)(0x40))
#define UBRRL                     (*(volatile uint8 *)(0x29))


/****************************************** SPI *********************************/





typedef struct
{
	uint8 SPR0:1  ;
	uint8 SPR1:1  ;
	uint8 CPHA:1  ;
	uint8 CPOL:1  ;
	uint8 MSTR:1  ;
	uint8 DORD:1  ;
	uint8 SPE:1   ;
	uint8 SPIE:1  ;
	
}SPCR_Reg;



typedef struct 
{
	SPCR_Reg SPCR;
	uint8 SPSR;
	uint8 SPDR;
	
	}SPI_Reg;
	
	
	
	
	
		
		
		
		
		
#define SPI ((volatile SPI_Reg*) 0x2D) // mfysh * abl volatile 3shan 5atr ana 3mlo pointer to struct lw 7tet el * hy3mli alocate 3la tol fe address 



#endif /* ATMEGA_REGISTERS_H_ */