#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,rem,gcd;
clrscr();
printf("\n enter the numbers:");
scanf("%d %d",&x,&y);
do
{
rem=x%y;
if(rem==0)
break;
x=y;
y=rem;
}while(rem!=0);
gcd=y;
printf("\n the gcd of the given number is: %d",gcd);
getch();
}