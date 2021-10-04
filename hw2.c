#include <stdio.h>

int main(void)
{
	double distk, distm;
	printf("please enter kilometers: ");
	scanf("%lf", &distk);
	distm = distk / 1.609;
	printf("%.1f km is equal to %.1f miles.", distk, distm);
	return 0;
}