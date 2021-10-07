#include <stdio.h>

int main(void)
{
	int i, num;
	for (num = 2;num%2==0;num += 2)
	{
		if (num > 8)
			break;
		for (i = 1;i <= num;i++)
			printf("%d X %d = %d \n", num, i, num * i);
	}
	return 0;
}