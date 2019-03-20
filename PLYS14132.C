#include<stdio.h>
void main()
{
    char a[1000];
    int i,j,cnt=0,n=0,s;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]%2==0)
         cnt++;
       
        if(a[i]%2!=0)
          n++;
        
    }
    if(n>0 && cnt>0)
       s=n*cnt;
    
    printf("%d",s);
 
}
