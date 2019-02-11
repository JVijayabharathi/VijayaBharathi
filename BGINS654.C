#include<stdio.h>
#include<conio.h>
void main()
{
int number;
clrscr();
scanf("%d",&number);
if(number%2!=0)
 number-=1;
printf("%d",number);
getch();
}