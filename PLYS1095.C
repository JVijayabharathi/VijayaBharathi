#include <stdio.h>
int main() 
{
	int i,p,k,temp;
	char str[30];
	scanf("%s %d %d",str,&p,&k);
	for(i=0;str[i]!='\0';i++)
	{
		if(i==p-1)
		{
			temp=p-1;
			printf("%c",str[temp+k]);
		}
	}
	return 0;
}
