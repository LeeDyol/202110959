#include <stdio.h>

int main(void)
{
	int len = 0;
	char voca[100];
	printf("���� �ܾ �Է��ϼ���: ");
	scanf_s("%s", voca, sizeof(voca));

	while (voca[len] != '\0')
		len++;
	printf("���� �ܾ��� ���̴� %d �Դϴ�. \n", len);

	return 0;
}