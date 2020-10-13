/*
 * SPI.h
 *
 * Created: 10/7/2020 8:02:57 PM
 *  Author: Ahmed Atef
 */ 


#ifndef SPI_H_
#define SPI_H_


#include "DIO.h"



void SPI_Init_Master(void);


void SPI_Init_Slave(void);


void SPI_Transmit(uint8);

uint8 SPI_Recive(void);

void SPI_Init_Transmition(void);

void SPI_Terminate_Transmition(void);


uint8  SPI_Recive(void);



#endif /* SPI_H_ */