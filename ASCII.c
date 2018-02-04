#include<stdio.h>
void main()
{
char ch;
printf("Enter a character:");
scanf("%c",&ch);
ascii(ch);
}
void ascii(char ch)
{
int asciival=ch;
printf("The ASCII value of the character is %d",asciival);
}
