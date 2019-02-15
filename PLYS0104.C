#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i;
clrscr();
scanf("%s",str);
for(i=0;;i++)
{
if(str[i]=='\0')
{
str[i]='.';
str[i+1]='\0';
break;
}
}
printf("%s",str);
getch();
}