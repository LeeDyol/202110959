#include <stdio.h>

int main(void)
{
	int i=0, j=0;
	while (i< 5)
	{
		while (j<i)
		{
			printf("0");
			j++;
		}
		printf("* \n");
		j = 0;
		i++;
	}
	return 0;
}