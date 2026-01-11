#include <iostream>
using namespace std;

class Area
{
public:
    int calculateArea(int r)
    {
        return 3.14 * r * r;
    }
    int calculateArea(int l, int b)
    {
        return l * b;
    }
};

int main()
{
    Area area;
    cout << "Area of Circle: " << area.calculateArea(5) << endl;
    cout << "Area of Rectangle: " << area.calculateArea(4, 6) << endl;
    return 0;
}