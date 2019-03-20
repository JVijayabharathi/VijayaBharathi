#include<stdio.h>
int main()
{
    int ni,mi,i,j,a,b,temp=0;
    scanf("%d %d",&ni,&mi);
    for(i=0;i<ni;i++)
    {
        scanf("%d %d",&a,&b);
        if(b==mi)
        {
            temp++;
        }
    }
    if(temp>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
