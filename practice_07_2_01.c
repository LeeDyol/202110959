#include <stdio.h>

int main(void)
{
	int num=0, i=0, sum=0;
	while (i < 5)
	{
		while (num < 1)
		{
			printf("������ �Է��ϼ���: ");
			scanf("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("�Է��Ͻ� �������� ���� %d �Դϴ�. \n", sum);
	return 0;
}