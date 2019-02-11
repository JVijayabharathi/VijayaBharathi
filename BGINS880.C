#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100],k,i=0,number,rem;
clrscr();
scanf("%d",&number);
for(;number>0;number/=10)
{
 rem=number%10;
 if(rem%2!=0)
   {
   arr[i]=rem;
   i++;
   }
}
for(i=i-1;i>=0;i--)
 printf("%d ",arr[i]);
getch();
}