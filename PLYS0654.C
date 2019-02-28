#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],str2[100];
	int i,n,m,c=0;
	scanf("%s",&str);
	scanf("%s",&str2);
	n=strlen(str);
	m=strlen(str2);
	if(m!=n)
	{
		printf("no");
	}
	else
	{
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==str2[i])
		{
			c+=1;
		}
	}
	if(c==n)
	{
		printf("yes");
	}
}
}
