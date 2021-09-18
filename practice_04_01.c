#include <stdio.h>

int main(void)
{
	int num;
	printf("하나의 정수를 입력하세요: ");
	scanf("%d", &num);
	num = ~num + 1;
	printf("부호를 바꾼 결과: %d \n", num);
	return 0;
}