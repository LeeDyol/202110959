#include <stdio.h>

struct information {
	char name[20];
	char country[20];
	char population[20];
};

int main(void)
{
	struct information arr[3];
	printf("Input threee cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("NAME: ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		printf("COUNTRY: ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		printf("POPULATION: ");
		fgets(arr[i].population, sizeof(arr[i].population), stdin);
	}
	printf("Printing the three cities: \n");
	for (int i = 0; i < 3; i++)
		printf("%d. %s in %s with a population of %s people \n", i+1, arr[i].name, arr[i].country, arr[i].population);
	return 0;
}