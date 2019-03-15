#include<stdio.h>
int main()
{
int j,i,n,a[100],cnt=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
cnt++;
}
}
}
printf("%d",e);
return 0;
}
