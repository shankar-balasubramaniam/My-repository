#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if((a>='A' && a<='Z')||(a>='a' && a<='z'))
    {
        if(a =='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
            printf("vowel");
        else
            printf("consonant");
    }   
    else
        printf("Enter a valid letter");
    return 0;
}
