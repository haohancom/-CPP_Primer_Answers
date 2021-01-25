#ifndef CPP_PRIMER_ANSWERS_10_37_H
#define CPP_PRIMER_ANSWERS_10_37_H
#include "../header.h"
/*
 * desc :
 * ：给定一个包含10个元素的vector，将位置3到7之间的元素按逆序拷贝到一个list中。
 */
class Demo{
public:
    static void test() {
        vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        list<int> l;
        for (auto it = vec.crend() - 4; it != vec.crend() - 9; --it) {
            l.push_back(*it);
        }
        for_each(l.begin(), l.end(), [](const int &i) {cout << i << " ";});
    }
};
#endif //CPP_PRIMER_ANSWERS_10_37_H
