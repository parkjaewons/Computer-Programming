 #include <stdio.h>

int main(void)
{
	int opt;
	int num1, i;
	int result1=0, result2=1;
	
	for(num1=0; num1>=0;)
	{
	printf("1.홀수 짝수 확인 \n2.N까지의 합계 구하기 \n3.팩토리얼 구하기(N!) \n0.종료 \n");
	printf("선택 ");
	scanf("%d", &opt);

	if(opt==0)
	{
		return 1;
	}

	printf("한개의 정수 입력: ");
	scanf("%d", &num1);
	

	if(opt==1)
	{
		if(num1%2==0)
			printf("짝수 \n");
		else if(num1%2==1)
			printf("홀수 \n\n");
	}
	if(opt==2)
	{
		for(i=0; i<num1+1; i++)
			result1+=i;
		printf("합계 :%d\n\n", result1); 
	}
	if(opt==3)
	{
		for(i=1; i<=num1; i++)
			result2=result2*i;

		printf("%d!=%d \n\n", num1, result2);
	}
	}
	return 0;
	
}







