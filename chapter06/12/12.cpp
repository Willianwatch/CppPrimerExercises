#include <iostream>

using namespace std;

void exchange(int &i, int &j);

int main()
{
    int a = 10, b = 11;
    exchange(a, b) ;
    cout << a << " " << b << endl;
    return 0;
}

void exchange(int &i, int &j)
{
    int t = i;
    i = j;
    j = t;
}