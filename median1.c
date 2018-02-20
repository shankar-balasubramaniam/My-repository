#include<stdio.h>
int main()
{
int a[100],n,i,j,temp;
printf("Enter the no. of values u wanna enter:");
scanf("%d",&n);
printf("Enter the values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
  {
  if(a[i]>a[j])
   {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
  }
 }
if(n%2==0) 
 printf("The median element is %d",a[n/2-1]);
else
 printf("The median element is %d",a[(n+1)/2-1]);
return 0; 
}
