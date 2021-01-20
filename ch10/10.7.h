#ifndef CPP_PRIMER_ANSWERS_10_7_H
#define CPP_PRIMER_ANSWERS_10_7_H
#include "../header.h"
/*
 * desc :
 * 下面程序是否有错误？如果有，请改正。
 */
class Demo {
public:
    static void test() {
        vector<int> vec;
        list<int> l;
        int i;
        while (cin >> i) {
            l.push_back(i);
        }
        copy(l.cbegin(), l.cend(), vec.begin());
        for (auto j : vec) {
            cout << j << endl;
        }
    };

    static void test2() {
       vector<int> vec;
       vec.reserve(10);
       fill_n(vec.begin(), 10, 0);
    };
};
#endif //CPP_PRIMER_ANSWERS_10_7_H
