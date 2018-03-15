#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers 'a' and 'b':");
scanf("%d%d",&a,&b);
printf("a=%d\nb=%d\n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("After swapping, the values are:\na=%d\nb=%d\n",a,b);
return 0;
}
