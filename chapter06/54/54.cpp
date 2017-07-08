#include <iostream>
#include <vector>
using namespace std;

int sum(int, int);
int sub(int, int);
int mul(int, int);
int divi(int, int);

int main()
{
    vector<decltype(sum)*> vec{sum, sub, mul, divi};
    int a = 1, b = 2;
    for(auto &i : vec)
    {
        cout << (i(a, b)) << endl;
    }
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mul(int a, int b)
{
    return a*b;
}

int divi(int a, int b)
{
    return a/b;
}