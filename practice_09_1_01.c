#include <stdio.h>

int Max(int num1, int num2, int num3)
{
	if (num1 > num2)
		if (num1 > num3)
			printf("제일 큰 수는 %d 입니다. \n", num1);
		else
			printf("제일 큰 수는 %d 입니다. \n", num3);
	else
		if (num2 > num3)
			printf("제일 큰 수는 %d 입니다. \n", num2);
		else
			printf("제일 큰 수는 %d 입니다. \n", num3);
}

int min(int num1, int num2, int num3)
{
	if (num1 < num2)
		if (num1 < num3)
			printf("제일 작은 수는 %d 입니다. \n", num1);
		else
			printf("제일 작은 수는 %d 입니다. \n", num3);
	else
		if (num2 < num3)
			printf("제일 작은 수는 %d 입니다. \n", num2);
		else
			printf("제일 작은 수는 %d 입니다. \n", num3);
}

int main(void)
{
	int num1, num2, num3;
	printf("정수 세 개를 입력하세요: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	Max(num1, num2, num3);
	min(num1, num2, num3);
	return 0;
}