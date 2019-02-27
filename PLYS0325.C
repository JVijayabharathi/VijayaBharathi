#include<stdio.h>
#include<string.h>
void main()
{char strng[100][200],a[100];
int i,n,j;
    printf("enter the no of strings");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",strng[i]);
    }
     for(i=0;i<n;i++)
     {
          for(j=0;j<n;j++)
          {
         if(strlen(strng[i])<strlen(strng[j]))
          {
              strcpy(a,stngr[i]);
              strcpy(str[i],strng[j]);
              strcpy(strng[j],a);
          }
     }
     }
     for(i=0;i<n;i++)
     {
         printf("%s\n",strng[i]);
     }
}
