#include <stdio.h>

int main()
{
   char str[100],str1[100];
   int i;
   scanf("%[^\n]s",str);
   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]==' ')
       {
           if(str[i+1]==' ')
           {
           str[i]=str[i+1];
           }
       }
       str1[i]=str[i];
   }
   printf("%s",str1);
   return 0;
}
