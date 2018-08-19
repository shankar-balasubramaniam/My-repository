#include<stdio.h>
struct Time
{
    int sec;
    int min;
    int hr;
}start,end,diff;
int main()
{
    scanf("%d %d %d",&start.hr,&start.min,&start.sec);
    scanf("%d %d %d",&end.hr,&end.min,&end.sec);
    if(end.sec<start.sec)
    {
        --end.min;
        end.sec+=60;
    }
    diff.sec=end.sec-start.sec;
    if(end.min<start.min)
    {
        --end.hr;
        end.min+=60;
    }
    diff.min=end.min-start.min;
    if(end.hr<start.hr)
    {
        end.hr+=24;
    }
    diff.hr=end.hr-start.hr;
    printf("%d:%d:%d",diff.hr,diff.min,diff.sec);
    return 0;
}
