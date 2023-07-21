#include <iostream>
using namespace std;
class cal_area
{

public:
    float area(float l)
    {
        return l * l;
    }

    float area(float l, float b)
    {
        return l * b;
    }

    float area(float a, float h, float b)
    {
        return a * b * h;
    }

    float area(float a, float pie, float r, float l)
    {
        return a * pie * r * l;
    }
};

int main()
{
    cal_area a;

    cout << "Area of Square: " << a.area(4) << endl
         << endl;
    cout << "Area of Rectangle: " << a.area(5, 9) << endl
         << endl;
    cout << "Area of Triangle: " << a.area(0.5, 6, 7) << endl
         << endl;
    cout << "Area of Sylinder: " << a.area(2, 3.14, 10, 5) << endl
         << endl;
}