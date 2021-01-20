#ifndef CPP_PRIMER_ANSWERS_10_2_H
#define CPP_PRIMER_ANSWERS_10_2_H
#include "../header.h"
/*
 * desc :
 * 用accumulate求一个vector<int>中的元素之和。
 */
class Demo {
public:
    static void test() {
        list<string> l;
        for (int i = 0; i < 4; ++i) {
            l.emplace_back("s");
        }
        int num = count(l.begin(), l.end(), "s");
        cout << num << endl;
    };
};
#endif //CPP_PRIMER_ANSWERS_10_2_H
