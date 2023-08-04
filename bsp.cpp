#include "bsp.h"


//�Ƚ��������ֵĴ�С
uint8_t MAX(uint8_t a, uint8_t b)
{
	return((a > b) ? a : b);	
}

//�ж�����     ��Ϊ1������Ϊ0
uint8_t  LEAP_YEAR(uint8_t year)
{
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

//��ӡ������ֻ�ܱ�1������������ ��Ϊ1������Ϊ0
uint8_t PRIME_NUMBER(uint8_t number)
{
		uint8_t j;
		for (j = 2; j < sqrt(number); j++)
		{
			if (number % j == 0)
			{
				return 0;
			}
		}
		return 1;
}

//�ػ�����
/*
	shutdown -s -t 120       120���ػ�
	shutdowm -a              ȡ���ػ�
    system()                 ִ��ϵͳ����
*/
void SHUTDOWN()
{
	char input[20];
		system("shutdown -s -t 120");  //ͷ�ļ�Ϊstring.h
	while(1)
	{ 
		printf("��ע�⣬��ĵ����������Ӻ󽫹ػ�����Ҫȡ���ػ���������ȡ��");
		scanf("%s",input);
	if (strcmp(input, "ȡ��") == 0)    //�����ַ����Ƚ���Ҫʹ��strcmp(string compare)�Ƚϣ���ͬΪ0��ͷ�ļ�Ϊstdlib.h
		{
			system("shutdowmn -a");
			break;
		}
	}
}

//�������ÿһλ
void print(uint32_t n)
{
	if (n > 9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
}
//�������ÿһλ
void back_print(uint32_t n)
{
	if (n > 9)
	{
	  printf("%d ", n % 10);
	  back_print(n / 10);
	}
	printf("%d ", n);
}




