#include <stdio.h>

int Swap(int *n1, int *n2, int *n3)
{
	int temp;
	temp = *n1;
	*n1 = *n3;
	*n3 = *n2;
	*n2 = temp;
}

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	Swap(&num1, &num2, &num3);
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}