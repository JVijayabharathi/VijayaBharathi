#include<stdio.h>
void main()
{
	char s[10],st[10];
	int i,k,e=0;
	scanf("%s",&s);
	scanf("%s",&st);
	for(i=0;s[i]!='\0';i++)
	{
		for(k=0;st[k]!='\0';k++)
		{
			if(s[i]==st[k])
			{
				e=1;
				break;
			}
		}
	}
	if(e==1)
	{
		printf("yes");
	}
	else if(e==0)
	{
		printf("no");
	}
	
}
