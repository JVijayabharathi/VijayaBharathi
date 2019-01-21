#include<stdio.h>
#include<conio.h>
void main()
{
char string[100];
int i,count=0;
clrscr();
scanf("%[^\n]s",string);
for(i=0;string[i]!='\0';i++)
{
 if(string[i]==' ')
    count++;
}
printf("%d",count);
getch();
}