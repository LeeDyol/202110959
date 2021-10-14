#include <stdio.h>

double CelToFah(double C)
{
	double F;
	F = (C * 1.8) + 32;
	printf("화씨온도는 %.2f 입니다. \n", F);
}

double FahToCel(double F)
{
	double C;
	C = (F - 32) / 1.8;
	printf("섭씨온도는 %.2f 입니다. \n", C);
}

int main(void)
{
	double F, C;
	int sel;
	printf("무엇을 변환 하시겠습니까? 화씨는 1을, 섭씨는 2를 입력하세요: ");
	scanf_s("%d", &sel);
	if (sel == 2)
	{
		printf("섭씨 온도를 입력하세요: ");
		scanf_s("%lf", &C);
		CelToFah(C);
	}
	else if (sel == 1)
	{
		printf("화씨 온도를 입력하세요: ");
		scanf_s("%lf", &F);
		FahToCel(F);
	}
	else
		printf("선택 오류입니다. \n");
	return 0;
}