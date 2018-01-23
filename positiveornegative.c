#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n<1)
 {
  if(n==0)
   {
    printf("Zero");
   }
  else
   {
   printf("Negative");
   }
 }
else
 {
 printf("Positive");
 }
 return 0;
}
