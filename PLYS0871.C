#include<stdio.h>
int main()
{
int n,a[100],i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if((a[i]>a[i+1])&&(i<n-1))
{
printf("%d ",a[i]);
}
else if((a[i]<a[i+1])&&(i<n-1))
{
printf("%d ",a[i+1]);
}
else if(a[i]==a[i+1])
{
printf("%d ",a[i]);
}
}
return 0;
}
