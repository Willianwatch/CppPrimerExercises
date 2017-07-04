#include <iostream>

using namespace std;

size_t count_add(size_t val)
{
    static size_t ctr = 0;
    size_t addition = 13;
    size_t result = ++ctr + addition + val;
    return result;
}

int main()
{
    int val = 0;
    cin >> val;
    for (size_t i = 0; i != 10; ++i)
        cout << count_add(i) << endl;
    return 0;
}