#include <stdio.h>
#include<conio.h>
void main() 
{
	int numb,i,j,num,min;
	int array[100];
	scanf("%d",&numb);
	for(i=0;i<numb;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<numb;i++)
	{
		int count=0;
		for(j=0;j<numb;j++)
		{
			if(array[i]==array[j] && i!=j )
			{
				count=count+1;	
			}
			
		}
	if(count==0)
	{
		printf("%d",array[i]);
	}
	}
}
