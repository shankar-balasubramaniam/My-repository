#include<stdio.h>
#include<math.h>
int main()
{
int num,power,soln;
printf("Enter a number and its power:");
scanf("%d%d",&num,&power);
soln=pow(num,power);
printf("The value of %d raised to the power %d is %lld",num,power,soln);
return 0;
}
