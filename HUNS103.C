#include <stdio.h>

int main(void) {
  int n,a[100],i,j,k=0;
  printf("WELCOME\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(i==a[i])
    {
      printf("%d ",i);
      k=1;
    }
  }
  if(k==0)
     printf("-1");
  return 0;
}
