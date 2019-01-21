#include<stdio.h>
#include<conio.h>
void main()
{
int i,array[10],max;
clrscr();
for(i=0;i<10;i++)
  scanf("%d",&array[i]);
max=array[0];
for(i=0;i<10;i++)
{
  if(max<array[i])
    max=array[i];
}
printf("%d",max);
getch();
}