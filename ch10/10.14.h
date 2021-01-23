#ifndef CPP_PRIMER_ANSWERS_10_14_H
#define CPP_PRIMER_ANSWERS_10_14_H
#include "../header.h"
/*
 * desc :
 * ：编写一个lambda，接受两个int，返回它们的和。
 */
class Demo {
public:
    static void test() {
        auto f = [](int i, int j) { return i + j; };
    };
};

#endif //CPP_PRIMER_ANSWERS_10_14_H
