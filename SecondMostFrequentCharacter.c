#include<stdio.h>
#define n 256
char secondmost(char *s)
{
    int c[n]={0},i;
    for(i=0;s[i];i++)
    c[s[i]]++;
    int first=0,second=0;
    for(i=0;i<n;i++)
    {
        if(c[i]>c[first])
        {
            second=first;
            first=i;
        }
        else if(c[i]>c[second] && c[i]!=c[first])
        {
            second=i;
        }
    }
    return second;
}
int main()
{
    char s[100];
    scanf("%s",s);
    char res=secondmost(s);
    if(res!='\0')
    {
        printf("The second most frequent character is %c",res);
    }
    else
    printf("There is no second most frequent element");
    return 0;
}
