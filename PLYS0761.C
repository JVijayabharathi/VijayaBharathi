#include<stdio.h>
int main()
{
	int a[50],n,x,temp=0,i;
	scanf("%d %d",&n,&x);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp+=a[i];
	}
	if(temp==x)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
  return 0;
}
