//This is The Coding Area
#include<stdio.h>
int main()
{
  long long int t,ini[100000],d[100000],z[100000],i,j;
  scanf("%lld",&t);
  for(i=0;i<t;i++)
  {
    scanf("%lld %lld %lld",&ini[i],&d[i],&z[i]);
  }  
  for(i=0;i<t;i++)
  {
    for(j=ini[i];;j+=d[i],z[i])
    {
        
      if(j%z[i]==0)
      { printf("%lld\n",j/z[i]);
        break;}
    }
   
  }
  return 0;
  
}
