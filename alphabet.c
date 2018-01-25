#include<stdio.h>
int main()
{
char a;
printf("Enter a character:");
scanf("%c",a);
if(a>='A' && a<='z')
 {
  printf("Alphabet");
 }
else
{
  printf("No");
}
return 0;
}
