#include<stdio.h>
#include<conio.h>
void main()
{
int number1,number2,i;
clrscr();
scanf("%d %d",&number1,&number2);
for(i=number1+1;i<number2;i++)
{
   if(i%2!=0)
   {
     printf("%d ",i);
   }
}
getch();
}