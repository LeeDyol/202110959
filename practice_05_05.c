#include <stdio.h>

int main(void)
{
	char ch;
	printf("알파벳 문자를 입력하세요: ");
	scanf("%c", &ch);
	printf("아스키 코드 값: %d \n", ch);
	return 0;
}