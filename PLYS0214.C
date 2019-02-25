#include <stdio.h>
#include<string.h>
int main(void) 
{
	char stng[30];
	int i,n;
	scanf("%s",stng);
	n=strlen(stng);
	for(i=0;i<n;i++)
	{
		if(stng[i]=='a' || stng[i]=='e' || stng[i]=='i' || stng[i]=='o' || stng[i]=='u' || stng[i]=='A' || stng[i]=='E' || stng[i]=='I' || stng[i]=='O' || stng[i]=='U')
		{
			stng[i]='*';
		}
	}
	for(i=n;i>=0;i--)
	{
		if(stng[i]!='*')
		{
			printf("%c",stng[i]);
		}
	}
 
	return 0;
}
