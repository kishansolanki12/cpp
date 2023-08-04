#include<iostream>
using namespace std;
class base
{
    public :
    int i;
    void display()
    {
        cout<<"\nThank You";
    }
};
class square
{
    public:
    int n;
    void getdata()
    {
        cout<<"Enter a number :";
        cin>>n;
    }
};
class derived : public square ,public base
{
    public:
    void setdata()
    {
        for(i=1;i<=n;i++)
        {
            cout<<"\n"<<i;
            cout<<"\t"<<i*i;
        }
    }
};
int main()
{
    derived x;
    x.getdata();
    x.setdata();
    x.display();
}


