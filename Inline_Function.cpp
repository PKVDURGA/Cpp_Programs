// Program: Inline Function
#include <iostream>
using namespace std;

inline int square(int n)
{
    return n * n;
}

int main()
{
    cout << square(5);
    return 0;
}
