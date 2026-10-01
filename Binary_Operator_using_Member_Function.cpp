// Program: Binary_Operator_using_Member_Function
#include <iostream>
using namespace std;

class Demo
{
    int a;

pupublic:
    Demo(int x)
    {
        a = x;
    }

    Demo operator+(Demo d)
    {
        return Demo(a + d.a);
    }

    void display()
    {
        cout << a;
    }
};

in main()
{
    Demo d1(10), d2(20);
    Demo d3 = d1 + d2;
    d3.display();
    return 0;
}
