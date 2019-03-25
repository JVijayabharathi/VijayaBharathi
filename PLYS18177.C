#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],str2[100],t;
    int i,j,l,k=0,m;
    scanf("%d",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]!=' ')
        {
            str2[k]=str[i];
            k++;
        }
        if(str[i]==' ')
        {
            for(j=0;j<k;j++)
            {
                for(m=j+1;m<k;m++)
                {
                    if(str2[j]>str2[m])
                    {
                         t=str2[j];
                        str2[j]=str2[m];
                        str2[m]=t;
                    }
                }
            }
            printf("%s ",str2);
            for(j=0;j<k;j++)
            
            {
                str2[j]='\0';
            }
            k=0;
        }
    }
        for(j=0;j<k;j++)
            {
                for(m=j+1;m<k;m++)
                {
                    if(str2[j]>str2[m])
                    {
                         t=str2[j];
                        str2[j]=str2[m];
                        str2[m]=t;
                    }
                }
            }
            printf("%s",str2);
            return 0;
    }
