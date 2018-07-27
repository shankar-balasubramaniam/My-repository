#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if((a>='A' && a<='Z')||(a>='a' && a<='z'))
        printf("Alphabet");
    else
        printf("Not an alphabet");
    return 0;
}
