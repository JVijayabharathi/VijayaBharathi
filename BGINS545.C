#include<stdio.h>
#include<conio.h>
void main()
{
long int number,count=0;
clrscr();
scanf("%ld",&number);
for(;number>0;number/=10)
 count++;
printf("%ld",count);
getch();
}