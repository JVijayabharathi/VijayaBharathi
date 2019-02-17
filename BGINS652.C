#include<stdio.h>
#include<conio.h>
void main() 
{
int num;
printf("\n enter the number : ");
scanf("%d",&num);
switch(num)
{
case 1:printf("\none");break;
case 2:printf("\ntwo");break;
case 3:printf("\nthree");break;
case 4:printf("\nfour");break;
case 5:printf("\nfive");break;
case 6:printf("\nsix");break;
case 7:printf("\nseven");break;
case 8:printf("\neight");break;
case 9:printf("\nnine");break;
case 10:printf("\nten");break;
default:
printf("\n enter numbers from 1 to 10");
}
getch();
}