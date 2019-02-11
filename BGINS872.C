#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i,temp=0;
clrscr();
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
 temp++;
}
if(temp==0)
 printf("no");
else
 printf("yes");
getch();
}