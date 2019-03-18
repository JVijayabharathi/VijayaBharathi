#include <stdio.h>
int main() 
{
	int n;
	int a[50],i,sum=0,j,res[50];
  scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=n;i>=0;i--)
	{
		sum=sum+a[i];
		res[j]=sum;
		j++;
	}
	for(j=n;j>0;j--)
	{
		printf("%d ",res[j]);
	}
	return 0;
}
