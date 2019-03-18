#include <stdio.h>
int main() 
{
	int number,sum=0,sq,rem;
	scanf("%d",&number);
	while(number!=0)
	{
		rem=number%10;
		sq=rem*rem;
		sum=sum+sq;
		number/=10;
	}
	printf("%d",sum);
	return 0;

}
