#include <stdio.h>
int main() 
{
	long int n;
	int i,j,k=0,temp,a[100],e=0;
	scanf("%ld",&n);
	while(n!=0)
	{
		temp=n%10;
		a[k]=temp;
		k++;
		n=n/10;
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(a[i]==a[j])
			{
				e=1;
			}
		}
	}
	if(e==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
