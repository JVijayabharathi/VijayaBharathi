#include<stdio.h>
int main()
{
 char s1[100],s2[100];
 int len,k,i,j,l,cnt=0;
 scanf("%[^\n]s",s1);
 scanf("%s",s2);
 len=strlen(s2);
 for(i=0;s1[i]!='\0';i++)
 {
  if(s1[i]==s2[0])
  {
   l=i;
   cnt=0;
   for(j=0;j<len;j++)
   {
    if(s1[l]==s2[j])
    {
     l++;
     cnt++;
    }
   }
  }
   if(cnt==len)
   {
    k=l-(len+1);
    printf("%d %d\n",l,k);
    for(j=l;s1[j]!='\0';j++)
    {
     s1[k]=s1[j];
     k++;
    }
    s1[k]='\0';
    break;
   }
 }
 printf("%s",s1);
 return 0;
}
