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
	printf("2�� ����� ���Ͻðڽ��ϱ�? ");
	scanf_s("%d", &num);
	printf("2�� %d ���� %d �Դϴ�. \n", num, SquareOfTwo(num));
	return 0;
}