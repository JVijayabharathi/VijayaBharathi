#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
 char str[100], str1[100];
 gets(str);
 strcpy(str1,str);
  strrev(str1); 
  if (strcmp(str, str1) == 0)
    printf("yes");
  else
    printf("no");
 getch();
}