#include <stdio.h>

int main(void)
{
	int num1, num2, i=0;
	double sum = 0;
	printf("몇 개의 정수를 입력하시겠습니까?");
	scanf("%d", &num1);
	while (i<num1)
	{
		printf("정수를 입력하세요: ");
		scanf("%d", &num2);
		sum += num2;
		i++;
	}
	printf("입력한 숫자들의 평균은 %f 입니다. \n", sum / num1);
	return 0;
}