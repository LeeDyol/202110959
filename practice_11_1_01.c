#include <stdio.h>

int main(void)
{
	int arr[5];
	int max, min, sum;

	for (int i = 0; i < 5;i++)
	{
		printf("정수를 입력하세요: ");
		scanf_s("%d", &arr[i]);
	}
	sum = max = min = arr[0];
	
	for (int j = 1;j < 5;j++)
	{
		sum += arr[j];
		if (max < arr[j])
			max = arr[j];
		if (min > arr[j])
			min = arr[j];
	}
	printf("정수의 합은 %d 입니다. \n", sum);
	printf("최댓값은 %d 입니다. \n", max);
	printf("최솟값은 %d 입니다. \n", min);
	return 0;
}