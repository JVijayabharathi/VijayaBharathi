#include<stdio.h>
int main()
{
    int number[100],i,n,s,c;
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++)
    scanf("%d",&number[i]);
    c=number[0];
    for(i=0;i<n;i++)
    {
        if(number[i]==k)
        {
            printf("%d",s);
            break;
        }
        else
        {
           if((number[i]>c)&&(number[i]<k))
           {
             printf("%d",number[i]);    
           }
           else
           {
             c=numbet[i];
           }
        }
    }
    return 0;
 }
