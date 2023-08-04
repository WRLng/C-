#include "bsp.h"


//比较两个数字的大小
uint8_t MAX(uint8_t a, uint8_t b)
{
	return((a > b) ? a : b);	
}

//判断闰年     是为1，不是为0
uint8_t  LEAP_YEAR(uint8_t year)
{
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

//打印素数（只能被1和自身整除） 是为1，不是为0
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

//关机程序
/*
	shutdown -s -t 120       120秒后关机
	shutdowm -a              取消关机
    system()                 执行系统命令
*/
void SHUTDOWN()
{
	char input[20];
		system("shutdown -s -t 120");  //头文件为string.h
	while(1)
	{ 
		printf("请注意，你的电脑在两分钟后将关机，若要取消关机，请输入取消");
		scanf("%s",input);
	if (strcmp(input, "取消") == 0)    //两个字符串比较需要使用strcmp(string compare)比较，相同为0，头文件为stdlib.h
		{
			system("shutdowmn -a");
			break;
		}
	}
}

//正向输出每一位
void print(uint32_t n)
{
	if (n > 9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
}
//逆向输出每一位
void back_print(uint32_t n)
{
	if (n > 9)
	{
	  printf("%d ", n % 10);
	  back_print(n / 10);
	}
	printf("%d ", n);
}




