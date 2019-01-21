#include<stdio.h>
#include<conio.h>
void main()
{
int array[10],range,i;
clrscr();
scanf("%d",&range);
for(i=0;i<range;i++)
 scanf("%d",&array[i]);
for(i=0;i<range;i++)
 printf("%d %d\n",array[i],i);
getch();
}