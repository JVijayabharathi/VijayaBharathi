#include<stdio.h>
int main()
{
	int i,j,n,c=1,k=1,nck=1,nf=1,kf=1;
	scanf("%d",&n);
	scanf("\t%d",&k);
	for(i=1;i<=n;i++)
	{
		nf*=i;
	}
	for(i=1;i<=k;i++)
	{
		kf*=i;
	}
	for(i=1;i<=n-k;i++)
	{
		c*=i;
	}
	nck=nf/(kf*c);
	printf("\n%d",nck);
  return 0;
}
