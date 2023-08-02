#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter a :";
        cin>>a;
    }

};

class Test :public Base{
    protected:
    int b;
    public:
    void setB()
    {
      cout<<"Enter b :";
        cin>>b;  
    }
};
class Drived : public Test
{
    public:
    void product()
    {
        Test :: setB();
        cout<<"product of a and b is ;"<<a*b<<endl;
    }
};

int main()
{
    Drived d;
    d.setA();
    d.product();
}