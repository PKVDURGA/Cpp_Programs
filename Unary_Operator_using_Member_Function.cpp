// Program: Unary_Operator_using_Member_Function
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

    void operator-()
    {
        a = -a;
    }

    void display()
    {
        cout << a;
    }
};

int main()
{
    Demo d(10);
    -d;
    d.display();
    return 0;
}
