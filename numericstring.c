#include<stdio.h>
#include<string.h>
int main()
{     
char num[16];
printf("Enter the string:");
scanf("%[^\n]s", num);
int Digit = 0;
int j=0;
while(j<strlen(num) && Digit == 0)
{
  if(num[j] < 57 && num[j] > 48)
    {Digit = 1;}
  else
    {Digit = 0;
    break;}
  j++;
}
if(Digit==1)
{
  printf("The string is numeric");
}
else
{
    printf("The given string is not numeric");
}
return 0;
}
