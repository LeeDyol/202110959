#include <stdio.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main(void)
{
	int ch;
	printf("���� �Է�: ");
	ch = getchar();
	ch = convCase(ch);
	if (ch == -1)
	{
		puts("������ ��� �Է��Դϴ�. \n");
		return -1;
	}
	putchar(ch);
	return 0;
}