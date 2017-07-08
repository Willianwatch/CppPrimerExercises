//#define NDEBUG

#include <iostream>
#include <vector>
using namespace std;



void print(vector<int> &vec, size_t pos);

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(vec, 0);
    return 0;
}

void print(vector<int> &vec, size_t pos)
{
    #ifndef NDEBUG
    cout << vec.size() << endl;
    #endif
    if(!(vec.empty()) && pos != vec.size())
    {
        cout << vec[pos++] << endl;
        print(vec, pos);
    }
}