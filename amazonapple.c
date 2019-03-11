#include <stdio.h>

int main()
{
   int b=1,app,i=0,j=2,sum=0;
   scanf("%d",&app);
   while(1)
   {
       i++;
       sum=b*12;
       if(sum>=app)
       {
           printf("%d ",i);
           break;
       }
       b+=j*j;
       j++;
   }
