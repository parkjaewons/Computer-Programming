#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	result= (num1<num2) ? num2-num1 : num1-num2;
	printf("출력결과: %d \n", result);

	return 0;
}

#include <stdio.h>

int main(void)
{
	int kor, eng, math;
	double avr;
	printf("국어,영어,수학 성적입력: ");
	scanf("%d %d %d", &kor, &eng, &math);
	avr=(kor+eng+math)/3.0;
	printf("평균:%f \n",avr);
	

	switch((int)avr/10)
	{
	case 5:case 6:
		printf("등급:D");
		break;
	case 7:
		printf("등급:C");
		break;
	case 8:
		printf("등급:B");
		break;
	case 9:case 10:
		printf("등급:A");
		break;
	default:
		printf("등급:F");
	}
	return 0;
}

#include <stdio.h>

int main(void)
{
	int i, j;

	for(i=1; i<10; i++)
	{
		if(i%2!=1)
			continue;

		for(j=1; j<10; j++)
		{
			if(i<j)
				break;
			printf("%dX%d=%d \n", i ,j, i*j);
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>
int main(void)

{
	int num;
	printf("한 개의 정수 입력: ");
	scanf("%d", &num);

	switch(num/10)
	{
	case 0:
		printf("0이상 10미만");
		break;
	case 1:
		printf("10이상 20미만");
		break;
	case 2:
		printf("20이상 30미만");
		break;
	default:
		printf("30이상 \n");
	}
	return 0;
}

#include <stdio.h>

int main(void)
{
	int A, Z;
	int result;
	for(A=0; A<10; A++)
	{
		for(Z=0; Z<10; Z++)
		{
			if(A==Z)
				continue;
			result=(A*10+Z)+(Z*10+A);
			if(result==99)
				printf("%d%d+%d%d=%d \n", A, Z, Z, A, result);
		}
	}
	return 0;
}
