#include <stdio.h>
#include<Windows.h>
#include <time.h>

void gotoxy(int x, int y);
void a();
void b();
void c();
void d();
void e();
void f();
void Time();
void Receipt();

int main(void)
{
   int sel;
   int total=0;
   int bell=1;
   int n=0, n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0;

   printf("\n\n\n===========================\n");
   printf("         SMU COFFEE\n");
   printf("===========================\n");
   printf("\n=====SMU COFFEE 메뉴판=====\n\n");
   printf("1.아메리카노      --(2000원)\n\n");
   printf("2.카페모카        --(4500원)\n\n");
   printf("3.카페라떼        --(4000원)\n\n");
   printf("4.카푸치노        --(4800원)\n\n");
   printf("5.카라멜 마끼아또 --(4200원)\n\n");
   printf("6.에스프레소      --(1500원)\n\n");
   printf("7.아이스티        --(1500원)\n\n");
   printf("8.녹차 라떼       --(4000원)\n\n");
   printf("9.주문을 마칩니다\n\n");
   printf("10.음료 제조\n\n");
   printf("11.판매완료\n");
 
   while(1)
   {
     printf("\nSelect Menu\n\n> ");
      scanf("%d",&sel);

       switch(sel)
    {
      case 0:
   printf("\n\n\n===========================\n");
   printf("         SMU COFFEE\n");
   printf("===========================\n");
   printf("\n===커피 프린스 메뉴판===\n\n");
   printf("1.아메리카노      --(2000원)\n\n");
   printf("2.카페모카        --(4500원)\n\n");
   printf("3.카페라떼        --(4000원)\n\n");
   printf("4.카푸치노        --(4800원)\n\n");
   printf("5.카라멜 마끼아또 --(4200원)\n\n");
   printf("6.에스프레소      --(1500원)\n\n");
   printf("7.아이스티        --(1500원)\n\n");
   printf("8.녹차 라떼       --(4000원)\n\n");
   printf("9.주문을 마칩니다\n\n");
   printf("10.음료 제조\n\n");
   printf("11.판매완료\n");
 
   break;
   case 1:
      n+=1;
      printf("\n아메리카노를 %d개선택하셨습니다.\n",n);
      printf("총 금액은 (%d원)입니다.\n",total+=2000);
      break;
   case 2:
      n1+=1;
      printf("\n카페 모카를 %d개선택하셨습니다.\n",n1);
      printf("총 금액은 (%d원)입니다.\n",total+=4500);
      break;
   case 3:
      n2+=1;
      printf("\n카페 오레를 %d개선택하셨습니다.\n",n2);
      printf("총 금액은 (%d원)입니다.\n",total+=4000);
      break;
   case 4:
      n3+=1;
      printf("\n카푸치노를 %d개선택하셨습니다.\n",n3);
      printf("총 금액은 (%d원)입니다.\n",total+=4800);
      break;
   case 5:
      n4+=1;
      printf("\n카라멜 마끼아또를 %d개선택하셨습니다.\n",n4);
      printf("총 금액은 (%d원)입니다.\n",total+=4200);
      break;
   case 6:
      n5+=1;
      printf("\n에스프레소를 %d개선택하셨습니다.\n",n5);
      printf("총 금액은 (%d원)입니다.\n",total+=1500);
      break;
   case 7:
      n6+=1;
      printf("\n아이스티를 %d개선택하셨습니다.\n",n6);
      printf("총 금액은 (%d원)입니다.\n",total+=1500);
      break;
   case 8:
      n7+=1;
      printf("\n녹차 라떼를 %d개선택하셨습니다.\n",n7);
      printf("총 금액은 (%d원)입니다.\n",total+=4000);
      break;

   
   case 9:
      Receipt(total,bell,n,n1,n2,n3,n4,n5,n6,n7);
      break;
      
   case 10:   
      system("cls");
      Time(n,n1,n2,n3,n4,n5,n6,n7);
      break;
   case 11:
     system("cls");
      bell+=1;
      total=0;
     n=0;
     n1=0;
     n2=0;
     n3=0;
     n4=0;
     n5=0;
     n6=0;
     n7=0;
     break;
   default:
      printf("\a");
      printf("잘못된 선택입니다.\n");
      printf("다시 선택해주십시오.\n");
      break;

   }
      if(bell==10)
      {
         printf("만석입니다.\n");
        return 0;
      }
   }
   
}

