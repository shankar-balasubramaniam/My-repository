#include<stdio.h>
int main()
{
int low,high,i,notprime;
printf("Enter two numbers low and high:");
scanf("%d%d",&low,&high);
for(;low<high;low++)
 {
 notprime=0;
 for(i=2;i<low;i++)
  {
  if(low%i==0)
   {notprime=1;
   break;}
  }
 if(notprime==0 && low!=1)
  printf("%d\t",low);
 }
 
  return 0;
}
