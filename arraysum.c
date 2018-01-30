#include<stdio.h>
int main()
{
int N,K,sum=0;
int array[N];
printf("Enter the size of array:");
scanf("%d",&N);
printf("For how many elements of the array do you want to find the sum?");
scanf("%d",&K);
printf("Enter the array:");
for(i=0;i<N;i++)
 {
 scanf("%d",array[i]);
 }
for(i=0;i<K;i++)
 {
 sum+=array[i];
 }
printf("The sum of  first %d elements in the array is %d",K,sum);
return 0;
}
