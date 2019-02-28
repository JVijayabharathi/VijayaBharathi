#include<stdio.h>
void main()
{
	int num,i;
	scanf("%d",&num);
	if(num<=3)
	{
		printf("no");
	}
	else
	{
	for(i=3;i<num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
		}
	}
}
}
