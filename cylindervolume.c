#include<stdio.h>
float volume(float *,float *);
int main()
{
float r,h,vol;
vol=volume(&r,&h);
printf("Volume of cylinder of radius %f and height %f is %f",r,h,vol);
return 0;
}
float volume(float *rad,float *ht)
{
printf("Enter radius and height of cylinder:");
scanf("%2f%2f",&(*rad),&(*ht));
float vol=(3.14*(*rad)*(*rad)*(*ht));
printf("Volume is %2f\n",vol);
return vol;
}
