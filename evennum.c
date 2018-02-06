#include<stdio.h>
int main()
{
int n1,n2,i;
printf("Enter upper limit and lower limit:");
scanf("%d%d",&n1,&n2);
for(i=n1+1;i<n2;i++)
 {
 if(i%2==0)
  {
  printf("%d\t",i);
  }
 }
return 0; 
}
