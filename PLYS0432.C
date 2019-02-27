#include <stdio.h>

int main()
{
   int num[100],n,k,i,flag=0;
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&num[i]);
   }
   for(i=0;i<n;i++)
   {
       if(num[i]==k)
       {
           flag=1;
           break;
       }
   }
   if(flag==0)
    printf("no");
   else
    printf("yes");
   
   return 0;
}
