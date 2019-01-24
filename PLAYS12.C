#include<stdio.h>
#include<conio.h>
void main()
{
int number,rem,temp,tot=0;
clrscr();
scanf("%d",&number);
//temp=number;
while(number>0)
{
rem=number%10;
tot=tot*10+rem;
number/=10;
}
printf("%d",tot);
getch();
}