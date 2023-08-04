#include<iostream>
using namespace std;
class base{
    public:
    void gettable()
    {}
    void getnumber()
    {}
};
class table : public base
{
    protected:
    int n;
    public:
    void settable()
    {
        cout<<"Enter a table number :";
        cin>>n;
    }
};
class reverse : public base
{
    protected:
    int m;
    public:
    void setnumber()
    {
        cout<<"Enter a reverse number :";
        cin>>m;
    }
};
class ALL :public table ,public reverse 
{
    protected:
    int i,v;
    public:
    void distable()
    {
        for(i=1;i<=10;i++)
        {
            cout<<"\n"<<n<<" x "<<i<<" = "<<n*i<<endl;
        }
    }
    void disnumber()
    {
        for(v=m;v>0;v--)
        {
            cout<<v<<"\t";
        }
    }
};
int main()
{
    ALL x;
    //x.gettable();
    x.settable();
    x.distable();
    //x.getnumber();
    x.setnumber();
    x.disnumber();
}
