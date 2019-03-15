#include<stdio.h>
int main()
{
	int n,a[100],min,t,i,j;
	printf("\nEnter the array elements : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
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
	printf("\nThe bitwise OR is %d.",min);
  return 0;
}
