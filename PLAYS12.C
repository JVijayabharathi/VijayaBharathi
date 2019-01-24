#include<stdio.h>
#include<conio.h>
void main()
{
int number,i,fact=1;
clrscr();
scanf("%d",&number);
for(i=number;i>0;i--)
 fact*=i;
printf("%d",fact);
getch();
}