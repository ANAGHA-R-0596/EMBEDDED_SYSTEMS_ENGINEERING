/*
 * DELAY_TIMER0_NORMAL.c
 *
 * Created: 17-09-2025 20:47:43
 * Author : anagh
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>

void delay_3s(void)
{
	unsigned long int i, count = 187500;
	for(i = 0;i<count;i++) //This will run for 187500 for getting 3sec delay (62500*3 ie;1 sec = 62500 times)
	{
		TCNT0 = 0;
		TCCR0A = 0; // FOR NORMAL CLOCK SOURCE
		TCCR0B |= (1 << CS00); //001 FOR NO PRESCALING,SO SET CS00 TO 1.
		TIFR0 |= (1 << TOV0);  //SET OVERFLOW FLAG 0.
		while (!(TIFR0 & (1 << TOV0))); //WAITING TIMER OVERFLOW FLAG TO SET SO THAT WE GET 16US DELAY.
	}
}



int main(void)
{
	
    DDRB |= (1 << DDB5);
	
    while (1) 
    {
		PORTB ^= (1 << PORTB5);  // FOR BLINKING LED.
		delay_3s();
		
    }
}
	
	
	