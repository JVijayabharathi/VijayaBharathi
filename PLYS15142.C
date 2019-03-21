#include <stdio.h>
#include <string.h>
int main()
{
    char a[100][100],b[100],b1[1000];
    int i,j,n,l,k,m,cnt=0,temp=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        strcpy(b,a[i]);
        strcpy(b1,a[i+1]);
        l=strlen(b);
        m=strlen(b1);
        if(l==m)
        {
            cnt=0;
        for(j=0;j<l;j++)
        {
            if(b[j]==b1[j])
            {
                cnt++;
            }
        }
        if(cnt==l)
        {
            temp++;
            if(temp==k-1)
            {
                break;
            }
        }
        else
        {
            temp=0;
        }
        }
    }
    if(temp==k-1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
