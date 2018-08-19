#include<stdio.h>
int main()
{
    int a,b,i,gcd,n;
    scanf("%d %d",&a,&b);
    n=(a<b)?a:b;
    for(i=1;i<=n;i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    printf("%d",gcd);
    return 0;
}
