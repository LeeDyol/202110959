#include <stdio.h>

int main(void)
{
	int num, i = 9;
	printf("�� ���� ����Ͻðڽ��ϱ�? ");
	scanf("%d", &num);
	while (i>0)
	{
		printf("%d X %d = %d \n", num, i, num * i);
		i--;
	}
	return 0;
}