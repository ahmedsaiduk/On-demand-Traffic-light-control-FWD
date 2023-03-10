/*
* dio.c
*
* Created: 1/17/2023 12:02:43 PM
*  Author: Ahmed-AbdelWahab
*/

#include "dio.h"

int DIO_init(uint8_t pinNumber, uint8_t portName, uint8_t direction)
{
	switch(portName)
	{
		case PORT_A:
		if(direction == IN)
		{
			clear_pin(pinNumber, DDRA);
		}
		else if(direction == OUT)
		{
			set_pin(pinNumber, DDRA);
		}
		else
		{
			return 1;
		}
		break;
		case PORT_B:
		if (direction == IN)
		{
			clear_pin(pinNumber, DDRB);
		}
		else if(direction == OUT)
		{
			set_pin(pinNumber, DDRB);
		}
		else
		{
			return 1;
		}
		break;
		case PORT_C:
		if(direction == IN)
		{
			clear_pin(pinNumber, DDRC);
		}
		else if(direction == OUT)
		{
			set_pin(pinNumber, DDRC);
		}
		else
		{
			return 1;
		}
		break;
		case PORT_D:
		if(direction == IN)
		{
			clear_pin(pinNumber, DDRD);
		}
		else if(direction == OUT)
		{
			set_pin(pinNumber, DDRD);
		}
		else
		{
			return 1;
		}
		break;
	}
	return 0;
}

int DIO_read(uint8_t pinNumber, uint8_t portName, uint8_t *value){
	switch(portName)
	{
		case PORT_A:
		*value = get_pin(pinNumber, PINA);
		break;
		case PORT_B:
		*value = get_pin(pinNumber, PINB);
		break;
		case PORT_C:
		*value = get_pin(pinNumber, PINC);
		break;
		case PORT_D:
		*value = get_pin(pinNumber, PIND);
		break;
		default:
		return 1;
		
	}
	return 0;
}
int DIO_write(uint8_t pinNumber, uint8_t portName, uint8_t value){
	switch(portName)
	{
		case PORT_A:
		if(value == LOW)
		{
			clear_pin(pinNumber, PORTA);
		}
		else if(value == HIGH)
		{
			set_pin(pinNumber, PORTA);
		}
		else
		{
			return 1;
		}
		break;
		case PORT_B:
		if(value == LOW)
		{
			clear_pin(pinNumber, PORTB);
		}
		else if(value == HIGH)
		{
			set_pin(pinNumber, PORTB);
		}
		else
		{
			return 1;
		}
		break;
		case PORT_C:
		if(value == LOW)
		{
			clear_pin(pinNumber, PORTC);
		}
		else if(value == HIGH)
		{
			set_pin(pinNumber, PORTC);
		}
		else
		{
			return 1;
		}
		break;
		case PORT_D:
		if(value == LOW)
		{
			clear_pin(pinNumber, PORTD);
		}
		else if(value == HIGH)
		{
			set_pin(pinNumber, PORTD);
		}
		else
		{
			return 1;
		}
		break;
	}
	return 0;
}

int DIO_toggle(uint8_t pinNumber, uint8_t portName){
	switch(portName){
		case PORT_A:
		toggle_pin(pinNumber, PORTA);
		break;
		case PORT_B:
		toggle_pin(pinNumber, PORTB);
		break;
		case PORT_C:
		toggle_pin(pinNumber, PORTC);
		break;
		case PORT_D:
		toggle_pin(pinNumber, PORTC);
		break;
		default:
		return 1;
	}
	return 0;
}