#include<stdio.h>
#include<string.h>
void main()
{
char s[100],str[100];
int i,j,n,k=0,t[250],m,q=0,e=0;
gets(s);
gets(str);
m=strlen(str);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' '||s[i+1]=='\0')
{
for(j=k;j<=i;j++)
{
if(s[j]==str[q])
{
q++;
}
}
if(q==m)
{
e=e+1;
}
q=0;
k=i+1;
}
}
printf("%d",e);
}
