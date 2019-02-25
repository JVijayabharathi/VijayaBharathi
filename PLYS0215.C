#include <stdio.h>
 
int main() 
{
	char stng[50],charac;
	int i,j,cnt=1,temp=1;
	scanf("%[^\n]s",stng);
	for(i=0;stng[i]!='\0';i++)
	{
		for(j=i+1;stng[j]!='\0';j++)
		if(stng[i]==stng[j])
		{
			cnt++;
			if(cnt>temp)
			{
				temp=cnt;
				charac=stng[i];
			}
		}
 
	}
	printf("\n%c",charac);
}
