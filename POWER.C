#include<stdio.h>
#include<conio.h>
void main()
{
int number1,number2,res=1;
clrscr();
scanf("%d %d",&number1,&number2);
for(;number2>0;number2--)
 res*=number1;
printf("%d",res);
getch();
}