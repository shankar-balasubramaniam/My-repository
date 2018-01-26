#include<stdio.h>
int main()
{int i=1,n;
printf("Enter a number:");
scanf("%d",&n);
do
 {
 	printf("%d*%d=%d",n,i,n*i);
 	printf("\n");
 	i++;
 }
while(i<=10);
}
