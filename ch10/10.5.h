#ifndef CPP_PRIMER_ANSWERS_10_5_H
#define CPP_PRIMER_ANSWERS_10_5_H
#include "../header.h"
/*
 * desc :
 * 在本节对名册（roster）调用equal的例子中，
 * 如果两个名册中保存的都是C风格字符串而不是string，会发生什么？
 */
class Demo {
public:
    static void test() {
        char c1[] = {'t', 'e', 's', 't'};
        char c2[] = {'t', 'e', 's', 't'};
        bool res = equal(c1, c1 + strlen(c1), c2);
        cout << res << endl;
    };
};
#endif //CPP_PRIMER_ANSWERS_10_5_H
