#include<stdio.h>
#include<conio.h>
void main()
{
int array[10],sum=0,i,n,k;
clrscr();
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
 scanf("%d",&array[i]);
for(i=0;i<k;i++)
 sum+=array[i];
printf("%d",sum);
getch();
}