#include <stdio.h>

int main(void)
{
	int num1, num2, result = 0;
	printf("���� 2���� �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	result = num1 < num2 ? num2 - num1 : num1 - num2;
	printf("�� ���� ���� %d �Դϴ�. \n", result);
	return 0;
}