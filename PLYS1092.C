#include<stdio.h>
void main()
{
    int num,bin,dec=0,b=1,rem;
    scanf("%d",&num); 
    while(num>0)
    {
        rem=num%10;
        dec=dec+rem*b;
        num=num/10;
        b=b*2;
    }
    printf("%d", dec);
}
