#include <stdio.h>

int Binary(int num)
{
	if (num == 0)
		return 0;
	else
	{
		Binary(num / 2);
		printf("%d", num % 2);
	}
}

int main(viod)
{
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	Binary(num);
	return 0;
}