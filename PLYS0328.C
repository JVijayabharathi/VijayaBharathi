#include <stdio.h>

int main() 
{
	char strng[20];
	int i;
	scanf("%[^\n]s",strng);
	for(i=0;strng[i]!='\0';i++)
	{
		if(strng[i]==' ')
		{
			strng[i]='+';
		}
	}
	for(i=0;strng[i]!='\0';i++)
	{
	if(strng[i]!='+')
	{
	printf("%c",strng[i]);
	}
	}
	return 0;
}
