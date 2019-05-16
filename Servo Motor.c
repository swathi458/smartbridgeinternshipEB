/*
 * GccApplication1.c
 *
 * Created: 5/16/2019 1:55:57 AM
 * Author : user
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	TCCR1A=(1<<COM1A1)|(1<<COM1B1)|(1<<WGM11);//
	TCCR1B|=(1<<WGM13)|(1<<WGM12)|(1<<CS11)|(1<<CS10);
	ICR1=4999;
	DDRD|=(1<<PD5);//PWM Pins as out
    while (1) 
    {
		OCR1A=97;//0 DEGREES
		_delay_ms(500);
		OCR1A=280;//90 DEGREES
		_delay_ms(500);
		OCR1A=535;//180 DEGREES
		_delay_ms(500);
    }
}

