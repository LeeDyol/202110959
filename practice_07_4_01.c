#include <stdio.h>

int main(void)
{
	int num1, num2, sum;
	printf("������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	for (sum=0;num1 <= num2;num1++)
		sum += num1;
	printf("������ ���� %d �Դϴ�.\n", sum);
	return 0;

}