#include<string.h>
int main()
{
    char str1[100],str2[100][100],t[100];
    int i,n,j=0,k=0,l,flag,p;
    scanf("%s",str1);
    l=strlen(str1);
    for(i=0;i<l;i++)
    {
        if(str1[i]!=' ')
        {
            str2[j][k]=str1[i];
            k++;
        }
        if(str1[i]==' ')
        {
            j++;
            k=0;
        }
    }
    for(i=0;i<j+1;i++)
    {
        l=strlen(str2[i]);
        if(l==3)
        {
            if(str2[i][0]=='a' && str2[i][1]=='n' && str2[i][2]=='d')
            {
                p=i;
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            t=str2[p+1];
            str2[p+1]=str2[p-1];
            str2[p-1]=t;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%s",str2[i]);
    }
    return 0;
}
