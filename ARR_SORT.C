#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,range,array[10],temp;
clrscr();
scanf("%d",&range);
for(i=0;i<range;i++)
  scanf("%d",&array[i]);
for(i=0;i<range;i++)
{
  for(j=i+1;j<range;j++)
  {
   if(array[i]>array[j])
    {
      temp=array[i];
      array[i]=array[j];
      array[j]=temp;
    }
   }
}
for(i=0;i<range;i++)
 printf("%d ",array[i]);
getch();
}