#include <stdio.h>

int main(void)
{
	int num=0, i=0, sum=0;
	while (i < 5)
	{
		while (num < 1)
		{
			printf("정수를 입력하세요: ");
			scanf("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("입력하신 정수들의 합은 %d 입니다. \n", sum);
	return 0;
}