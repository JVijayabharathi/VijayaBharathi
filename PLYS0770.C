#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100]="Answer";
int i;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i+1]=='\0')
{
printf("%c",a[i]);
printf("%s",b);
break;
}
else
{
printf("%c",a[i]);
}
}
return 0;
}
