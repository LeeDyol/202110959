#include <stdio.h>

int main(void)
{
	int num;
	printf("�ϳ��� ������ �Է��ϼ���: ");
	scanf("%d", &num);
	num = ~num + 1;
	printf("��ȣ�� �ٲ� ���: %d \n", num);
	return 0;
}