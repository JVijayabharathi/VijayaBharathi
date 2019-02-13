#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,res;
clrscr();
scanf("%d %d %d",&a,&b,&c);
res=a*b%c;
printf("%d",res);
getch();
}