#include <iostream>
using namespace std;

string (&arrPtr())[10];
string array[10] = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

int main()
{
    string (&p)[10] = arrPtr();
    for(auto i : p)
        cout << i << endl;
    return 0;
}

string (&arrPtr())[10]
{
    return array;
}