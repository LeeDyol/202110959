#include <stdio.h>

int main(void)
{
	int len = 0;
	char voca[100];
	printf("영어 단어를 입력하세요: ");
	scanf_s("%s", voca, sizeof(voca));

	while (voca[len] != '\0')
		len++;
	printf("영어 단어의 길이는 %d 입니다. \n", len);

	return 0;
}