#include<stdio.h>
#include<conio.h>
void main()
{
int number1,number2,number3;
clrscr();
scanf("%d %d %d",&number1,&number2,&number3);
if(number1>number2)
{
 if(number1>number3)
   printf("%d",number1);
}
else if(number2>number3)
 printf("%d",number2);
else
 printf("%d",number3);
getch();
}