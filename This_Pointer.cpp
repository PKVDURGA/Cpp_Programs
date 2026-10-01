// Program: This_Pointer
#include <iostream>
using namespace std;

class Demo
{
    int a;

public:
    void set(int a)
    {
        this->a = a;
    }

    void display()
    {
        cout << a;
    }
};

int main()
{
    Demo d;
    d.set(10);
    d.display();
    return 0;
}
