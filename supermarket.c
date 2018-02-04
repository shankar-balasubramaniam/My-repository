#include<stdio.h>
int main()
{
    int cosmetics,stationery,spices,n1;
   int *n;
    printf("What do you want to buy?\n1.Cosmetics\n2.Stationery\n3.Spices\n");
    scanf("%d",&n1);
if(n1==1)
{
    n=&cosmetics;
    printf("Cosmetics are found in rack number %d",n);
}
else if(n1==2)
{
    n=&stationery;
    printf("Stationery are found in rack number %d",n);
}
else if(n1==3)
{
    n=&spices;
    printf("Spices are found in rack number %d",n);

}
else
    {
        printf("We don't have that product.");
    }




    return 0;

}
