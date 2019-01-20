#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,sum=0;
clrscr();
scanf("%d",&num);
for(i=1;i<=num;i++)
 sum+=i;
printf("%d",sum);
getch();
}