#include <stdio.h>
#include<string.h>
void main() 
{
    char a[10];
    char str[]="kabali";
    int i,j,t=0,n,n1,k=0,len,cnt=0;
    n=strlen(str);
    scanf("%d",&n1);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
            t=str[i];
            str[i]=str[j];
            str[j]=t;
            }
        }
    }
   while(k<n1)
   {
       scanf("%s",a);
       len=strlen(a);
       if(n==len)
       {
           for(i=0;i<n;i++)
           {
               for(j=i+1;j<n;j++)
               {
                   if(a[i]>a[j])
                   {
                       t=a[i];
                       a[i]=a[j];
                       a[j]=t;
                   }
               }
           }
           if(strcmp(str,a)==0)
           {
               cnt++;
           }
       }k++;
   }
   printf("%d",cnt);
}
