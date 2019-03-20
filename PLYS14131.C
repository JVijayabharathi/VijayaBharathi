#include<stdio.h>
void main()
{
    int n,r,i,tot=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2!=0)
        {
            tot+=r;
        }
        n=n/10;
    }
    if(tot%2==0)
    {
        printf("E");
    }
    else
    {
        printf("O");
    }
}
