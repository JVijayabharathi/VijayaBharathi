#include <stdio.h>
void  main() 
{
    int a[100],num,b[100],l,r,temp,j=0,i;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    temp=num;
    if(temp%2==0)
    {
        temp=temp/2;
    }
    else
    {
        temp=(temp-1)/2;
    }
    for(i=temp-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=num-1;i>=temp;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<num;i++)
    {
        printf("%d ",b[i]);
    }

}
