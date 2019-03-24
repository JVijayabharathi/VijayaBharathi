#include<stdio.h>
#include<string.h>
void main()
{
    char str[1000];
    int i,j,c=0;
    scanf("%s",str);
    j=strlen(str);
    for(i=0;i<j;i++)
    {
        if(str[i]=='a'||str[i]=='b')
        {
            c++;
        }
    }
    if((c==j)||(c==j-1))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
}
