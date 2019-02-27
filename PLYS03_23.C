#include <stdio.h>
void main() 
{
    int a[10],k,i=0,p,n,j,temp=0;
	scanf("%d %d",&n,&p);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	j=0;
    while(j<p)
	{
	    scanf("%d",&k);
	    a[n]=k;
	    n++;
	   for(i=0;i<n;i++)
	    {
	        if(a[i]>=temp)
	        {
	            temp=a[i];
	        }
	    }
	    printf("%d ",temp); 
	j++; 
	}
}
