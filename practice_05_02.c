#include <stdio.h>

int main(void)
{
	double num1, num2;
	printf("µÎ °³ÀÇ ½Ç¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
	scanf("%lf %lf", &num1, &num2);

	printf("µÎ ¼öÀÇ µ¡¼À: %f \n", num1 + num2);
	printf("µÎ ¼öÀÇ »¬¼À: %f \n", num1 - num2);
	printf("µÎ ¼öÀÇ °ö¼À: %f \n", num1 * num2);
	printf("µÎ ¼öÀÇ ³ª´°¼À : %f \n", num1 / num2);
	return 0;
}