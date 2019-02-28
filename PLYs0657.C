#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],strn[100];
	int i,c=0;
	scanf("%s",&str);
	scanf("%s",&strn);
	for(i=0;str[i]!='\0';i++)
	{
		if(strn[0]==str[i])
		{
			c=c+1;
		}
	}
	printf("%d",c);
}
