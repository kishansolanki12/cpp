#include<iostream>
using namespace std;
class Bank{
    int bal;
    string name;
    public:
    static int a;
    void setdata (int bal,string name)
    {
        this->bal = bal;
        this->name = name;
        a++;
    }
    static int mem(){
        return a;
    }
    void getdata()
    {
        cout<<"your name is :"<<name<<endl;
        cout<<"your balance is :"<<bal<<endl;
     }
};
int Bank :: a;
int main()
{
    cout<<"initial,stege :"<<Bank::mem()<<endl;
    Bank b,c,a;
    b.setdata (15000,"skill");
}