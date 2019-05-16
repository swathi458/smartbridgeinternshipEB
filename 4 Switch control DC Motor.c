/*
 * GccApplication1.c
 *
 * Created: 5/15/2019 9:11:08 PM
 * Author : user
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
void PWM_init()
{
	/*set fast PWM mode with non-inverting output*/
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<CS01)|(1<<CS00);
	TCCR2=(1<<WGM20)|(1<<WGM21)|(1<<CS21)|(1<<CS20); 

	DDRB|=(1<<PB3);/*set OC0 pin as output*/
	DDRB|=(1<<PD7);/*set OC0 pin as output*/
}
int main()
{
	DDRD&=~(1<<PD0);
	DDRD&=~(1<<PD1);
	DDRD&=~(1<<PD5);
	DDRD&=~(1<<PD6);

	
	
	PWM_init();
	PORTB=(0<<PB0);
	while(1)
	{
		if((PIND &  (1<<PD0) )== 0)
		{
			OCR0=0;
			OCR2=100;
			_delay_ms(1000);
		}
		if((PIND & (1<<PD1)) == 0)
		{
			OCR0=100;
			OCR0=0;
			_delay_ms(1000);
		}
		if((PIND &  (1<<PD5) )== 0)
		{
			OCR0=0;
			OCR2=200;
			_delay_ms(1000);
		}
		if((PIND &  (1<<PD6))== 0)
		{
			OCR0=200;
			OCR2=0;
			_delay_ms(1000);
		}
		

	}
}



