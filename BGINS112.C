#include<stdio.h>
#include<conio.h>
void main() 
{
int num,i;
int num1,rem;
clrscr();
scanf("%d",&num);
while(num!=1)
{
rem=num%2;
num1=num/2;
printf("%d\n",num1);
num=rem;
break;
}
getch();
}