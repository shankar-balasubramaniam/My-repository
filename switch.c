#include<stdio.h>
int main()
{
int a,b;
char op;
printf("Enter an expression:");
scanf("%d%c%d",&a,&op,&b);
switch(op)
{
case '+':
 printf("%d+%d=%d",a,b,a+b);
 break;
case '-':
 printf("%d-%d=%d",a,b,a-b);
 break;
case '*':
 printf("%d*%d=%d",a,b,a*b);
 break;
case '/':
 printf("%d/%d=%d",a,b,a/b);
 break;
default:
 printf("Invalid operator:(");
}
return 0;
}
