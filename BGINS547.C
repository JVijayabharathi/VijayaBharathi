#include<stdio.h>
#include<conio.h>
void main()
{
int i,number[50],n,max,min;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
 scanf("%d",&number[i]);
max=min=number[0];
for(i=0;i<n;i++)
{
 if(number[i]>max)
   max=number[i];
 if(number[i]<min)
   min=number[i];
}
printf("%d %d",min,max);
getch();
}