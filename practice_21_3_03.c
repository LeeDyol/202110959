#include <stdio.h>

int main(void)
{
	char name1[20] = "0", name2[20] = "0";
	int age1, age2;
	printf("ù��° ����� �̸��� ���̸� �Է��ϼ���: ");
	scanf_s("%s", &name1, sizeof(name1));
	scanf_s("%d", &age1);
	printf("�ι�° ����� �̹ɰ� ���̸� �Է��ϼ���: ");
	scanf_s("%s", &name2, sizeof(name2));
	scanf_s("%d", &age2);
	if (!strcmp(name1, name2))
		printf("�̸��� �����մϴ�. \n");
	else
		printf("�̸��� �������� �ʽ��ϴ�. \n");
	if (age1 == age2)
		printf("���̰� �����մϴ�. \n");
	else
		printf("���̰� �������� �ʽ��ϴ�. \n");
	return 0;
}