#include<stdio.h>
int main()
{
    int num, rem, b = 1, bin = 0;
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 2;
        bin = bin + rem* base;
        num = num / 2;
        b = b * 10;
    }
    printf("%d",binary);
    return 0;
}
