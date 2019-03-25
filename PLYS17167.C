#include<stdio.h>
int main()
{
char str[100];
int i,l=0,c=0;
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
l++;
}
for(i=2;i<l;i++)
{
if(l%i==0)
{
c=1;
}
}
if(c==1)
{
printf("no");
}
else 
{
printf("yes");
}return 0;
}
