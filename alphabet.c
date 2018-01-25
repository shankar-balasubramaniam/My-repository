#include<stdio.h>
int main()
{
int i;
char a;
printf("Enter a character:");
scanf("%c",a);
for(i=65;i<123;i++)
{
if(a==i)
printf("Alphabet");
}
printf("Not an alphabet");
return 0;
}
