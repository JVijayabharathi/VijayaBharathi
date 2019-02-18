#include <stdio.h>
#include<conio.h>
void main() 
{
int num,i,res,a[20],t=0;
char rn[10];
clrscr();
scanf("%s",rn);
num=strlen(rn);
for(i=0;i<num;i++)
{
if(rn[i]=='I')
a[i]=1;
else if(rn[i]=='V')
a[i]=5;
else if(rn[i]=='X')
a[i]=10;
else if(rn[i]=='L')
a[i]=50;
else if(rn[i]=='C')
a[i]=100;
else if(rn[i]=='D')
a[i]=500;
else
printf("\nINVALID");
}
for(i=0;i<num;i+=2)
{
if(a[i]<a[i+1])
{
res=a[i+1]-a[i];
}
else 
{
res=a[i]+a[i+1];
}
t=res+t;
}
printf("\n%d",t);
getch();
}