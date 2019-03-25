#include<stdio.h>
#include<conio.h>
int main()
{
    int number[100],i,n,k,flag=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=0;i<n;i++)
    {
        if(number[i]==k)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("yes");
    else
    printf("no");
    return 0;
}
