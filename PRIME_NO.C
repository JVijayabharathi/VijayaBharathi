#include<stdio.h>
#include<conio.h>
void main()
{
int number,flag=0,i;
clrscr();
scanf("%d",&number);
for(i=2;i<number;i++)
{
   if(number%i==0)
   {
     flag=1;
     break;
   }
}
if(flag==0)
 printf("Yes");
else
 printf("No");
getch();
}