#include <stdio.h>
#include<string.h>
#include<math.h>
int main( ) 
{
	char strng[30];
	scanf("%s",strng);
	int i,len,value,sum=0;
	len=strlen(strng);
	int j=len-1;
	for(i=0;strng[i]!='\0';i++)
	{
		if(strng[i]>='A' && strng[i]<='F')
		{
			value=(strng[i]-65)+10;
		}
		else if(strng[i]>='0' && strng[i]<='9')
		{
			value=strng[i]-48;
		}
		sum=sum+(value*(pow(16,j)));
		j--;
	}
	printf("%d",sum);
	return 0;
}
