#include <stdio.h>

int main() 
{
	char strng1[50],strng2[50];
	int i,k,n1,n2,count=0;
	scanf("%s %s %d",strng1,strng2,&k);
	n1=strlen(strng1);
	n2=strlen(strng2);
	if(n1==n2)
	{
		for(i=0;i<n1;i++)
		{
			if(strng1[i]==strng2[i])
			{
				count=count+0;
			}
			else
			{
				count=count+1;
			}
		}
		if(count==k)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	else
	{
		printf("no");
	}
	return 0;
}
