#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("정수 2개를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	if (num1 < num2)
		printf("두 수의 차는 %d 입니다. \n", num2 - num1);
	else if (num2 < num1)
		printf("두 수의 차는 %d 입니다. \n", num1 - num2);
	return 0;
}