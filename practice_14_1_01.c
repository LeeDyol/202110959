#include <stdio.h>

int SquareByValue(int n)
{
	return n * n;
}

int SquareByPointer(int* ptr)
{
	int n = *ptr;
	*ptr = n * n;
}

int main(void)
{
	int num = 10;
	printf("%d \n", SquareByValue(num));
	printf("%d \n", num);
	SquareByPointer(&num);
	printf("%d \n", num);
	return 0;
}