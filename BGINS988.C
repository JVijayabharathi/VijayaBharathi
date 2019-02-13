#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,rem,lcm,gcd,a,b;
clrscr();
printf("\n enter the numbers:");
scanf("%d %d",&x,&y);
a=x;
b=y;
do
{
rem=x%y;
if(rem==0)
break;
x=y;
y=rem;
}while(rem!=0);
gcd=y;
lcm=(a*b)/gcd;
printf("\n the lcm of the given number is: %d",lcm);
getch();
}