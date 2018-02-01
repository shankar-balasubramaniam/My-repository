#include<stdio.h>
int main()
{
int orgint,n,revint,rem;
printf("Enter a number:");
scanf("%lld",&orgint);
n=orgint;
while(n!=0)
 {
 rem=n%10;
 revint=revint*10+rem;
 n/=10;
 }
if(orgint==revint)
 {
 printf("The number is a palindrome");
 }
else
 {
 printf("The number is not a palindrome");
 }
return 0;
}
