#include<stdio.h>
int main()
{
int n,a[100],i,j,t;
printf("Enter the number of elements you want in the array:");
scanf("%d",&n);
printf("Enter the array of %d elements:",n);
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
   t=a[i];
   a[i]=a[j];
   a[j]=t;
   }
  }
  break;
 }
printf("The smallest number in the array is %d",a[0]); 
 return 0;
}
