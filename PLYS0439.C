#include <stdio.h>
int main()
{
	int n,i,j,multi=1,temp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			multi=multi*2;
			if(multi==n)
			{
				temp=1;
				break;
			}
			
		}
	}
	if(temp==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
