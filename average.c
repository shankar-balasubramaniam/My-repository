#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,avg;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }    
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    printf("The average is %d",avg);
    return 0;
}
