#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100];
	int i;
	scanf("%s",&str1);
	scanf("%s",&str2);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str2[0]==str1[i])
		{
			printf("%d",i+1);
			break;
		}
	}
}
