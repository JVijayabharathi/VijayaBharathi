#include<stdio.h>
int main()
{
int j=0,i,n,m,a[100],temp,b[100];
scanf("%d",&n);
scanf("%d",&m);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=n;i<n+m;i++)
{
a[i]=b[j];
j++;
}
for(i=0;i<n+m;i++)
{
for(j=i+1;j<n+m;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n+m;i++)
{
printf("%d ",a[i]);
}
return 0;
}
