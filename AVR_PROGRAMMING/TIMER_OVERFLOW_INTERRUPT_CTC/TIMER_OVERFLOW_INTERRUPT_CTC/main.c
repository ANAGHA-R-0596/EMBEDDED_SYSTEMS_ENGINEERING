/*
 * TIMER_OVERFLOW_INTERRUPT_CTC.c
 * BLINK AN LED WITH 2 SEC DELAY IN CTC MODE USING TIMER OVERFLOW INTERRUPT.
 * Created: 03-10-2025 14:29:33
 * Author : ANAGHA R
 */ 

#define F_CPU 16000000UL
#include <avr/interrupt.h>
#include <avr/io.h>
#include <stdint.h>


volatile uint16_t count = 0;

ISR(TIMER0_COMPA_vect) //INTERRUPT SERVICE ROUTINE,TIMER0_COMPA_vect
{
	count++;
	if (count >= 125) // 125 OVERFLOWS REQUIRED FOR 2 SECONDS DELAY.
	{
		PORTB ^= (1 << PORTB5); //TOGGLE LED
		count = 0;
	}
		
	
}
int main(void)
{
    DDRB |= (1 << DDB5);
	OCR0A = 249;
	TCCR0A = (1 << WGM01); // FOR CTC
	TCCR0B |= (1 << CS00) | (1 << CS02); //1024 PRESCALING
	TIMSK0 |= (1 << OCIE0A);  //ENABLING TIMER OVERFLOW INTERRUPT FOR TIMER0 IN CTC MODE
	sei(); //ENABLING GLOBAL INTERRUPT
	
	
    while (1) 
    {
		
    }
}


