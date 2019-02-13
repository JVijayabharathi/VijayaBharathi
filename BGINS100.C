#include<stdio.h>
#include<conio.h>
void main()
{
int number,rem,pro=1;
clrscr();
scanf("%d",&number);
for(;number>0;number/=10)
{
rem=number%10;
pro*=rem;
}
printf("%d",pro);
getch();
}