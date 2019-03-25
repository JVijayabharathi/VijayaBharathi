#include <stdio.h>

int main()
{
      char strng[100];
    int i,k=0;
    scanf("%s",strng);
    for(i=0;strng[i]!='\0';i++)
    {
        if(strng[i]>='0' && strng[i]<='9')
        {
            k=strng[i]-48;
            while(k)
            {
                printf("%c",strng[i-1]);
                k--;
            }
        }
    }
        
   return 0;
}
