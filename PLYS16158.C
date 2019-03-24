#include<stdio.h>
int main()
{
int a1,a3,a2=0,i=1,r,r1,d,j=1;
scanf("%d %d",&a1,&a3);
d=a1*a3;
while(d)
{
r=d%2;
d=d/2;
a2=a2+(i*r);
i=i*10;
}
while(j)
{
a2=a2/10;
r1=a2%10;
j=j*2;
if(r1==1)
{
printf("%d",j);
break;
}
}
return 0;
}
