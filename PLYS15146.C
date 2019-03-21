#include<stdio.h>
int main()
{
    int a,b,flag=1,i,res;
    scanf("%d %d",&a,&b);
    if(a-b<=5)
    {
    for(i=1;i<=a;i++)
     flag*=i;
    a=flag;
    flag=1;
    for(i=1;i<=b;i++)
    flag*=i;
    b=flag;
    res=a/b;
    printf("%d",res);
    }
 return 0; 
}
