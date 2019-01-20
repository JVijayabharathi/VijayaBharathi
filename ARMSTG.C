#include<stdio.h>
#include<conio.h>
void main()
{
int number,rem,tot=0,i,temp1,temp2,res=1,c=0;
clrscr();
scanf("%d",&number);
temp1=temp2=number;
for(;temp1>0;temp1/=10)
 c++;
for(;temp2>0;temp2/=10)
{
 rem=temp2%10;
 i=0;
 res=1;
 while(i<c)
 {
  res*=rem;
  i++;
 }
tot+=res;
}
if(number==tot)
 printf("Yes");
else
 printf("No");
getch();
}