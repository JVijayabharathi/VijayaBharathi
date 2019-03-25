#include <stdio.h>
int main()
{
    int num1,num2,xor,bin=0,r,po=1,cunt=0;
   scanf("%d %d",&num1,&num2);
   xor=num1^num2;
   while(xor>0)
   {
       ra=xor%2;
       bin=bin+ra*p;
      xor=xor/2;
       po=po*10;
   }
   while(bin>0)
   {
       ra=bin%10;
       if(ra==1)
       {
           cunt++;
       }
       bin=bin/10;
   }
   printf("%d",c); 
   return 0;
}
