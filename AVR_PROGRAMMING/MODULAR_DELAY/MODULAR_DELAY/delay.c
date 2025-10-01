/*
 * delay.c
 *
 * Created: 26-09-2025 20:28:39
 *  Author: anagh
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL

void timer0_init(void)
{
	TCNT0 = 0;  //MAKE TIMER COUNTER 0
	TCCR0A |= (1 << WGM01); //CTC MODE
	OCR0A = 249;
	TCCR0B |= (1 << CS00) | (1 << CS01); //PRESCALE 64
	TIFR0 |= (1 << OCF0A); //WRITING 1 TO SET THE FLAG
	
}

void delay(uint16_t ms)
{
	timer0_init();
	while(ms--)  //Creates delay for "ms" millisecond,here it's 5000ms
	{
		while (!(TIFR0 & (1 << OCF0A))) //1ms loop
		{
			
		}
		TIFR0 |= (1 << OCF0A);
	}
	
}

