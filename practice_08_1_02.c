#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("���� 2���� �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	if (num1 < num2)
		printf("�� ���� ���� %d �Դϴ�. \n", num2 - num1);
	else if (num2 < num1)
		printf("�� ���� ���� %d �Դϴ�. \n", num1 - num2);
	return 0;
}