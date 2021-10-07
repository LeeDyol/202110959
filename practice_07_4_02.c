#include <stdio.h>

int main(void)
{
	int num, i, result=1;
	printf("정수 하나를 입력하세요: ");
	scanf("%d", &num);
	for (i = 1;i <= num;i++)
		result = result * i;
	printf("%d! = %d", num, result);
	return 0;
}