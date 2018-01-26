#include<stdio.h>
int main()
{
    int units;
    float elec_charge;
    float total_bill;
    printf("Enter the no. of units consumed:");
    scanf("%d",&units);/*Sequence of if else statements that compute your total electricity charges*/
    if(units<=50)
    {
        elec_charge=units*0.5;
    }
    else if(units>50 && units<=150)
    {
        elec_charge=50*0.5+(units-50)*0.75;
    }
    else if(units>150 && units<=250)
    {
        elec_charge=50*0.5+100*0.75+(units-150)*1.2;
    }
    else if(units>250)
    {
        elec_charge=50*0.5+100*0.75+100*1.2+(units-250)*1.5;
    }
    total_bill=elec_charge*1.2;
    printf("Your total electricity bill is Rs.%.2f ",total_bill);
    return 0;
}
