#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	printf("�� ������ �Է��ϼ���:");
	scanf("%d %d", &num1, &num2);	
	printf("%d & %d = %d", num1, num2, num1 & num2);
	printf("\n%d | %d = %d", num1, num2, num1 | num2);
	printf("\n%d ^ %d = %d", num1, num2, num1 ^ num2);
	return 0;
}