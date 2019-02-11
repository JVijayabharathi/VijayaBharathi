#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
scanf("%d",&num);
for(;;num++)
{
if(num%10==0)
{
 printf("%d",num);
 break;
}
}
getch();
}