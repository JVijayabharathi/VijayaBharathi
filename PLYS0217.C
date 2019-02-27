#include <stdio.h>

void main() 
{
	int ln,r,len,i;
	scanf("%d %d",&ln,&r);
	if(ln>r)
	{
		len=l;
	}
	else
	{
		len=r;
	}
	for(i=2;i<=len;i++)
	{
		if((i%ln==0) && (i%r==0))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
