// Program: Access Specifiers
#include <iostream>
using namespace std;

class Demo
{
private:
    int a = 10;

public:
    int b = 20;

    void display()
    {
        cout << a << " " << b;
    }
};

int main()
{
    Demo d;
    d.display();
    return 0;
}
