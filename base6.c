//This is The Coding Area
#include<stdio.h>
int basesix(int dec)
{
  int mod,i,six=0;
  for(i=1;dec!=0;i=i*10)
  {
  	mod=dec%6;
  	dec=dec/6;
  	six=mod*i+six;
  }        
  return six;
}
int digitsum(num)
{
  int digit,sum=0;
   while (num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }
  return sum;
}
int main()
{
  int n,a[100],i,j,count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    a[i]=basesix(a[i]);
  }
  for(i=0;i<n;i++)
  {
    a[i]=digitsum(a[i]);
  }
 
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
        count++;
    }
  }
  printf("%d",count);
  
  return 0;
}

