/*
 * GccApplication1.c
 *
 * Created: 5/16/2019 2:55:53 AM
 * Author : user
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
    /* Replace with your application code */
	DDRA=0X0F;
	int period=2;
    while (1) 
    {
		/* Rotate stepper motor with half step sequence*/
		for(int i=0;i<50;i++)
		{
			PORTA=0X09;
			_delay_ms(period);
			PORTA=0X08;
			_delay_ms(period);
			PORTA=0X0C;
			_delay_ms(period);
			PORTA=0X06;
			_delay_ms(period);
			PORTA=0X04;
			_delay_ms(period);
			PORTA=0X02;
			_delay_ms(period);
			PORTA=0X03;
			_delay_ms(period);
			PORTA=0X01;
			_delay_ms(period);
    }
	PORTA=0X09;/*LAST step to initial step*/
	_delay_ms(period);
	_delay_ms(1000);
	for(int i=0;i<50;i++)
	{
		PORTA=0X01;
		_delay_ms(period);
		PORTA=0X03;
		_delay_ms(period);
		PORTA=0X02;
		_delay_ms(period);
		PORTA=0X04;
		_delay_ms(period);
		PORTA=0X06;
		_delay_ms(period);
		PORTA=0X0C;
		_delay_ms(period);
		PORTA=0X08;
		_delay_ms(period);
		PORTA=0X09;
		_delay_ms(period);
	}
	}
}
	

	


