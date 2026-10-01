// Program: Multi-level_Inheritance
#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "A" << endl;
    }
};

class B : public A
{
public:
    void showB()
    {
        cout << "B" << endl;
    }
};

class C : public B
{
public:
    void showC()
    {
        cout << "C";
    }
};

int main()
{
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}
