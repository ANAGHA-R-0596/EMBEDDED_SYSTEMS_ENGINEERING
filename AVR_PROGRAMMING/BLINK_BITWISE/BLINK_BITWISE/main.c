/*
 * BLINK_BITWISE.c
 *
 * Created: 10-09-2025 20:21:03
 * Author : anagh
 */ 
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>


int main(void)
{
    DDRB |= (1 << DDB5);
    while (1) 
    {
		PORTB |= (1 << PORTB5);
		_delay_ms(1000);
		PORTB &= ~(1 << PORTB5);
		_delay_ms(1000);
		
    }
}

