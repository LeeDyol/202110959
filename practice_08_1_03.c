#include <stdio.h>

int main(void)
{
	int kor, eng, mat;
	double avr;
	printf("국어, 영어, 수학 점수를 입력하세요: ");
	scanf("%d %d %d", &kor, &eng, &mat);
	avr = (kor + eng + mat) / 3;
	printf("세 과목의 평균은 %f 입니다. \n", avr);
	if (avr >= 90)
		printf("A");
	else if (avr >= 80 && avr < 90)
		printf("B");
	else if (avr >= 70 && avr < 80)
		printf("C");
	else if (avr >= 50 && avr < 70)
		printf("D");
	else
		printf("F")
	return 0;
}