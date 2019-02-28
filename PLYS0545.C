#include <stdio.h>
int main()
{
	int prm,area,l,w,i,j,pipe,c=0;
	scanf("%d",&prm);
	scanf("%d",&area);
	pipe=prm/2;
	for(i=1;i<=area;i++)
	{
		for(j=1;j<=pipe;j++)
		{
			if(i+j==pipe&&i*j==area)
			{
				c=1;
				break;
			}
		}
	}
	if(c==1)
	{
		printf("yes");
	}
	else if(c==0)
	{
		printf("no");
	}
	return 0;
}
