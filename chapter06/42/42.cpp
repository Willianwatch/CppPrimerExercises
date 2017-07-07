#include <iostream>
#include <string>
using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = "s");

int main()
{
    cout << (make_plural(3, "hello")) << endl;
    return 0;
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? (word + ending) : word;
}