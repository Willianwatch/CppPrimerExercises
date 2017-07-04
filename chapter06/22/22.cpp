#include <iostream>

using namespace std;

void exchange(int* &ptr1, int* &ptr2);

int main()
{
    int a = 0, b =1;
    int *ptr1 = &a, *ptr2 = &b;
    exchange(ptr1, ptr2);
    cout << *ptr1 << " " << *ptr2 << endl;
    return 0;
}

void exchange(int* &ptr1, int* &ptr2)
{
    int *t = ptr1;
    ptr1 = ptr2;
    ptr2 = t;
}