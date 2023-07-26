#include <iostream>
using namespace std;
class Rect
{
    int l, b;

public:
    void setdata(int, int);
    int getArea()
    {
        return l * b;
    }

    friend Rect operator+(Rect p, Rect q)
    {
        Rect t;

        t.l = p.l + q.l;
        t.b = p.b + q.b;

        return t;
    }

    
};

void Rect::setdata(int x, int y)
{
    l = x, b = y;
}

int main()
{
    Rect r, a, c;

    r.setdata(4, 3);
    cout << "Area of Rectangle: " << r.getArea() << endl;

    a.setdata(5, 6);
    cout << "Area of Rectangle: " << a.getArea() << endl;

    c = a + r;
    cout << "Area of Rectangle: " << c.getArea() << endl;

    
}

