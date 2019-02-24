#include <stdio.h>

int main()
{
    int num,rem,sum=0;
    scanf("%d",&num);
    for(;num>0;num/=10)
    {
        rem=num%10;
        sum+=rem*rem;
    }
    printf("%d",sum);
    return 0;
}
