#include<stdio.h>
#include<conio.h>
void main()
{
int intr_s=1,intr_e=10,number;
clrscr();
scanf("%d",&number);
if(number>=intr_s && number<=intr_e)
 printf("Yes");
else
 printf("No");
getch();
}