#include <stdio.h>

int main(void)
{
	int len = 0;
	char voca[100], max;
	printf("영어 단어를 입력하세요: ");
	scanf_s("%s", voca, sizeof(voca));

	while(voca[len] != '\0')
		len++;
	max = voca[0];
	for (int i = 1; i < len;i++)
	{
		if (max < voca[i])
			max = voca[i];
	}
	printf("가장 아스키 코드가 높은 문자는 %c 입니다. \n", max);
	return 0;
}