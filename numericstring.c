#include<stdio.h>
#include<string.h>
int main()
{     
char num[16];
scanf("%s", num);
int Digit = 0;
int j=0;
while(j<strlen(num) && Digit == 0)
{
  if(num[i] > 57 && num[i] < 48)
    Digit = 0;
  else
    Digit = 1;
  j++;
}
