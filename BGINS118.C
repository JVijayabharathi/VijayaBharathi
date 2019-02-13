#include <stdio.h>
#include<stdio.h>
#include<math.h>
int main(void) 
{
int n,a,d,s;
int N,D,A,S;
printf("\n enter the number of terms:");
scanf("%d",&n);
printf("\n enter the start value:");
scanf("%d",&a);
printf("\n enter the difference:");
scanf("%d",&d);
N=n-1;
D=N*d;
A=2*a;
S=A+D;
s=S*n/2;
printf("\n%d",s);
getch();
return 0;
}