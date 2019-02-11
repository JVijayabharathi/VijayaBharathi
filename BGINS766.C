#include<stdio.h>
#include<conio.h>
void main()
{
int num,flag=0,i;
clrscr();
scanf("%d",&num);
for(i=2;i<num;i++)
{
   if(num%i==0)
   {
     flag=1;
     break;
   }
}
if(flag==0)
 printf("yes");
else
 printf("no");
getch();
}