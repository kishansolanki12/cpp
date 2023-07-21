
#include <iostream>
using namespace std;
class cal_volume
{
public:
    float volume(float l)
    {
        cout << "Enter length: ";
        cin >> l;
        return l * l * l;
    }

    float volume(float l, float b, float h)
    {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter bidth: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;
        return l * b * h;
    }

    float volume(float i, float d, float pie, float r)
    {
        cout << "Enter Radius: ";
        cin >> r;
        return (i * pie * r * r * r) / d;
    }

    float volume(float h, float r)
    {
        cout << "Enter Radius: ";
        cin >> r;
        cout << "Enter Height: ";
        cin >> h;
        return 3.14 * r * r * h;
    }
};

int main()
{
    cal_volume v;
    cout << "Volume of cube: " << v.volume(1) << endl
         << endl;
    cout << "Volume of Rectangular cube: " << v.volume(1, 1, 1) << endl
         << endl;
    cout << "Volume of Sphere: " << v.volume(4, 3, 3.14, 1) << endl
         << endl;
    cout << "Volume of Cylinder: " << v.volume(1, 1) << endl
         << endl;
}

