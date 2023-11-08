
#include <stdio.h>

void checkCircular(char *ptr, int len)
{
	int count=0;
    int i;
	for(i=0; i<len/2; i++)
	{
		if(ptr[i]==ptr[len-i-1])
			count++;
		else
		{
			printf("%d~%d번째 구간의 문자열 때문에, 회문이 아닙니다.",i+1, len-1);
			break;
		}
	}
	if(count==len/2)
		printf("회문입니다.");
}

int main(void)
{
	char str[50];
	int len=0;

	printf("문자열 입력: ");
	scanf("%s", str);

	while(str[len]!=0)
		len++;

	checkCircular(str, len);

	return 0;
}

#include <stdio.h>

void setArrayElement(int *ptr, int i, int num)
{
	int a;
	for(a=0; a<i; a++)
	{
		ptr[a]=num;
        printf("%d \n", ptr[a]);
	}
}
int main(void)
{
	int arr[4]={1, 3, 5, 7};
	setArrayElement(arr, sizeof(arr)/sizeof(int), 2);

	return 0;
}
