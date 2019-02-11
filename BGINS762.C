#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int i,temp=0,cnt;
clrscr();
scanf("%s",str);
cnt=strlen(str);
for(i=0;str[i]!='\0';i++)
{
 if(str[i]=='1' || str[i]=='0')
    temp++;
}
if(temp==cnt)
 printf("yes");
else
 printf("no");
getch();
}