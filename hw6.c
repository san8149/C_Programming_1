#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int num;
	printf("Please enter a number:");
	scanf("%d", &num);	
	if (num >= 1)
	{		
		for (int divisor = 2; divisor < num; divisor++)
		{
			if (num % divisor == 0)
			{
				printf("It is not prime number");
				return 0;
			}

		}
		printf("It is a prime number");
	}
	else
	{
		printf("It is not prime number");
	}	
	return 0;
}