#include <stdio.h>

int main() 
{
	int lst,red,i,j,cnt=0;
	scanf("%d %d",&lst,&red);
	for(i=lst;i<=red;i++)
	{
		for(j=2;j<=red;j++)
		{
			if((j*j)==i)
			{
				cnt=cnt+1;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}
