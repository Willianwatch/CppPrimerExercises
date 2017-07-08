#include <iostream>
using namespace std;

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

int main()
{
//    f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}

void f()
{
    cout << 0 << endl;
}

void f(int)
{
    cout << 1 << endl;
}

void f(int, int)
{
    cout << 2 << endl;
}

void f(double, double)
{
    cout << 3 << endl;
}