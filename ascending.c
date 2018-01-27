#include<stdio.h>
int main()
{int j,i,n,a[n],temp;
printf("Enter the number of values to be entered:");
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
for(i=0;i<n;i++)
{printf("%d\n",a[i]);
}
}
