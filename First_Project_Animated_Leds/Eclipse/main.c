/*
 * main.c
 *
 *  Created on: Aug 12, 2023
 *      Author: Al-toukhi
 */

#include <avr/io.h>
#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_drive.h"
#include <util/delay.h>



void main()
{
	DIO_Pin_Mode(PORTA , PIN0 , Output) ;
	DIO_Pin_Mode(PORTA , PIN1 , Output) ;
	DIO_Pin_Mode(PORTA , PIN2 , Output) ;
	DIO_Pin_Mode(PORTA , PIN3 , Output) ;

	while(1)
	{
		for(u8 PIN=0 ; PIN<4 ; PIN++)
		{
		DIO_Pin_Write(PORTA , PIN , High) ;
		_delay_ms(500) ;
		DIO_Pin_Write(PORTA , PIN , Low) ;
		}

	}
}

