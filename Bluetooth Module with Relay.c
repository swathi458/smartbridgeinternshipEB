/*
 * GccApplication2.c
 *
 * Created: 5/15/2019 10:37:40 PM
 * Author : user
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <inttypes.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define LED PORTB
char buffer[10];

void USARTInit(uint16_t ubrr_value)
{
	//set Baud rate
	UBRRL=ubrr_value;
	UBRRH=(ubrr_value>>8);
	UCSRC=(1<<RXEN)|(1<<UCSZ0)|(1<<UCSZ1);
	//Enable the receiver and transmitter
	UCSRB=(1<<RXEN)|(1<<TXEN);
}
char USARTReadChar()
{
	while(!(UCSRA&(1<<RXC)))
	{
		
	}

	return UDR;
}
   void USARTWriteChar(char data)
   {
	   while(!(UCSRA&(1<<UDRE)))
	   {
		   //Do Nothing
	   }
	   UDR=data;
   }

int main(void)
{
    
    USARTInit(77);
	DDRB=0XFF;
	char data;
	LED=0;
	while(1)
	{
		data = USARTReadChar();
		if(data=='1')
		{
			PORTB=(1<<PB0);
		}
		else if(data=='2')
		{
			PORTB=(0<<PB0);
		}
		else if(data=='3')
		{
			PORTB=(1<<PB1);
		}
		else if(data=='4')
		{
			PORTB=(0<<PB1);
		}
	}
	return 0;
	
}

