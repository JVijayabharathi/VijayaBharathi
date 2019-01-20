#include<stdio.h>
#include<conio.h>
void main()
{
char character;
clrscr();
scanf("%c",&character);
if(character=='a'||character=='e'||character=='i'||character=='o'||character=='u')
 printf("Vowel");
else
 printf("Consonant");
getch();
}