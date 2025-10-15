/*
 * 162_LCD_DRIVER.c
 * TO DISPLAY INTEGER NUMBER AND FLOAT NUMBER
 * Created: 08-10-2025 20:15:58
 * Author: Anagha R
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"

int main(void)
{
	lcd_init();
	lcd_set_cursor(0, 0);
	lcd_print("Hello LCD");

	lcd_set_cursor(1, 0);
	lcd_print("It works! ");
	_delay_ms(1000);
	lcd_clear();
	// small demo: print a number
	lcd_print_uint16(1234);
	//print a float value
	lcd_print_float(15.6234,4);

	while (1)
	{
		lcd_set_cursor(0, 0);
		lcd_print("INTEGER NUMBER");
		lcd_set_cursor(1, 0);
		lcd_print_uint16(1234);
		_delay_ms(1000);
		lcd_clear();
		_delay_ms(1000);
		lcd_set_cursor(0, 0);
		lcd_print("FLOAT NUMBER");
		lcd_set_cursor(1, 0);
		lcd_print_float(15.6234,4);
		_delay_ms(1000);
		lcd_clear();
		_delay_ms(1000);

	}
}


