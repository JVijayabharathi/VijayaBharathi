#include<stdio.h>
#include<string.h>
int main()
{
    char strng[100][100];
    int i,j,num,flag=0,max=0,count=0,k;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
     scanf("%s",strng[i]);
    }
    for(i=0;i<num;i++)
    {
     count=strlen(strng[i]);
     if(count>max)
     {
      max=count;
     }
    }
    for(j=0;j<count;j++)
    {
     for(i=1;i<num;i++)
     {
      for(k=0;k<max;k++)
      {
       if(strng[j][k]<=strng[i][k])
       {
	flag=1;
       }
      else
      {
	flag=0;
	break;
      }
     }
    }
    if(flag==1)
    {
     printf("%s",strng[j]);
     break;
    }
   }
return 0;
}
