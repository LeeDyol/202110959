#include <stdio.h>

int main(void)
{
	double num1, num2;
	printf("�� ���� �Ǽ��� �Է��ϼ���: ");
	scanf("%lf %lf", &num1, &num2);

	printf("�� ���� ����: %f \n", num1 + num2);
	printf("�� ���� ����: %f \n", num1 - num2);
	printf("�� ���� ����: %f \n", num1 * num2);
	printf("�� ���� ������ : %f \n", num1 / num2);
	return 0;
}