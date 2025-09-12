 
/*
 * MOTOR_DELAY_FUNC_PARAMETER.c
 * To rotate the motor in clockwise and Anti clockwise direction using functions.
 * Created: 10-09-2025 21:11:41
 * Author : Anagha
 */ 

#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>
void clockwise(int);
void stop(int);
void counter_clockwise(int);

int main(void)
{
	DDRB |= (1 << DDB5);   // Set PB5 as output
	DDRB |= (1 << DDB4);   // Set PB4 as output
	
	while (1)
	{
		clockwise(7000);
		stop(2000);
		counter_clockwise(7000);
		stop(2000);	
	}
}

// Rotate Motor in clockwise direction
void clockwise(int delay)
{
	PORTB |= (1 << PORTB5);     // Set PB5 HIGH
	PORTB &= ~(1 << PORTB4);    // Set PB4 LOW
	while (delay--)
	{
		_delay_ms(1);
	}
}

// Stop Motor
void stop(int delay)
{
	PORTB &= ~(1 << PORTB4);    // Clear PB4
	PORTB &= ~(1 << PORTB5);    // Clear PB5
	while (delay--) 
	{
		_delay_ms(1);
	}           
}


// Rotate Motor in counter clockwise direction
void counter_clockwise(int delay)
{
	PORTB |= (1 << PORTB4);     // Set PB4 HIGH
	PORTB &= ~(1 << PORTB5);    // Set PB5 LOW
	while (delay--)
	{
		_delay_ms(1);
	}
}


