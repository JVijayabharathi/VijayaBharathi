#include <stdio.h>
int main()
{
    int a,b,c,d,i=0,rem,s=0,temp=1,r;
    scanf("%d%d",&a,&b);
    c=a|b;
    while(c)
    {
        rem=c%2;
        s=s+(rem*temp);
        temp=temp*10;
        c=c/2;
        if(rem==1)
        i++;
        
        
        
    }
    printf("%d",i);

    return 0;
}
