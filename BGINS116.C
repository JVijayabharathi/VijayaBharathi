#include <stdio.h>
#include<math.h>
int main()
{
int num,k,i,l=0,a[100];
scanf("%d %d",&num,&k);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
  for(i=0;i<num;i++)
   {
if(a[i]%2!=0)
  {
    l++;
      
      if(l==k)
       printf("%d",a[i]);
 }
 }
return 0;
}