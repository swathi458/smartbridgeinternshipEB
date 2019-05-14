/*
 * GccApplication9.c
 *
 * Created: 5/13/2019 10:05:53 AM
 * Author : user
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>

#define LED_OUTPUT PORTB
#define PIR_input PINC


int main(void)
{
    /* Replace with your application code */
	DDRC=0X00;/*set PIR port as input port*/
	DDRB=0XFF;/*set LED port as output port*/
    while (1) 
    {
		LED_OUTPUT=PIR_input;//when sensor detected led will be HIGH
    }
}

