#include<stdio.h>
#include<conio.h>
void main()
{
int i,k;
clrscr();
scanf("%d %d",&i,&k);
i=i^k;
k=i^k;
i=i^k;
printf("%d %d",i,k);
getch();
}