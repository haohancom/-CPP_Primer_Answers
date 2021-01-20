#ifndef CPP_PRIMER_ANSWERS_10_4_H
#define CPP_PRIMER_ANSWERS_10_4_H
#include "../header.h"
#include <numeric>
class Demo {
public:
    static void test() {
        vector<double> vec;
        vec.reserve(4);
        for (int i = 0; i < 4; ++i) {
            vec.push_back(1.9);
        }
        int sum = accumulate(vec.begin(), vec.end(), 0);
        cout << sum << endl;
    };
};
#endif //CPP_PRIMER_ANSWERS_10_4_H
