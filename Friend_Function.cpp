// Program: Friend_Function
#include <iostream>
using namespace std;

class Demo
{
    int a = 10;

public:
    friend void display(Demo);
};

void display(Demo d)
{
    cout << d.a;
}

int main()
{
    Demo d;
    display(d);
    return 0;
}
