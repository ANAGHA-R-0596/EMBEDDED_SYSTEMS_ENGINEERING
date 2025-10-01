/*
 * MODULAR_GPIO.c
 * To blink 5 LEDs simultaneously with 2 sec delay using CTC mode
 * Created: 29-09-2025 20:06:59
 * Author : ANAGHA R
 */ 

#include <avr/io.h>
#include <stdint.h>
#include "gpio.h"
#include "delay.h"
#define F_CPU 16000000UL  

int main(void)
{
	gpio_init();

	while (1)
	{
		PORTB ^= (1 << PORTB1) | (1 << PORTB2) | (1 << PORTB3) | (1 << PORTB4) | (1 << PORTB5);
		delay(2000);  // 2 seconds delay
		
	}
}


