#include <stdio.h>

int main(void) {
  int n,m,a[100],b[100],i,j,k,cnt1=0,cnt2=0;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
    cnt1++;
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(b[i]==a[j])
      {
        cnt2++;
      }
    }
  }
  if(cnt1==cnt2)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }

  return 0;
}
