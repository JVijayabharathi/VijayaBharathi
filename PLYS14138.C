#include<stdio.h>
int main()
{
    int n,b=2,flag=0,i;
    scanf("%d",&n);
    for(i=0;i<n/2;i++)
    {
        if(b==n)
        {
            flag=1;
            break;
        }
        else
        {
            b=b*2;
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
