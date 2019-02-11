#include<stdio.h>
#include<conio.h>
void main()
{
int number,arr[10],i=0,count=0;
clrscr();
scanf("%d",&number);
for(;number>0;number/=10)
{
arr[i]=number%10;
count++;
i++;
}
for(i=count-1;i>=0;i--)
 printf("%d ",arr[i]);
getch();
}