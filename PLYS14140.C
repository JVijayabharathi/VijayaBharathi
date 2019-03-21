#include <stdio.h>
void main()
{
       int i,j=0;
    char str[100];
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
      if(str[i]!='a' && str[i]!='b')
          j=1;
    if(j==0)
      printf("yes");
    else
      printf("no");   
}
