#include<stdio.h>
void main()
{
	int a1,a2,a3,res;
	scanf("%d\n%d\n%d",&a1,&a2,&a3);
	res=a1+a2+a3;
	if(res==180)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
