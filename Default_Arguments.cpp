// Program: Illustrate the Use of Default Arguments

#include <iostream>
using namespace std;

void display(int a = 10, int b = 20)
{
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
}

int main()
{
    display();
    display(50);
    display(50, 60);

    return 0;
}
