#include<stdio.h>
void main()
{
	char str[100];
	int i,temp=0;
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		temp=temp+1;
	}
	printf("%d",temp);
}
