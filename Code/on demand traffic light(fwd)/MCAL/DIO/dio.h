/*
 * dio.h
 *
 * Created: 1/17/2023 12:02:58 PM
 *  Author: Ahmed-AbdelWahab
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../Utilities/Macros.h"
#include "../../Utilities/registers.h"

int DIO_init(uint8_t pinNumber, uint8_t portName, uint8_t direction);
int DIO_read(uint8_t pinNumber, uint8_t portName, uint8_t *value);
int DIO_write(uint8_t pinNumber, uint8_t portName, uint8_t value);
int DIO_toggle(uint8_t pinNumber, uint8_t portName);


#endif /* DIO_H_ */