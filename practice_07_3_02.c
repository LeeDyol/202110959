#include <stdio.h>

int main(void)
{
	int num=2, sum=0;
	while (num<101)
	{
		sum += num;
		num += 2;
	}
	printf("¦���� ���� %d �Դϴ�. \n", sum);
}