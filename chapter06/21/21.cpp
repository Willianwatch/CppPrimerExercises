#include <iostream>

using namespace std;

int compare(int val, const int *ptr);

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    int val = a, *ptr = &b;
    cout << compare(val, ptr) << endl;
    return 0;
}

int compare(int val, const int *ptr)
{
    return (val > *ptr) ? val : *ptr;
}