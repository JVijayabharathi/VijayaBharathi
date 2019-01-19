#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,d,result=0,temp;
clrscr();
scanf("%d %d %d",&n,&a,&d);
temp=n;
for(i=1;i<=temp;i++)
{
result+=n+a+d;
n--;
a--;
d--;

}
printf("%d",result);
getch();
}