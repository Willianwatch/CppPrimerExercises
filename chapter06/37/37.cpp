#include <iostream>
#include <string>
using namespace std;

string array[10] = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
using arrPtr = string[10];
arrPtr& func1();
auto func2()->string(&)[10];
decltype(array) &func3();

int main()
{
    string (&p1)[10] = func1();
    string (&p2)[10] = func2();
    string (&p3)[10] = func3();
    for(auto i : p1)
        cout << i << " ";
    cout << endl;
    for(auto i : p2)
        cout << i << " ";
    cout << endl;
    for(auto i : p3)
        cout << i << " ";
    cout << endl;
    return 0;
}

arrPtr& func1()
{
    return array;
}

auto func2()->string(&)[10]
{
    return array;
}

decltype(array) &func3()
{
    return array;
}