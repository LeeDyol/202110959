#include <stdio.h>

int main(void)
{
	int len = 0;
	char voca[100], max;
	printf("���� �ܾ �Է��ϼ���: ");
	scanf_s("%s", voca, sizeof(voca));

	while(voca[len] != '\0')
		len++;
	max = voca[0];
	for (int i = 1; i < len;i++)
	{
		if (max < voca[i])
			max = voca[i];
	}
	printf("���� �ƽ�Ű �ڵ尡 ���� ���ڴ� %c �Դϴ�. \n", max);
	return 0;
}