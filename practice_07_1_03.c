#include <stdio.h>

int main(void)
{
	int num = 1, sum = 0;
	while (num != 0)
	{
		printf("정수를 입력하세요: ");
		scanf("%d", &num);
		sum += num;
	}
	printf("입력한 수의 합은 %d 입니다. \n", sum);
	return 0;
}