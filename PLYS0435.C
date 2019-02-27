#include <stdio.h>
#include<string.h>
int main()
{
    char str[10],ch;
    int i,j,n,max=0,temp=0;
    scanf("%[^\n]s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        temp=1;
        if(str[i]=='+')
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(str[i]==str[j])
            {
                temp++;
                str[j]='+';
            }
        }
        if(temp>=max)
        {
            max=temp;
            ch=str[i];
        }
    }
    printf("%c %d",ch,max);
    }
}
