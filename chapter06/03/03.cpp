#include <iostream>

using namespace std;

int fact(int val);

int main()
{
    int val = 0;
    cin >> val;
    int result = fact(val);
    cout << result << endl;
    return 0;
}

int fact(int val)
{
    int result = 1;
    while(val)
        result *= val--;
    return result;
}