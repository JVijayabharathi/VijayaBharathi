#include<stdio.h>
#include<conio.h>
void main()
{
long int number;
 int c=0;
clrscr();
scanf("%ld",&number);
for(;number>0;number/=10)
 c++;
printf("%d",c);
getch();
}
