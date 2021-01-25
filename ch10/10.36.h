#ifndef CPP_PRIMER_ANSWERS_10_36_H
#define CPP_PRIMER_ANSWERS_10_36_H
#include "../header.h"
/*
 * desc :
 * 使用find在一个int的list中查找最后一个值为0的元素。
 */
class Demo{
public:
    static void test() {
        list<int> l{1, 2, 3, 4, 0, 1, 0};
        auto it = find(l.crbegin(), l.crend(), 0);
        cout << distance(it, l.crend()) << endl;
    }
};

#endif //CPP_PRIMER_ANSWERS_10_36_H
