#include <stdio.h>
#include<string.h>
int main() 
{
	char str1[20],str2[20];
	int i,temp=1;
	scanf("%s %s",str1,str2);
	for(i=0;str2[i]!='\0';i++)
	{
		if(str2[i]=='b'||str2[i]=='a'||str2[i]=='n'||str2[i]=='a'||str2[i]=='n'||str2[i]=='a')
		{
			temp=1;
		}
		else
		{
			temp=0;
			break;
		}
	}
	if(temp==0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
