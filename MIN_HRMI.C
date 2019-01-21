#include<stdio.h>
#include<conio.h>
void main()
{
int minutes,hour=0;
clrscr();
scanf("%d",&minutes);
if(minutes>=60)
 {
 hour=minutes/60;
 minutes%=60;
 }
printf("%d %d",hour,minutes);
getch();
}