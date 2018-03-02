#include <stdio.h>
int main() 
{
char s[10000];int count=0,i;
printf("Enter a line:");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
         count+=1;
    }
printf("The number of spaces in the line is %d",count);
return 0;
}
