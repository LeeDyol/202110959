#include <stdio.h>

int Max(int num1, int num2, int num3)
{
	if (num1 > num2)
		if (num1 > num3)
			printf("���� ū ���� %d �Դϴ�. \n", num1);
		else
			printf("���� ū ���� %d �Դϴ�. \n", num3);
	else
		if (num2 > num3)
			printf("���� ū ���� %d �Դϴ�. \n", num2);
		else
			printf("���� ū ���� %d �Դϴ�. \n", num3);
}

int min(int num1, int num2, int num3)
{
	if (num1 < num2)
		if (num1 < num3)
			printf("���� ���� ���� %d �Դϴ�. \n", num1);
		else
			printf("���� ���� ���� %d �Դϴ�. \n", num3);
	else
		if (num2 < num3)
			printf("���� ���� ���� %d �Դϴ�. \n", num2);
		else
			printf("���� ���� ���� %d �Դϴ�. \n", num3);
}

int main(void)
{
	int num1, num2, num3;
	printf("���� �� ���� �Է��ϼ���: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	Max(num1, num2, num3);
	min(num1, num2, num3);
	return 0;
}