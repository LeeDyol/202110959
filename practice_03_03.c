#include <stdio.h>

int main(void)
{
	int num;
	printf("한 개의 정수를 입력하세요: ");
	scanf("%d", &num);
	printf("%d의 제곱: %d \n", num, num * num);
	return 0;
}
