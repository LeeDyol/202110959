#include <stdio.h>

int convTolnt(char c)
{
	const int diff = 1 - '1';
	return c + diff;
}

int main(void)
{
	char str[50];
	int len, sum = 0;
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (int i = 0; i < len; i++)
		if ('1' <= str[i] && str[i] <= '9')
			sum += convTolnt(str[i]);
	printf("������ �� ��: %d \n", sum);
	return 0;
}