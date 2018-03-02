#include <stdio.h>
int main(void) 
{
char s[10000];int count=1,i;
printf("Enter a line:");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
         count+=1;
    }
printf("The number of words in the line is %d",count);
return 0;
}
