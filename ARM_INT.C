#include<stdio.h>
#include<conio.h>
void main()
{
int number1,number2,rem,tot=0,i,j;
clrscr();
scanf("%d %d",&number1,&number2);
for(i=number1;i<=number2;i++)
{
j=i;
tot=0;
while(j>0)
{
rem=j%10;
tot+=rem*rem*rem;
j/=10;
}
if(i==tot)
 printf("%d ",tot);
}
getch();
}