#ifndef CPP_PRIMER_ANSWERS_10_15_H
#define CPP_PRIMER_ANSWERS_10_15_H
#include "../header.h"
/*
 * desc :
 *：编写一个lambda，捕获它所在函数的int，并接受一个int参数。lambda应该返回捕获的int和int参数的和。
 */
class Demo {
public:
    int i = 0;
    auto f = [i](int j) {rteurn i + j;};
};
#endif //CPP_PRIMER_ANSWERS_10_15_H
