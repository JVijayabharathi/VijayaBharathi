#include <stdio.h>
#include<string.h>
int main() 
{
	char str[30];
	int i=0,j,temp,n;
	scanf("%s",str);
	n=strlen(str);
	j=n-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	for(i=0;i<n;i++)
	{
		printf("%c",str[i]);
		if(i==n-1)
		{
			break;
		}
		printf("-");
		
	}
	return 0;
}
