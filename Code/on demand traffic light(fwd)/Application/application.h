/*
 * application.h
 *
 * Created: 1/17/2023 10:58:42 AM
 *  Author: Ahmed-AbdelWahab
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_



#define F_CPU 1000000
#include "../ECUAL/LED/led.h"
#include "../ECUAL/BTN/btn.h"
#include "../MCAL/Interrupt/interrupt.h"
#include "../MCAL/Timer/timer.h"

void app_init();
void app_start();

#endif /* APPLICATION_H_ */