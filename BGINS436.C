#include<stdio.h>
#include<conio.h>
void main()
{
char string[100];
int i,flag=0,f1=0;
clrscr();
scanf("%s",string);
for(i=0;string[i]!='\0';i++)
{
if((string[i]>='0' && string[i]<='9')||(string[i]>='a' && string[i]<='z')||(string[i]>='A' && string[i]<='Z'))
   f1++;
else
   flag++;
}
printf("%d",flag);
getch();
}