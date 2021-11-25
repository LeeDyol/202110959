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
		else if (sentence[i] == " ")
			printf(" ");
		else
			return -1;
}

int main(void)
{
	char sentence[40] = "0";
	char ch = 0;
	printf("Input: ");
	fgets(sentence, sizeof(sentence), stdin);
	ch = convCase(sentence);
	if (ch == -1)
	{
		puts("������ ��� �Է��Դϴ�. \n");
		return -1;
	}
	printf("Output: ");
	return 0;
}