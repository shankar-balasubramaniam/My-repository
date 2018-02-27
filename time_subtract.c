#include<stdio.h>
int main()
{
int hrs[2],mins[2],i,time1,time2,time_dif,hrsd,minsd;
for(i=0;i<2;i++)
  {
  if(i==0)
    {
    printf("Enter time 1:\n");
    printf("hrs:");
    scanf("%d",&hrs[i]);
    printf("mins:");
    scanf("%d",&mins[i]);
    }
  else if(i==1)
    {
   printf("Enter time 2:\n");
    printf("hrs:");
    scanf("%d",&hrs[i]);
    printf("mins:");
    scanf("%d",&mins[i]);
     }
  else
    break;
  }
time1=hrs[0]*60+mins[0];
time2=hrs[1]*60+mins[1];
if(time1>time2)
  {
  time_dif=time1-time2;
  }
 else
  time_dif=time2-time1;
hrsd=time_dif/60;
minsd=time_dif%60;
printf("The difference between time1 and time2 is %d:%d",hrsd,minsd);
return 0;
}
