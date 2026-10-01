// Program: Object_as_a_ClassMember
#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class A";
    }
};

class B
{
    A obj;

public:
    void display()
    {
        obj.show();
    }
};

int main()
{
    B b;
    b.display();
    return 0;
}
