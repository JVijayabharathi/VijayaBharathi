#include<stdio.h>
#include<conio.h>
void main()
{
int i,range,array[10],min;
clrscr();
scanf("%d",&range);
for(i=0;i<range;i++)
  scanf("%d",&array[i]);
min=array[0];
for(i=0;i<range;i++)
{
  if(min>array[i])
    min=array[i];
}
printf("%d",min);
getch();
}