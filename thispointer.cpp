
#include<iostream>
using namespace std;
class bank{
    public:
    int bal;
    string name;
    void setdata(int bal ,string name)
    {
        this ->bal =bal;
        this ->name =name;
    }
    void getdata()
    {
        cout<<"Your name is :"<<name<<endl;
        cout<<"Your balance is :"<<bal<<endl;
    }
};
int main()
{
    bank b;
    b.setdata(1500,"skill");
    b.getdata();
}




