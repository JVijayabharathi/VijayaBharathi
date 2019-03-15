#include<stdio.h>
int main()
{
	int a[100],n,i,temp,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n%2==0)
	{
	for(i=0;i<n;i=i+2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
else
{
for(i=0;i<n-1;i=i+2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}	
}
return 0;
}
