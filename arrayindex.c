#include<stdio.h>
int main()
{
int arr[100],i,n;
print("Enter the size of array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  }
for(i=0;i<n;i++)
  {
  printf("%d\t%d\n",arr[i],i);
  }
return 0;  
}
