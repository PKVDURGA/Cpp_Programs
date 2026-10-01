// Program: Map_and_its_Operations
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";

    for(auto x : m)
        cout << x.first << " " << x.second << endl;

    return 0;
}
