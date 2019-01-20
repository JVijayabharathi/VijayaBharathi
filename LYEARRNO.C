#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
scanf("%d",&year);
if(year%4==0)
 printf("Yes");
else if(year%400==0)
 printf("Yes");
else if(year%100==0)
 printf("No");
else
 printf("No");
getch();
}