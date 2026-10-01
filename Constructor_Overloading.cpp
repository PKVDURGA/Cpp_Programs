// Program: Constructor_Overloading
#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Default Constructor" << endl;
    }

    Demo(int x)
    {
        cout << "Parameterized Constructor: " << x;
    }
};

int main()
{
    Demo d1;
    Demo d2(10);
    return 0;
}
