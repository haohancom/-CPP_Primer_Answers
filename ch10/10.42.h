#ifndef CPP_PRIMER_ANSWERS_10_42_H
#define CPP_PRIMER_ANSWERS_10_42_H
#include "../header.h"
/*
 * desc :
 * 使用list代替vector重新实现10.2.3节（第343页）中的去除重复单词的程序。
 */
class Demo{
public:
    static void elimDups(list<string> &l)
    {
        l.sort();
        l.unique();
    }

    static void test() {
        list<string> l = { "a", "b", "d", "c", "a"};
        elimDups(l);
        for_each(l.begin(), l.end(), [](const string &s){cout << s << endl;});
    }
};
#endif //CPP_PRIMER_ANSWERS_10_42_H
