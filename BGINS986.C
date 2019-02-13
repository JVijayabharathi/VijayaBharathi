#include <stdio.h>
#include<string.h>
void main()
{
char str[50];
int i,temp=0;
clrscr();
printf("\nenter the string:");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==str[i+1])
{
temp=1;
break;
}
}
if(temp==1)
{
printf("\nno");
}
else
{
printf("\nyes");
}
getch();
}