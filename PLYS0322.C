#include <stdio.h>

int main()
{
    int num1,num2,i,max;
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        if(num1%num2==0)
        {
            printf("%d",num2);
        }
        else
        {
            for(i=1;i<num2;i++)
            {
                if(num1%i==0 && num2%i==0)
                  max=i;
            }
        }
    }
    else
    {
       for(i=1;i<num2;i++)
            {
                if(num1%i==0 && num2%i==0)
                  max=i;
            } 
    }
    printf("%d",max);
    return 0;
}
