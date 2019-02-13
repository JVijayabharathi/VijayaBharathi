#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,arr[100],n,i;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
 sum+=arr[i];
}
printf("%d",sum);
getch();
}