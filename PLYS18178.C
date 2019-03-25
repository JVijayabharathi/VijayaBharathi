#include <stdio.h>
int main()
{
  char strng[100];
    int i,j,len,cunt;
    scanf("%[^\n]s",strng);
    
    len=strlen(strng);
    for(i=0;i<len;i++)
    {
        cunt=1;
        for(j=i+1;j<len;j++)
        {
            if((strng[i]==strng[j]) && (strng[j]>='a'&& strng[j]<='z'))
            {
                strng[j]=strng[j]-32;
                cunt++;
            }
        }
        if(cunt>1)
        {
            strng[i]=strng[i]-32;

        }
    }
    printf("%s",strng);
	
    return 0;
}
