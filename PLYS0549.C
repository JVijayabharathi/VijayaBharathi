#include <stdio.h>
int main() 
{
	int num;
	scanf("%d",&num);
	if(num>=-32768 && num<=32768)
	{
		printf("INT");
	}
	else
	{
		printf("LONG");
	}
	return 0;
}
