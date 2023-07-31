#include<iostream>
using namespace std;
class Hello{
    int n;
    public:
    void setN()
    {
        cout<<"Enter n :";
        cin>>n;
    }
    void getN()
    {
        cout<<"Value of n is :"<<n<<endl;
    }
};
int main()
{
    Hello a[5];
    int i;
    for(i=0;i<2;i++)
    {
        a[i].setN();
    }
    for(i=0;i<2;i++)
    {
        a[i].getN();
    }
}
