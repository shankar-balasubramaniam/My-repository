#include<stdio.h>
void main()
{
	long long int a[100],n,i;
	a[0]=1;
	a[1]=1;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The Fibonacci series upto %d terms is:\n",n);
	printf("%lld\t%lld\t",a[0],a[1]);
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		printf("%lld\t",a[i]);
	}
	
}
