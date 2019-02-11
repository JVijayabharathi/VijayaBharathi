#include<stdio.h>
#include<conio.h>
void main()
{
int i,number,sum=0;
clrscr();
scanf("%d",&number);
for(i=1;i<=number;i++)
{
 sum+=i;
}
printf("%d",sum);
getch();
}