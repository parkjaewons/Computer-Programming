#include <stdio.h>

int main(void)
{
	int num1=10, num2=10;
	int *ptr1=&num1;
	int *ptr2=&num2;
	int *temp;
	(*ptr1)+=10;
	(*ptr2)-=10;

	temp=ptr1;
	ptr1=ptr2;
	ptr2=temp;

	printf("%d %d \n", *ptr1, *ptr2);
	return 0;
}

#include <stdio.h>

int main(void)
{
	int arr[5]={1, 2, 3, 4, 5};
	int *ptr=arr;
	int i;
	for(i=0; i<5; i++)
	{
		*ptr += 2;
		ptr++;
	}

	for(i=0; i<5; i++)
		printf("%d ", arr[i]);

	return 0;
}

#include <stdio.h>

int main(void)
{
	int arr[5]={1, 2, 3, 4, 5};
    int *ptr=arr;
    int i;
    for(i=0; i<5; i++)
	    *(ptr+i) +=2;

    for(i=0; i<5; i++)
	    printf("%d ", arr[i]);

    return 0;
}

#include <stdio.h>

int main(void)
{
	int arr[5]={1, 2, 3, 4, 5};
	int *ptr=&arr[4];
	int total=0, i;

	for(i=0; i<5; i++)
		total += *(ptr--);

	printf("%d \n", total);
	return 0;
}

#include <stdio.h>

int main(void)
{
	int arr[6]={1, 2, 3, 4, 5, 6};
	int *fptr=&arr[0];
	int *bptr=&arr[5];
	int i, temp;

	for(i=0; i<3; i++)
	{
		temp= *fptr;
		*fptr= *bptr;
		*bptr= temp;
		fptr +=1;
		bptr -=1;
	}

	for(i=0; i<6; i++)
		printf("%d ",arr[i]);
	return 0;
}