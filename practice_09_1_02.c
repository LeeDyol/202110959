#include <stdio.h>

double CelToFah(double C)
{
	double F;
	F = (C * 1.8) + 32;
	printf("ȭ���µ��� %.2f �Դϴ�. \n", F);
}

double FahToCel(double F)
{
	double C;
	C = (F - 32) / 1.8;
	printf("�����µ��� %.2f �Դϴ�. \n", C);
}

int main(void)
{
	double F, C;
	int sel;
	printf("������ ��ȯ �Ͻðڽ��ϱ�? ȭ���� 1��, ������ 2�� �Է��ϼ���: ");
	scanf_s("%d", &sel);
	if (sel == 2)
	{
		printf("���� �µ��� �Է��ϼ���: ");
		scanf_s("%lf", &C);
		CelToFah(C);
	}
	else if (sel == 1)
	{
		printf("ȭ�� �µ��� �Է��ϼ���: ");
		scanf_s("%lf", &F);
		FahToCel(F);
	}
	else
		printf("���� �����Դϴ�. \n");
	return 0;
}