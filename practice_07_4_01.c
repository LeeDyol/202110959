#include <stdio.h>

int main(void)
{
	int num1, num2, sum;
	printf("정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	for (sum=0;num1 <= num2;num1++)
		sum += num1;
	printf("정수의 합은 %d 입니다.\n", sum);
	return 0;

}