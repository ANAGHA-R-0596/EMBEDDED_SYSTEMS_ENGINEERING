/*
 * MODULAR_DELAY.c
 * TO BLINK AN LED USING CTC MODE WITH A DELAY OF 5 SECONDS USING MODULAR PROGRAMMING.
 * Created: 26-09-2025 20:20:30
 * Author : ANAGHA R
 */ 


#define F_CPU 16000000UL
#include <avr/io.h>
#include "delay.h"
#include <stdint.h>


int main(void)
{
	DDRB |= (1 << DDB5);
	 
    while (1) 
    {
		PORTB ^= (1 << PORTB5);
		delay(5000);
    }
}

