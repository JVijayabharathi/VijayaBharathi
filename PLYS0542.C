#include <stdio.h>
int main() 
{
	int n,num[20],i,j,temp=0;
	scanf("%d\n",&n);
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
			temp=1;
			break;
			
		}
		}
	}
	if(temp==1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
