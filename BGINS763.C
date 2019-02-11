#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int arr[10],i,min;
clrscr();
for(i=0;i<10;i++)
 scanf("%d",&arr[i]);
min=arr[0];
for(i=0;i<10;i++)
{
  if(arr[i]<min)
     min=arr[i];
}
printf("%d",min);
getch();
}