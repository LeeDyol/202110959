#include <stdio.h>

int main(void)
{
	int num = 1, sum = 0;
	while (num != 0)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d", &num);
		sum += num;
	}
	printf("�Է��� ���� ���� %d �Դϴ�. \n", sum);
	return 0;
}