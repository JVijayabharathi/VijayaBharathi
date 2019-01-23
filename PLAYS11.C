#include<stdio.h>
#include<conio.h>
void main()
{
char string[50],r_string[50];
int i=0,j;
clrscr();
scanf("%s",string);
j=strlen(string);
for(j=j-1;j>=0;j--)
{
 r_string[i]=string[j];
i++;
}
r_string[i]='\0';
printf("%s",r_string);
getch();
}