#include <stdio.h>
int main()
{
    int n,r,temp=1,bin=0,c;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        if(r==1)
        {
            c++;
        }
         n/=/2;
       bin=bin+(r*temp);
      temp*=10;
      
    }
	printf("%d is",c);
    return 0;
}
