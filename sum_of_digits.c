#include<stdio.h>
int main()
{
    int n,i,sum=0,t;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;n!=0;i++)
    {
        t=n%10;
        sum+=t;
        n/=10;
    }
    printf("The sum of the digits is %d",sum);
}
