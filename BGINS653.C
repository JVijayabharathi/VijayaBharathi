#include<stdio.h>
#include<conio.h>
void main()
{
int arr,number,sum=0;
clrscr();
scanf("%d",&number);
for(;number>0;number/=10)
{
arr=number%10;
sum+=arr;
}
printf("%d",sum);
getch();
}