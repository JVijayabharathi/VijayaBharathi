#include<stdio.h>
#include<conio.h>
void main()
{
int num,num1,num2;
clrscr();
scanf("%d %d %d",&num,&num1,&num2);
if(num>num1 && num<num2)
 printf("yes");
else
 printf("no");
getch();
}