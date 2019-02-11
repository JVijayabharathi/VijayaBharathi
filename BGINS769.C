#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
clrscr();
scanf("%d %d",&num1,&num2);
num1-=num2;
if(num1%2==0)
 printf("even");
else
 printf("odd");
getch();
}