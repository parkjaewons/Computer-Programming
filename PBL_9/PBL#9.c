#include <stdio.h>

int isdigit(char num1);
int main(void)
{
   char n1;
   int n2;

   printf("문자입력:");
   scanf("%c",&n1);

   n2= isdigit(n1);
   printf("%d\n",n2);
   return 0;
}
int isdigit(char n1)
{
   if('0'<=n1 && n1<='9')
      return 1;
   else
      return 0;
}

#include <stdio.h>

int integer(float num1);
float real(float num1);
int main(void)
{
   float num1,re1;
   int integ1;
   printf("살수입력:");
   scanf("%f",&num1);

   re1=real(num1);
   integ1=integer(num1);

   printf("정수: %d 실수: %f\n",integ1,re1);
   return 0;
}
int integer(float num1)
{
   num1 =(int) num1;
   return num1;
}
float real(float num1)
{
   num1=num1-(int)num1;
   return num1;
}

#include <stdio.h>

int fibo(int num)
{
   int num1=0,num2=1,num3, i;

   if(num==1)
      printf("%d ",num1);
   else
      printf("%d\n%d \n",num1,num2);

   for(i=0; i<num-2; i++)
   {
      num3=num1+num2;
      printf("%d \n",num3);
      num1=num2;
      num2=num3;
   }
}
int main(void)
{
   int num4;

   printf("파보나치 수열 개수:");
   scanf("%d",&num4);

   if(num4<1)
   {
      printf("입력",num4);
      return -1;
   }
   fibo(num4);
   return 0;
}

#include <stdio.h>

int function(int n)
{
   if(n>0)
      return 2*function(n-1);
   else
      return 1;
}
int main(void)
{
   int n;
   printf("정수를 입력하시오:");
   scanf("%d",&n);
   printf("결과: 2의%d승은 \n",n, function(n));
   return 0;
}












