//Abstrction

#include<iostream>
using namespace std;
class Base{
    public:
    virtual void Test()=0;
    
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
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->Test();

}