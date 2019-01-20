#include<stdio.h>
#include<conio.h>
void main()
{
int number,temp,tot=0,rem;
clrscr();
scanf("%d",&number);
temp=number;
for(;number>0;number/=10)
{
 rem=number%10;
 tot=tot*10+rem;
}
if(tot==temp)
 printf("Yes");
else
 printf("No");
getch();
}