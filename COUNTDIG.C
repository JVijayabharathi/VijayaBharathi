#include<stdio.h>
#include<conio.h>
void main()
{
int number,count=0;
clrscr();
scanf("%d",&number);
for(;number>0;number/=10)
 count++;
printf("%d",count);
getch();
}