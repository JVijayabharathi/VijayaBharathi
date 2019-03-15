#include<stdio.h>
int main()
{
	int n,a[100],min,t,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0]|a[1];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			t=a[i]|a[j];
			if(t>min)
			{
				min=t;
			}
		}
	}
	printf("%d",min);
return 0;
}
