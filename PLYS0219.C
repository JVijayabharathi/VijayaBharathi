#include <stdio.h>

void main() 
{
	int n,i,j,flg=1;
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
		if(n%j==0)
		{
			flg=1;
			for(i=2;i<=j/2;i++)
			{
			if(j%i==0)
			{
			flg=0;
			break;
			}
			}
		
	
	if(flg==1)
	{
		printf("%d ",j);
	}
		}
	}
	return 0;
}
