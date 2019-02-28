#include <stdio.h>

int main() 
{
	int n,k,cot=0,temp;
	scanf("%d %d",&n,&k);
	while(n!=0)
	{
		temp=n%10;
		if(temp==k)
		{
			cot=cot+1;
		}
		n=n/10;
	}
	printf("%d",cot);
	return 0;
}
