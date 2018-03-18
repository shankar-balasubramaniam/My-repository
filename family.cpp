#include<iostream>
using namespace std;
class parents
{
    public:
    char mothername[20];
    char fathername[20];
    void getfamily()
    {
        cout<<"Enter mother's name:";
        cin>>mothername;
        cout<<"Enter father's name:";
        cin>>fathername;
    }
    void displayfamily()
    {
        cout<<"Mother's name:"<<mothername<<endl;
        cout<<"Father's name:"<<fathername<<endl;
    }
};
class child:public parents
{
    public:
    char childname[20];
    void getchild()
    {
        cout<<"Enter child's name:";
        cin>>childname;
    }
    void displaychild()
    {
        cout<<"Child's name:"<<childname;
    }
}a;
int main()
{
   a.getfamily();
   a.getchild();
   a.displayfamily();
   a.displaychild();
   return 0;
}
