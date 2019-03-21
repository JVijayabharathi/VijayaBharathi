#include<stdio.h>
void main()
{
    int n,array[100],l=0,i,r;
    scanf("%d",&n);
    while(n!=0)
    {
       array[l]=n%2;
       l++;
        n=n/2;
    }
    for(i=0;i<l;i++)
    {
    if(array[i]==1)
    {
    printf("%d",i+1);
    break;
    }
    }
    
}
