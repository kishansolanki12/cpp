#include<iostream>
using namespace std;
class area
{
    public:
    area(float i)
    {
        cout<<"areaof squre:"<<i*i<<endl
            <<endl;
    }
    area(float l,float b)
    {
        cout<<"area of rectangle :"<<l*b<<endl
            <<endl;
    }
    area(float a,float h,float b)
    {
        cout<<"area of triangel :"<<a*h*b<<endl
            <<endl;
    }
    area(float a,float pie,float r,float h)
    {

        cout<<"area of sylinder :"<<a*h*r*pie<<endl
            <<endl;
    }


    
};
    int main()
    {
        area a(5),b(8,6),c(0.5,8,9),d(2,3.14,5,6);
    }