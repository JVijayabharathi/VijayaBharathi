#include <stdio.h>

int main(void) {
  int n,a[100],i,j,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      for(k=0;k<n;k++)
      {
        if(a[i]+a[j]==a[k])
        {
          printf("%d %d %d\n",a[i],a[j],a[k]);
        }
      }
    }
  }

  return 0;
}
