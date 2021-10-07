#include <stdio.h>

int main(void)
{
	int num, i, ali = 0;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	for (i = 1;i < 100;i++)
	{
		if (num % i == 0)
			ali++;
	}
	if (ali == 2)
		// 약수의 개수가 2개라면 소수
		printf("It is a prime number \n");
	else
		printf("It is a not prime number \n");
	return 0;
}