#include<stdio.h>
#include<conio.h>
void main()
{
int number,cnt=0;
clrscr();
scanf("%d",&number);
for(;number>0;number/=10)
{
 cnt++;
}
printf("%d",cnt);
getch();
}