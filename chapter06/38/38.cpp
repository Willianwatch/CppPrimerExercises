#include <iostream>
using namespace std;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
auto arrPtr(int i)->int(&)[5];

int main()
{
    int val = 0;
    cin >> val;
    int (&p)[5] = arrPtr(val);
    for(auto i : p)
        cout << i << " ";
    cout << endl;
    return 0;
}

auto arrPtr(int i)->int(&)[5]
{
    return (i % 2) ? odd : even;
}