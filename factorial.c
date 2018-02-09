#include<stdio.h>
int main()
{
int n,fact=1,i;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
 fact*=i;
 }
printf("The factorial of %d is %lld",n,fact);
return 0;
}
