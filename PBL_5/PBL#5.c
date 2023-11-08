#include <stdio.h>

int main(void)
{
	char ch;
	printf("아스키 문자: ");
	scanf("%c", &ch);
	printf("아스키 코드 값: %d \n", ch);
	return 0;
}

#include <stdio.h>

int main(void)
{
	int xpos1, ypos1;
	int xpos2, ypos2;
	int area;

	printf("좌 상단의 x, y 좌표: ");
	scanf("%d %d", &xpos1, &ypos1);
	printf("우 하단의x, y 좌표: ");
	scanf("%d %d", &xpos2, &ypos2);
	if(xpos2>xpos1&&ypos2>ypos1)
	    area=(xpos2-xpos1)*(ypos2-ypos1);
	else if(xpos1>xpos2&&ypos1>ypos2)
		area=(xpos1-xpos2)*(ypos1-ypos2);
	else if(xpos2>xpos1&&ypos2<ypos1)
		area=(xpos2-xpos1)*(ypos1-ypos2);
	else if(xpos1>xpos2&&ypos1<ypos2)
		area=(xpos1-xpos2)*(ypos2-ypos1);
	printf("직사각형의 넓이는 %d입니다. \n", area);
	return 0;
}

#include <stdio.h>

int main(void)
{
	int xpos1, ypos1;
	int xpos2, ypos2;
	int area;

	printf("좌 상단의 x, y 좌표: ");
	scanf("%d %d", &xpos1, &ypos1);
	printf("우 하단의 x, y 좌표: ");
	scanf("%d %d", &xpos2, &ypos2);
	area=(xpos2-xpos1)*(ypos2-ypos1);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다. \n", area);
	return 0;
}










