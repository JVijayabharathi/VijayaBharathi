#include <stdio.h>
int main() 
{
	int m,n,l;
	scanf("%d %d",&m,&n);
	l=m+n;
	int a[l],i,j,k=0,res[l],count=0,temp;
	for(i=0;i<l;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				res[k]=a[i];
				k++;
				count++;
			}
		}
	}
	for(k=0;k<count;k++)
	{
	  for(j=k+1;j<count;j++)
	  {
	  	if(res[k]>res[j])
	  	{
	  		temp=res[k];
	  		res[k]=res[j];
	  		res[j]=temp;
	  	}
	  }
	}
	for(i=0;i<count;i++)
	{
		printf("%d ",res[i]);
	}
	return 0;
}
