#ifndef F_CPU
#define F_CPU 16000000
#endif
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRA=0XFF;
	/* Replace with your application code */
	while (1)
	{
		PORTA=1<<PA0;
		_delay_ms(1000);
		PORTA=0<<PA0;
		_delay_ms(1000);
		PORTA=1<<PA1;
		_delay_ms(1000);
		PORTA=0<<PA1;
		_delay_ms(1000);
		
		PORTA=1<<PA2;
		_delay_ms(1000);
		PORTA=0<<PA2;
		_delay_ms(1000);
		
		PORTA=1<<PA3;
		_delay_ms(1000);
		PORTA=0<<PA3;
		_delay_ms(1000);
		PORTA=1<<PA4;
		_delay_ms(1000);
		PORTA=0<<PA4;
		_delay_ms(1000);
		PORTA=1<<PA5;
		_delay_ms(1000);
		PORTA=0<<PA5;
		_delay_ms(1000);
		PORTA=1<<PA6;
		_delay_ms(1000);
		PORTA=0<<PA6;
		_delay_ms(1000);
		PORTA=1<<PA7;
		_delay_ms(1000);
		PORTA=0<<PA7;
		_delay_ms(1000);
		PORTA=1<<PA6;
		_delay_ms(1000);
		PORTA=0<<PA6;
		_delay_ms(1000);
		PORTA=1<<PA5;
		_delay_ms(1000);
		PORTA=0<<PA5;
		_delay_ms(1000);
		PORTA=1<<PA4;
		_delay_ms(1000);
		PORTA=0<<PA4;
		_delay_ms(1000);
		PORTA=1<<PA3;
		_delay_ms(1000);
		PORTA=0<<PA3;
		_delay_ms(1000);
		PORTA=1<<PA2;
		_delay_ms(1000);
		PORTA=0<<PA2;
		_delay_ms(1000);
		PORTA=1<<PA1;
		_delay_ms(1000);
		PORTA=0<<PA1;
		_delay_ms(1000);
		PORTA=1<<PA0;
		_delay_ms(1000);
		PORTA=0<<PA0;
		_delay_ms(1000);
		
		
		
		
		
		
		
	}
}

