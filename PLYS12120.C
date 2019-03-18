#include <stdio.h>
int main()
{
	int num,sum=0,temp,rem;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		temp=rem*rem;
		sum=sum+temp;
		num=num/10;
	}
	printf("%d",sum);
	return 0;
}
