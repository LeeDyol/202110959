#include <stdio.h>

int main(void)
{
	char name1[20] = "0", name2[20] = "0";
	int age1, age2;
	printf("첫번째 사람의 이름과 나이를 입력하세요: ");
	scanf_s("%s", &name1, sizeof(name1));
	scanf_s("%d", &age1);
	printf("두번째 사람의 이믈과 나이를 입력하세요: ");
	scanf_s("%s", &name2, sizeof(name2));
	scanf_s("%d", &age2);
	if (!strcmp(name1, name2))
		printf("이름이 동일합니다. \n");
	else
		printf("이름이 동일하지 않습니다. \n");
	if (age1 == age2)
		printf("나이가 동일합니다. \n");
	else
		printf("나이가 동일하지 않습니다. \n");
	return 0;
}