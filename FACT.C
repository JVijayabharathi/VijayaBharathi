#include<stdio.h>
void main()
{
int i,number,fact=1;
clrscr();
scanf("%d",&number);
for(i=number;i>0;i--)
 {
 fact*=i;
 }
printf("%d ",fact);
getch();
}