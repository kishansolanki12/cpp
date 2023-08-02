#include<iostream>
using namespace std;
class square{
    int a;
    protected:
    int b;
    public:
    void test()
    {}
};
class derived : public square
{
    public:
    int getdata()
    {
        int i,n;
        cout<<"Enter value n :";
        cin>>n;

        for(i=0; i<=n; i++)
        {
            cout<<"\n"<<i;
            cout<<"\t"<<i*i;
        }
    }
};   
int main()
{
    derived m;
    m.test();
    m.getdata();
}

