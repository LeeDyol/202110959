#include <stdio.h>

int main(void)
{
	int num1, num2, i=0;
	double sum = 0;
	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�?");
	scanf("%d", &num1);
	while (i<num1)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d", &num2);
		sum += num2;
		i++;
	}
	printf("�Է��� ���ڵ��� ����� %f �Դϴ�. \n", sum / num1);
	return 0;
}