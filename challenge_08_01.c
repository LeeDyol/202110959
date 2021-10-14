#include <stdio.h>

int SquareOfTwo(int num)
{
	int result = 1;
	for (int i = 0;i < num;i++)
		result *= 2;
	return result;
}

int main(void)
{
	int num;
	printf("2의 몇승을 구하시겠습니까? ");
	scanf_s("%d", &num);
	printf("2의 %d 승은 %d 입니다. \n", num, SquareOfTwo(num));
	return 0;
}