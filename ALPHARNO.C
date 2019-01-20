#include<stdio.h>
#include<conio.h>
void main()
{
char character;
clrscr();
scanf("%c",&character);
if((character>='a' && character<='z') || (character>='A'&&character<='Z'))
 printf("Alphabet");
else
 printf("No");
getch();
}