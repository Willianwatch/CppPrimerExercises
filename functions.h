#include <string>
#include <iostream>
#include <initializer_list>

using namespace std;

int fact(int val);

size_t count_calls();

bool isShorter(const string &s1, const string &s2);

size_type find_char(const string &s, char c, size_type &occurs);

bool is_sentence(const string &s);

void print(const char *p);

void print(const int *beg, const int *end);

void print(const int ia[], size_t size);

void print(int (&arr)[10]);

void error_msg(initializer_list<string> il);

void error_msg(ErrCode e, initializer_list<string> il);

void swap(int &v1, int &v2);

bool str_subrange(const string &str1, const string &str2);

string make_plural(size_t ctr, const string &word, const string ending);

const string &shorterString(const string &s1, const string &s2);