#include <stdio.h>

int main(void)
{
	int len = 0;
	char voca[100], temp;
	printf("영어 단어를 입력하세요: ");
	scanf_s("%s", voca, sizeof(voca));

	while (voca[len] != '\0')
		len++;

	for (int i = 0; i < len / 2; i++)
	{
		temp = voca[i];
		voca[i] = voca[len - i - 1];
		voca[len - i - 1] = temp;
	}
	printf("뒤집힌 영어 단어: %s \n", voca);
	return 0;
}