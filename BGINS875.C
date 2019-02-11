#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char arr[100];
int i,len=0;
clrscr();
scanf("%s",arr);
len=strlen(arr);
if(len%2!=0)
 arr[len/2]='*';
else
 arr[len/2]=arr[(len/2)-1]='*';
printf("%s",arr);
getch();
}