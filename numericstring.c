#include<stdio.h>
int main()
{
char num;
printf("Enter a string:");
scanf("%s",&num);    
     
if(num>=48 && num<=57)
 {
 printf("The string is numeric...");
 }
else
{
printf("The string is not numeric...");
}
return 0;
}
