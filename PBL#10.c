#include <stdio.h>

int main(void)
{
   char vo[100];
   int len=0,i;
   char z;

   printf("영어단어입력: ");
   scanf("%s",vo); 

   while(vo[len] != '\0')
      len++;

   for(i=0; i<len/2; i++)
   {
      z=vo[i];
      vo[i]=vo[(len-i)-1];
      vo[(len-i)-1]=z;
   }
   printf("영어단어 역순: %s \n", vo);
   return 0;
}

#include <stdio.h>

int main(void)
{
   char voca[100];
   int len=0, i;
   char sma=122;

   printf("영단어 입력:");
   scanf("%s",voca);

   while(voca[len] !='\0')
      len++;
   for(i=0; i<len; i++)
      if(sma>voca[i])
         sma=voca[i];
   printf("가장작은 아스키코드 값: %c \n",sma);
   return 0;
}

#include <stdio.h>

int main(void)
{
   char a,b;

   printf("영어단어 입력:");
   scanf("%c",&a);

   if(a>='a' && a<='z')
      b=a-32;
   else if (a>='A' &&a<='Z')
      b=a+32;

   printf("대소문자 바꿈: %c\n",b);
}

#include <stdio.h>
int main(void)
{
   int a[100]={0,1,0};
   int b,n;

   printf("숫자입력: ");
   scanf("%d",&n);

   for(b=2;b<n;++b)a[b]=a[b-1]+a[b-2];
   for(b=0;b<n;++b)
   {
      printf("%d",a[b]);
      if((b+1)%10==0)printf("\n");
   }

   return 0;
}
*/