// Program: Deque_and_its_Operations
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(10);
    d.push_front(20);

    for(int x : d)
        cout << x << " ";

    d.pop_front();
    d.pop_back();

    return 0;
}
