#include <stdio.h>

char convCase(char sentence[])
{
	int len;
	len = strlen(sentence);
	const int diff = 'a' - 'A';
	for (int i = 0; i < len; i++)
		if (sentence[i] >= 'A' && sentence[i] <= 'Z')
			putchar(sentence[i] + diff);
		else if (sentence[i] >= 'a' && sentence[i] <= 'z')
			putchar(sentence[i] - diff);
		else if (sentence[i] == ' ')
			putchar(sentence[i]);
		else if (sentence[i] == '\n')
			return 0;
		else
			return -1;
}

int main(void)
{
	char sentence[40] = "0";
	char ch = 0;
	printf("Input: ");
	fgets(sentence, sizeof(sentence), stdin);
	printf("Output: ");
	ch = convCase(sentence);
	if (ch == -1)
	{
		puts("범위를 벗어난 입력입니다. \n");
		return -1;
	}
	return 0;
}