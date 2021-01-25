#ifndef CPP_PRIMER_ANSWERS_10_35_H
#define CPP_PRIMER_ANSWERS_10_35_H
#include "../header.h"
/*
 * desc :
 * 使用普通迭代器逆序打印一个vector。
 */
class Demo{
public:
    static void test() {
        vector<int> vec{1, 2, 3, 4};
        for (auto it = vec.end() - 1; it != vec.begin() - 1; --it)
            cout << *it << endl;
    }
};

#endif //CPP_PRIMER_ANSWERS_10_35_H
