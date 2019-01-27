#include<stdio.h>
#include<conio.h>
void main()
{
int i,number[50],n,sum=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
 scanf("%d",&number[i]);
for(i=0;i<n;i++)
{
 sum+=number[i];
}
printf("%d",sum/n);
getch();
}