#include<stdio.h>
#include<conio.h>
void main()
{
int fact=1,number,i;
clrscr();
scanf("%d",&number);
for(i=number;i>0;i--)
 fact*=i;
printf("%d",fact);
getch();
}