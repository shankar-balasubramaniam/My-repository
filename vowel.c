#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if((a>='A' && a<='Z')||(a>='a' && a<='z'))
    {
        if(a=='a'||'A'||'e'||'E'||'i'||'I'||'o'||'O'||'u'||'U')
            printf("vowel");
        else
            printf("consonant");
    }   
    else
        printf("Enter a valid letter.");
    return 0;
}
