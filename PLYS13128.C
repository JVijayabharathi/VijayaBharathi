#include <stdio.h>
int main() 
{
	long int a[1000],i,m=1,n;
  scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		m*=a[i];
	}
	if(m%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	
	return 0;
}
