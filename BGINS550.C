#include<stdio.h>
#include<conio.h>
void main()
{
int i,number,pow=1,flag=0;
clrscr();
scanf("%d",&number);
for(i=1;i<number;i++)
{
 pow*=2;
 if(number==pow)
    {
    flag=1;
    break;
    }
}
if(flag==1)
 printf("Yes");
else
 printf("No");
getch();
}