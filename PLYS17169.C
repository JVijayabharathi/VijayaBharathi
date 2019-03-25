#include<stdio.h>
int main()
{
char strng[100];
int i,j,c;
scanf("%s",strng);
for(i=0;strng[i]!='\0';i++)
{
c=0;
if(strng[i]!='$')
{
for(j=i+1;strng[j]!='\0';j++)
{
if(strng[i]==strng[j])
{
c++;
strng[j]='$';
}
}
printf("%c%d",strng[i],c+1);
}
}
return 0;
}
