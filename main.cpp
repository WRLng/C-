#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "bsp.h"

static uint8_t res;


void main()
{
	unsigned int number = 0;
	scanf("%u",&number);
	back_print(number);
}
