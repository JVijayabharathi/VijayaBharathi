#include<stdio.h> 
void main() 
{
   int number,i,j,temp=0,num1=2;  
   clrscr();
   scanf("%d",&number);
   for(i=2;i<=number;i++)  {
   for(j=2;j<i/2;j++)   {
   if(number%i==0)     {
   if(i%num1!=0)     {
   printf("%d ",i);
   num1++;
   break;
   }
   else     {
   num1++;
   }
   }
   }
   }
   getch();
   }
