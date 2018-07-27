#include<stdio.h>
#define pi 3.14
int main()
{
    int dia;
    float area;
    scanf("%d",&dia);
    area=pi*dia*dia/4;
    printf("%.2f",area);
    return 0;
}
