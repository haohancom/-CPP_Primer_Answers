#ifndef CPP_PRIMER_ANSWERS_10_6_H
#define CPP_PRIMER_ANSWERS_10_6_H
#include "../header.h"
/*
 * desc :
 * 编写程序，使用fill_n将一个序列中的int值都设置为0。
 */
class Demo {
public:
    static void test() {
        list<int> l = {1, 2, 3};
        fill_n(l.begin(), l.size(), 0);
        for (auto i : l) {
            cout << i << endl;
        }
    };
};
#endif //CPP_PRIMER_ANSWERS_10_6_H
