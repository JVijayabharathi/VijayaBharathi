#include<stdio.h>
int main()
{
    int n,k,i,p=1,b=1,npk;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        p*=i;
    }
    for(i=1;i<=n-k;i++)
    {
        b*=i;
    }
    npk=p/b;
    printf("%d",npk);
    return 0;
}
