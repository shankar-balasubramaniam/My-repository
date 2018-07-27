#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    i=n;
    while(i>=0)
    {
        i-=2;
        if(i==0 || i==1)
            break;
    }
    if(i==1)
        printf("Odd");
    else
        printf("Even");
    return 0;
}
