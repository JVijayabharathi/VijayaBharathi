#include <stdio.h>
int main()
{
   int array[100],n,i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
{
    scanf("%d",&array[i]);
}

for(i=1;i<n;i++)
{
 
if((array[i]%array[i-1])==0)
{
    printf("%d ",array[i]);
}
}
    return 0;
}
