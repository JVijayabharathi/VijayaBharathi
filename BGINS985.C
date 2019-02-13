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
 if(i%2==0)
   printf("%c",str[i]);
}
printf(" ");
for(i=0;str[i]!='\0';i++)
{
 if(i%2!=0)
   printf("%c",str[i]);
}
getch();
}