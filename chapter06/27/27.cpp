#include <iostream>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int> il);

int main()
{
    cout << (sum({0, 1, 2, 3, 4, 5, 6, 7, 8, 9})) << endl;
    return 0;
}

int sum(initializer_list<int> il)
{
    int ret = 0;
    for(const auto &elem : il)
        ret += elem;
    return ret;
}