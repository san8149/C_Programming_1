#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	printf("두 정수를 입력하세요:");
	scanf("%d %d", &num1, &num2);	
	printf("%d & %d = %d", num1, num2, num1 & num2);
	printf("\n%d | %d = %d", num1, num2, num1 | num2);
	printf("\n%d ^ %d = %d", num1, num2, num1 ^ num2);
	return 0;
}