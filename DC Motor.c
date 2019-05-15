/*
 * GccApplication1.c
 *
 * Created: 5/15/2019 1:24:11 AM
 * Author : user
 */ 
#ifndef F_CPU
#include <avr/io.h>
#define F_CPU 16000000UL
#endif
#include <util/delay.h>



int main(void)
{
	DDRB=0XFF;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTB=(1<<PB1);
		PORTB=(0<<PB2);
		_delay_ms(100);
		PORTB=(0<<PB1);
		PORTB=(1<<PB2);
		_delay_ms(100);
	
		
    }
}

