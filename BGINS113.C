#include <stdio.h>
#include<string.h>
void main() 
{
char str[50];
int i=0,n;
clrscr();
scanf("%[^\n]s",str);
n=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(i==0)
  str[i]=toupper(str[i]);
if(str[i]==' ')
 str[i+1]=toupper(str[i+1]);
}
printf("\n%s",str);
getch();
}