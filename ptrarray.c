#include<stdio.h>
int main()
{int i,n,*p,a[100];
printf("Enter the no. of elements:");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
     scanf("%d",&a[i]);
p=a; 
printf("\nThe array elements are:");    
for(i=0;i<n;i++)
    {printf("%d\t",*p);
    p++;
		 }
printf("The addresses of the array variables are:");		      
for(i=0;i<n;i++)
   {printf("%u\t",p);
    p++;
			}
return 0;					 
}
