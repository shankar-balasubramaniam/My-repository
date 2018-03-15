#include<stdio.h>
int main()
{
char str[100];
int i,c=0;
printf("Enter a string:");
gets(str);
for(i=0;str[i]!='\0';i++)
  {
  if(str[i]>='0'&&str[i]<='9')
    {
    c++;
    }
  }
printf("The number of numeric characters in the string is %d",c); 
return 0;
}
