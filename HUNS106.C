#include <stdio.h>

int main(void) {
  int n,a[100],i,j,temp;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
     
      if(a[i]!=a[j])
      {
       // printf("%d",a[i]); 
        temp=a[i];
        printf("%d ",temp);
        break;
      }
    }
    break;
  }
