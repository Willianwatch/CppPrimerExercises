#include <iostream>

using namespace std;

void exchange(int *i, int *j);

int main()
{
    int a = 10;
    int b = 11;
    cout << "Before:" << a << " " << b << endl;
    int *i = &a;
    int *j = &b;
    exchange(i, j);
    cout << "After:" << a << " " << b << endl;
    return 0;
}

void exchange(int *i, int *j)
{
    int t = *i;
    *i = *j;
    *j = t;
}