#include <stdio.h>

int main(void)
{
	int num, i, ali = 0;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);
	for (i = 1;i < 100;i++)
	{
		if (num % i == 0)
			ali++;
	}
	if (ali == 2)
		// ����� ������ 2����� �Ҽ�
		printf("It is a prime number \n");
	else
		printf("It is a not prime number \n");
	return 0;
}