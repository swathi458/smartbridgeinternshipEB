#ifndef F_CPU
#define F_CPU 16000000
#endif
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRA=1<<DDA0;
	DDRB=1<<DDA2;
	DDRC=1<DDA4;
	DDRD=1<DDA6;
	/* Replace with your application code */
	while (1)
	{
		PORTA=1<<PA0;
		PORTA=1<<PA2;
		PORTA=1<<PA4;
		PORTA=1<<PA6;
		_delay_ms(1000);
		
		PORTA=0<<PA0;
		PORTA=0<<PA2;
		PORTA=0<<PA4
		PORTA=0<<PA6;
		_delay_ms(1000);
		
		
		
		
		
	}
}

