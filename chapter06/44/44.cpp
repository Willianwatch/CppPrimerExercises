#include <iostream>
using namespace std;

inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    cout << (isShorter("hello", "world!")) << endl;
    return 0;
}