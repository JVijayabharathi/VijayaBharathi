#include<stdio.h>
int main()
{
int num1,num2,n,i,count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
    {
        count++;
    }
}
printf("%d",count);
return 0;
}
