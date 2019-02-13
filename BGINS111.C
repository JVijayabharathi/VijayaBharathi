#include <stdio.h>
#include<conio.h>
void main()
{
char str[50];
int i,n,len;
clrscr();
scanf("%s %d",str,&n);
len=strlen(str);
for(i=n;i<=len;i++)
{
printf("%c",str[i]);
}
getch();
}