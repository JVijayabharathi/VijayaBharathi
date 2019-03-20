#include <stdio.h>
int  main() 
{
	int a[50],n,r,l,i,j,temp,small;
	scanf("%d %d %d",&n,&l,&r);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	small=a[l-1];
	for(i=l-1;i<r;i++)
	{
		if(a[i]<=small)
		{
			small=a[i];
		}
	}
	printf("%d",small);

return 0;
}
