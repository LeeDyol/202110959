#include <stdio.h>

int main(void)
{
	int kor, eng, mat;
	double avr;
	printf("����, ����, ���� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &kor, &eng, &mat);
	avr = (kor + eng + mat) / 3;
	printf("�� ������ ����� %f �Դϴ�. \n", avr);
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