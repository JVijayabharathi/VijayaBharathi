#include<stdio.h>
int main()
{
int j,i,n,a[100],temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
if(a[i]<n)
{
printf("%d ",a[i]);
}
}
return 0;
}
