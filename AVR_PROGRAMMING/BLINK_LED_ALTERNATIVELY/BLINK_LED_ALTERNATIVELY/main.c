/*
 * BLINK_LED_ALTERNATIVELY.c
 * To Blink 2 LEDs alternatively using atmega328.
 * Created: 15-09-2025 17:02:52
 * Author : anagh
 */ 



#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>
void blink_LED1();
void stop();
void blink_LED2();

int main(void)
{
	DDRB |= (1 << DDB5);   // Set PB5 as output
	DDRB |= (1 << DDB4);   // Set PB4 as output
	
	while (1)
	{
		blink_LED1();
		stop();
		blink_LED2();
		stop();
		
	}
}

// Blink the 1st LED
void blink_LED1()
{
	PORTB |= (1 << PORTB5);     // Set PB5 HIGH
	PORTB &= ~(1 << PORTB4);    // Set PB4 LOW
	_delay_ms(3000);            // Blink LED1 for 5 seconds
}

// Stop Blinking
void stop()
{
	PORTB &= ~(1 << PORTB4);    // Clear PB4
	PORTB &= ~(1 << PORTB5);    // Clear PB5
	_delay_ms(1000);            // Wait 2 seconds
}


// Blink the 2nd LED
void blink_LED2()
{
	PORTB |= (1 << PORTB4);     // Set PB4 HIGH
	PORTB &= ~(1 << PORTB5);    // Set PB5 LOW
	_delay_ms(3000);            // Blink LED2 for 5 seconds
}



