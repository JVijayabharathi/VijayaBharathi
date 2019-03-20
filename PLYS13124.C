#include<stdio.h>
int main()
{
 int n,a[50],i,j,cnt=0;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=1;;i++)
 {
  cnt=0;
  for(j=0;j<n;j++)
  {
   if(i%a[j]==0)
   {
    cnt++;
   }
  }
  if(cnt==n)
  {
   printf("%d",i);
   break;
  }
 }
 return 0;
}
