#include <stdio.h>

int main()
{
    int num1[100],num2[100],count,cnt,n,k,i,j,l,max;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num1[i]);
    }
    for(i=0;i<k;i++)
    {
        scanf("%d",&num2[i]);
    }
    count=k;
    cnt=n+count;
    i=0;
    for(j=k;j<cnt;j++)
    {
        num1[j]=num2[i];
        count++;
        for(k=0;k<count;k++)
        {
        for(l=k+1;i<count;k++)
        {
            if(num1[k]<num2[l])
            {
                max=num2[k]
            }
        }
        }
        printf("%d",max);
        
        i++;
    }
    return 0;
}
