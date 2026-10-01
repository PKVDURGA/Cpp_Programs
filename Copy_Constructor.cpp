// Program: Copy Constructor
#include <iostream>
using namespace std;

class Demo
{
    int a;

public:
    Demo(int x)
    {
        a = x;
    }

    Demo(Demo &d)
    {
        a = d.a;
    }

    void display()
    {
        cout << a;
    }
};

int main()
{
    Demo d1(10);
    Demo d2(d1);
    d2.display();
    return 0;
}
