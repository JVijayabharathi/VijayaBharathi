#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i,j=0,k;
    scanf("%[^\n]s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]!=' ')
        {
            s2[j]=s1[i];
            j++;
        }
        if(s1[i]==' ')
        {
            for(k=j-1;k>=0;k--)
            {
                printf("%c",s2[k]);
                s2[k]='\0';
            }
            printf(" ");
            j=0;
        }
            
    }
    return 0;
        
}
