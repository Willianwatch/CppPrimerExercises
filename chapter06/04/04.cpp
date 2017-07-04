#include <iostream>

using namespace std;

int fact(int val);

int main()
{
    int j = fact(13);
    cout << "5! is " << j << endl;
    return 0;
}

int fact(int val)
{
    int ret = 1;
    while(val > 1)
        ret *= val--;
    return ret;
}