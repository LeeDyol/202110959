#include <stdio.h>

int main(void)
{
	int num;
	int i = 1;
	printf("�ϳ��� ���� ������ �Է��ϼ���: ");
	scanf("%d", &num);
	while (num >= i)
	{
		printf("%d", i*3);
		i++;
	}
	return 0;

}