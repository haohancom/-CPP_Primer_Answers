#ifndef CPP_PRIMER_ANSWERS_10_34_H
#define CPP_PRIMER_ANSWERS_10_34_H
#include "../header.h"
/*
 * desc :
 * 使用reverse_iterator逆序打印一个vector。
 */
class Demo{
public:
    static void test() {
        vector<int> vec{1, 2, 3, 4};
        for (auto it = vec.crbegin(); it != vec.crend(); ++it)
            cout << *it << endl;
    }
};

#endif //CPP_PRIMER_ANSWERS_10_34_H
