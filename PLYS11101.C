#include<stdio.h>
void main()
{
	int array[100],n,i,sum=0,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(array[i]>array[i+1])
		{
			sum=sum+array[i];
		}
		else if(array[i]<array[i+1])
		{
			sum=sum+array[i+1];	
		}
		else if(array[i]==array[i+1])
		{
			sum+=array[i];
		}
	}
		printf("%d",sum);
}
