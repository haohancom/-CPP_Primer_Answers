#ifndef CPP_PRIMER_ANSWERS_10_21_H
#define CPP_PRIMER_ANSWERS_10_21_H
#include "../header.h"
/*
 * desc :
 * 编写一个lambda，捕获一个局部int变量，并递减变量值，直至它变为0。
 * 一旦变量变为0，再调用lambda应该不再递减变量。
 * lambda应该返回一个bool值，指出捕获的变量是否为0。
 */
class Demo{
public:
    static void test() {
        int i = 5;
        auto l = [&i](){return 0 == --i;};
        while (!l()) cout << i << endl;
    }
};
#endif //CPP_PRIMER_ANSWERS_10_21_H
