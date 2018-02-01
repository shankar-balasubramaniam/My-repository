#include<stdio.h>
int main()
{
int n,i=0;
printf("Enter a number:");
scanf("%lld",&n);
while(n!=0)
 {
 n/=10;
 i+=1;
 }
printf("There are %d digits in the given number",i);
return 0;
}
