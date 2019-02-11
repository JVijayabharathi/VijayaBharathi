#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i,rng;
clrscr();
scanf("%s %d",str,&rng);
for(i=0;i<rng;i++)
{
 printf("%c",str[i]);
}
getch();
}