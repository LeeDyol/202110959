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
		printf("이름: ");
		scanf_s("%s", person[i].name, sizeof(person[i].name));
		printf("주민번호: ");
		scanf_s("%s", person[i].number, sizeof(person[i].number));
		printf("급여정보: ");
		scanf_s("%d", &person[i].informaiton);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("이름: %s \n", person[i].name);
		printf("주민번호: %s \n", person[i].number);
		printf("급여: %d \n", person[i].informaiton);
	}
	return 0;
}