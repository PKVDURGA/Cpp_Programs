// Program: Constructor_and_Destructor
#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor" << endl;
    }

    ~Demo()
    {
        cout << "Destructor";
    }
};

int main()
{
    Demo d;
    return 0;
}
