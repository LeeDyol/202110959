#include <stdio.h>

int main(void)
{
	int arr[5];
	int max, min, sum;

	for (int i = 0; i < 5;i++)
	{
		printf("������ �Է��ϼ���: ");
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
	printf("������ ���� %d �Դϴ�. \n", sum);
	printf("�ִ��� %d �Դϴ�. \n", max);
	printf("�ּڰ��� %d �Դϴ�. \n", min);
	return 0;
}