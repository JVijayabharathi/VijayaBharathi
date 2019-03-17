#include <stdio.h>
int main() 
{
	int n,rem,array[20],i,count=0,sum;
	scanf("%d",&n);
	for(;n!=0;n/=10)
	{
		rem=n%10;
		array[i]=rem;
		i++;
		count++;
	}
	sum=array[0]+array[count-1];
	printf("%d",sum);
	return 0;
}
