#include<iostream>
using namespace std;
class factorial{
    protected:
    int n;
    public:
    void test()
    {
        cout<<"Enter N number :";
        cin>>n;
    }

};
class derived : public factorial
{
    public:
    int getdata()
    {
        int fact=1,i;
        for(i=1;i<=n;i++)
        {    
         fact=fact*i;    
        }    
        cout<<"Factorial of " <<n<<" is: "<<fact<<endl;  
    }    
};
int main()
{
    derived m;
    m.test();
    m.getdata();
}

