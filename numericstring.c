#include<stdio.h>
int main()
{
char num[100];int n,numeric=1;
printf("Enter the number of characters in your string...");
scanf("%d",&n);
printf("Enter a string:");
     for(i=0;i<n;i++)
     {
     scanf("%c",&num[i]);
     }
     for(i=0;i<n;i++)
     {
     if(num[i]>=48 && num[i]<=57)
      {
      numeric=1;
      }
     else
      {
      numeric=0;
      break;
      }
     }
if(numeric==1)
 {
 printf("The string is numeric...");
 }
else
{
printf("The string is not numeric...");
}
return 0;
}
