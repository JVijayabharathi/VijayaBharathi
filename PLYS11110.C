#include <stdio.h>
int main() 
{
	int n;
	int a[50],i,p[50],s[50],j,k,sum=0,temp,sum1=0,res;
  scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		p[j]=sum;
		j++;
	}
	for(j=n-1;j>=0;j--)
	{
		sum1=sum1+a[j];
		s[k]=sum1;
		k++;
	}
	i=0;
	j=n-1;
	while(i<j)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;
		j--;
	}
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			if(j==k)
			{
			res=p[j]+s[k];
			printf("%d ",res);
			}
		}
	}
	return 0;
}
