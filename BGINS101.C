#include<stdio.h>
#include<conio.h>
void main()
{
int l,w,h,tsa,vol;
clrscr();
scanf("%d %d %d",&l,&w,&h);
tsa=(2*((l*w)+(w*h)+(l*h)));
vol=l*w*h;
printf("%d %d",tsa,vol);
getch();
}