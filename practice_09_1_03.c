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
	printf("����ϰ��� �ϴ� ������ ���� �Է��ϼ���: ");
	scanf_s("%d", &num);
	if (num < 1)
	{
		printf("1 �̻��� ���� �Է��ϼ���. \n");
		return 1;
	}
	else
		Fibonacci(num);
	return 0;
}