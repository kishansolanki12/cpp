
#include <iostream>
using namespace std;
class volume
{
public:
    volume(float l)
    {
       
       
        cout << "Volume of cube: " << l * l * l << endl
             << endl;
    }

    volume(float l, float b, float h)
    {
        
        cout << "Volume of Rectangular cube: " << l * b * h << endl
             << endl;
    }

    volume(float i, float d, float pie, float r)
    {
        
        cout << "Volume of Sphere: " << (4 * pie * r * r * r) / 3 << endl
             << endl;
    }

    volume(float h, float r)
    {
        
        cout << "Volume of Cylinder: " << 3.14 * r * r * h << endl
             << endl;
    }
};

int main()
{
    volume a(9), b(12,11, 10), c(4, 3, 3.14, 1), d(3, 6);
}

