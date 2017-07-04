#include <iostream>

using namespace std;

unsigned abs(int val);

int main()
{
    int val = 0;
    cin >> val;
    unsigned result = abs(val);
    cout << "The absolute value of " << val << " is " << result << "." << endl;
    return 0;
}

unsigned abs(int val)
{
    return val<0 ? -val : val;
}