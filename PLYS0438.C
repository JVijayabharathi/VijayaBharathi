#include <stdio.h>
int main() 
{
	int num,i;
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(i%2==0 && num%i==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
