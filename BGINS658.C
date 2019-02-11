#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,arr[100],temp=0;
clrscr();
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]==k)
 {
  temp++;
 }
}
if(temp==0)
 printf("no");
else
 printf("yes");
getch();
}