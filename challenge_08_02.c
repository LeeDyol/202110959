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
	printf("2�� ����� ���Ͻðڽ��ϱ�? ");
	scanf_s("%d", &num);
	printf("2�� %d ���� %d �Դϴ�. \n", num, SquareOfTwo(num));
	return 0;
}