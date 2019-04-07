#include <stdio.h>
int main() 
{
	int n,num[100],i,j,t,temp1=0;
  scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				t=num[i];
				num[i]=num[j];
				num[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]==num[j])
			{
				if(num[i]!=temp1)
				printf("%d ",num[i]);
				temp1=num[i];
				break;
			}
		}
	}
	return 0;
}
