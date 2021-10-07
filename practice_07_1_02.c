#include <stdio.h>

int main(void)
{
	int num;
	int i = 1;
	printf("하나의 양의 정수를 입력하세요: ");
	scanf("%d", &num);
	while (num >= i)
	{
		printf("%d", i*3);
		i++;
	}
	return 0;

}