// Program: Binary_Operator_using_Friend_Function
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

    friend Demo operator+(Demo, Demo);

    void display()
    {
        cout << a;
    }
};

Demo operator+(Demo d1, Demo d2)
{
    return Demo(d1.a + d2.a);
}

int main()
{
    Demo d1(10), d2(20);
    Demo d3 = d1 + d2;
    d3.display();
    return 0;
}
