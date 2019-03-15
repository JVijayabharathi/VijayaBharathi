#include <stdio.h>

int main()
{
   
    int p=1,n,k;
    scanf("%d %d",&n,&k);
    for(;k>0;k--)
    {
        p*=n;
    }
    printf("%d",p);

    return 0;
}
