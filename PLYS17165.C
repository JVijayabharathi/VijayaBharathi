#include <stdio.h>

int main()
{
    int num[100],n,i,k,flag=0,p;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
         if(num[i]>k)
            {
                p=num[i];
                flag=0;
                break;
            }
    }
    if(flag==0)
    {
        printf("%d",p);
    }
        
   
}
