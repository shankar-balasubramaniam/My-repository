#include<stdio.h>
#include<math.h>
int main()
{
int n1,n2,temp,i,armstrong=0;
printf("Enter 2 three digit numbers:");
scanf("%d%d",&n1,&n2);
for(;n1<n2;n1++)
{temp=n1;
while(temp!=0)
 {
 i=temp%10;
 armstrong+=pow(i,3);
 temp/=10;
 }
 if(armstrong==n1)
  printf("%d is an armstrong number",n1);
 }
 return 0; 

}
