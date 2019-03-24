#include <stdio.h>

int main()
{
    int num1,num2,rem,rem1,pow=1,pow1=1,pro,rem2,c=0,bin=0,bin1=0;
    scanf("%d %d",&num1,&num2);
    while(num1)
    {
        rem=num1%2;
        bin=bin+rem*pow;
        num1=num1/2;
        pow=pow*10;
    }
    while(num2)
    {
        rem1=num2%2;
        bin1=bin1+rem1*pow1;
        num2=num2/2;
        pow1=pow1*10;
    }
    pro=bin*bin1;
while(pro)
{
    rem2=pro%10;
    pro=pro/10;
    if(rem2==1)
       c++;
    
}
printf("%d",c);
    return 0;
   
}
