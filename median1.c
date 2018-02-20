#include<stdio.h>
void main()
{int j,i,n,a[n],temp;
printf("Enter the no. of values to be entered:");
scanf("%d",&n);
printf("Enter the values:");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{if(a[i]>a[j])

{temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}}
printf("The median element in the array is %d",a[(n+1)/2-1]);
}
