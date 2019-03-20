#include<stdio.h>
int main()
{
 int number,a[50],i,j,cnt=0;
 scanf("%d",&number);
 for(i=0;i<number;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<number;i++)
 {
  cnt=0;
  for(j=0;j<number;j++)
  {
   if(a[j]%a[i]==0)
   {
    cnt++;
   }
  }
  if(cnt==number)
  {
   printf("%d ",a[i]);
   break;
  }
 }
 return 0;
}
