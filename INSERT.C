#include <stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,n,a[100],temp;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
	if(a[i]>a[i+1])
	{
	    temp=a[i];
	    a[i]=a[i+1];
	    a[i+1]=temp;

	for(j=i;j>0;j--)
	{
	    if(a[j]<a[j-1])
	    {
		temp=a[j];
		a[j]=a[j-1];
		a[j-1]=temp;
		//for(k=0;k<n;k++)
		   //  printf("%d ",a[k]);
	    }


     //	printf("\n");
	}
	}


    }
    for(i=0;i<n;i++)
    {
	printf("%d ",a[i]);
    }
    getch();
    return 0;
}