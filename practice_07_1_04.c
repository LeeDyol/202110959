#include <stdio.h>

int main(void)
{
	int num, i = 9;
	printf("몇 단을 출력하시겠습니까? ");
	scanf("%d", &num);
	while (i>0)
	{
		printf("%d X %d = %d \n", num, i, num * i);
		i--;
	}
	return 0;
}