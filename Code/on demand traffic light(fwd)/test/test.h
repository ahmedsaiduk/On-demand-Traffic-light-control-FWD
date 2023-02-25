/*
 * test.h
 *
 * Created: 2/25/2023 10:02:04 AM
 *  Author: Ahmed-win
 */ 


#ifndef TEST_H_
#define TEST_H_


#include "../Utilities/macros.h"

void dio_init_sucess_case(void);
void dio_init_failure_case(void);

void dio_read_sucess_case(void);
void dio_read_failure_case(void);

void dio_write_sucess_case(void);
void dio_write_failure_case(void);

void dio_toggle_sucess_case(void);
void dio_toggle_failure_case(void);

#endif /* TEST_H_ */