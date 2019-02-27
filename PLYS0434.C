#include <stdio.h>

int main()
{
   char strng[100],str[100],temp=0;
   int i,j=0;
   scanf("%s",strng);
   for(i=0;strng[i]!='\0';i++)
   {
       str[j]=strng[i+temp];
       temp+=2;
       j++;
   }
   str[j]='\0';
   printf("%s",str);
   return 0;
}
