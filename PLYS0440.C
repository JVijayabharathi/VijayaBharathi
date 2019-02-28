#include<stdio.h>
void main()
{
int n,i,cnt=0,j;
clrscr();
scanf("%d",&n);
for(i=0;i<=n;i++)
{
   for(j=n;j>=0;j--)
     {
         if((i*1)+(j*2)==n)
            {
               cnt=cnt+1;
            }
     }
}
printf("%d",cnt);
getch();
}
