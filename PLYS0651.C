#include<stdio.h>
void main()
{
	int n,num[100],t,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
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
	printf("%d",num[1]);
}
