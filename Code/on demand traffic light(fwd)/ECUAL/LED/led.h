/*
 * led.h
 *
 * Created: 1/17/2023 11:54:10 AM
 *  Author: Ahmed-AbdelWahab
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO/dio.h"

void led_init(uint8_t pinNumber, uint8_t portNumber);
void led_on(uint8_t pintNumber, uint8_t portNumber);
void led_off(uint8_t pinNumber, uint8_t portNumber);
void led_toggle(uint8_t pinNumber, uint8_t portNumber);


#endif /* LED_H_ */