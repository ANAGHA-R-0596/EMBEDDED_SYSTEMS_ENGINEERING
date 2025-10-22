/*
 * UART_TRANSMIT.c
 * TO TRANSMIT A SINGLE CHARACTER AS WELL AS A STRING USING UART TRANSMISSION.
 * Created: 17-10-2025 20:53:23
 * Author : ANAGHA R
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void UART_init(void);

int main(void)
{
	UART_init();
   
    while (1) 
    {
		
		// Wait for empty transmit buffer
		while (!(UCSR0A & (1 << UDRE0)));
		
		// Put data into buffer,sends the data
		UDR0 = 'A';
		
		
		// Send each character of "HELLO WORLD"
		const char message[] = "\nHELLO WORLD\n";
		int i = 0;
		
		while (message[i] != '\0')
		{
			// Wait for empty transmit buffer
			while (!(UCSR0A & (1 << UDRE0)));
			
			// Put data into buffer,sends the data
			UDR0 = message[i];
			
			i++;
		}
		
		_delay_ms(1000);	// Send every 1 second
		
    }
}

void UART_init(void)
{
	// Set baud rate to 9600
	UBRR0H = 0;
	UBRR0L = 103;
	
	// Enable transmitter
	UCSR0B = (1 << TXEN0);
	
	// UCSZ01:0 = 11 for 8-bit data
	UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}