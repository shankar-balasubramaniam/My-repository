#include<stdio.h>
int main()
{
int time,hrs,mins;
printf("Enter the time in minutes:");
scanf("%d",&time);
hrs=time/60;
mins=time%60;
printf("The time in hrs:mins format is %d:%d",hrs,mins);
return 0;
}
