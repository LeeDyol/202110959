#include <stdio.h>

int main(void)
{
	int num1, num2 = 0 ;
	printf("양의 정수 하나를 입력하세요: ");
	scanf("%d", &num1);
	while (num1>num2)
	{
		printf("Hello world! \n");
		num2++;
	}
	return 0;
}