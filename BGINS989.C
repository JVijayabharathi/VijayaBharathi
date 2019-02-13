#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i;
clrscr();
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
 if(str[i]>str[i+1])
   printf("%c",str[i+1]);
}
getch();
}