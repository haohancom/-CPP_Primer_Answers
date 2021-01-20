#ifndef CPP_PRIMER_ANSWERS_10_3_H
#define CPP_PRIMER_ANSWERS_10_3_H
#include "../header.h"
#include <numeric>
/*
 * desc :
 * 用accumulate求一个vector<int>中的元素之和。
 */
class Demo {
public:
    static void test() {
        vector<int> vec;
        for (int i = 0; i < 4; ++i) {
            vec.push_back(1);
        }
        int sum = accumulate(vec.begin(), vec.end(), 0);
        cout << sum << endl;
    };
};
#endif //CPP_PRIMER_ANSWERS_10_3_H
