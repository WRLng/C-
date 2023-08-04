#define _CRT_SECURE_NO_WARNINGS

#ifndef		_BSP_H
#define		_BSP_H


#include  "stdio.h"
#include  "math.h"
#include  "string.h"
#include  "stdlib.h"


typedef  unsigned char      uint8_t;
typedef  unsigned short int uint16_t;
typedef	 unsigned int	    uint32_t;


uint8_t		MAX(uint8_t a, uint8_t b);
uint8_t		LEAP_YEAR(uint8_t year);
uint8_t		PRIME_NUMBER(uint8_t number);

void SHUTDOWN();
void print(uint32_t n);
void back_print(uint32_t n);

#endif     /*_BSP_H*/
 