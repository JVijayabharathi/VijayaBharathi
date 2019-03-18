#include <stdio.h>
int main() {
	int num,sum=0,a[50],i;
  scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<num-1;i++)
	{
		sum=sum+(a[i]+a[i+1]);
	}
	printf("%d",sum);
	return 0;
}
