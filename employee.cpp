#include<iostream>
using namespace std;
class employee
{
    public:
    float pf;
    double salary;
    void getdata()
    {
        cout<<"Enter employee salary:";
        cin>>salary;
    }
    void showdata()
    {
        cout<<"The net salary of the employee is "<<salary<<" and the PF is "<<pf;
    }
};
class salariedemp:public employee
{
    public:
    void sum()
    {
    pf=0.12*salary;
}};
int main()
{
    salariedemp a;
    a.sum();
    a.getdata();
    a.showdata();
    return 0;
}