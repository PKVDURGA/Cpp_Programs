// Program: Template_Class
#include <iostream>
using namespace std;

template <class T>
class Demo
{
    T a;

public:
    Demo(T x)
    {
        a = x;
    }

    void display()
    {
        cout << a;
    }
};

int main()
{
    Demo<int> d(10);
    d.display();
    return 0;
}
