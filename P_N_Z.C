#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
scanf("%d",&num);
if(num>0)
 printf("Positive");
else if(num<0)
 printf("Negative");
else
 printf("Zero");
getch();
}