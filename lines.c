#include <stdio.h>
int main() 
{
char s[10000];int count=1,i;
printf("Enter a paragraph:");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='.')
         count+=1;
    }
printf("The number of lines in the paragraph is %d",count);
return 0;
}
