/*
 * led.c
 *
 * Created: 1/17/2023 11:54:40 AM
 *  Author: Ahmed-AbdelWahab
 */ 
 
#include "led.h"
  
  void led_init(uint8_t pinNumber, uint8_t portNumber){
	  DIO_init(pinNumber, portNumber, OUT);
  }
  void led_on(uint8_t pintNumber, uint8_t portNumber){
	  DIO_write(pintNumber, portNumber, HIGH);
  }
  void led_off(uint8_t pinNumber, uint8_t portNumber){
	  DIO_write(pinNumber, portNumber, LOW);
  }
  void led_toggle(uint8_t pinNumber, uint8_t portNumber){
	  DIO_toggle(pinNumber, portNumber);
  }