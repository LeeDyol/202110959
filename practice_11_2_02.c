#include <stdio.h>

int main(void)
{
	int len = 0;
	char voca[100], temp;
	printf("���� �ܾ �Է��ϼ���: ");
	scanf_s("%s", voca, sizeof(voca));

	while (voca[len] != '\0')
		len++;

	for (int i = 0; i < len / 2; i++)
	{
		temp = voca[i];
		voca[i] = voca[len - i - 1];
		voca[len - i - 1] = temp;
	}
	printf("������ ���� �ܾ�: %s \n", voca);
	return 0;
}