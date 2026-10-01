// Program: Pointer_to_a_Class
#include <iostream>
using namespace std;

class Demo
{
public:
    void show()
    {
        cout << "Hello";
    }
};

int main()
{
    Demo d;
    Demo *ptr = &d;

    ptr->show();

    return 0;
}
