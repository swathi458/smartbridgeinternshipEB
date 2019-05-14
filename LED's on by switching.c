/*
 * GccApplication7.c
 *
 * Created: 5/10/2019 11:05:22 AM
 * Author : user
 */
 
#ifndef F_CPU
#define F_CPU 16000000
#endif
#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
	DDRC = 0X01;
	DDRC = 0X02;
	DDRC = 0X04;
	DDRC = 0X08;
	DDRC = 0X10;
	DDRC = 0X20;
	DDRC = 0X40;
	DDRC = 0X80;
	DDRD = 0X00;
	;
    /* Replace with your application code */
    while (1) 
    {
		if((PIND & (1<<PD0)) == 0)
		{
			PORTC = 0X01;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			
			PORTC = 0X02;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			PORTC = 0X04;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			
			PORTC = 0X08;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			PORTC = 0X10;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			PORTC = 0X20;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			PORTC = 0X40;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			PORTC = 0X80;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			
		}
		if((PIND & (1<<PD1)) == 0)
		{
			PORTC = 0X80;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			PORTC = 0X40;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			PORTC = 0X20;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			PORTC = 0X10;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			PORTC = 0X08;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			PORTC = 0X04;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			PORTC = 0X02;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			PORTC = 0X01;
			_delay_ms(3000);
			PORTC = 0X00;
			_delay_ms(3000);
			

			
		}
		
		
		
    }
}

