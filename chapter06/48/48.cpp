#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    string s;
    string sought = "hello";
    while(cin >> s && s != sought){};
    assert(cin);
    return 0;
}