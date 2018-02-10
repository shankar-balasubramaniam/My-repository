#include<stdio.h>
int main()
{int arr[2][2],i,j;
int (*ptr)[2];
printf("Enter the array:");
for(i=0;i<2;i++)
   for(j=0;j<2;j++)
      scanf("%d",&arr[i][j]);     
ptr=arr;
for(i=0;i<2;i++)
   for(j=0;j<2;j++)	 
      printf("%d\n",*(*(ptr+i)+j));      
return 0;      
}
