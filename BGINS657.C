#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,arr[100],cnt=0;
clrscr();
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]==k)
 cnt++;
}
printf("%d",cnt);
getch();
}