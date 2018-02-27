#include <stdio.h>

int main(void) 
{
char s[10000];int count=0,i;
printf("Enter a sentence:");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
    {
        count+=1;
    }
for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
         count-=1;
    }
printf("The number of characters in the sentence is %d",count);
return 0;
}
