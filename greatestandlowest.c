#include<stdio.h>
int main()
{
    int n,a[100],i,j,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The lowest number is %d\n",a[n-1]);
    printf("The highest number is %d",a[0]);
    return 0;
}
