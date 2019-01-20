#include<stdio.h>
#include<conio.h>
void main()
{
int i,range,array[10],max;
clrscr();
scanf("%d",&range);
for(i=0;i<range;i++)
  scanf("%d",&array[i]);
max=array[0];
for(i=0;i<range;i++)
{
  if(max<array[i])
    max=array[i];
}
printf("%d",max);
getch();
}