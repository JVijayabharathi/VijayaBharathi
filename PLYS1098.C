#include<stdio.h>
#include<string.h>
int main()
{
    char NUM[100000],n;
    int i,len,count=0;
    scanf("%s",NUM);
    scanf("%c",&n);
    len=strlen(NUM);
    for(i=0;i<len-1;i++) 
     {
       if(NUM[i]>='0' && NUM[i]<=n)
         {    count++;
         }
       }
     if(len-1==count)
        {
          printf("yes");
        }
    else
        {
         printf("no");
        }   
return 0;
}
