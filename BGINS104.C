#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,arr[100],i;
clrscr();
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
 if(i==k-1)
    printf("%d",arr[i]);
}
getch();
}