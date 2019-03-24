#include <stdio.h>

int main()
{
	char strng[30];
	int i,k;
	scanf("%s %d",strng,&k);
	for(i=k-1;strng[i]!='\0';i=i+k)
		if(strng[i]>=97 && strng[i]<=122)
			strng[i]=strng[i]-32;
	printf("%s",strng);
  return 0;
	
}
