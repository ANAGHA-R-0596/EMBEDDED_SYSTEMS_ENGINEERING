/*
 * gpio.c
 *
 * Created: 29-09-2025 20:31:49
 *  Author: anagh
 */ 

#include "gpio.h"
#include <avr/io.h>
#define F_CPU 16000000UL

void gpio_init(void)
{
	DDRB |= (1 << PORTB1) | (1 << PORTB2) | (1 << PORTB3) | (1 << PORTB4) | (1 << PORTB5);
}


