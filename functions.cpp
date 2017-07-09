#include "functions.h"

int fact(int val)
{
    int ret = 1;
    while(val > 1)
        ret *= val--;
    return ret;
}

size_t count_calls()
{
    static size_t ctr = 0;
    return ++ctr;
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

size_type find_char(const string &s, char c, size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for(decltype(ret) i = 0; i != s.size(); ++i)
    {
        if(s[i] == c)
        {
            if(ret == s.size())
                ret = i;
            ++occurs;
        }
    return ret;
}

bool is_sentence(const string &s)
{
    size_type ctr = 0;
    return find_char(s, '.', ctr) == s.size() - 1 && ctr == 1;
}

void print(const char *cp)
{
    if(cp)
        while(*cp)
            cout << *cp++;
}

//int j[2] = {0, 1};
//print(begin(j), end(j));
void print(const int *beg, const int *end)
{
    while(beg != end)
        cout << *beg++ << endl;
}

//int j[] = {0, 1};
//print(j, end(j) - begin(j));
void print(const int ia[], size_t size)
{
    for(size_t i = 0; i != size; ++i)
        cout << ia[i] << endl;
}

void print(int (&arr)[10])
{
    for(auto elem : arr)
        cout << elem << endl;
}

void error_msg(initializer_list<string> il)
{
    for(auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}

void error_msg(ErrCode e, initializer_list<string> il)
{
    cout << e.msg() << ": ";
    for(const auto &elem : il)
        cout << elem << " ";
    cout << endl;
}

void swap(int &v1, int &v2)
{
    if(v1 == v2)
        return;
    int tmp = v2;
    v2 = v1;
    v1 = temp;
}

bool str_subrange(const string &str1, const string &str2)
{
    if(str1.size() == str2.size())
        return str1 == str2;
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
    decltype(size) i = 0
    for(; i != size; ++i)
    {
        if(str1[i] != str2[i])
            return false;
    }
    return true;
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

const string &shorterString(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

string &shorterString(string &s1, string &s2)
{
    auto &r = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));
    return const_cast<string&>(r);
}

string make_plural(size_t ctr, const string &word, const string &ending = 's')
{
    return (ctr > 1) ? word + ending : word;
}
