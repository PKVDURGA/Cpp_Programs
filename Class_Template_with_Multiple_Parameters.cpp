// Program: Class_Template_with_Multiple_Parameters
#include <iostream>
using namespace std;

template <class T, class U>
class Demo
{
    T a;
    U b;

public:
    Demo(T x, U y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << a << " " << b;
    }
};

int main()
{
    Demo<int, float> d(10, 2.5);
    d.display();
    return 0;
}
