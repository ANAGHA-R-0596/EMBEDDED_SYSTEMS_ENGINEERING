/*
 * ROTATE_CW_CCW_STOP_FUNCTION.c
 * To rotate the motor in clockwise and Anti clockwise direction using functions.
 * Created: 10-09-2025 21:11:41
 * Author : Anagha
 */ 

#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>
void clockwise();
void stop();
void counter_clockwise();
void stop_ccw();

int main(void)
{
	DDRB |= (1 << DDB5);   // Set PB5 as output
	DDRB |= (1 << DDB4);   // Set PB4 as output
	
	while (1)
	{
		clockwise();
		stop();
		counter_clockwise();
		stop_ccw();	
	}
}

// Rotate Motor in clockwise direction
void clockwise()
{
	PORTB |= (1 << PORTB5);     // Set PB5 HIGH
	PORTB &= ~(1 << PORTB4);    // Set PB4 LOW
	_delay_ms(5000);            // Run motor for 5 seconds
}

// Stop Motor
void stop()
{
	PORTB &= ~(1 << PORTB4);    // Clear PB4
	PORTB &= ~(1 << PORTB5);    // Clear PB5
	_delay_ms(2000);            // Wait 2 seconds
}


// Rotate Motor in counter clockwise direction
void counter_clockwise()
{
	PORTB |= (1 << PORTB4);     // Set PB4 HIGH
	PORTB &= ~(1 << PORTB5);    // Set PB5 LOW
	_delay_ms(5000);            // Run motor for 5 seconds
}

// Stop Motor
void stop_ccw()
{
	PORTB &= ~(1 << PORTB5);    // Clear PB5
	PORTB &= ~(1 << PORTB4);    // Clear PB4
	_delay_ms(2000);            // Wait 2 seconds
}

