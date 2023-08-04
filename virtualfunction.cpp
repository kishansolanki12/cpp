//function over riding
//virtual function

#include<iostream>
using namespace std;
class Base{
    public:
    virtual void Test()
    {
        cout<<"base class function called"<<endl;
    }
};

class Derived : public Base {
    public:
    void Test()
    {
        cout<<"Derived class function called"<<endl;
    }
};
int main()
{
    Base *ptr,b;
    Derived d;
    ptr = &d;
    ptr->Test();
    ptr = &b;
    ptr->Test();

}