void gotoxy(int x, int y)
{
   COORD Pos;
   Pos.X = x;
   Pos.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void a()//glass
{

   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥                 ∥\n");
   gotoxy(10,13); printf("∥                 ∥\n");
   gotoxy(10,14); printf("∥                 ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void b()//ice
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥                 ∥\n");
   gotoxy(10,13); printf("∥                 ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void c() //milk
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥                 ∥\n");
   gotoxy(10,13); printf("∥     M I L K     ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void d() //milk+esp
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥ E S P R E S S O ∥\n");
   gotoxy(10,13); printf("∥     M I L K     ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void e() //water
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥                 ∥\n");
   gotoxy(10,13); printf("∥    W A T E R    ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void f() //water+espresso
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥ E S P R E S S O ∥\n");
   gotoxy(10,13); printf("∥    W A T E R    ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void g() //카페라떼
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥ M I L K F O A M ∥\n");
   gotoxy(10,12); printf("∥ E S P R E S S O ∥\n");
   gotoxy(10,13); printf("∥    W A T E R    ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void h() //마끼아또
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥    S Y R U P    ∥\n");
   gotoxy(10,12); printf("∥ E S P R E S S O ∥\n");
   gotoxy(10,13); printf("∥     M I L K     ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}
void j() //마끼아또+폼
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥ M I L K F O A M ∥\n");
   gotoxy(10,11); printf("∥    S Y R U P    ∥\n");
   gotoxy(10,12); printf("∥ E S P R E S S O ∥\n");
   gotoxy(10,13); printf("∥     M I L K     ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void k() //에스프레소
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥                 ∥\n");
   gotoxy(10,13); printf("∥                 ∥\n");
   gotoxy(10,14); printf("∥ E S P R E S S O ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}
void l() //아이스티
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥   P O W D E R   ∥\n");
   gotoxy(10,13); printf("∥    W A T E R    ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}
void Time(int n, int n1,int n2,int n3,int n4,int n5,int n6,int n7)
{
   int i;
   int sel;
   printf("음료?\n\n1.아메리카  2.카페모카  3.카페라떼  4.카푸치노  5.카라멜 마끼아또  6.에소프레소  7.아이스티  8.녹차라떼\n\n");
   scanf("%d", &sel);
   if(sel==1)
   {
      for(i=0; i<n; i++)
      {
           printf("\n\n아메리카노\n\n");
           Sleep(500);
           system("cls");
           a();
           Sleep(500);
           system("cls");
           b();
           Sleep(500);
           system("cls");
           e();
           Sleep(500);
           system("cls");
           f();
           Sleep(500);
         printf("\a");
         printf("\n주문하신 아메리카노가 준비되었습니다. 맛있게 드세요!\n\n\n");
      }
    
   }
   else if(sel==2)
   {
      for(i=0; i<n1; i++)
      {
           printf("\n\n카페모카\n\n");
           Sleep(500);

           system("cls");
           a();
           Sleep(500);
           system("cls");
           b();
           Sleep(500);
           system("cls");
           c();
           Sleep(500);
           system("cls");
           d();
           Sleep(500);
         printf("\a");
         printf("\n주문하신 카페모카가 준비되었습니다. 맛있게 드세요!\n\n\n");
      }   
     
   }
   else if(sel==3)
   {
      for(i=0; i<n2; i++)
      {

         printf("\n\n카페라떼\n\n");
           Sleep(500);
           system("cls");
           a();
           Sleep(500);
           system("cls");
           b();
           Sleep(500);
           system("cls");
           c();
           Sleep(500);
           system("cls");
           d();
           Sleep(500);
         printf("\a");
         printf("\n주문하신 카페라떼가 준비되었습니다. 맛있게 드세요!\n\n\n");
      }
      
   }
   else if(sel==4)
   {
      for(i=0; i<n3; i++)
      {
         printf("\n\n카푸치노\n\n");
         Sleep(500);
         system("cls");
         a();
         Sleep(500);
         system("cls");
         b();
         Sleep(500);
         system("cls");
         e();
         Sleep(500);
         system("cls");
         f();
         Sleep(500);
         system("cls");
         g();
         Sleep(500);
         printf("\a");
         printf("\n주문하신 카푸치노가 준비되었습니다. 맛있게 드세요!\n\n\n");
      }
   }
   else if(sel==5)
   {
       for(i=0; i<n4; i++)
      {
         printf("\n\n카라멜 마끼아또\n\n");
         Sleep(500);
         system("cls");
         a();
         Sleep(500);
         system("cls");
         b();
         Sleep(500);
         system("cls");
         c();
         Sleep(500);
         system("cls");
         d();
         Sleep(500);
         system("cls");
         h();
         Sleep(500);
         system("cls");
         j();
         Sleep(500);
         printf("\a");
         printf("\n주문하신 카라멜 마끼아또가 준비되었습니다. 맛있게 드세요!\n\n\n");
      }
   }
   else if(sel==6)
   {
      for(i=0; i<n5; i++)
      {
         printf("\n\n에스프레소\n\n");
         Sleep(500);
         system("cls");
         a();
         Sleep(500);
         system("cls");
         k();
         Sleep(500);
         printf("\a");
         printf("\n주문하신 에스프레소가 준비되었습니다. 맛있게 드세요!\n\n\n");
      }
   }
   else if(sel==7)
   {
      for(i=0; i<n6; i++)
      {
         printf("\n\n아이스티\n\n");
         Sleep(500);
         system("cls");
         a();
         Sleep(500);
         system("cls");
         b();
         Sleep(500);
         system("cls");
         e();
         Sleep(500);
         system("cls");
         l();
         Sleep(500);
         printf("\a");
         printf("\n주문하신 에스프레소가 준비되었습니다. 맛있게 드세요!\n\n\n");
      }

     
   }
   else if(sel==8)
   {
      for(i=0; i<n7; i++)
      {
         printf("녹차 라떼\n\n");
         Sleep(500);
         system("cls");
         a();
         Sleep(500);
         system("cls");
         b();
         Sleep(500);
         system("cls");
         e();
         Sleep(500);
         system("cls");
         l();
         Sleep(500);
         printf("\a");
         printf("\n주문하신 에스프레소가 준비되었습니다. 맛있게 드세요!\n\n\n");
      }
   } 
   else
      printf("\n\n잘못입력하셨습니다. 다시 입력해주세요. \n\n");
      
}

void Receipt(int total,int bell,int n,int n1,int n2,int n3,int n4,int n5,int n6,int n7) //영수증
{
   time_t timer;
   struct tm *t;
   int pn;
   int tt;
   int phone;
    timer = time(NULL); // 현재 시각을 초 단위로 얻기

   t = localtime(&timer);

     tt=total*0.912;
     printf("현금영수증을 발급하시겠습니까?  yes=1/no=2:\n\n");
     scanf("%d", &pn);
     if(pn==1)
         {
             printf("휴대폰 번호 입력: ");
             scanf("%d",&phone);
         }
    
     printf("\n            SMU COFFEE\n");
     printf("현금(소득공제)\n");
     printf("천안안서DT점   충남 천안시 상명대길 31\n");
     printf("대표:홍마담 201-81-21515 T:041-123-4567\n");
     printf("[POS 01]               %d-%d-%d %d:%d:%d\n",t->tm_year + 1900,t->tm_mon + 1, t->tm_mday,t->tm_hour, t->tm_min,t->tm_sec);
     printf("---------------------------------------\n");
     printf("            주문번호: %d\n", bell);
     printf("---------------------------------------\n");
     if(n!=0)
        printf("아메리카노     2,000원  %d   %d\n",n,2000*n);
     if(n1!=0)
        printf("카페 모카      4,500원  %d   %d\n",n1,4500*n1);
     if(n2!=0)
        printf("카페 오레      4,000원  %d   %d\n",n2,4000*n2);
    if(n2!=0)
        printf("카푸치노       4,800원  %d   %d\n",n3,4800*n3);
    if(n2!=0)  
        printf("카라멜 마끼아또4,200원  %d   %d\n",n4,4200*n4);
    if(n2!=0)
        printf("에스프레소     1,500원  %d   %d\n",n5,1500*n5);
    if(n2!=0)
        printf("아이스티       1,500원  %d   %d\n",n6,1500*n6);
    if(n2!=0)
        printf("녹차 라떼      1,500원  %d   %d\n",n7,4000*n7);
     printf("---------------------------------------\n");
     printf("subtotal                ->      %d\n",total);
     printf("NET Amount              ->      %d\n",tt);
     printf("Tax                     ->      %d\n",total-tt);
     printf("---------------------------------------\n");
     printf("TOTAL                            %d\n",total);
    if(pn==1)
    {
        printf("현금영수증:                 010%d\n\n",phone);//해결
    }
    else
    {
       printf("현금영수증:                 010****5678\n\n");
    }
}#include <stdio.h>
#include<Windows.h>
#include <time.h>

void gotoxy(int x, int y);

void Time();
void Receipt();

int main(void)
{
   int sel;
   int total=0;
   int bell=1;
   int n=0, n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0;

   printf("\n\n\n===========================\n");
   printf("         SMU COFFEE\n");
   printf("===========================\n");
   printf("\n=====SMU COFFEE 메뉴판=====\n\n");
   printf("1.아메리카노      --(2000원)\n\n");
   printf("2.카페모카        --(4500원)\n\n");
   printf("3.카페라떼        --(4000원)\n\n");
   printf("4.카푸치노        --(4800원)\n\n");
   printf("5.카라멜 마끼아또 --(4200원)\n\n");
   printf("6.에스프레소      --(1500원)\n\n");
   printf("7.아이스티        --(1500원)\n\n");
   printf("8.녹차 라떼       --(4000원)\n\n");
   printf("9.주문을 마칩니다\n\n");
   printf("10.음료 제조\n\n");
   printf("11.판매완료\n");
 
   while(1)
   {
	  printf("\nSelect Menu\n\n> ");
      scanf("%d",&sel);

       switch(sel)
    {
	   case 0:
   printf("\n\n\n===========================\n");
   printf("         SMU COFFEE\n");
   printf("===========================\n");
   printf("\n===커피 프린스 메뉴판===\n\n");
   printf("1.아메리카노      --(2000원)\n\n");
   printf("2.카페모카        --(4500원)\n\n");
   printf("3.카페라떼        --(4000원)\n\n");
   printf("4.카푸치노        --(4800원)\n\n");
   printf("5.카라멜 마끼아또 --(4200원)\n\n");
   printf("6.에스프레소      --(1500원)\n\n");
   printf("7.아이스티        --(1500원)\n\n");
   printf("8.녹차 라떼       --(4000원)\n\n");
   printf("9.주문을 마칩니다\n\n");
   printf("10.음료 제조\n\n");
   printf("11.판매완료\n");
 
   break;
   case 1:
      n+=1;
      printf("\n아메리카노를 %d개선택하셨습니다.\n",n);
      printf("총 금액은 (%d원)입니다.\n",total+=2000);
      break;
   case 2:
      n1+=1;
      printf("\n카페 모카를 %d개선택하셨습니다.\n",n1);
      printf("총 금액은 (%d원)입니다.\n",total+=4500);
      break;
   case 3:
      n2+=1;
      printf("\n카페 오레를 %d개선택하셨습니다.\n",n2);
      printf("총 금액은 (%d원)입니다.\n",total+=4000);
      break;
   case 4:
	   n3+=1;
	   printf("\n카푸치노를 %d개선택하셨습니다.\n",n3);
	   printf("총 금액은 (%d원)입니다.\n",total+=4800);
	   break;
   case 5:
	   n4+=1;
	   printf("\n카라멜 마끼아또를 %d개선택하셨습니다.\n",n4);
	   printf("총 금액은 (%d원)입니다.\n",total+=4200);
	   break;
   case 6:
	   n5+=1;
	   printf("\n에스프레소를 %d개선택하셨습니다.\n",n5);
	   printf("총 금액은 (%d원)입니다.\n",total+=1500);
	   break;
   case 7:
	   n6+=1;
	   printf("\n아이스티를 %d개선택하셨습니다.\n",n6);
	   printf("총 금액은 (%d원)입니다.\n",total+=1500);
	   break;
   case 8:
	   n7+=1;
	   printf("\n녹차 라떼를 %d개선택하셨습니다.\n",n7);
	   printf("총 금액은 (%d원)입니다.\n",total+=4000);
	   break;

   
   case 9:
	   Receipt(total,bell,n,n1,n2,n3,n4,n5,n6,n7);
	   break;
      
   case 10:   
      system("cls");
      Time(n,n1,n2,n3,n4,n5,n6,n7);
      break;
   case 11:
	  system("cls");
      bell+=1;
      total=0;
	  n=0;
	  n1=0;
	  n2=0;
	  n3=0;
	  n4=0;
	  n5=0;
	  n6=0;
	  n7=0;
	  break;
   default:
      printf("\a");
      printf("잘못된 선택입니다.\n");
      printf("다시 선택해주십시오.\n");
      break;

   }
	   if(bell==10)
	   {
         printf("만석입니다.\n");
	     return 0;
	   }
   }
   
}

void gotoxy(int x, int y)
{
   COORD Pos;
   Pos.X = x;
   Pos.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void a()//glass
{

   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥                 ∥\n");
   gotoxy(10,13); printf("∥                 ∥\n");
   gotoxy(10,14); printf("∥                 ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void b()//ice
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥                 ∥\n");
   gotoxy(10,13); printf("∥                 ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void c() //milk
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥                 ∥\n");
   gotoxy(10,13); printf("∥     M I L K     ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void d() //milk+esp
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥ E S P R E S S O ∥\n");
   gotoxy(10,13); printf("∥     M I L K     ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void e() //water
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥                 ∥\n");
   gotoxy(10,13); printf("∥    W A T E R    ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void f() //water+espresso
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥ E S P R E S S O ∥\n");
   gotoxy(10,13); printf("∥    W A T E R    ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void g() //카페라떼
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥ M I L K F O A M ∥\n");
   gotoxy(10,12); printf("∥ E S P R E S S O ∥\n");
   gotoxy(10,13); printf("∥    W A T E R    ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void h() //마끼아또
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥    S Y R U P    ∥\n");
   gotoxy(10,12); printf("∥ E S P R E S S O ∥\n");
   gotoxy(10,13); printf("∥     M I L K     ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}
void j() //마끼아또+폼
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥ M I L K F O A M ∥\n");
   gotoxy(10,11); printf("∥    S Y R U P    ∥\n");
   gotoxy(10,12); printf("∥ E S P R E S S O ∥\n");
   gotoxy(10,13); printf("∥     M I L K     ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}

void k() //에스프레소
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥                 ∥\n");
   gotoxy(10,13); printf("∥                 ∥\n");
   gotoxy(10,14); printf("∥ E S P R E S S O ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}
void l() //아이스티
{
   gotoxy(10,6); printf("∥                 ∥\n");
   gotoxy(10,7); printf("∥                 ∥\n");
   gotoxy(10,8); printf("∥                 ∥\n");
   gotoxy(10,9); printf("∥                 ∥\n");
   gotoxy(10,10); printf("∥                 ∥\n");
   gotoxy(10,11); printf("∥                 ∥\n");
   gotoxy(10,12); printf("∥   P O W D E R   ∥\n");
   gotoxy(10,13); printf("∥    W A T E R    ∥\n");
   gotoxy(10,14); printf("∥      I C E      ∥\n");
   gotoxy(10,15); printf(" *=================* \n");
}
void Time(int n, int n1,int n2,int n3,int n4,int n5,int n6,int n7)
{
   int i;
   int sel;
   printf("음료?\n\n1.아메리카  2.카페모카  3.카페라떼  4.카푸치노  5.카라멜 마끼아또  6.에소프레소  7.아이스티  8.녹차라떼\n\n");
   scanf("%d", &sel);
   if(sel==1)
   {
	   for(i=0; i<n; i++)
	   {
           printf("\n\n아메리카노\n\n");
           Sleep(500);
           system("cls");
           a();
           Sleep(500);
           system("cls");
           b();
           Sleep(500);
           system("cls");
           e();
           Sleep(500);
           system("cls");
           f();
           Sleep(500);
		   printf("\a");
		   printf("\n주문하신 아메리카노가 준비되었습니다. 맛있게 드세요!\n\n\n");
	   }
	 
   }
   else if(sel==2)
   {
	   for(i=0; i<n1; i++)
	   {
           printf("\n\n카페모카\n\n");
           Sleep(500);

           system("cls");
           a();
           Sleep(500);
           system("cls");
           b();
           Sleep(500);
           system("cls");
           c();
           Sleep(500);
           system("cls");
           d();
           Sleep(500);
		   printf("\a");
		   printf("\n주문하신 카페모카가 준비되었습니다. 맛있게 드세요!\n\n\n");
	   }   
	  
   }
   else if(sel==3)
   {
	   for(i=0; i<n2; i++)
	   {

		   printf("\n\n카페라떼\n\n");
           Sleep(500);
           system("cls");
           a();
           Sleep(500);
           system("cls");
           b();
           Sleep(500);
           system("cls");
           c();
           Sleep(500);
           system("cls");
           d();
           Sleep(500);
		   printf("\a");
		   printf("\n주문하신 카페라떼가 준비되었습니다. 맛있게 드세요!\n\n\n");
	   }
	   
   }
   else if(sel==4)
   {
	   for(i=0; i<n3; i++)
	   {
		   printf("\n\n카푸치노\n\n");
		   Sleep(500);
		   system("cls");
		   a();
		   Sleep(500);
		   system("cls");
		   b();
		   Sleep(500);
		   system("cls");
		   e();
		   Sleep(500);
		   system("cls");
		   f();
		   Sleep(500);
		   system("cls");
		   g();
		   Sleep(500);
		   printf("\a");
		   printf("\n주문하신 카푸치노가 준비되었습니다. 맛있게 드세요!\n\n\n");
	   }
   }
   else if(sel==5)
   {
	    for(i=0; i<n4; i++)
		{
		   printf("\n\n카라멜 마끼아또\n\n");
		   Sleep(500);
		   system("cls");
		   a();
		   Sleep(500);
		   system("cls");
		   b();
		   Sleep(500);
		   system("cls");
		   c();
		   Sleep(500);
		   system("cls");
		   d();
		   Sleep(500);
		   system("cls");
		   h();
		   Sleep(500);
		   system("cls");
		   j();
		   Sleep(500);
		   printf("\a");
		   printf("\n주문하신 카라멜 마끼아또가 준비되었습니다. 맛있게 드세요!\n\n\n");
		}
   }
   else if(sel==6)
   {
	   for(i=0; i<n5; i++)
	   {
		   printf("\n\n에스프레소\n\n");
		   Sleep(500);
		   system("cls");
		   a();
		   Sleep(500);
		   system("cls");
		   k();
		   Sleep(500);
		   printf("\a");
		   printf("\n주문하신 에스프레소가 준비되었습니다. 맛있게 드세요!\n\n\n");
	   }
   }
   else if(sel==7)
   {
	   for(i=0; i<n6; i++)
	   {
		   printf("\n\n아이스티\n\n");
		   Sleep(500);
		   system("cls");
		   a();
		   Sleep(500);
		   system("cls");
		   b();
		   Sleep(500);
		   system("cls");
		   e();
		   Sleep(500);
		   system("cls");
		   l();
		   Sleep(500);
		   printf("\a");
		   printf("\n주문하신 에스프레소가 준비되었습니다. 맛있게 드세요!\n\n\n");
	   }

	  
   }
   else if(sel==8)
   {
	   for(i=0; i<n7; i++)
	   {
		   printf("녹차 라떼\n\n");
		   Sleep(500);
		   system("cls");
		   a();
		   Sleep(500);
		   system("cls");
		   b();
		   Sleep(500);
		   system("cls");
		   e();
		   Sleep(500);
		   system("cls");
		   l();
		   Sleep(500);
		   printf("\a");
		   printf("\n주문하신 에스프레소가 준비되었습니다. 맛있게 드세요!\n\n\n");
	   }
   } 
   else
      printf("\n\n잘못입력하셨습니다. 다시 입력해주세요. \n\n");
      
}

void Receipt(int total,int bell,int n,int n1,int n2,int n3,int n4,int n5,int n6,int n7) //영수증
{
   time_t timer;
   struct tm *t;
   int pn;
   int tt;
   int phone;
    timer = time(NULL); // 현재 시각을 초 단위로 얻기

   t = localtime(&timer);

     tt=total*0.912;
     printf("현금영수증을 발급하시겠습니까?  yes=1/no=2:\n\n");
     scanf("%d", &pn);
	  if(pn==1)
         {
             printf("휴대폰 번호 입력: ");
             scanf("%d",&phone);
         }
	 
     printf("\n            SMU COFFEE\n");
     printf("현금(소득공제)\n");
     printf("천안안서DT점   충남 천안시 상명대길 31\n");
     printf("대표:홍마담 201-81-21515 T:041-123-4567\n");
     printf("[POS 01]               %d-%d-%d %d:%d:%d\n",t->tm_year + 1900,t->tm_mon + 1, t->tm_mday,t->tm_hour, t->tm_min,t->tm_sec);
     printf("---------------------------------------\n");
     printf("            주문번호: %d\n", bell);
     printf("---------------------------------------\n");
     if(n!=0)
        printf("아메리카노     2,000원  %d   %d\n",n,2000*n);
     if(n1!=0)
        printf("카페 모카      4,500원  %d   %d\n",n1,4500*n1);
     if(n2!=0)
        printf("카페 오레      4,000원  %d   %d\n",n2,4000*n2);
	 if(n2!=0)
        printf("카푸치노       4,800원  %d   %d\n",n3,4800*n3);
	 if(n2!=0)  
        printf("카라멜 마끼아또4,200원  %d   %d\n",n4,4200*n4);
	 if(n2!=0)
        printf("에스프레소     1,500원  %d   %d\n",n5,1500*n5);
	 if(n2!=0)
        printf("아이스티       1,500원  %d   %d\n",n6,1500*n6);
	 if(n2!=0)
        printf("녹차 라떼      1,500원  %d   %d\n",n7,4000*n7);
     printf("---------------------------------------\n");
     printf("subtotal                ->      %d\n",total);
     printf("NET Amount              ->      %d\n",tt);
     printf("Tax                     ->      %d\n",total-tt);
     printf("---------------------------------------\n");
     printf("TOTAL                            %d\n",total);
	 if(pn==1)
	 {
	     printf("현금영수증:                 010%d\n\n",phone);//해결
	 }
	 else
	 {
		 printf("현금영수증:                 010****5678\n\n");
	 }
}
