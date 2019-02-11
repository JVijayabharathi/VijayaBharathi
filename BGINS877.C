#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,number;
clrscr();
scanf("%d",&number);
for(i=1;i<=number;i++)
{
if(number%i==0)
 printf("%d ",i);
}
getch();
}