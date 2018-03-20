#include<stdio.h>
int main()
{
    int n,t,rev=0,rem,digit;
    printf("Enter a number:");
    scanf("%d",&n);
    t=n;
    for(;t!=0;t/=10)
    {
        rem=t%10;
        rev=rev*10+rem;
    }
    for(;rev!=0;rev/=10)
    {
        digit=rev%10;
        printf("%d\t",digit);
    }
    return 0;
    
}
