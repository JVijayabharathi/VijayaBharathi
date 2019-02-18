#include<stdio.h>
#include<conio.h>
void main()
{
int i,number,pow=1,flag=0;
clrscr();
scanf("%d",&number);
for(;;number++)
{
 pow*=2;
 if(number==pow)
    {
      printf("%d",number);
      break;
    }
}
getch();
}