#include <stdio.h>

void main() 
{
	char strng[50];
	int i,n;
	scanf("%s",strng);
	n=strlen(strng);
	for(i=0;i<n;i++)
	{
		strng[i]=strng[i]+3;
		if(strng[i]=='X')
		strng[i]='A';
		if(strng[i]=='Y')
		strng[i]='B';
		if(strng[i]=='Z')
		strng[i]='C';
	}
	printf("%s",strng);
	return 0;
}
