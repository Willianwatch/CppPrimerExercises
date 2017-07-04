#include <iostream>
#include <iterator>
using namespace std;

void print1(const int *p)
{
    cout << *p << endl;
}

void print2(const int *p, const int sz)
{
    int i = 0;
    while(i != sz)
    {
        cout << *p++ << endl;
        ++i;
    }
}

void print3(const int *b, const int *e)
{
    for(auto q = b; q != e; ++q)
        cout << *q << endl;
}

int main()
{
    int i = 0, j[2] = {0 ,1};
    print1(&i);
    print1(j);
    print2(&i, 1);
    print2(j, end(j) - begin(j));
    print3(begin(j), end(j));
    return 0;
}