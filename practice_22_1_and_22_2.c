#include <stdio.h>

struct employee
{
	char name[20];
	char number[20];
	int informaiton;
};

int main(void)
{
	struct employee person[3];
	for (int i = 0; i < 3; i++)
	{
		printf("�̸�: ");
		scanf_s("%s", person[i].name, sizeof(person[i].name));
		printf("�ֹι�ȣ: ");
		scanf_s("%s", person[i].number, sizeof(person[i].number));
		printf("�޿�����: ");
		scanf_s("%d", &person[i].informaiton);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("�̸�: %s \n", person[i].name);
		printf("�ֹι�ȣ: %s \n", person[i].number);
		printf("�޿�: %d \n", person[i].informaiton);
	}
	return 0;
}