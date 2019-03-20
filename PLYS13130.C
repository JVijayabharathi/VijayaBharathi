#include <stdio.h>
int main()
{
	int n,a[1000],i,tot=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		tot+=a[i];
		if(tot%2==0)
		{
			printf("%d ",tot);
		}
		else
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
