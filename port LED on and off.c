 /*
 * GccApplication1.c
 *
 * Created: 5/9/2019 2:29:57 PM
 * Author : user
 */ 
#ifndef F_CPU
#define F_CPU 16000000
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRA=0X80;
	DDRB=0X80;
	DDRC=0X80;
	DDRD=0X80;
    /* Replace with your application code */
    while (1) 
    {
		PORTA |= 1<< PA7;
		PORTB |= 1<< PA7;
		PORTC |= 1<< PA7;
		PORTD |= 1<< PA7;
		
		
    }
}

