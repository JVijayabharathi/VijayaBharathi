#include <stdio.h>
int main()
{
    int n,num[100],i=0,rem,j,m,temp;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        num[i]=rem;
        n=n/10;
        i++;
    }
    for(j=0;j<i;j++)
    {
        for(m=j+1;m<i;m++)
        {
            if(num[m]>num[j])
            {
                temp=num[j];
                num[j]=num[m];
                num[m]=temp;
             }
        }
    }
    for(j=0;j<i;j++)
    {
        printf("%d",num[j]);
    }
    return 0;
}    
