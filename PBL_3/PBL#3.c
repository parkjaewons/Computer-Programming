#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;

	printf("정수 one: ");
	scanf("%d", &num1);
	printf("정수 two: ");
	scanf("%d", &num2);

	result=num1+num2;
	printf("%d+%d=%d \n", num1, num2, result);
	result=num1*num2;
	printf("%d*%d=%d \n", num1, num2, result);

	return 0;
}

#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2, num3;

	printf("정수: ");
	scanf("%d", &num1);
	printf("정수2: ");
	scanf("%d", &num2);
	printf("정수3: ");
    scanf("%d", &num3);

	result=num1*num2*num3;
	printf("%d*%d*%d=%d \n", num1, num2, num3, result);
	return 0;
}

#include <stdio.h>

int main(void)
{
	int result;
	int num;

	printf("정수1: ");
	scanf("%d", &num);

	result=num*num*num;
	printf("%d=%d \n", num, result);
	return 0;
}

#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2, num3;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result= (num1+num2)*(num2-num3)*(num3%num1);
	printf("연산결과: %d \n", result);
	return 0;
}



