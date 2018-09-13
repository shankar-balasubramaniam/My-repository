#include<stdio.h>
#include<string.h>
int main()
{
    char s[500];
    int a[26],i,j,l,f=1;
    scanf("%[^\n]s",s);
    l=strlen(s);
    for(i=0;i<26;i++)
    a[i]=0;
    for(i=0;i<l;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        s[i]+=('a'-'A');
    }
    for(i=0;i<l;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        a[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            f=0;
            break;
        }
    }
    if(f==1)
    printf("Pangram");
    else
    printf("Not a pangram");
    return 0;
}
