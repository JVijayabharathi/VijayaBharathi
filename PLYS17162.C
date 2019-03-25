#include<stdio.h>
int main()
{
    char a[100];
    int i,j,l,n,flag,count=0,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        l=strlen(a);
        for(j=0;j<l;j++)
        {
        
            if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
            {
                flag=1;
                break;
                
            }
            else
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            count++;
        }
    }
    if(count>=k)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
