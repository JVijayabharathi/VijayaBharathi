#include <stdio.h>

int main()
{
	char strng[30];
	int i,k;
	scanf("%s %d",strng,&k);
	for(i=k-1;strng[i]!='\0';i=i+k)
		printf("%c ",strng[i]);
    return 0;
}
