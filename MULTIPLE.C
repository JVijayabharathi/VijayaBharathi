#include<stdio.h>
void main()
{
int i,number,fact;
clrscr();
scanf("%d",&number);
for(i=1;i<=5;i++)
 {
 fact=i*number;
 printf("%d ",fact);
 }
getch();
}