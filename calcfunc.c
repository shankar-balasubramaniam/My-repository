#include<stdio.h>
int main()
{int a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
add(a,b);
sub(a,b);
mul(a,b);
div(a,b);
printf("The sum of %d and %d is %d\n",a,b,add(a,b));
printf("The difference between %d and %d is %d\n",a,b,sub(a,b));
printf("The product of %d and %d is %d\n",a,b,mul(a,b));
printf("The quotient of %d divided by %d is %d\n",a,b,div(a,b));
return 0;
}
int add(int x,int y)
{
int sum=x+y;
return sum;
}
int sub(int x,int y)
{
int dif=x-y;
return dif;
}
int mul(int x,int y)
{
int pdt=x*y;
return pdt;
}
int div(int x,int y)
{
int quo=x/y;
return quo;
}
