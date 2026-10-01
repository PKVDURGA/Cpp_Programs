// Program: Pure_Virtual_Function_and_Abstract_Class
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
public:
    void area()
    {
        cout << "Area of Circle = " << 3.14 * 5 * 5;
    }
};

int main()
{
    Circle c;
    c.area();
    return 0;
}
