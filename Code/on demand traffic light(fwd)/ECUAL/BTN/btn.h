/*
 * btn.h
 *
 * Created: 1/17/2023 10:45:26 PM
 *  Author: Ahmed-AbdelWahab
 */ 


#ifndef BTN_H_
#define BTN_H_

#include "../LED/led.h"
#include "../../MCAL/Timer/timer.h"


void btn_init(uint8_t pinNumber, uint8_t portName);
void btn_read(uint8_t pinNumber, uint8_t portName, uint8_t *result);


#endif /* BTN_H_ */