#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>=1 && n<=10)
    {
        printf("yes");
    }
    else
    printf("No");
    return 0;
}
