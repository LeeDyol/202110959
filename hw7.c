#include <stdio.h>
#include <math.h>

void StandardDeviation(double * arr)
{
	double sum = 0;
	int a;
	for (int i = 0;i < 5;i++)
	{
		a = arr[i] - arr[2];
		sum = sum + pow(a, 2);
	}
	sum = sqrt(sum / 5);
	printf("Standard Dewiation: %.3lf", sum);
}

int main(void)
{
	double arr[5];
	double sum = 0;
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++)
		scanf_s("%lf", &arr[i]);
	StandardDeviation(arr);
	return 0;
}