/*
 * GccApplication8.c
 *
 * Created: 5/10/2019 2:17:35 PM
 * Author : user
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>

#define RS 7
#define E 5
void send_command(unsigned char command);
void send_character(unsigned char character);


int main(void)
{
	DDRC = 0XFF;
	DDRD  = 0XFF;
	_delay_ms(50);
	send_command(0X01);
	send_command(0X38);
	send_command(0X0E);
	
	send_character(77);
	send_character(69);
	send_character(71);
	send_character(72);
	send_character(65);
	send_character(78);
	send_character(65);
	
	
}
	void send_command(unsigned char command)
	{
		PORTC=command;
		PORTD&=~(1<<RS);
		PORTD|=(1<<E);
		_delay_ms(50);
		PORTD &=~(1<<E);
	}
	void send_character(unsigned char character)
	{
		PORTC=character;
		PORTD|=(1<<RS);
		PORTD|=(1<<E);
		_delay_ms(50);
		PORTD &=~(1<<E);
	}
    


