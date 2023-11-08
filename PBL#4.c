#include <stdio.h>

int main(void)
{
	int num=3;
	num= num<<5;
    num= num>>3;
	printf("%d \n", num);
	return 0;
}

#include <stdio.h>

int main(void)
{
	float num1, num2, num3,max, minimum;
	float result2, result1;
	
	printf("3개의 정수입력: \n");
	scanf_s("%f %f %f", &num1, &num2, &num3);

	result1=num1+num2+num3;
	printf("합계: %f \n", result1);

	result2=(num1+num2+num3)/3;
	printf("평균: %f \n", result2);

	if(num1>num2)
		max=num1;
	if(num3>num1)
		max=num3;
	if(num2>max)
		max=num2;
	printf("최댓값: %f \n", max);

    if(num1<num2)
		minimum=num1;
	if(num3<num1)
		minimum=num3;
	if(num2<minimum)
		minimum=num2;
	printf("최솟값: %f \n", minimum);
	return 0;
}

#include <stdio.h>

int main(void)
{
	int 시, 분, 초;
	printf("초(second)입력:");
	scanf("%d", &초);
	시=초/3600;
	초=초%3600;
	분=초/60;
	초=초%60;
	printf("%d��%d��%d�� \n", 시, 분, 초);
	return 0;
}





