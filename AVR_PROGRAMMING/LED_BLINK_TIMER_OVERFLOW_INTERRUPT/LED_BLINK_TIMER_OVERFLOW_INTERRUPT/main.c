/*
 * LED_BLINK_TIMER_OVERFLOW_INTERRUPT.c
 * BLINK AN LED WITH 1 SEC DELAY USING TIMER OVERFLOW INTERRUPT.
 * Created: 29-09-2025 20:50:16
 * Author : ANAGHA R
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>
volatile uint16_t count = 0;
ISR(TIMER0_OVF_vect) //INTERRUPT SERVICE ROUTINE,TIMER0_OVF_vect=>INTERRUPT VECTOR TABLE WHICH CONTAINS ADDRESS FOR TIMER OVERFLOW INTERRUPT.
{
	count++;
	if (count >= 977)
	{
		PORTB ^= (1 << PORTB5);
		count = 0;
	}
		
	
}
int main(void)
{
    DDRB |= (1 << DDB5);
	
	TCCR0A = 0; // FOR NORMAL CLOCK SOURCE
	TCCR0B |= (1 << CS00) | (1 << CS01); //64 PRESCALING
	TIMSK0 |= (1 << TOIE0);  //ENABLING TIMER OVERFLOW INTERRUPT FOR TIMER0 IN NORMAL MODE
	sei(); //ENABLING GLOBAL INTERRUPT
	
	
    while (1) 
    {
		
    }
}

