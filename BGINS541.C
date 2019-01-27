#include<stdio.h>
#include<conio.h>
void main()
{
char S[100];
int K,i;
clrscr();
scanf("%s",S);
scanf("%d",&K);
for(i=1;i<=K;i++)
   printf("%s\n",S);
getch();
}