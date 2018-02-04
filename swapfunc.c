#include<stdio.h>
int main()
{
int a,b,x,y;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
printf("The values of a and b before swapping are %d and %d\n",a,b);
swap(a,b);
return 0;
}
int swap(int x,int y)
{
x=x+y;
y=x-y;
x=x-y;
printf("The values of a and b after swapping are %d and %d\n",x,y);
return 0;
}
