#include <stdio.h>
void main()
{
   int n,array[30],i,sum=0,temp=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&array[i]);
   temp=array[1];
   array[1]=array[n-1];
   array[n-1]=temp;
   for(i=0;i<n-1;i++)
     if(array[i]<array[i+1])
        sum+=array[i+1];
   else
   sum=sum+array[i];
   printf("%d",sum);
}
