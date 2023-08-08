// template 
#include<iostream>
using namespace std;
template<class X>
void display (X aa)
{
    cout<<"display template is :"<<aa<<endl;
}

template <class X, class Y>
void add (X a, Y b)
{
    cout<<"addition is :"<<a+b<<endl;
}
int main()
{
    display(15);
    display(15.5);
    display('A');

    add(2,4);
    add('A',5.7);
}