#include <stdio.h>

int Fibonacci(int num)
{
	int f1 = 0, f2 = 1, f3;
	if (num == 1)
		printf("%d", 1);
	else
		printf("%d %d ", f1, f2);
		for (int i = 0;i < num - 2;i++)
		{
			f3 = f1 + f2;
			printf("%d ", f3);
			f2 = f3;
			f1 = f2;
		}
}

int main(void)
{
	int num;
	printf("출력하고자 하는 수열의 수를 입력하세요: ");
	scanf_s("%d", &num);
	if (num < 1)
	{
		printf("1 이상의 값을 입력하세요. \n");
		return 1;
	}
	else
		Fibonacci(num);
	return 0;
}