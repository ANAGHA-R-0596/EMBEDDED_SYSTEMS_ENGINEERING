/*
 * BLINK_LED_PD3_PULLDOWN.c
 *
 * Created: 10-09-2025 12:22:42
 * Author : Anagha
 * To blink an LED connected at PD3 through a switch with a pull down circuit.
 */ 

#define F_CPU 16000000UL        // Define CPU frequency as 16 MHz 
#include <avr/io.h>             
#include <util/delay.h>         

int main(void)
{
	DDRD = 0b00001000;          // Set PD3 as output 
	DDRC = 0b00000000;          // Set PORTC pins as input

	while (1)
	{
		if (PINC == 0b00000001) // Check if PINC equals 00000001 ie; PINC0 is HIGH
		{
			PORTD = 0b00001000; // Set PD3 high,turn ON LED 
		}
		else
		{
			PORTD = 0b00000000; // Clear PD3,turn OFF LED 
		}
	}
}


