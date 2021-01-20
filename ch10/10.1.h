#ifndef CPP_PRIMER_ANSWERS_10_1_H
#define CPP_PRIMER_ANSWERS_10_1_H
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

/*
 * desc:
 * 头文件algorithm中定义了一个名为count的函数，它类似find，接受一对迭代器和一个值作为参数。
 * count返回给定值在序列中出现的次数。
 * 编写程序，读取int序列存入vector中，打印有多少个元素的值等于给定值。
 */
class Demo {
public:
    static void test() {
        vector<int> vec;
        vec.reserve(4);
        for (int i = 0; i < 4; ++i) {
            vec.push_back(1);
        }
        auto begin = vec.begin();
        auto end = vec.end();
        int num = count(begin, end, 1);
        cout << num << endl;
    };
};
#endif //CPP_PRIMER_ANSWERS_10_1_H
