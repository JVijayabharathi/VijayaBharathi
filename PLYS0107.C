#include<stdio.h>
#include<conio.h>
void main()
{
char str[100],ch;
int i;
clrscr();
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
  if(i%2==0)
  {
     ch=str[i];
     str[i]=str[i+1];
     str[i+1]=ch;
  }
  printf("%c",str[i]);

}
getch();
}