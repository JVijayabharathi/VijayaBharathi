#include <stdio.h>
int main() 
{

char str[30];
int n,i,j,temp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s\n",str);

	for(i=0;i<n;i++)
	{
		for(j=0;str[j]!='\0';j++)
		{
			if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
			{
				temp=1;
				break;
			}
		}
		if(temp==0)
		break;
	
	}
	if(temp==0)
		printf("no");

	else
		printf("yes");

}
