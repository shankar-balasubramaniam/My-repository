#include<stdio.h>
#include<math.h>
int main()
{
int n,temp,i,armstrong=0;
printf("Enter a three digit number:");
scanf("%d",&n);
temp=n;
while(temp!=0)
 {
 i=temp%10;
 armstrong+=pow(i,3);
 temp/=10;
 }
 if(armstrong==n)
  printf("%d is an armstrong number",n);
 else
  printf("%d is not an armstrong number",n);
 return 0; 

}
