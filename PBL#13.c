#include <stdio.h>

struct myinfo
{
   char name[30];
   char major[50];
   char mynumber[20];
}

information(void)
{
   struct myinfo person;
   struct myinfo * ptr = &person;
   printf("이름입력: ");
   scanf("%s",ptr->name);
   printf("학과입력: ");
   scanf("%s",ptr->major);
   printf("학번입력: ");
   scanf("%s",ptr->mynumber);

   printf("\n\n\n*입력받은 학사정보*\n이름 : %s\n", person.name);
   printf("학과 : %s\n",  person.major);
   printf("학번 : %s\n",  person.mynumber);
}

int main(void)
{
   information();
   return 0;
}

#include <stdio.h>

int num;

struct midtest
    {
        int math;
        int english;
        int computer;
        int total;
        int average;
    }person[3];

struct s_info
{
    char name[30];
    char number[20];
    struct midtest * ptr;
}people[3];

void function(int math, int english, int computer)
{
    int sum=math+english+computer, avr=(math+english+computer)/3;
    printf("\n총점 : %d\n", sum);
    printf("평균 : %d\n\n", avr);
    (people[num].ptr->total)=sum;
    (people[num].ptr->average)=avr;
}

int main(void)
{
    people[0].ptr=&person[0];
    people[1].ptr=&person[1];
    people[2].ptr=&person[2];

    for( num=0 ; num<3 ; num++ )
    {
        printf("이름입력 : ");  scanf("%s", people[num].name);
        printf("학번입력 : ");  scanf("%s", people[num].number);
        printf("수학 점수입력: ");  scanf("%d", &person[num].math);
        printf("영어 점수입력: ");  scanf("%d", &person[num].english);
        printf("컴퓨터 점수입력: ");  scanf("%d", &person[num].computer);
        function(person[num].math, person[num].english, person[num].computer);
    }
    printf("\n\n\n*��� ��* \n");
    for( num=0 ; num<3 ; num++ )
    {
        printf("이름 : %s\n", people[num].name);
        printf("학번 : %s\n", people[num].number);
        printf("수학 : %d\n", people[num].ptr->math);
        printf("영어 : %d\n", people[num].ptr->english);
        printf("컴퓨터 : %d\n", people[num].ptr->computer);
        printf("총점 : %d\n", people[num].ptr->total);
        printf("평균 : %d\n\n", people[num].ptr->average);
    }
}