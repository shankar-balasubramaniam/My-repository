#include<stdio.h>
int main()
{
	int n,a[100],i,j,t;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{if(a[i]<a[j])
			{t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
printf("The second greatest no.is %d",a[1]);
return 0;	
}
