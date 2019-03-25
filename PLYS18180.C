#include <stdio.h>
int main()
{
int a1,b=1,c,rem,s=0,l=0,m=1;
scanf("%d",&a1);
while(a1!=0)
{
   rem=a1%10;
   s=s+rem*b;
   b=b*2;
   a1=a1/10;
   
   
   }

while(s>m)
{
    m=m*2;
}
   printf("%d",m); 

    return 0;
    }
