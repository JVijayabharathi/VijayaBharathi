#include <stdio.h>
int main() 
{
	int n,k,i,j,mut=1,temp=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
			for(j=i;j>0;j--)
			{
				mut=mut*k;
				if(mut==n)
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
