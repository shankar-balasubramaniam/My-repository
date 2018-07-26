//This is The Coding Area
#include<stdio.h>
int main()
{
  long int i,j,s,r,sample[10000],max[10000],min[10000],count[10000]={0};
  
  scanf("%ld%ld",&s,&r);
  for(i=0;i<s;i++)
  {
    scanf("%ld",&sample[i]);
  }
  for(j=0;j<r;j++)
  {
    scanf("%ld %ld",&min[j],&max[j]);
  }
  for(i=0;i<s;i++)
  {
    for(j=0;j<r;j++)
    {
      if(sample[i]>=min[j] && sample[i]<=max[j])
        count[j]++;
    }
  }
  for(j=0;j<r;j++)
  {
     printf("%ld\n",count[j]);
  }
  return 0;
}
