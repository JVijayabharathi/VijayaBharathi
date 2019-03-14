#include<stdio.h>
void main()
{
int n,i,k,a[100];
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-k;i++)
{
printf("%d ",a[i]);
}
}
