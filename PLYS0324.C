#include <stdio.h>
#include<string.h>
int main()
{
   char str[100];
   int i,flag=0,count=0;
   scanf("%s",str);
   count=strlen(str);
   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]>='0' && str[i]<='9')
           flag++;
   }
   if(flag==count)
      printf("yes");
    else
      printf("no");
    return 0;
}
