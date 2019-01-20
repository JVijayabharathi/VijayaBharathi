#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
scanf("%d",&num);
if(num<0)
 printf("Invalid");
else if(num%2==0)
 printf("Even");
else
 printf("Odd");
getch();
}