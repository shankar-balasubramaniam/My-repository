#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,temp=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        if(n==pow(i,2))
        {
            printf("Yes,it is a power of 2");
            temp=1;
        }    
        
    }
    if(temp==0)
    printf("No, it is not a power of 2");
    return 0;
}
