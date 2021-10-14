#include <stdio.h>

int SquareOfTwo(int num)
{
	if (num == 1)
		return 2;
	else
		return 2 * SquareOfTwo(num - 1);
}

int main(void)
{
	int num;
	printf("2의 몇승을 구하시겠습니까? ");
	scanf_s("%d", &num);
	printf("2의 %d 승은 %d 입니다. \n", num, SquareOfTwo(num));
	return 0;
}