#include<stdio.h>
int main()
{
int j,i,n,a[100],k,e=0;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]-a[j]==k)
{
e++;
}
}
}
printf("%d",e);
rerturn 0;
}
