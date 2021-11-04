#include <stdio.h>

int main(void)
{
	char str[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
	for (int i = 0; i < sizeof(str)/sizeof(char); i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}