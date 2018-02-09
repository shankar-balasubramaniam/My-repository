#include<stdio.h>
int main()
{
int low,high,n,rem,armstrong;
printf("Enter two 3 digit numbers(low and high):");
scanf("%d%d",&low,&high);
for(;low<high;low++)
 {
 n=low;
 armstrong=0;
 while(n!=0)
  {
   rem=n%10;
   armstrong+=(rem*rem*rem);
   n/=10;
  }
 if(armstrong==low)
  {
  printf("%d\t",low);
  }
 }
return 0; 
}
