#include <stdio.h>
int main() 
{
	int n,a[50],i,j;
  scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[i]='*';
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!='*')
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
