#include <stdio.h>

int main(void)
{
	int result;
	int num;

	printf("정수1: ");
	scanf("%d", &num);

	result=num*10;
	printf("10*%d=%d \n", num, result);
	
	return 0;
}
