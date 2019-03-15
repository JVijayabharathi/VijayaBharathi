#include<stdio.h>
int main()
{
	int n,k;
	float c;
	scanf("%d %d",&n,&k);
	c=n>>k;
	printf("%.2f",c);
}
