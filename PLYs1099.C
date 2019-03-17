#include<stdio.h>
void main()
{
	long int n,j=1,t,octal=0;
	scanf("%ld",&n);
	while(n!=0)
	{
		t=n%10;
		octal=octal+t*j;
		j=j*2;
		n=n/10;
	}
	printf("%ld",octal);
}
