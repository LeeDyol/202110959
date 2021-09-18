#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result1, result2, result3;
	printf("두 개의 정수를 입력하세요: ");
	scanf_s("%d %d", &num1, &num2);
	result1 = num1 & num2;
	result2 = num1 | num2;
	result3 = num1 ^ num2;
	printf("%d & %d = %d \n", num1, num2, result1);
	printf("%d | %d = %d \n", num1, num2, result2);
	printf("%d ^ %d = %d \n", num1, num2, result3);
	return 0;
}