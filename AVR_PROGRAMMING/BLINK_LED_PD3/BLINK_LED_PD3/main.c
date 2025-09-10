/*
 * BLINK_LED_PD3.c
 * Created: 10-09-2025 12:05:46
 * Author : Anagha
 * To blink an LED connected to PD3.
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRD = 0b00001000; //Make PD3 as output
	
	while (1)
	{
		PORTD = 0b00001000;  //Turn ON LED at PD3.
		_delay_ms(1000);
		PORTD= 0b00000000;   //Turn OFF LED at PD3.
		_delay_ms(1000);
		
	}
}
