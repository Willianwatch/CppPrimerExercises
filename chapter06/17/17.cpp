#include <iostream>
#include <string>

using namespace std;

bool containCapital(const string &s);
void convertLowercase(string &s);

int main()
{
    string a = "Hello";
    string b = "World";
    bool result = containCapital(a);
    cout << (result ? "Contains" : "Not contains") << endl;
    convertLowercase(b);
    cout <<  b << endl;
    return 0;
}

bool containCapital(const string &s)
{
    for(auto c : s)
    {
        if(isupper(c))
            return true;
    }
    return false;
}

void convertLowercase(string &s)
{
    for(auto &c : s)
        c = tolower(c);
}