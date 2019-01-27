#include<stdio.h>
#include<conio.h>
void main()
{
char string[100];
int i,flag=0;
clrscr();
scanf("%s",string);
for(i=0;string[i]!='\0';i++)
{
if(string[i]>='0' && string[i]<='9')
 flag++;
}
printf("%d",flag);

getch();
}