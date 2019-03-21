#include <stdio.h>
int main()
{
    char str[1000];
    int n,i,j,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&str[i]);
    }
    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=i+1;j<n;j++)
        {
            if(str[i]==str[j])
            {
                cnt++;
            }
        }
        if(cnt==2)
        {
            printf("yes");
            break;
        }
                   
    }
    if(cnt==0)
    {
        printf("no");
    }

    return 0;
}
