#include <stdio.h>

int main(void)
{
	char str1[20], str2[20], str3[40];
	printf("ù��° ���ڿ� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	printf("�ι�° ���ڿ� �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;
	strncpy(str3, str1, sizeof(str3));
	strncat(str3, str2, sizeof(str3));
	printf("������ ���: %s \n", str3);
	return 0;
}