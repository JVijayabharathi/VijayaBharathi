#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,i,temp=0;
clrscr();
scanf("%d %d",&num1,&num2);
num1*=num2;
for(i=1;i<=num1;i++)
{
if(i*i==num1)
 {
 temp=1;
 break;}
}
if(temp==1)
 printf("yes");
else
 printf("no");
getch();
}