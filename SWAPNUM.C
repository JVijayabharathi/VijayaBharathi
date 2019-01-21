#include<stdio.h>
#include<conio.h>
void main()
{
int number1,number2;
clrscr();
scanf("%d %d",&number1,&number2);
number1+=number2;
number2=number1-number2;
number1-=number2;
printf("%d %d",number1,number2);
getch();
}