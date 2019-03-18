#include <stdio.h>
int main(void) 
{
	int a[n],i,sum=0,res;
  scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	res=sum;
	printf("%d",res);
	return 0;
}
